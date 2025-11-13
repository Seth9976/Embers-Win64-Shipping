// 函数: sub_1405a8d50
// 地址: 0x1405a8d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
int64_t var_20 = rdi
int32_t rax = arg1[1].d
int64_t rsi = sx.q(rax - 1)

if (rax - 1 s>= 0)
    while (true)
        void* rbx_1 = *(*arg1 + (rsi << 3))
        
        if (rbx_1 != 0 && *(rbx_1 + 0x28) != 0)
            int64_t rbx_2 = *(rbx_1 + 0x2c)
            int32_t rcx = 0
            void* rax_3 = &data_143cd6048
            int64_t rbx_3
            
            while (true)
                if (rbx_2 == *rax_3)
                    rdi.b = 1
                else
                    rcx += 1
                    rax_3 += 8
                    
                    if (rcx u< 2)
                        continue
                    else
                        int64_t* rcx_1 = data_143cd6040
                        int64_t var_58
                        int64_t* rax_5 = (*(*rcx_1 + 0xa0))(rcx_1, &var_58)
                        int16_t* rdx_1
                        
                        if (rax_5[1].d == 0)
                            rdx_1 = &data_142d40450
                        else
                            rdx_1 = *rax_5
                        
                        int64_t arg_18
                        sub_140b58260(&arg_18, rdx_1, 1)
                        int64_t rcx_3 = var_58
                        
                        if (rcx_3 != 0)
                            sub_140a74f90(rcx_3)
                        
                        int64_t temp2_1 = arg_18
                        rdi.b = rbx_2 == temp2_1
                        
                        if (rbx_2 != temp2_1)
                            rbx_3 = rbx_2
                            break
                
                int64_t* rcx_4 = data_143cd6040
                int64_t var_48
                int64_t* rax_7 = (*(*rcx_4 + 0xa0))(rcx_4, &var_48)
                int16_t* rdx_3
                
                if (rax_7[1].d == 0)
                    rdx_3 = &data_142d40450
                else
                    rdx_3 = *rax_7
                
                int64_t arg_20
                sub_140b58260(&arg_20, rdx_3, 1)
                int64_t rcx_6 = var_48
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                rbx_3 = arg_20
                int64_t arg_8 = rbx_3
                break
            
            int64_t* rcx_11
            
            if (*(arg2 + 0x10) == *(arg2 + 0x3c))
            label_1405a8ede:
                rcx_11 = nullptr
            else
                int32_t rax_10 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
                void* r8_1 = arg2 + 0x40
                void* rcx_8 = *(r8_1 + 8)
                
                if (rcx_8 != 0)
                    r8_1 = rcx_8
                
                int32_t rax_12 = *(r8_1 + (((sx.q(*(arg2 + 0x50)) - 1) & sx.q(rax_10)) << 2))
                
                if (rax_12 == 0xffffffff)
                label_1405a8ede_1:
                    rcx_11 = nullptr
                else
                    while (true)
                        rcx_11 = (sx.q(rax_12) << 5) + *(arg2 + 8)
                        
                        if (*rcx_11 == rbx_3)
                            break
                        
                        rax_12 = rcx_11[3].d
                        
                        if (rax_12 == 0xffffffff)
                            goto label_1405a8ede_2
                    
                    if (rax_12 == 0xffffffff)
                    label_1405a8ede_2:
                        rcx_11 = nullptr
            
            void* rax_13 = &rcx_11[1]
            
            if (rcx_11 == 0)
                rax_13 = nullptr
            
            int64_t result
            
            if (rax_13 != 0)
                result = *(rax_13 + 8)
            label_1405a8f01:
                
                if (result != 0)
                    return result
            else if (rdi.b == 0)
                result = 0
                goto label_1405a8f01
        
        int64_t temp1_1 = rsi
        rsi -= 1
        
        if (temp1_1 - 1 s< 0)
            break

return 0
