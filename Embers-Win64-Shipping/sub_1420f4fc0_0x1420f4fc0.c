// 函数: sub_1420f4fc0
// 地址: 0x1420f4fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0x1c, sx.q(*(arg2 + 0xc)) * 0x1c, r9)
int64_t r9_1 = *arg1
(*(r9_1 + 8))(arg1, zx.q(arg2[5].d + 0x1f) u>> 5 << 2, zx.q(*(arg2 + 0x2c) + 0x1f) u>> 5 << 2, r9_1)
int64_t* rcx_1 = arg1[1]
int32_t arg_8

if ((arg1[5].b & 1) == 0)
    arg_8 = arg2[1].d - *(arg2 + 0x34)
    int32_t* rdx_14 = *rcx_1
    
    if (&rdx_14[1] u> rcx_1[1])
        int32_t* rdx_15 = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_15, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_15, 4)
    else
        arg_8 = *rdx_14
        *rcx_1 += 4
    
    void* var_48
    int512_t zmm1 = sub_1407453e0(&var_48, arg2)
    void* var_38
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_38 + 0x18); i = i_1)
        sub_1409ac860(arg1, sx.q(i) * 0x1c + *var_48, zmm1)
        int32_t var_3c
        int32_t var_30 = var_30 & not.d(var_3c)
        void var_40
        sub_14059bdd0(&var_40)
    
    return arg1

arg_8 = 0
int32_t* rdx_5 = *rcx_1

if (&rdx_5[1] u> rcx_1[1])
    int32_t* rdx_6 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_6, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_6, 4)
else
    arg_8 = *rdx_5
    *rcx_1 += 4

int32_t rdi = arg_8
arg2[1].d = 0

if (*(arg2 + 0xc) != rdi)
    sub_1406106e0(arg2, rdi)

arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
sub_14059a8e0(&arg2[2], rdi)
int32_t r14 = 0

if (arg_8 s> 0)
    do
        int32_t rdx_9 = *(arg2 + 0x34)
        int64_t rdi_1
        
        if (rdx_9 == 0)
            rdi_1 = zx.q(arg2[1].d)
            int32_t rax_6 = (rdi_1 + 1).d
            arg2[1].d = rax_6
            
            if (rax_6 s> *(arg2 + 0xc))
                sub_14061cbc0(arg2)
            
            sub_1405b2ba0(&arg2[2], 0)
        else
            rdi_1 = sx.q(arg2[6].d)
            int64_t r9_2 = *arg2
            int64_t r8_5 = sx.q(*(rdi_1 * 0x1c + r9_2 + 4))
            arg2[6].d = r8_5.d
            *(arg2 + 0x34) = rdx_9 - 1
            
            if (rdx_9 != 1)
                *(r8_5 * 0x1c + r9_2) = 0xffffffff
        
        void* rax_7 = arg2[4]
        void* rcx_9 = &arg2[2]
        
        if (rax_7 != 0)
            rcx_9 = rax_7
        
        int32_t rax_8 = rdi_1.d
        
        if (rdi_1.d s< 0)
            rax_8 = (rdi_1 + 0x1f).d
        
        void* r8_6 = rcx_9 + (sx.q(rax_8 s>> 5) << 2)
        *r8_6 |= 1 << (rdi_1.b & 0x1f)
        int32_t* rdx_13 = sx.q(rdi_1.d) * 0x1c + *arg2
        __builtin_memset(rdx_13, 0, 0x11)
        rdx_13[5] = 0xffffffff
        sub_1409ac860(arg1, rdx_13, arg3)
        r14 += 1
    while (r14 s< arg_8)

return arg1
