
def interpolation_search(arr, lo, hi, x):
    if lo <= hi and x >= arr[lo] and x <= arr[hi]:
        # Вычисляем позицию с помощью интерполяционной формулы
        pos = lo + (((hi - lo) * (x - arr[lo])) // (arr[hi] - arr[lo]))

        # Состояние, если цель найдена
        if arr[pos] == x:
            return pos

        # Если x больше, x находится в правом подмассиве
        if arr[pos] < x:
            return interpolation_search(arr, pos + 1, hi, x)

        # Если x меньше, x находится в левом подмассиве
        if arr[pos] > x:
            return interpolation_search(arr, lo, pos - 1, x)

    return -1  # Элемент не найден


# Пример использования
if __name__ == "__main__":
    arr = [10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47]
    x = 18

    result = interpolation_search(arr, 0, len(arr) - 1, x)

    if result != -1:
        print(f"Элемент найден на позиции: {result}")
    else:
        print("Элемент не найден")
