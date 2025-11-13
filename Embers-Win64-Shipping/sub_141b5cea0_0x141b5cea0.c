// 函数: sub_141b5cea0
// 地址: 0x141b5cea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** r9_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &r9_2[4]

if (rax u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    r9_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &r9_2[4]

*(arg1 + 0x30) = rax
int64_t* rax_1 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_1 = r9_2
*(arg1 + 8) = &r9_2[1]
r9_2[1] = 0
r9_2[2] = arg3
r9_2[3] = arg2
*r9_2 = &data_14306c6f8
return &data_14306c6f8
