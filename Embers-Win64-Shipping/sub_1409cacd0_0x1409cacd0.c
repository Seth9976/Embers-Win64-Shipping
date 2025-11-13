// 函数: sub_1409cacd0
// 地址: 0x1409cacd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg3)

if (rbp.d s>= arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
        rax_1 = arg1[1].d
    
    int32_t i = arg1[5].d
    
    if (i s< rax_1)
        do
            int64_t rdx_2 = sx.q(i) * 2
            *(*arg1 + (rdx_2 << 3)) = 0xffffffff
            *(*arg1 + (rdx_2 << 3) + 4) = arg1[6].d
            
            if (*(arg1 + 0x34) != 0)
                *(*arg1 + sx.q(arg1[6].d) * 0x10) = i
            
            arg1[6].d = i
            int32_t rdi_1 = arg1[5].d
            sub_1405a4980(&arg1[2], rdi_1 + 1)
            arg1[5].d += 1
            void* rcx_4 = &arg1[2]
            void* rax_5 = arg1[4]
            
            if (rax_5 != 0)
                rcx_4 = rax_5
            
            int32_t rax_6 = rdi_1
            
            if (rdi_1 s< 0)
                rax_6 = rdi_1 + 0x1f
            
            void* rdx_4 = rcx_4 + (sx.q(rax_6 s>> 5) << 2)
            *rdx_4 &= not.d(1 << (rdi_1.b & 0x1f))
            *(arg1 + 0x34) += 1
            i = arg1[5].d
        while (i s< arg1[1].d)

*(arg1 + 0x34) -= 1
int64_t rdx_5 = *arg1
int64_t r9_1 = rbp << 4
int64_t r8 = sx.q(*(r9_1 + rdx_5))
int64_t rcx_6 = sx.q(*(r9_1 + rdx_5 + 4))

if (r8.d == 0xffffffff)
    arg1[6].d = rcx_6.d
else
    *(rdx_5 + r8 * 0x10 + 4) = rcx_6.d
    rdx_5 = *arg1

if (rcx_6.d != 0xffffffff)
    *(rdx_5 + rcx_6 * 0x10) = r8.d

void* rax_15 = arg1[4]
void* r8_1 = &arg1[2]
*arg2 = rbp.d

if (rax_15 != 0)
    r8_1 = rax_15

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rbp.d)
void* rdx_8 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
*(arg2 + 8) = *arg1 + r9_1
return arg2
