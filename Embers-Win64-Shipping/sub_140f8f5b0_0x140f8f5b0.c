// 函数: sub_140f8f5b0
// 地址: 0x140f8f5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* rcx = *arg1
int32_t result = (**rcx)(rcx)

if (result.b == 0 && arg1[0xf6].d s> 0)
    int64_t* rcx_1 = arg1[0xdf]
    result = (*(*rcx_1 + 8))(rcx_1)
    
    if (result.b == 0)
        int32_t rbp_1 = arg1[0xf7].d
        int32_t r14_1 = 0
        
        if (rbp_1 == 0xffffffff)
            rbp_1 = arg1[0xf6].d
            void var_78
            sub_140a96170(&var_78)
            int64_t var_40_1 = (zx.o(0)).q
            char var_58_1 = 0
            int64_t var_50_1 = 0
            int16_t var_48_1 = 0
            sub_140f7c220(arg1, &var_78)
            result = sub_140f87ac0(arg1, &var_78)
            char var_58_2 = 0
            int64_t* var_70
            
            if (var_70 != 0)
                result = var_70[1].d
                var_70[1].d -= 1
                
                if (result == 1)
                    result = (**var_70)(var_70)
                    int32_t rsi_1 = *(var_70 + 0xc)
                    *(var_70 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        result = (*(*var_70 + 8))(var_70, zx.q(rsi_1))
        
        if (rbp_1 - 1 s>= 0)
            int64_t* rdi_4 = (sx.q(rbp_1 - 1) << 6) + arg1[0xf5]
            sub_140f89a70(arg1, rdi_4)
            char rax_6
            int64_t zmm6_1
            rax_6, zmm6_1 = sub_140f8b290(arg1, rdi_4, 0)
            
            if (rax_6 != 0)
                int64_t* rcx_9 = *arg1
                (*(*rcx_9 + 0x98))(rcx_9, rdi_4)
            
            char var_88_1 = rdi_4[6].b
            char var_87_1 = *(rdi_4 + 0x31)
            *(arg1 + 0x790) = rdi_4[5].o
            arg1[0xf4] = zmm6_1
            
            if (&rdi_4[3] != &arg1[0xf0])
                if (arg1[0xf1].b != 0)
                    arg1[0xf1].b = 0
                
                if (rdi_4[4].b != 0)
                    arg1[0xf0] = rdi_4[3]
                    arg1[0xf1].b = 1
            
            bool cond:0_1 = arg1[0xf3].b == 1
            int64_t* rcx_11 = *arg1
            int32_t var_98 = arg1[0xf2].d
            int32_t rax_14
            rax_14.b = cond:0_1
            
            if (rax_14 + *(arg1 + 0x794) s>= 0)
                r14_1 = rax_14 + *(arg1 + 0x794)
            
            int32_t var_94_1 = r14_1
            char rdx_8
            uint32_t r8_1
            rdx_8, r8_1 = (*(*rcx_11 + 0xa8))(rcx_11, &var_98)
            result = sub_140f8fc70(arg1, rdx_8, r8_1)
            arg1[0xf7].d = rbp_1 - 1

__security_check_cookie(rax_1 ^ &var_b8)
return result
