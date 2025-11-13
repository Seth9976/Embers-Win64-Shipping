// 函数: sub_1428e4770
// 地址: 0x1428e4770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)

if (arg1 == 0)
    return 0

int32_t rax_2 = arg1[1] & 0xfffffeff
int64_t result_1

if (rax_2 == 0xa && *arg1 s<= 4 && sub_1428e4a60(&result_1, arg1, rax_2) != 0)
    int64_t result = result_1
    
    if (0x80000000 + result u<= 0xffffffff)
        return result

return 0xffffffff
