// 函数: sub_14108d3b0
// 地址: 0x14108d3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = *arg1
void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &rcx_2[3]

if (rax u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &rcx_2[3]

*(arg2 + 0x30) = rax
int64_t* rax_1 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_1 = rcx_2
*(arg2 + 8) = &rcx_2[1]
rcx_2[1] = 0
*(rcx_2 + 0x14) = zmm6.d
*rcx_2 = &data_142f115c8
rcx_2[2].d = 0
return &data_142f115c8
