// 函数: sub_141afd710
// 地址: 0x141afd710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[4].b == 0
void** const result = &data_1430507f0
*arg1 = &data_1430507f0

if (not(cond:0))
    result = sub_140d3c6e0(&arg1[1])
    
    if (result != 0)
        int64_t rdx_1 = arg1[2]
        
        if (rdx_1 != 0)
            void* r9_1 = *result
            (*(r9_1 + 0x2a8))(result, rdx_1, 1, r9_1)
        
        void** result_1
        sub_140d3a3a0(&result_1, nullptr)
        result = result_1
        arg1[1] = result
    
    int64_t rcx_3 = arg1[2]
    
    if (rcx_3 != 0)
        result = sub_140a74f90(rcx_3)
        arg1[2] = 0

return result
