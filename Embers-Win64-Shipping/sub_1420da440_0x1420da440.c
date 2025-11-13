// 函数: sub_1420da440
// 地址: 0x1420da440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) << 5, sx.q(*(arg2 + 0xc)) << 5)
int64_t r9 = *arg1
(*(r9 + 8))(arg1, zx.q(arg2[5].d + 0x1f) u>> 5 << 2, zx.q(*(arg2 + 0x2c) + 0x1f) u>> 5 << 2, r9)
int64_t* rcx_1 = arg1[1]
int32_t arg_8

if ((arg1[5].b & 1) == 0)
    arg_8 = arg2[1].d - *(arg2 + 0x34)
    int32_t* rdx_16 = *rcx_1
    
    if (&rdx_16[1] u> rcx_1[1])
        int32_t* rdx_17 = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_17, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_17, 4)
    else
        arg_8 = *rdx_16
        *rcx_1 += 4
    
    void* var_48
    int512_t zmm1_1 = sub_1407453e0(&var_48, arg2)
    void* var_38
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_38 + 0x18); i = i_1)
        void* rbx_3 = (sx.q(i) << 5) + *var_48
        (*(*arg1 + 0x130))(arg1, rbx_3)
        zmm1_1 = sub_1420d9920(arg1, rbx_3 + 8, zmm1_1)
        int32_t var_3c
        int32_t var_30 = var_30 & not.d(var_3c)
        void var_40
        sub_14059bdd0(&var_40)
    
    return arg1

arg_8 = 0
int32_t* rdx_6 = *rcx_1

if (&rdx_6[1] u> rcx_1[1])
    int32_t* rdx_7 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_7, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_7, 4)
else
    arg_8 = *rdx_6
    *rcx_1 += 4

int512_t zmm1 = sub_140cb92f0(arg2, arg_8)
int32_t r14 = 0

if (arg_8 s<= 0)
    return arg1

do
    int32_t rcx_4 = *(arg2 + 0x34)
    int64_t rdi_1
    
    if (rcx_4 == 0)
        rdi_1 = zx.q(arg2[1].d)
        int32_t rax_9 = (rdi_1 + 1).d
        arg2[1].d = rax_9
        
        if (rax_9 s> *(arg2 + 0xc))
            sub_1405c4e40(arg2)
        
        sub_1405b2ba0(&arg2[2], 0)
    else
        rdi_1 = sx.q(arg2[6].d)
        uint64_t r8_6 = *arg2
        int64_t rdx_9 = sx.q(*((rdi_1 << 5) + r8_6 + 4))
        arg2[6].d = rdx_9.d
        *(arg2 + 0x34) = rcx_4 - 1
        
        if (rcx_4 != 1)
            *((rdx_9 << 5) + r8_6) = 0xffffffff
    
    void* rax_10 = arg2[4]
    void* rcx_7 = &arg2[2]
    
    if (rax_10 != 0)
        rcx_7 = rax_10
    
    int32_t rax_11 = rdi_1.d
    
    if (rdi_1.d s< 0)
        rax_11 = (rdi_1 + 0x1f).d
    
    void* r8_7 = rcx_7 + (sx.q(rax_11 s>> 5) << 2)
    *r8_7 |= 1 << (rdi_1.b & 0x1f)
    int64_t rdx_14 = (sx.q(rdi_1.d) << 5) + *arg2
    __builtin_memset(rdx_14, 0, 0x18)
    *(rdx_14 + 0x18) = 0xffffffff
    (*(*arg1 + 0x130))(arg1)
    zmm1 = sub_1420d9920(arg1, rdx_14 + 8, zmm1)
    r14 += 1
while (r14 s< arg_8)

return arg1
