// 函数: sub_141b4b260
// 地址: 0x141b4b260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** r8_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &r8_2[3]

if (rax u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    r8_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &r8_2[3]

*(arg2 + 0x30) = rax
int64_t* rax_1 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_1 = r8_2
*(arg2 + 8) = &r8_2[1]
int64_t rcx_1 = *arg1
r8_2[1] = 0
*r8_2 = &data_14306cc10
r8_2[2] = rcx_1
return &data_14306cc10
