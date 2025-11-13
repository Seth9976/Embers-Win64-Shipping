// 函数: sub_1419a8100
// 地址: 0x1419a8100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rdx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &rdx_2[2]

if (rax u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x18)
    rdx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &rdx_2[2]

*(arg1 + 0x30) = rax
int64_t* rax_1 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_1 = rdx_2
*(arg1 + 8) = &rdx_2[1]
rdx_2[1] = 0
*rdx_2 = &data_143009c30
return &data_143009c30
