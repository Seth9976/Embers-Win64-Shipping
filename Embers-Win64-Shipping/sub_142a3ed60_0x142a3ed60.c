// 函数: sub_142a3ed60
// 地址: 0x142a3ed60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
void* r9_1

if (arg2 u<= 0x400)
    r9_1 = arg1[((arg2 + 7) u>> 3) + 1]
    result = *(r9_1 + 8)

if (arg2 u> 0x400 || result == 0)
    result = sub_142a3fd80(arg1, arg2)
else
    int64_t rax_3 = *result
    *(r9_1 + 0x10) += 1
    *(r9_1 + 8) = rax_3

if (arg3 != 0 && result != 0)
    void* r8_1 = result & 0xffffffffffc00000
    uint64_t rax_6 = ((result - r8_1) u>> (*(r8_1 + 0x58)).b) * 0xa
    
    if (*(r8_1 + (rax_6 << 3) + 0x77) != 0)
        *result = 0
        return result
    
    memset(result, 0, *(r8_1 + (rax_6 << 3) + 0xa0))

return result
