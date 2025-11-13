// 函数: sub_141ee3ff0
// 地址: 0x141ee3ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t result = arg4

if (arg2[1].d s> 0)
    int32_t rbp_1 = 1
    int64_t* r15_1 = nullptr
    int128_t zmm6 = zx.o(0)
    
    do
        if ((result & rbp_1) != 0)
            int64_t rsi_1 = *(r15_1 + *arg2)
            void var_58
            sub_140acc920(&var_58, arg1 + 0x160)
            uint8_t rdi_1 = *(arg1 + 0x36)
            uint8_t var_c8_1 = rdi_1 & 1
            char var_d0_1 = 0
            float var_48[0x4]
            sub_1422a29a0(&var_48, &var_58, rsi_1, sub_14076deb0(arg1), rdi_1 u>> 1 & 1, 0)
            int32_t zmm1_1 = *(arg1 + 0xa4)
            int32_t rax_2 = *(arg1 + 0x15c)
            int64_t var_68 = *(arg1 + 0x154)
            int64_t* r10_2 = arg5 + 0x50
            int32_t var_98 = (*(arg1 + 0xa0)).d
            int64_t* rcx_3 = r10_2[2]
            int32_t var_90_1 = (*(arg1 + 0xa8)).d
            int32_t var_94_1 = zmm1_1
            
            if (rcx_3 != 0)
                r10_2 = rcx_3
            
            int32_t var_88_1 = (*(arg1 + 0x94)).d
            int64_t zmm0_1 = *(arg1 + 0x80)
            int64_t* rcx_4 = *(r10_2 + r15_1)
            int32_t var_8c = *(arg1 + 0x90)
            zmm1_1 = *(arg1 + 0x98)
            int32_t var_80 = zmm0_1.d
            int32_t var_84_1 = zmm1_1
            int32_t var_60_1 = rax_2
            int32_t var_78_1 = (*(arg1 + 0x88)).d
            int32_t var_7c_1 = *(arg1 + 0x84)
            int32_t var_70_1 = (*(arg1 + 0xb4)).d
            int32_t var_b8_1 = (*(arg1 + 0x164)).d
            var_c8_1.q = &var_48
            var_d0_1.q = &var_68
            int32_t var_74 = *(arg1 + 0xb0)
            uint8_t var_d8_1
            var_d8_1.q = &var_98
            int32_t var_6c_1 = *(arg1 + 0xb8)
            zmm6 = sub_1422997e0(rcx_4, &var_74, &var_80, &var_8c, var_d8_1, var_d0_1, var_c8_1, 0, 
                var_b8_1, zmm6.d, 0)
            result = arg4
        
        i += 1
        rbp_1 = rol.d(rbp_1, 1)
        r15_1 = &r15_1[1]
    while (i s< arg2[1].d)

return result
