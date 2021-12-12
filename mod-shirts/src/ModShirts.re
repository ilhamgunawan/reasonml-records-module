module Size = {
  type t = 
    | XSmall(int)
    | Small
    | Medium
    | Large
    | XLarge(int);
  
  let toString = (size: t): string => {
    switch (size) {
      | XSmall(n) => String.make(n, 'X') ++ "S"
      | Small => "S"
      | Medium => "M"
      | Large => "L"
      | XLarge(n) => String.make(n, 'X') ++ "L"
    };
  };

  let fromString = (str: string): option(t) => {
    switch (Js.String.toUpperCase(str)) {
      | "S" => Some(Small)
      | "M" => Some(Medium)
      | "L" => Some(Large)
      | s when Js.Re.test(s, [%re "/^X+S$/"]) => Some(XSmall(String.length(s) - 1))
      | s when Js.Re.test(s, [%re "/^X+L$/"]) => Some(XLarge(String.length(s) - 1))
      | _ => None
    };
  };
};

module Sleeve = {
  type t = 
    | Short
    | Long
    | XLong;

  let toString = (cuff: t): string => {
    switch (cuff) {
      | Short => "short"
      | Long => "long"
      | XLong => "extralong"
    };
  };

  let fromString = (str: string): option(t) => {
    switch (Js.String.toLowerCase(str)) {
      | "short" => Some(Short)
      | "long" => Some(Long)
      | "extralong" => Some(XLong)
      | _ => None
    };
  };
}

module Color = {
  type t = 
    | White
    | Blue
    | Red
    | Green
    | Brown;

  let toString = (color: t): string => {
    switch (color) {
      | White => "white"
      | Blue => "blue"
      | Red => "red"
      | Green => "green"
      | Brown => "brown"
    };
  };

  let fromString = (str: string): option(t) => {
    switch (Js.String.toLowerCase(str)) {
      | "white" => Some(White)
      | "blue" => Some(Blue)
      | "red" => Some(Red)
      | "green" => Some(Green)
      | "brown" => Some(Brown)
      | _ => None
    };
  };
};

module Pattern = {
  type t = 
    | Solid
    | Pinstripe
    | Check;

  let toString = (color: t): string => {
    switch (color) {
      | Solid => "solid"
      | Pinstripe => "pinstripe"
      | Check => "check"
    };
  };

  let fromString = (str: string): option(t) => {
    switch (Js.String.toLowerCase(str)) {
      | "solid" => Some(Solid)
      | "pinstripe" => Some(Pinstripe)
      | "check" => Some(Check)
      | _ => None
    };
  };
};

module Cuff = {
  type t = 
    | Button
    | French
    | NoCuff;

  let toString = (color: t): string => {
    switch (color) {
      | Button => "button"
      | French => "french"
      | NoCuff => "nocuff"
    };
  };

  let fromString = (str: string): option(t) => {
    switch (Js.String.toLowerCase(str)) {
      | "button" => Some(Button)
      | "french" => Some(French)
      | "nocuff" => Some(NoCuff)
      | _ => None
    };
  };
};

module Collar = {
  type t = 
    | Button
    | Straight
    | Spread;

  let toString = (color: t): string => {
    switch (color) {
      | Button => "button"
      | Straight => "straight"
      | Spread => "spread"
    };
  };

  let fromString = (str: string): option(t) => {
    switch (Js.String.toLowerCase(str)) {
      | "button" => Some(Button)
      | "straight" => Some(Straight)
      | "spread" => Some(Spread)
      | _ => None
    };
  };
};

type order = {
  quantity: int,
  size: Size.t,
  sleeve: Sleeve.t,
  color: Color.t,
  pattern: Pattern.t,
  cuff: Cuff.t,
  collar: Collar.t,
};
