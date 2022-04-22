#!/bin/sh
groups $FT_USER | tr ' ' ',' | sed -z 's/\n//'
