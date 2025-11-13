// 函数: sub_1426a7bc0
// 地址: 0x1426a7bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]

if (&arg1[2] != &arg2[2])
    int64_t rbp_1 = sx.q(arg2[3].d)
    int64_t r14_1 = arg2[2]
    int32_t r8_1 = *(arg1 + 0x1c)
    arg1[3].d = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1405c4a00(&arg1[2], rbp_1.d, r8_1)
        memcpy(arg1[2], r14_1, (rbp_1 << 3).d)
    else
        *(arg1 + 0x1c) = rbp_1.d

if (&arg1[4] != &arg2[4])
    int64_t rbp_2 = sx.q(arg2[5].d)
    int64_t r14_2 = arg2[4]
    int32_t r8_4 = *(arg1 + 0x2c)
    arg1[5].d = rbp_2.d
    
    if (rbp_2.d != 0 || r8_4 != 0)
        sub_1405a4be0(&arg1[4], rbp_2.d, r8_4)
        memcpy(arg1[4], r14_2, (rbp_2 << 4).d)
    else
        *(arg1 + 0x2c) = rbp_2.d

sub_14081d8c0(&arg1[6], &arg2[6])
arg1[8].b = arg2[8].b
*(arg1 + 0x41) = *(arg2 + 0x41)

if (&arg2[9] != &arg1[9])
    if (arg2[0xa].d != 0)
        int64_t* rcx_6 = arg2[9]
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x40))(rcx_6, &arg1[9])
            return arg1
    
    if (arg1[0xa].d != 0)
        int64_t* rcx_7 = arg1[9]
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x38))(rcx_7, 0)
            int64_t rcx_8 = arg1[9]
            
            if (rcx_8 != 0)
                arg1[9] = sub_140a84c80(rcx_8, 0, 0)
            
            arg1[0xa].d = 0

return arg1
