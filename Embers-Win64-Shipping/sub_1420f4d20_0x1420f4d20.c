// 函数: sub_1420f4d20
// 地址: 0x1420f4d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0x58, sx.q(*(arg2 + 0xc)) * 0x58, r9)
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
    int512_t zmm1_1 = sub_1407453e0(&var_48, arg2)
    void* var_38
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_38 + 0x18); i = i_1)
        int32_t* rbx_4 = sx.q(i) * 0x58 + *var_48
        sub_1409ac860(arg1, rbx_4, zmm1_1)
        zmm1_1 = sub_1420f53e0(arg1, &rbx_4[4], zmm1_1)
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

int512_t zmm1 = sub_1420f8430(arg2, arg_8)
int32_t r14 = 0

if (arg_8 s> 0)
    do
        int32_t rdx_8 = *(arg2 + 0x34)
        int64_t rbx_1
        
        if (rdx_8 == 0)
            rbx_1 = zx.q(arg2[1].d)
            int32_t rax_6 = (rbx_1 + 1).d
            arg2[1].d = rax_6
            
            if (rax_6 s> *(arg2 + 0xc))
                sub_1407755b0(arg2)
            
            sub_1405b2ba0(&arg2[2], 0)
        else
            rbx_1 = sx.q(arg2[6].d)
            int64_t r9_2 = *arg2
            int64_t r8_5 = sx.q(*(rbx_1 * 0x58 + r9_2 + 4))
            arg2[6].d = r8_5.d
            *(arg2 + 0x34) = rdx_8 - 1
            
            if (rdx_8 != 1)
                *(r8_5 * 0x58 + r9_2) = 0xffffffff
        
        void* rax_7 = arg2[4]
        void* r9_3 = &arg2[2]
        
        if (rax_7 != 0)
            r9_3 = rax_7
        
        int32_t rax_8 = rbx_1.d
        
        if (rbx_1.d s< 0)
            rax_8 = (rbx_1 + 0x1f).d
        
        int64_t r8_6 = sx.q(rax_8 s>> 5)
        *(r9_3 + (r8_6 << 2)) |= 1 << (rbx_1.b & 0x1f)
        int32_t* rdx_12 = sx.q(rbx_1.d) * 0x58 + *arg2
        __builtin_memset(rdx_12, 0, 0x1c)
        __builtin_memset(&rdx_12[8], 0, 0x21)
        *(rdx_12 + 0x48) = 0
        rdx_12[0x14] = 0xffffffff
        sub_1409ac860(arg1, rdx_12, zmm1)
        zmm1 = sub_1420f53e0(arg1, &rdx_12[4], zmm1)
        r14 += 1
    while (r14 s< arg_8)

return arg1
