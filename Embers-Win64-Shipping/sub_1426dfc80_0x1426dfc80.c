// 函数: sub_1426dfc80
// 地址: 0x1426dfc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_140638cc0(arg2, 0)

int64_t* rcx_1 = *(arg1 + 0x38)

if (rcx_1 == 0 || rcx_1[5].d != 1)
    int64_t rax
    rax.b = 0
    return rax

if (*(arg1 + 0x34) == 3)
    sub_1426da930(rcx_1, arg2)
    int64_t rax_4
    rax_4.b = arg2[1].d s> 0
    return rax_4

void var_18
int64_t* rax_1 = sub_1426df780(rcx_1, &var_18, 0)
int64_t rdi_1 = sx.q(arg2[1].d)
int32_t rcx_2 = (rdi_1 + 1).d
arg2[1].d = rcx_2

if (rcx_2 s> *(arg2 + 0xc))
    sub_140638a00(arg2)

int64_t rax_2 = *arg2
int64_t rdx_2 = rdi_1 * 3
*(rax_2 + (rdx_2 << 2)) = *rax_1
*(rax_2 + (rdx_2 << 2) + 8) = rax_1[1].d
int32_t rax_3
rax_3.b = arg2[1].d s> 0
return rax_3
