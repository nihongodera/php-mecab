<?php
/**
 * @generate-function-entries
 * @generate-class-entries
 * @generate-legacy-arginfo 70000
 */

namespace MeCab;

/** @var string
 *  @cvalue (char *)mecab_version()
 *  PHP<8 has constness problem
 */
const VERSION = UNKNOWN;

/**
 * @var int
 * @cvalue MECAB_NOR_NODE
 */
const NOR_NODE = UNKNOWN;

/**
 * @var int
 * @cvalue MECAB_UNK_NODE
 */
const UNK_NODE = UNKNOWN;

/**
 * @var int
 * @cvalue MECAB_BOS_NODE
 */
const BOS_NODE = UNKNOWN;

/**
 * @var int
 * @cvalue MECAB_EOS_NODE
 */
const EOS_NODE = UNKNOWN;

/**
 * @var int
 * @cvalue MECAB_SYS_DIC
 */
const SYS_DIC = UNKNOWN;

/**
 * @var int
 * @cvalue MECAB_USR_DIC
 */
const USR_DIC = UNKNOWN;

/**
 * @var int
 * @cvalue MECAB_UNK_DIC
 */
const UNK_DIC = UNKNOWN;

function version(): string {}
function split(string $str, string $dicdir = null, string $userdic = null): array|false {}

class Tagger
{
    public function __construct(array $arg = null) {}
    public function parseToNode(string $str, int $len = 0): Node|false {}
    public function nextNode(): Node|false {}
    public function formatNode(Node $node): string {}
    public function dictionaryInfo(): ?array {}
    public function getAllMorphs(): bool {}
    public function setAllMorphs(int $all_morphs): void {}
    public function getLatticeLevel(): int {}
    public function setLatticeLevel(int $level): void {}
    public function getPartial(): bool {}
    public function setPartial(bool $partial): void {}
    public function getTheta(): float {}
    public function setTheta(float $theta): void {}
    public function next(int $olen = 0): string {}
    public function parse(string $str, int $len = 0, int $olen = 0): string {}
    public function parseNBest(int $n, string $str, int $len = 0, int $olen = 0): string {}
    public function parseNBestInit(string $str, int $len = 0): bool {}
    /** @implementation-alias MeCab\Tagger::parse */
    public function parseToString(string $str, int $len = 0, int $olen = 0): string {}
}

class Node implements \IteratorAggregate
{
    private function __construct() {}
    public function __get(string $name): mixed {}
    public function __isset(string $name): bool {}
    /** @tentative-return-type */
    public function __toString(): string {}
    /** @tentative-return-type */
    public function getIterator(): NodeIterator {}
    public function getBNext(): ?Node {}
    public function getENext(): ?Node {}
    public function getNext(): ?Node {}
    public function getPrev(): ?Node {}
    public function getAlpha(): float {}
    public function getBeta(): float {}
    public function getCharType(): int {}
    public function getCost(): int {}
    public function getFeature(): string {}
    public function getId(): int {}
    public function getLcAttr(): int {}
    public function getLength(): int {}
    public function getPosId(): int {}
    public function getProb(): float {}
    public function getRLength(): int {}
    public function getRcAttr(): int {}
    public function getStat(): int {}
    public function getSurface(): string {}
    public function getWCost(): int {}
    public function isBest(): bool {}
    public function setTraverse(int $traverse): void {}
    public function toArray(bool $dump_all = false): array {}
    /**
     * @tentative-return-type
     * @implementation-alias MeCab\Node::__toString
     */
    public function toString(): string {}
    public function getLPath(): ?Path {}
    public function getRPath(): ?Path {}
}

class NodeIterator implements \Iterator
{
    private function __construct() {}
    /** @tentative-return-type */
    public function current(): Node {}
    /** @tentative-return-type */
    public function key(): ?int {}
    /** @tentative-return-type */
    public function next(): void {}
    /** @tentative-return-type */
    public function rewind(): void {}
    /** @tentative-return-type */
    public function valid(): bool {}
}

class Path
{
    private function __construct() {}
    public function __get(string $name): mixed {}
    public function __isset(string $name): bool {}
    public function getLNode(): ?Node {}
    public function getRNode(): ?Node {}
    public function getLNext(): ?Path {}
    public function getRNext(): ?Path {}
    public function getCost(): int {}
    public function getProb(): float {}
}
