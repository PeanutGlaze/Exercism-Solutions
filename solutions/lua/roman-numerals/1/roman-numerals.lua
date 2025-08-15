return {
  to_roman = function(n)
    res = ""

    while n - 1000 >= 0 do
      res = res .. "M"
      n = n - 1000
    end
    if n - 900 >= 0 then
      res = res .. "CM"
      n = n - 900
    end
    while n - 500 >= 0 do
      res = res .. "D"
      n = n - 500
    end
    if n - 400 >= 0 then
      res = res .. "CD"
      n = n - 400
    end
    while n - 100 >= 0 do
      res = res .. "C"
      n = n - 100
    end
    if n - 90 >= 0 then
      res = res .. "XC"
      n = n - 90
    end
    while n - 50 >= 0 do
      res = res .. "L"
      n = n - 50
    end
    if n - 40 >= 0 then
      res = res .. "XL"
      n = n - 40
    end
    while n - 10 >= 0 do
      res = res .. "X"
      n = n - 10
    end
    if n - 9 >= 0 then
      res = res .. "IX"
      n = n - 9
    end
    if n - 5 >= 0 then
      res = res .. "V"
      n = n - 5
    end
    if n - 4 >= 0 then
      res = res .. "IV"
      n = n - 5
    end
    while n - 1 >= 0 do
      res = res .. "I"
      n = n - 1
    end

    return res
  end
}
