<?php

namespace Rector\SOLID\Tests\Rector\Variable\MoveVariableDeclarationNearReferenceRector\Fixture;

class SkipReassign
{
    function myMethod()
    {
        $var = 1;
        if (mktime() === false) {
            $var = 2;
        }
    }
}

?>
