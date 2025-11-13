// 函数: sub_1423ff840
// 地址: 0x1423ff840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1

if (sub_140b5d160(arg1, arg2) s< 0)
    int32_t rax
    rax.b = 1
    return rax

if (*rdi != *arg2)
    int64_t rax_1
    rax_1.b = 0
    return rax_1

uint64_t rax_2

if (sub_140b5d160(&rdi[2], &arg2[4]).d s< 0)
    rax_2.b = 1
else if (rdi[2] != *(arg2 + 0x10))
    rax_2.b = 0
else
    float zmm0_1 = rdi[1].d
    float temp0_1 = arg2[2]
    zmm0_1 - temp0_1
    rax_2.b = zmm0_1 < temp0_1

return rax_2
