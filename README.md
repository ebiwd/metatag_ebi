# metatag_ebi module
Drupal 7 metatag submodule to support EBI content lifecycles, in this format: http://ebiwd.github.io/EBI-Framework/#metacopy

## Tags

### Content lifecycle management
These will be programatically accessed to help ensure content stays current and relevant.
```
<meta name="ebi:owner" content="John Doe"> <!-- Who should be contacted about changes --> 
<meta name="ebi:review-cycle" content="30"> <!-- In days, how often should the content be reviewed --> 
<meta name="ebi:last-review" content="2015-12-20"> <!-- The last time the content was reviewed --> 
<meta name="ebi:expiry" content="2016-01-20"> <!-- When this content is no longer relevant -->
```

### Visual tags
These tags allow you to modify the look/feel of the local navigation bar on the page.
```
<meta name="ebi:localmasthead-color" content="#000">
<meta name="ebi:localmasthead-image" content="http://i.stack.imgur.com/7Wzpq.jpg">
```
