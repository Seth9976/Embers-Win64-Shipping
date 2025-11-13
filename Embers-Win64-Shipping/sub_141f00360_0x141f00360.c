// 函数: sub_141f00360
// 地址: 0x141f00360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx

if (*(arg1 + 0x178) s> 0)
    rdx = *(*(arg1 + 0x170) + (sx.q(*(arg1 + 0x178)) << 3) - 8)

uint64_t rax

if (*(arg1 + 0x178) s<= 0 || rdx == 0)
    rax.b = 1
else
    rax.b = *(rdx + 0x350) u>> 2
    rax.b &= 1

if (((*(arg1 + 0x209) & 1) == 0 && rax.b != 0) || data_143a2d74c == 0)
    rax.b = 0
    return rax

void* rbx = *(arg1 + 0xa0)

if (rbx == 0 || *(rbx + 0x130) != arg1 || data_143a2d750 == 0)
    rax.b = 0
    return rax

int32_t rdx_2 = arg3[1].d + arg2[0x1b].d

if (rdx_2 s> *(arg2 + 0x1b4))
    sub_141dd6010(arg2, rdx_2)

int64_t arg_8
sub_140d3a3a0(&arg_8, rbx)
uint128_t* i = *arg3
int64_t rbx_1 = arg_8

for (void* r14_2 = sx.q(arg3[1].d) * 0x8c + i; i != r14_2; i += 0x8c)
    int64_t rax_2 = *(i + 0x6c)
    
    if (rbx_1.d != rax_2.d || rbx_1:4.d != (rax_2 u>> 0x20).d)
        int64_t rbp_1 = sx.q(arg2[0x1b].d)
        int32_t rax_3 = (rbp_1 + 1).d
        arg2[0x1b].d = rax_3
        
        if (rax_3 s> *(arg2 + 0x1b4))
            sub_141f229d0(arg2, rbp_1.d)
        
        int128_t* rax_4 = *(arg2 + 0x1a8)
        int128_t* rdx_5 = arg2
        
        if (rax_4 != 0)
            rdx_5 = rax_4
        
        int64_t rcx_3 = rbp_1 * 0x8c
        *(rdx_5 + rcx_3) = *i
        *(rdx_5 + rcx_3 + 0x10) = i[1]
        *(rdx_5 + rcx_3 + 0x20) = i[2]
        *(rdx_5 + rcx_3 + 0x30) = i[3]
        *(rdx_5 + rcx_3 + 0x40) = i[4]
        *(rdx_5 + rcx_3 + 0x50) = i[5]
        *(rdx_5 + rcx_3 + 0x60) = i[6]
        *(rdx_5 + rcx_3 + 0x70) = i[7]
        *(rdx_5 + rcx_3 + 0x80) = i[8].q
        *(rdx_5 + rcx_3 + 0x88) = *(i + 0x88)

int64_t rax_1
rax_1.b = 1
return rax_1
