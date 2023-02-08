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

# How to rename a folder on GitHub.

To rename a folder on GitHub, you need to follow these steps:

1. Go to the GitHub repository that contains the folder you want to rename.
1. Navigate to the folder you want to rename.
1. Click on the "Settings" tab in the repository.
1. Scroll down to the "GitHub Pages" section.
1. In the "Source" drop-down, select the branch that contains the folder you want to rename.
1. Click the pencil icon to edit the name of the folder.
1. Type in the new name for the folder and press "Enter".
1. Commit the change by clicking the "Commit changes" button.

Note: You'll need to clone the repository to your local machine, make the changes there, and then push the changes back to GitHub. The process of renaming a folder in a Git repository involves creating a new folder with the desired name, moving the files from the old folder to the new folder, and then deleting the old folder.

