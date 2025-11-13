// 函数: sub_141aae490
// 地址: 0x141aae490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result
int32_t r8
int32_t r9
result, r8, r9 = sub_141e1c570(arg1 + 0x140, arg2, arg3)

if (*(arg1 + 0x1a0) != 0 && not(9.99999975e-06f f>= *(arg1 + 0x17c)))
    int64_t rbp_1 = data_143f2b878
    int64_t rcx_1
    
    if (data_143de5480 == 0)
        rcx_1 = 0
    else
        result, r8, r9 = GetCurrentThreadId()
        rcx_1.b = result != data_143de5470
    
    if (*(rbp_1 + (rcx_1 << 2)) == 1)
        float zmm7[0x4]
        float zmm8[0x4]
        float zmm9[0x4]
        float zmm10[0x4]
        float zmm11[0x4]
        float zmm12[0x4]
        sub_141ad1e60(arg1, arg2, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, r8, r9)
        void* var_58
        sub_140dd5b90(&var_58, *arg2)
        bool cond:2_1 = arg2[8].b != 0
        *arg2
        int64_t var_50
        __builtin_memset(&var_50, 0, 0x33)
        uint32_t zmm1[0x8] = sub_141e295c0(&var_58)
        int64_t* rcx_5 = *(arg1 + 0x48)
        int64_t rdx_3
        
        if (rcx_5 != 0)
            rdx_3 = *(var_58 + 0xb0)
        
        int64_t var_38
        uint32_t zmm1_1[0x8]
        
        if (rcx_5 == 0 || rdx_3 == 0 || rcx_5[7] != rdx_3)
            int64_t* rcx_6 = &var_50
            void* var_40
            
            if (cond:2_1 == 0)
                zmm1_1 = sub_141acb4e0(rcx_6, var_40)
            else
                zmm1_1 = sub_141e47c50(rcx_6, zmm1)
        else
            zmm1_1 = sub_141e3eb50(rcx_5, arg1 + 0xc8, &var_50, &var_38, zmm1)
        
        return sub_141e451a0(&arg2[1], 
            sub_141de0cd0(&arg2[1], &var_50, &arg2[4], &var_38, zmm1_1, *(arg1 + 0x17c), 2))

return result
