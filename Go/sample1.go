package main

import (
    "bufio"
    "fmt"
    "html/template"
    "io"
    "log"
    "os"
    "strings"
    "unicode"
    "unicode/utf8"
)

const tpl = `<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>{{.Title}}</title>
</head>
<body>
    <h1>{{.Heading}}</h1>
    {{range .Paragraphs}}
        <p>{{.}}</p>
    {{end}}
    <ul>
        {{range .List}}
            <li>{{.}}</li>
        {{end}}
    </ul>
</body>
</html>
`

type Page struct {
    Title     string
    Heading   string
    Paragraphs []string
    List      []string
}

func main() {
    page := Page{
        Title:     "My Page",
        Heading:   "Welcome to My Page",
        Paragraphs: []string{
            "This is the first paragraph.",
            "This is the second paragraph.",
        },
        List:      []string{
            "Item 1",
            "Item 2",
            "Item 3",
        },
    }

    file, err := os.Create("index.html")
    if err != nil {
        log.Fatal(err)
    }
    defer file.Close()

    writer := bufio.NewWriter(file)
    defer writer.Flush()

    t, err := template.New("webpage").Parse(tpl)
    if err != nil {
        log.Fatal(err)
    }

    err = t.Execute(writer, page)
    if err != nil {
        log.Fatal(err)
    }

    fmt.Println("HTML template generated successfully!")
}
