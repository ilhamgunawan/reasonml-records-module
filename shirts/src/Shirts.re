type size =
  | XSmall(int)
  | Small
  | Medium
  | Large
  | XLarge(int);

type sleeve = 
  | Short
  | Long
  | XLong;

type color = 
  | White
  | Blue
  | Red
  | Green
  | Brown;

type pattern =
  | Solid
  | Pinstripe
  | Check;

type cuff =
  | Button
  | French
  | NoCuff;

type collar =
  | Button
  | Straight
  | Spread;

type order = {
  quantity: int,
  size: size,
  sleeve: sleeve,
  color: color,
  pattern: pattern,
  cuff: cuff,
  collar: collar,
};

let myOrder = {
  quantity: 2,
  size: Medium,
  sleeve: Short,
  color: Brown,
  pattern: Solid,
  cuff: NoCuff,
  collar: Straight,
};

Js.log2("Size: ", myOrder.size);