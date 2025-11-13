// 函数: sub_141a55140
// 地址: 0x141a55140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg1[1].d
int32_t rdi = 0
int64_t r10 = *arg2
int64_t rbx = *arg1
int32_t i = i_2

if (i_2 s> 0)
    int64_t arg_8 = r10
    
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        int32_t rax_4 = i_1 + rdi
        uint64_t rax_7 = *(rbx + sx.q(rax_4) * 0x10)
        uint64_t arg_10 = rax_7
        char rcx_4
        char rdx_1
        void* r8
        
        if (r10.b != 2)
            if (rax_7.b != 2)
                uint32_t rcx_6 = (r10 u>> 0x20).d
                uint32_t rdx_3 = (rax_7 u>> 0x20).d
                
                if (rcx_6 s< rdx_3)
                    rcx_4 = r10.b
                    r8 = &arg_8:4
                    rdx_1 = rax_7.b
                    goto label_141a55211
                
                if (rcx_6 s> rdx_3 || r10.b != 1)
                    rcx_4 = rax_7.b
                    goto label_141a55204
                
                rcx_4 = r10.b
                r8 = &arg_8:4
                goto label_141a55209
            
            rcx_4 = rax_7.b
        label_141a55204:
            r8 = &arg_10:4
        label_141a55209:
            
            if (rcx_4 != r10.b || (rcx_4 != 2 && *r8 != (r10 u>> 0x20).d) ||
                    (r10.b == rax_7.b && (r10.b == 2 || (r10 u>> 0x20).d == (rax_7 u>> 0x20).d)))
                rax_7.b = 0
            else
                rax_7.b = 1
        else
            rcx_4 = r10.b
            r8 = &arg_8:4
            rdx_1 = rax_7.b
        label_141a55211:
            
            if ((rcx_4 == 2 || *r8 == (r10 u>> 0x20).d)
                    && (r10.b != rdx_1 || (r10.b != 2 && (r10 u>> 0x20).d != (rax_7 u>> 0x20).d)))
                rax_7.b = 1
            else
                rax_7.b = 0
        
        if (rax_7.b == 0)
            rdi = rax_4 + rcx_1
    while (i s> 0)
    
    if (rdi s>= 0 && rdi s< i_2)
        goto label_141a55266
else if (rdi s< i_2)
label_141a55266:
    
    if (sub_141a5adc0((sx.q(rdi) << 4) + rbx, arg2) != 0)
        return 0xffffffff

if (rdi - 1 s>= 0 && rdi - 1 s< i_2 && sub_141a5adc0((sx.q(rdi - 1) << 4) + rbx, arg2) != 0)
    return 0xffffffff

int128_t zmm0 = *arg2
arg1[1].d = i_2 + 1

if (i_2 + 1 s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

int64_t r14_1 = sx.q(rdi)
int64_t rbx_2 = r14_1 << 4
int64_t rdx_8 = *arg1 + rbx_2
memmove(rdx_8 + 0x10, rdx_8, (i_2 - rdi) << 4)
*(rbx_2 + *arg1) = zmm0
int32_t rbp = arg1[5].d
arg1[5].d = rbp + 1

if (rbp + 1 s> *(arg1 + 0x2c))
    sub_1405fdd60(&arg1[4])

int64_t rbx_3 = r14_1 * 0x70
int64_t rdx_11 = arg1[4] + rbx_3
memmove(rdx_11 + 0x70, rdx_11, (rbp - rdi) * 0x70)
sub_141a2f0c0(arg1[4] + rbx_3, arg4)
int32_t rsi_1 = arg1[3].d
arg1[3].d = rsi_1 + 1

if (rsi_1 + 1 s> *(arg1 + 0x1c))
    sub_1405c4e40(&arg1[2])

int64_t r14_2 = r14_1 << 5
int64_t rdx_15 = arg1[2] + r14_2
memmove(rdx_15 + 0x20, rdx_15, (rsi_1 - rdi) << 5)
int64_t* rdx_17 = arg1[2] + r14_2
*rdx_17 = 0
*rdx_17 = *arg3
__builtin_memset(arg3, 0, 0x20)
rdx_17[1].d = arg3[1].d
*(rdx_17 + 0xc) = *(arg3 + 0xc)
rdx_17[2] = 0
rdx_17[2] = arg3[2]
rdx_17[3].d = arg3[3].d
*(rdx_17 + 0x1c) = *(arg3 + 0x1c)
return zx.q(rdi)
