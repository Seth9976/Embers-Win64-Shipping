// 函数: sub_1418c0d30
// 地址: 0x1418c0d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[6])
void*** result = arg1[0xf]

if (result == 0)
    if (data_143efaf6c != result.d)
        void*** rax_1 = j_sub_140a82f30(0x28)
        void*** result_1
        
        if (rax_1 == 0)
            result_1 = result
        else
            result_1 = sub_1418b8750(rax_1, *arg1)
        
        arg1[0x15] = result_1
    
    void* rcx_4
    
    if (arg1[3].d s<= result.d)
    label_1418c0dcd:
        void* rax_3 = sub_1418bc9e0(&arg1[1], 1)
        arg1[0xf] = rax_3
        rcx_4 = rax_3
    else
        void*** result_2 = result
        
        while (true)
            void* rbp_1 = *(result_2 + arg1[2])
            sub_1418c4d80(rbp_1)
            
            if ((*(rbp_1 + 0x2d) & 0x20) != 0 && *(rbp_1 + 0x2c) == 0)
                arg1[0xf] = rbp_1
                rcx_4 = rbp_1
                break
            
            result = zx.q(result.d + 1)
            result_2 = &result_2[1]
            
            if (result.d s>= arg1[3].d)
                goto label_1418c0dcd
    
    sub_1418bc690(rcx_4)
    result = arg1[0xf]

if (arg1 != -0x30)
    LeaveCriticalSection(&arg1[6])

return result
