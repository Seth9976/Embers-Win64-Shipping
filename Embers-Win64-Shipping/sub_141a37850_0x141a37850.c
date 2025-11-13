// 函数: sub_141a37850
// 地址: 0x141a37850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg2[1].d

if (rcx == 0 && arg3[1].d == rcx)
    return 

int32_t rax_1 = arg1[3].d
int64_t rbp_1 = sx.q(arg1[1].d)
int32_t r14_1 = arg3[1].d
int32_t rax_2 = (rbp_1 + 1).d
int32_t var_14_1 = rcx
arg1[1].d = rax_2

if (rax_2 s> *(arg1 + 0xc))
    sub_14083a7e0(arg1)

int64_t rax_3 = *arg1
int64_t rcx_3 = rbp_1 * 3
*(rax_3 + (rcx_3 << 2)) = rax_1.q
*(rax_3 + (rcx_3 << 2) + 8) = r14_1
int64_t rbp_2 = sx.q(arg2[1].d)

if (rbp_2.d != 0)
    int32_t rcx_4 = arg1[3].d
    int32_t rdx_1 = rcx_4 + rbp_2.d
    
    if (rdx_1 s> *(arg1 + 0x1c))
        sub_14083ad30(&arg1[2], rdx_1)
        rcx_4 = arg1[3].d
    
    memcpy(arg1[2] + sx.q(rcx_4) * 0xc, *arg2, (rbp_2 * 0xc).d)
    arg1[3].d += rbp_2.d

int64_t rbp_3 = sx.q(arg3[1].d)

if (rbp_3.d != 0)
    int32_t rcx_8 = arg1[3].d
    int32_t rdx_3 = rcx_8 + rbp_3.d
    
    if (rdx_3 s> *(arg1 + 0x1c))
        sub_14083ad30(&arg1[2], rdx_3)
        rcx_8 = arg1[3].d
    
    memcpy(arg1[2] + sx.q(rcx_8) * 0xc, *arg3, (rbp_3 * 0xc).d)
    arg1[3].d += rbp_3.d

arg2[1].d = 0

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_14083ad30(arg2, 0)

int32_t rax = *(arg3 + 0xc)
arg3[1].d = 0

if (rax s< 0 && rax != 0)
    sub_14083ad30(arg3, 0)
