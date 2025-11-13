// 函数: sub_1429e6300
// 地址: 0x1429e6300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t arg_18
int64_t r9 = sub_142a24f90(arg1[0xd9], &arg_18, &arg_8)
int32_t rax = arg_18
int32_t rdi = arg_8
arg1[0x114f] = rax
int32_t i = rdi - rax

if (rdi != rax)
    do
        i -= 1
        int32_t rax_1
        rax_1, r9 = sub_1429e0b80(arg2, arg3)
        
        if (rax_1 == 0)
            break
        
        arg1[0x114f] += 1
    while (i != 0)

if (arg1[0x114f] s> 6)
    sub_1429da010(arg1, 7, "Invalid number of tile columns", r9)

int32_t result = sub_1429e0b80(arg2, arg3)
arg1[0x1150] = result

if (result != 0)
    result = sub_1429e0b80(arg2, arg3)
    arg1[0x1150] += result

return result
