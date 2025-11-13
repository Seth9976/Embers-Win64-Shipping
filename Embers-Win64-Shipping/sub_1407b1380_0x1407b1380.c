// 函数: sub_1407b1380
// 地址: 0x1407b1380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0xffffffff
arg2[1] = 0
int64_t* rax = j_sub_140a82f30(0x28)

if (rax == 0)
    rax = nullptr
else
    *rax = 0

*(arg2 + 0x18) = rax
*(arg2 + 0x10) = rax
arg2[8] = 0xffffffff
*(arg2 + 0x28) = 0
*(arg2 + 0x30) = 0
*(arg2 + 0x38) = data_14396f0d8
arg2[0x10].w = data_14396f0e0
int16_t result
result.b = 1
*(arg2 + 0x42) = 0xffffffff
*(arg2 + 0x48) = 0
*(arg2 + 0x50) = 0
return result
