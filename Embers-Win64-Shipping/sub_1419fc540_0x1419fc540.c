// 函数: sub_1419fc540
// 地址: 0x1419fc540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14301ec08
arg1[1] = 0
arg1[2] = 0
int32_t rdx = *(arg2 + 0x18)

if (0 != rdx)
    sub_1405c5570(&arg1[1], rdx)

int32_t i = 0
int32_t r13 = *(arg2 + 0x10)

if (*(arg2 + 0x18) s<= 0)
    return arg1

int64_t* r15_1 = nullptr

do
    int64_t** r8_1 = *(arg2 + 0x40)
    int32_t rdx_1 = *(arg2 + 0x20)
    int32_t rcx_2 = (*(arg2 + 0x1c) s>> i.b) - 1
    int64_t rcx_5
    
    if (r13 s<= 0xffff)
        int64_t var_38 = 0
        int64_t var_30_1 = 0
        sub_1419f4730(rcx_2, rdx_1, *(r8_1 + r15_1), &var_38)
        void*** rax_7 = j_sub_140a82f30(0x48)
        void*** rbx_2 = rax_7
        
        if (rax_7 == 0)
            rbx_2 = nullptr
        else
            rax_7[1].d = 0xffffffff
            *(rax_7 + 0xc) = 4
            rax_7[2] = 0
            rax_7[3] = 0
            *rbx_2 = &data_143020d20
            __builtin_memset(&rbx_2[5], 0, 0x11)
            rbx_2[4] = &data_142da8520
            rbx_2[8].d = 0
        
        (*rbx_2)[0x13](rbx_2, &var_38)
        int64_t rsi_2 = sx.q(arg1[2].d)
        int32_t rax_9 = (rsi_2 + 1).d
        arg1[2].d = rax_9
        
        if (rax_9 s> *(arg1 + 0x14))
            sub_1405a4d70(&arg1[1])
        
        arg1[1][rsi_2] = rbx_2
        rcx_5 = var_38
    else
        int64_t var_48 = 0
        int64_t var_40_1 = 0
        sub_1419f49c0(rcx_2, rdx_1, *(r8_1 + r15_1), &var_48)
        void*** rax_3 = j_sub_140a82f30(0x48)
        int64_t* rbx_1 = rax_3
        
        if (rax_3 == 0)
            rbx_1 = nullptr
        else
            rax_3[1].d = 0xffffffff
            *(rax_3 + 0xc) = 4
            rax_3[2] = 0
            rax_3[3] = 0
            *rax_3 = &data_143020c80
            __builtin_memset(&rax_3[5], 0, 0x11)
            rbx_1[4] = &data_142dd66a0
            rbx_1[8].d = 0
        
        (*(*rbx_1 + 0x98))(rbx_1, &var_48)
        int64_t rsi_1 = sx.q(arg1[2].d)
        int32_t rax_5 = (rsi_1 + 1).d
        arg1[2].d = rax_5
        
        if (rax_5 s> *(arg1 + 0x14))
            sub_1405a4d70(&arg1[1])
        
        arg1[1][rsi_1] = rbx_1
        rcx_5 = var_48
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t* rcx_8 = *(r15_1 + arg1[1])
    (*(*rcx_8 + 0x28))(rcx_8)
    i += 1
    r15_1 = &r15_1[1]
while (i s< *(arg2 + 0x18))

return arg1
