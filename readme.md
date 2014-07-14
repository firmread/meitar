#Meitar code / print
graphical openFrameworks code / print project for 2014 edition of  [Meitar](meitar.net)[(fb)](https://www.facebook.com/meitar.ensemble)  

## goal 
* music inspired generative graphic for prints
* get FFT generated graphic > export to PDF


## inspiration
* [Rune Madsen's talk on print vs code](https://vimeo.com/61113159)
* [his printing code class at ITP](http://printingcode.runemadsen.com)
* [processing code examples from the class](https://github.com/runemadsen/printing-code)
* [lapsing sine wave / arpeggio / nice animation](https://vimeo.com/90065607)

## experimentation notes

* screen interaction seems like crashing while export series of PDF (r button mode)  but it return back to normal when press r again. The file output draw stuffs that happens while the screen lag just fine. 
* one snapshot mode only makes a small lag in the app otherwise everything works well
* PDF expiration doesn't play well with ofCircleResolution,, it only do beautiful complete circle
* some sound directed drawing (yellow shapes) in twomoons don't get export to PDF

