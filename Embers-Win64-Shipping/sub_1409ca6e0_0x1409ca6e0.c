// 函数: sub_1409ca6e0
// 地址: 0x1409ca6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg3)

if (rbp.d s>= arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405a4d70(arg1)
        rax_1 = arg1[1].d
    
    int32_t i = arg1[5].d
    
    if (i s< rax_1)
        do
            int64_t rdx_1 = sx.q(i) << 3
            *(rdx_1 + *arg1) = 0xffffffff
            *(rdx_1 + *arg1 + 4) = arg1[6].d
            
            if (*(arg1 + 0x34) != 0)
                *(*arg1 + (sx.q(arg1[6].d) << 3)) = i
            
            arg1[6].d = i
            int32_t rdi_1 = arg1[5].d
            sub_1405a4980(&arg1[2], rdi_1 + 1)
            arg1[5].d += 1
            void* rcx_3 = &arg1[2]
            void* rax_6 = arg1[4]
            
            if (rax_6 != 0)
                rcx_3 = rax_6
            
            int32_t rax_7 = rdi_1
            
            if (rdi_1 s< 0)
                rax_7 = rdi_1 + 0x1f
            
            void* rdx_3 = rcx_3 + (sx.q(rax_7 s>> 5) << 2)
            *rdx_3 &= not.d(1 << (rdi_1.b & 0x1f))
            *(arg1 + 0x34) += 1
            i = arg1[5].d
        while (i s< arg1[1].d)

*(arg1 + 0x34) -= 1
int64_t r9 = rbp << 3
int64_t rdx_4 = *arg1
int64_t r8 = sx.q(*(r9 + rdx_4))
int64_t rcx_5 = sx.q(*(r9 + rdx_4 + 4))

if (r8.d == 0xffffffff)
    arg1[6].d = rcx_5.d
else
    *(rdx_4 + (r8 << 3) + 4) = rcx_5.d
    rdx_4 = *arg1

if (rcx_5.d != 0xffffffff)
    *(rdx_4 + (rcx_5 << 3)) = r8.d

void* rax_12 = arg1[4]
void* r8_1 = &arg1[2]
*arg2 = rbp.d

if (rax_12 != 0)
    r8_1 = rax_12

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rbp.d)
void* rdx_7 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*rdx_7 |= 1 << (rbp.b & 0x1f)
*(arg2 + 8) = *arg1 + r9
return arg2
