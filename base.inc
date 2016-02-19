#!/bin/bash

PROJECT_KEY=$1

if [ -z $PROJECT_KEY ] ;
then
  echo "Usage: $0 project-key"
  exit 1
fi

SETTINGS=${PROJECT_KEY}.rc

if [ ! -f $SETTINGS ] ; 
then
  echo "Missing project settings file $SETTINGS"
  echo "Maybe you supplied the incorrect project key"
  exit 1
fi

source $SETTINGS

if [ ! -d $PROJECT_BASEDIR ] ;
then
  echo "Missing project base directory $PROJECT_BASEDIR"
  echo "Maybe there is an invalid path supplied in $SETTINGS"
  exit 1
fi
