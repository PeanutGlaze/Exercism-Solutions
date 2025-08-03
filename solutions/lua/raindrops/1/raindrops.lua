return function(n)

  local res = ""
  local check = {false, false, false}
  if n % 3 == 0 then
    res = (res .. "Pling")
    check[1] = true
  end
  if n % 5 == 0 then
    res = (res .. "Plang")
    check[2] = true
  end
  if n % 7 == 0 then
    res = (res .. "Plong")
    check[3] = true
  end

  if check[1] == false and check[2] == false and check[3] == false then
    res = tostring(n)
  end

  return res
  
end
