// 函数: sub_1423f0990
// 地址: 0x1423f0990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r9_1

for (int64_t* i = *(arg1 + 0xc38); i != &i[sx.q(*(arg1 + 0xc40))]; i = &i[1])
    r9_1 = *i
    
    if (*(r9_1 + 0x278) == arg2)
        goto label_1423f09d7

r9_1 = sub_1423d6f90(data_143f5b298, 0)
label_1423f09d7:
*(r9_1 + 0x1e8) &= 0xfffffffe
uint32_t result = zx.d(arg3)
*(r9_1 + 0x1e8) |= result
return result
