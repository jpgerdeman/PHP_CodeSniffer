<?php
abstract class VisibiltyTest
{
    abstract public static function abstr();

    function minimal();

    final private function fin(){}

    static final private function wrong(){}
}