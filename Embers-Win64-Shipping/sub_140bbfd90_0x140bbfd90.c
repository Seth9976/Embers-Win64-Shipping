// 函数: sub_140bbfd90
// 地址: 0x140bbfd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
arg1[6].d = arg3
__builtin_memset(arg1, 0, 0x30)
*(arg1 + 0x34) = 0
*(arg1 + 0x3c) = 0
*arg1 = *(arg2 + 0xb8)
arg1[1] = *(arg2 + 0x90)
arg1[2] = *(arg2 + 0x80)
int64_t rax_4

if (data_14399fa4c == 0)
    rax_4 = 0
else
    *(arg1 + 0x34) = *(arg2 + 0x7c)
    rax_4 = *(arg2 + 0x88)

uint64_t r8 = zx.q(arg1[6].d)
arg1[3] = rax_4
int64_t rax_5 = *(arg2 + 0xb8)
uint64_t rcx = r8 * 5
int32_t rbx = *(rax_5 + (rcx << 3) + 0x20)
arg1[7].d = rbx
int64_t rdx

if (*(rax_5 + (rcx << 3) + 0x20) s< 0)
    rdx = 0
else
    rdx = *(arg2 + 0xc8) + (sx.q(*(rax_5 + (rcx << 3) + 0x24)) u>> 2 << 2)

arg1[4] = rdx
int32_t i = 0

if (rbx s> 0)
    int64_t rbx_1 = 0
    
    do
        void* r8_1 = *arg1 + sx.q(*(arg1[4] + rbx_1)) * 0x28
        int32_t j = 0
        
        if (*(r8_1 + 0x1c) s> 0)
            do
                int64_t rcx_6 = arg1[1]
                int64_t rdx_3 = sx.q(*(r8_1 + 0x18) + j) * 2
                *(rcx_6 + (rdx_3 << 3) + 8) += 1
                j += 1
            while (j s< *(r8_1 + 0x1c))
        
        i += 1
        rbx_1 += 4
    while (i s< arg1[7].d)
    
    r8 = zx.q(arg1[6].d)

uint64_t rcx_7 = zx.q(r8.d) * 5
int64_t rax_10 = *arg1
void* rdx_4 = rax_10 + (rcx_7 << 3)

if (*(rax_10 + (rcx_7 << 3) + 0x1c) s> 0)
    do
        int64_t rax_13 = arg1[1]
        int64_t rcx_9 = sx.q(*(rdx_4 + 0x18) + i_1) * 2
        *(rax_13 + (rcx_9 << 3) + 8) += 1
        i_1 += 1
    while (i_1 s< *(rdx_4 + 0x1c))

return arg1
