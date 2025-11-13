// 函数: sub_1420a3090
// 地址: 0x1420a3090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t rax = (rdi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1408888d0(arg1)

int32_t* rax_3 = (rdi << 7) + *arg1
*(rax_3 + 0x68) = 0
*(rax_3 + 0x70) = 0
*rax_3 = arg2
rax_3[1] = 5
int64_t* result = sub_140627690(&rax_3[0x1a], arg3)
*(arg1 + 0x14) += 1
return result
