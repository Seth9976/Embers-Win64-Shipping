// 函数: sub_1420b9980
// 地址: 0x1420b9980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1

if (arg2 == 0)
    return nullptr

void* rax = sub_1423de540(data_143f5b298, arg1, 0)

if (rax == 0)
    rdi = nullptr
else if ((*(rax + 0x11c) & 2) == 0 && sub_14243ade0(rax) != 0)
    rdi = nullptr

void* result = sub_142121d50(arg2, rdi, arg3)

if (rdi != 0)
    return result

*(result + 8) |= 0x40
return result
