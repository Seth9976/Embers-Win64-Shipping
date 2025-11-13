// 函数: sub_14216af80
// 地址: 0x14216af80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_1 = arg5
int64_t* r14 = arg4

for (void* i = *(i_1 + 0x40); i != 0; i = *(i + 0x40))
    i_1 = i

int32_t rcx = *(i_1 + 0xb0)
void** result

if ((not.b((rcx u>> 7).b) & 1) != 0 && (not.b((rcx u>> 0xe).b) & 1) != 0)
    result = (*(*arg4 + 0x2b8))(r14, 0)

if ((not.b((rcx u>> 7).b) & 1) == 0 || (not.b((rcx u>> 0xe).b) & 1) == 0 || result.d != 0)
    result = (*(*r14 + 0x268))(r14)
    
    if (result != 0)
        r14 = r14[0x346]
    
    if (*(r14 + 0x134) != 1 && arg1[0x28] != 0)
        int64_t* r13_1 = arg2
        
        if (arg3 != 0)
            r13_1 = arg3
        
        result = sub_140bdcf70(arg1[0x2c], r13_1[2])
        void** result_1 = result
        
        if (result != 0)
            void** result_2 = result
            
            while (true)
                result = sub_140865c40(&result_2[6], &arg5, i_1)
                int64_t rcx_6 = sx.q(arg5.d)
                void* rsi_1
                
                if (rcx_6.d != 0xffffffff)
                    result = result_2[6]
                    rsi_1 = &result[rcx_6 * 3]
                
                void* const rsi_2
                
                if (rcx_6.d == 0xffffffff || rsi_1 == 0)
                    rsi_2 = nullptr
                label_14216b09f:
                    result_2 = result_2[1]
                    
                    if (result_2 != 0)
                        continue
                    else if (rsi_2 == 0)
                        break
                else
                    rsi_2 = *(rsi_1 + 8)
                    
                    if (rsi_2 == 0)
                        goto label_14216b09f
                
                void var_40
                sub_140d3a3a0(&var_40, arg2)
                result = sub_141fb2e20(r14, &var_40)
                void** result_3 = result
                
                if (result != 0)
                    return sub_142171010(arg1, result_3, result_1, rsi_2, r13_1, r14, i_1, arg6, 
                        arg7, arg8, arg9, 0)
                
                if (arg9 != 0)
                    result = sub_141dce620(arg2)
                    
                    if (result.b == 0)
                        result = (*(*arg1 + 0x3c8))(arg1, arg2, r14)
                        
                        if (result.b != 0)
                            int32_t var_48 = *sub_140b5e500(&arg5, (result_3 + 0x66).d)
                            int32_t var_44_1 = result_3.d
                            result = sub_14213fce0(r14, &var_48, (result_3 + 2).d, (result_3 - 1).d)
                            
                            if (result != 0)
                                sub_141f9b710(result, arg2, 0)
                                return sub_142171010(arg1, result, result_1, rsi_2, r13_1, r14, 
                                    i_1, arg6, arg7, arg8, arg9, 0)
                
                break

return result
