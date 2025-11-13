// 函数: sub_141bf4ad0
// 地址: 0x141bf4ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*arg3)
int64_t var_38
int128_t var_28
void* rsi_1

if (result.d u<= 5)
    switch (result)
        case 0
            rsi_1 = *arg2 + zx.q(arg4) * 0x28
            *(rsi_1 + 8) = 0
        label_141bf4b64:
            
            if (&var_28 != rsi_1 + 0x20 && *(rsi_1 + 0x28) != 0)
                int64_t* rcx_5 = *(rsi_1 + 0x20)
                
                if (rcx_5 != 0)
                    (*(*rcx_5 + 0x38))(rcx_5, 0)
                    int64_t rcx_6 = *(rsi_1 + 0x20)
                    
                    if (rcx_6 != 0)
                        *(rsi_1 + 0x20) = sub_140a84c80(rcx_6, 0, 0)
                    
                    *(rsi_1 + 0x28) = 0
            
            result = rsi_1 + 0x10
            
            if (result != &var_28)
                *result = 0
                int64_t* rcx_7 = *(result + 8)
                *(result + 8) = 0
                
                if (rcx_7 != 0)
                    int32_t temp2_1 = *(rcx_7 + 0xc)
                    *(rcx_7 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        result = (*(*rcx_7 + 8))(rcx_7, 1)
        case 1
            result = sub_140d3e110(&arg3[0xc])
            
            if (result.b != 0)
                void* rax_6 = sub_140d3c6e0(&arg3[0xc])
                int64_t rbx_2 = *arg2
                uint64_t* rax_7 = sub_141bab3c0(rax_6, &var_28)
                void* rsi_2 = rbx_2 + zx.q(arg4) * 0x28
                *(rsi_2 + 8) = 1
                
                if (&var_38 != rsi_2 + 0x20 && *(rsi_2 + 0x28) != 0)
                    int64_t* rcx_12 = *(rsi_2 + 0x20)
                    
                    if (rcx_12 != 0)
                        (*(*rcx_12 + 0x38))(rcx_12, 0)
                        int64_t rcx_13 = *(rsi_2 + 0x20)
                        
                        if (rcx_13 != 0)
                            *(rsi_2 + 0x20) = sub_140a84c80(rcx_13, 0, 0)
                        
                        *(rsi_2 + 0x28) = 0
                
                result = *rax_7
                *(rsi_2 + 0x10) = result
                void* rbx_4 = rax_7[1]
                int64_t* rcx_14 = *(rsi_2 + 0x18)
                
                if (rbx_4 != rcx_14)
                    if (rbx_4 != 0)
                        *(rbx_4 + 0xc) += 1
                        rcx_14 = *(rsi_2 + 0x18)
                    
                    if (rcx_14 != 0)
                        int32_t temp6_1 = *(rcx_14 + 0xc)
                        *(rcx_14 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            result = (*(*rcx_14 + 8))(rcx_14, 1)
                    
                    *(rsi_2 + 0x18) = rbx_4
                
                int64_t* rbx_5 = rax_7[1]
                
                if (rbx_5 != 0)
                    rbx_5[1].d -= 1
                    
                    if (rbx_5[1].d == 1)
                        result = (**rbx_5)(rbx_5)
                        int32_t temp5_1 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            result = (*(*rbx_5 + 8))(rbx_5, 1)
        case 2
            rsi_1 = *arg2 + zx.q(arg4) * 0x28
            *(rsi_1 + 8) = 2
            goto label_141bf4b64
        case 3
            rsi_1 = *arg2 + zx.q(arg4) * 0x28
            *(rsi_1 + 8) = 3
            goto label_141bf4b64
        case 4, 5
            result = sub_141b28ce0(&arg3[0x14])
            
            if (result.b != 0)
                int128_t zmm0_1 = *(arg3 + 0x14)
                var_38 = 0
                var_28 = zmm0_1
                int32_t var_30_1 = 0
                void*** rax_13 = sub_1405978f0(0x28, &var_38)
                
                if (rax_13 != 0)
                    int128_t zmm0_2 = var_28
                    *rax_13 = &data_1430840a0
                    *(rax_13 + 8) = zmm0_2
                    rax_13[4] = sub_140a387b0()
                
                void* rbx_7 = *arg2 + zx.q(arg4) * 0x28
                *(rbx_7 + 8) = *arg3
                sub_1407473e0(rbx_7 + 0x20, &var_38)
                
                if (rbx_7 + 0x10 != &var_28)
                    *(rbx_7 + 0x10) = 0
                    int64_t* rcx_20 = *(rbx_7 + 0x18)
                    *(rbx_7 + 0x18) = 0
                    
                    if (rcx_20 != 0)
                        int32_t temp4_1 = *(rcx_20 + 0xc)
                        *(rcx_20 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rcx_20 + 8))(rcx_20, 1)
                
                result = sub_140745b20(&var_38)
int64_t* rbx_9 = arg2[1]

if (rbx_9 != 0)
    rbx_9[1].d -= 1
    
    if (rbx_9[1].d == 1)
        result = (**rbx_9)(rbx_9)
        int32_t temp1_1 = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_9 + 8))

return result
