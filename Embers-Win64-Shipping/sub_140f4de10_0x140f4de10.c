// 函数: sub_140f4de10
// 地址: 0x140f4de10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = *(arg1 + 0x2a8) ^ data_142d3f780
int32_t rbp = 0
int32_t result = (**(arg1 + 0x2b0))(arg1 + 0x2b0)

if (result s> 0)
    void** r14_1 = nullptr
    
    do
        void* rsi_1 = *(r14_1 + *(arg1 + 0x2c0))
        char* rbx_2 = *(rsi_1 + 0x10) + 0x1a8
        
        if (*(rbx_2 + 0x10) != 0)
            int64_t* rcx_1 = *(rbx_2 + 8)
            
            if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
                int64_t* rcx_2
                
                if (*(rbx_2 + 0x10) == 0)
                    rcx_2 = nullptr
                else
                    rcx_2 = *(rbx_2 + 8)
                
                char arg_8
                (*(*rcx_2 + 0x48))(rcx_2, &arg_8)
                *rbx_2 = arg_8
        
        if (*rbx_2 != data_1439ae51d)
            int32_t var_48_1 = zmm6.d
            int128_t zmm0_1
            
            if (*(arg1 + 0x2d8) != 1)
                zmm0_1 = sub_140f2b790(arg1, arg2, arg3, rsi_1, var_48_1)
            else
                zmm0_1 = sub_140f2bb80(arg1, arg2, arg3, rsi_1, var_48_1)
            
            zmm6 = zmm0_1
        
        rbp += 1
        r14_1 = &r14_1[1]
        result = (**(arg1 + 0x2b0))(arg1 + 0x2b0)
    while (rbp s< result)

return result
