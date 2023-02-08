In JavaScript, you can make HTTP requests using the XMLHttpRequest object or by using the more modern fetch() method.

Here's an example of making a GET request with XMLHttpRequest:

```js
var xhr = new XMLHttpRequest();
xhr.open('GET', 'https://api.example.com/data', true);
xhr.onreadystatechange = function () {
  if (xhr.readyState === XMLHttpRequest.DONE && xhr.status === 200) {
    console.log(xhr.responseText);
  }
};
xhr.send();
```

And here's an example of making a GET request with fetch():

```js
fetch('https://api.example.com/data')
  .then(response => response.text())
  .then(data => console.log(data))
  .catch(error => console.error(error));
```

You can also use fetch() to make POST requests by passing an options object as the second argument with a method property set to 'POST':

```js
fetch('https://api.example.com/data', {
  method: 'POST',
  body: JSON.stringify({ key: 'value' }),
  headers: {
    'Content-Type': 'application/json'
  }
})
  .then(response => response.text())
  .then(data => console.log(data))
  .catch(error => console.error(error));
```

