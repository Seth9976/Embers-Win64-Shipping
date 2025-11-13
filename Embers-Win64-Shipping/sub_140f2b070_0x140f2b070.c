// 函数: sub_140f2b070
// 地址: 0x140f2b070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int32_t* result = __security_cookie ^ &var_a8
int32_t* result_1 = result
int128_t zmm6 = 0x800000
int64_t* rsi = nullptr
int64_t var_70

if (*(arg1 + 0x510) != 0)
    result = sub_140f466a0(arg1 + 0x508)
    
    if (result[1].b != 0)
        int128_t zmm7 = 0xff7fffff
        int32_t var_78_1 = 0xff7fffff
        int32_t* rax_1 = sub_140f466a0(arg1 + 0x508)
        
        if (rax_1[1].b == 0)
            zmm6 = 0xff7fffff
        else
            zmm6 = *rax_1
        
        int32_t var_78_2 = 0xff7fffff
        result = sub_140f466a0(arg1 + 0x508)
        
        if (result[1].b != 0)
            zmm7 = *result
        
        int128_t zmm8
        zmm8.d = arg2.d f+ zmm6.d
        
        if (zmm8.d f< zmm7.d || arg3 == 0)
            zmm6 = zmm8
            
            if (*(arg1 + 0x520) == 0)
            label_140f2b159:
                var_70.d = zmm6.d
                var_70:4.b = 1
                int64_t var_68
                var_68.b = 1
                int64_t var_60 = 0
                int32_t var_58_1 = 0
                
                if (&var_70 != arg1 + 0x508)
                    *(arg1 + 0x508) = zmm6.d
                    *(arg1 + 0x50c) = 1
                
                *(arg1 + 0x510) = 1
                sub_1407473e0(arg1 + 0x518, &var_60)
                sub_140f63650(arg1)
                result = sub_140745b20(&var_60)
            else
                int64_t* rcx_3 = *(arg1 + 0x518)
                
                if (rcx_3 == 0)
                    goto label_140f2b159
                
                result = (*(*rcx_3 + 0x28))(rcx_3)
                
                if (result.b == 0)
                    goto label_140f2b159

if (*(arg1 + 0x5e8) != 0)
    int64_t* rcx_7 = *(arg1 + 0x5e0)
    
    if (rcx_7 != 0)
        int64_t r9_1
        result, r9_1 = (*(*rcx_7 + 0x28))(rcx_7)
        
        if (result.b != 0)
            int64_t* rbx_2 = *(arg1 + 0x10)
            int64_t rcx_8 = 0
            
            if (rbx_2 != 0)
                int32_t rax_4 = rbx_2[1].d
                
                if (rax_4 != 0)
                    rbx_2[1].d = rax_4 + 1
                    rax_4.b = 1
                
                if (rax_4.b == 0)
                    rbx_2 = nullptr
                
                if (rbx_2 != 0)
                    rcx_8 = *(arg1 + 8)
                    *(rbx_2 + 0xc) += 1
            
            if (*(arg1 + 0x5e8) != 0)
                rsi = *(arg1 + 0x5e0)
            
            var_70 = rcx_8
            int64_t* var_68_1 = rbx_2
            
            if (rbx_2 != 0)
                *(rbx_2 + 0xc) += 1
            
            r9_1.b = 1
            result = (*(*rsi + 0x48))(rsi, zmm6, &var_70, r9_1, arg3)
            
            if (rbx_2 != 0)
                int32_t temp0_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp0_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        result = (**rbx_2)(rbx_2)
                        int32_t temp2_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            result = (*(*rbx_2 + 8))(rbx_2, 1)

__security_check_cookie(result_1 ^ &var_a8)
return result
