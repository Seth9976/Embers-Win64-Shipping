// 函数: sub_141cd6440
// 地址: 0x141cd6440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0x60, sx.q(*(arg2 + 0xc)) * 0x60, r9)
int64_t r9_1 = *arg1
(*(r9_1 + 8))(arg1, zx.q(arg2[5].d + 0x1f) u>> 5 << 2, zx.q(*(arg2 + 0x2c) + 0x1f) u>> 5 << 2, r9_1)
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
    
    void* var_68
    int512_t zmm1_1 = sub_1407453e0(&var_68, arg2)
    void* var_58
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_58 + 0x18); i = i_1)
        void* rbx_4 = sx.q(i) * 0x60 + *var_68
        (*(*arg1 + 0x140))(arg1, rbx_4)
        zmm1_1 = sub_141cd3a70(arg1, rbx_4 + 0x10, zmm1_1)
        int32_t var_5c
        int32_t var_50 = var_50 & not.d(var_5c)
        void var_60
        sub_14059bdd0(&var_60)
    
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

sub_141cdbc00(arg2, arg_8)
int32_t r15 = 0

if (arg_8 s<= 0)
    return arg1

int128_t zmm6 = data_142d3f660

do
    int32_t rdx_9 = *(arg2 + 0x34)
    int64_t rbx_1
    
    if (rdx_9 == 0)
        rbx_1 = zx.q(arg2[1].d)
        int32_t rax_6 = (rbx_1 + 1).d
        arg2[1].d = rax_6
        
        if (rax_6 s> *(arg2 + 0xc))
            sub_14090a6a0(arg2)
        
        int32_t rdi_1 = arg2[5].d
        sub_1405a4980(&arg2[2], rdi_1 + 1)
        arg2[5].d += 1
        void* r8_7 = &arg2[2]
        void* rax_7 = arg2[4]
        
        if (rax_7 != 0)
            r8_7 = rax_7
        
        int32_t rax_8 = rdi_1
        
        if (rdi_1 s< 0)
            rax_8 = rdi_1 + 0x1f
        
        int64_t rdx_12 = sx.q(rax_8 s>> 5)
        *(r8_7 + (rdx_12 << 2)) &= not.d(1 << (rdi_1.b & 0x1f))
    else
        rbx_1 = sx.q(arg2[6].d)
        int64_t r9_2 = *arg2
        int64_t r8_6 = sx.q(*(rbx_1 * 0x60 + r9_2 + 4))
        arg2[6].d = r8_6.d
        *(arg2 + 0x34) = rdx_9 - 1
        
        if (rdx_9 != 1)
            *(r8_6 * 0x60 + r9_2) = 0xffffffff
    
    void* rax_12 = arg2[4]
    void* r9_3 = &arg2[2]
    
    if (rax_12 != 0)
        r9_3 = rax_12
    
    int32_t rax_13 = rbx_1.d
    
    if (rbx_1.d s< 0)
        rax_13 = (rbx_1 + 0x1f).d
    
    int64_t r8_8 = sx.q(rax_13 s>> 5)
    *(r9_3 + (r8_8 << 2)) |= 1 << (rbx_1.b & 0x1f)
    int64_t* rdi_5 = sx.q(rbx_1.d) * 0x60 + *arg2
    *rdi_5 = 0
    rdi_5[3] = 0
    rdi_5[4].d = 0
    rdi_5[2] = &data_142e406d8
    rdi_5[5] = 0
    rdi_5[6] = 0
    *(rdi_5 + 0x40) = zmm6
    int512_t zmm1 = sub_1409dd150(&rdi_5[2], 0)
    rdi_5[0xa].d = 0xffffffff
    (*(*arg1 + 0x140))(arg1, rdi_5)
    zmm6 = sub_141cd3a70(arg1, &rdi_5[2], zmm1)
    r15 += 1
while (r15 s< arg_8)

return arg1
