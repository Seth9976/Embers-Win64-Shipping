// 函数: sub_141494bc0
// 地址: 0x141494bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_1419a4830(*(arg1 + 0x3b4))

if (result.b == 0 && (*(arg1 + 0x3c) & 1) != 0)
    int64_t* var_48
    sub_1407453e0(&var_48, *(arg1 + 8) + 0xee8)
    void* result_1
    result = result_1
    int32_t i_1
    int32_t i = i_1
    
    if (i s< *(result + 0x18))
        int128_t zmm6 = 0x3727c5ac
        
        do
            void* rbx_1 = *(*var_48 + sx.q(i) * 0x30 + 0x20)
            void* rax_2 = *(rbx_1 + 0x20)
            float zmm0_1 = *(rax_2 + 0x30)
            
            if (zmm0_1 * zmm0_1 f>= zmm6.d)
            label_141494c8c:
                char rax_3
                
                if ((*(rax_2 + 0x138) & 4) != 0)
                    rax_3 = sub_14122cc00(rbx_1)
                
                if ((*(rax_2 + 0x138) & 4) == 0 || rax_3 == 0)
                    void* rax_4 = *(rbx_1 + 0x20)
                    
                    if (rax_4 != 0 && (*(rax_4 + 0x13a) & 0x10) != 0)
                        int64_t var_50_1 = 0
                        char var_58_1 = 1
                        zmm6 = sub_1414998e0(arg1, arg2, rbx_1, nullptr, nullptr, 0)
            else
                zmm0_1 = *(rax_2 + 0x34)
                
                if (zmm0_1 * zmm0_1 f>= zmm6.d)
                    goto label_141494c8c
                
                zmm0_1 = *(rax_2 + 0x38)
                
                if (not(zmm0_1 * zmm0_1 f< zmm6.d))
                    goto label_141494c8c
            
            int32_t var_3c
            int32_t var_30 = var_30 & not.d(var_3c)
            void var_40
            sub_14059bdd0(&var_40)
            result = result_1
            i = i_1
        while (i s< *(result + 0x18))

return result
