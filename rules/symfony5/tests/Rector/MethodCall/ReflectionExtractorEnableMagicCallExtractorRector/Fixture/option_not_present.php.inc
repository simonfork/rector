<?php

namespace Rector\Symfony5\Tests\Rector\MethodCall\ReflectionExtractorEnableMagicCallExtractorRector\Fixture;

use Symfony\Component\PropertyInfo\Extractor\ReflectionExtractor;

class OptionNotPresent
{
    public function run()
    {
        $reflectionExtractor = new ReflectionExtractor();
        $readInfo = $reflectionExtractor->getReadInfo(Dummy::class, 'bar');
    }
}

?>
