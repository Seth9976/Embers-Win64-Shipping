// 函数: sub_14199f640
// 地址: 0x14199f640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** r8_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rbp = *(*(arg1 + 0x40) + 0x10)
void* rax_1 = &r8_2[5]

if (rax_1 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    r8_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_1 = &r8_2[5]

*(arg2 + 0x30) = rax_1
int64_t* rax_2 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_2 = r8_2
*(arg2 + 8) = &r8_2[1]
r8_2[1] = 0
r8_2[2] = rbp
*r8_2 = &data_142f115d8
*(r8_2 + 0x18) = *(arg1 + 0x48)
return &data_142f115d8
