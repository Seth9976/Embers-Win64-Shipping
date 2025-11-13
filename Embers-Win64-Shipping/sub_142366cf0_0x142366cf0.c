// 函数: sub_142366cf0
// 地址: 0x142366cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result = sub_140cddf60(arg1, arg2)
void* rcx = data_143f5b298

if (rcx != 0)
    result = sub_1423ddb40(rcx)
    void** result_1 = result
    
    if (result != 0)
        void* r8_1 = *result
        
        if ((*(r8_1 + 0x88))(result, arg1, r8_1) == 0 || *(arg1 + 0x169) != 3)
            if (*(arg1 + 0x169) == 4 && arg1[0x4d] != 0)
                *(arg2 + 8) += sx.q(*(arg1 + 0x204)) << 0xe
            
            result = sub_14236bfb0(arg1, nullptr)
            
            if (result.b == 0)
                char* rax_3 = sub_141e5f7c0(nullptr)
                void* r9_1 = *result_1
                void arg_18
                int64_t* rax_4 = (*(r9_1 + 0x80))(result_1, &arg_18, arg1, r9_1)
                int64_t r9_2 = *arg1
                int64_t* rax_5 = (*(r9_2 + 0x338))(arg1, *rax_4, rax_3, r9_2)
                
                if (rax_5 != 0)
                    rax_5 = sub_140bc7f20(rax_5)
                
                result = sx.q(rax_5.d)
                *(arg2 + 8) += result
        else
            result = sx.q(*(arg1 + 0x274))
            *(arg2 + 8) += result

return result
