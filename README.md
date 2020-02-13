# Potential Sniffle

A small repo where I'm testing a few ideas out.

## Flagpole

I want a standard way for me to handle flags.

### Goals

- Small
- Fast
- Can handle all properly escaped arguments to flags
- Extensible

## Cards

I want to be able to make an arbitrary list of cards as a TSV file,
and populate a set and deck list.

### Goals

- Load data into cards cleanly.
- Cards shouldn't change once loaded.
- Cards can be grouped into Hands (which are small and unordered),
  Spreads (which are small and ordered), and Decks (which are big and
  ordered).

## Dice

I want to be able to create a "die" with an arbitrary number of sides,
that contain or manipulate information, and "roll" it multiple times.

### Goals

- Dice have sides that do not change once they are made.
- Dice have a position that at least says which side is active, but
  also might have other important info.
- Dice can easily be rolled multiple times or in groups.
