// 函数: sub_141ee4530
// 地址: 0x141ee4530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg4
int32_t rcx = int.d(*(arg1 + 0x154) * 0.25f)
int32_t arg_8

if (rcx s>= 0x10)
    int32_t rax = 0x40
    
    if (rcx s< 0x40)
        rax = rcx
    
    arg_8 = rax
    result = arg4
else
    arg_8 = 0x10

int32_t i = 0

if (arg2[1].d s> 0)
    int32_t rbp_1 = 1
    int64_t* r15_1 = nullptr
    int128_t zmm6 = zx.o(0)
    
    do
        if ((result & rbp_1) != 0)
            int64_t rsi_1 = *(r15_1 + *arg2)
            void var_68
            sub_140acc920(&var_68, arg1 + 0x15c)
            uint8_t rdi_1 = *(arg1 + 0x36)
            uint8_t var_d8_1 = rdi_1 & 1
            char var_e0_1 = 0
            float var_58[0x4]
            sub_1422a29a0(&var_58, &var_68, rsi_1, sub_14076deb0(arg1), rdi_1 u>> 1 & 1, 0)
            int32_t zmm1_1 = *(arg1 + 0xa4)
            int64_t** rcx_5 = arg5 + 0x50
            float var_98 = *(arg1 + 0xa0)
            int32_t var_94_1 = zmm1_1
            int64_t** rax_3 = rcx_5[2]
            float var_90_1 = *(arg1 + 0xa8)
            
            if (rax_3 != 0)
                rcx_5 = rax_3
            
            float zmm0_1 = *(arg1 + 0x94)
            int32_t var_8c = *(arg1 + 0x90)
            int64_t* rcx_6 = *(rcx_5 + r15_1)
            float var_88_1 = zmm0_1
            int32_t var_84_1 = *(arg1 + 0x98)
            zmm1_1 = *(arg1 + 0x84)
            float var_80 = *(arg1 + 0x80)
            int32_t var_7c_1 = zmm1_1
            float var_78_1 = *(arg1 + 0x88)
            zmm0_1 = *(arg1 + 0xb4)
            int32_t var_74 = *(arg1 + 0xb0)
            float var_70_1 = zmm0_1
            int32_t var_6c_1 = *(arg1 + 0xb8)
            var_d8_1.d = *(arg1 + 0x154)
            var_e0_1.q = &var_58
            uint8_t var_e8_1
            var_e8_1.q = &var_98
            zmm6 = sub_14229b5c0(rcx_6, &var_74, &var_80, &var_8c, var_e8_1, var_e0_1, var_d8_1, 
                *(arg1 + 0x158), arg_8, 0, zmm6.d, zmm6.d, 0)
            result = arg4
        
        i += 1
        rbp_1 = rol.d(rbp_1, 1)
        r15_1 = &r15_1[1]
    while (i s< arg2[1].d)

return result
