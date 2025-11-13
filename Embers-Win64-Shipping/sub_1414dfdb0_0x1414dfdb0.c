// 函数: sub_1414dfdb0
// 地址: 0x1414dfdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1414e09c0(*(arg1 + 8), arg1 + 0x10)
int32_t rcx_1 = *(arg1 + 0xa8)
int32_t i_1 = 0

if (result.b == 0)
    int32_t i = 0
    
    if (rcx_1 s> 0)
        int64_t rbp_3 = 0
        
        do
            result = *(arg1 + 0xa0)
            void* rdx_4 = *(result + rbp_3 + 0x15a8)
            
            if (rdx_4 != 0)
                int64_t* rcx_7 = *(rdx_4 + 0xd38)
                *(rdx_4 + 0xd38) = 0
                
                if (rcx_7 != 0)
                    result = (*(*rcx_7 + 0x38))(rcx_7, rdx_4)
            
            i += 1
            rbp_3 += 0x5240
        while (i s< *(arg1 + 0xa8))
else if (rcx_1 s> 0)
    int64_t rsi_1 = 0
    
    do
        int64_t* rbp_2 = *(arg1 + 0xa0) + rsi_1
        int32_t var_88[0x1c]
        sub_1414dff10(rbp_2, &var_88)
        int64_t* rcx_3 = data_143f0f180
        void* arg_8
        (*(*rcx_3 + 0xf8))(rcx_3, &arg_8, &var_88, &data_143ee9600, 1, 1)
        void* rax_1 = arg_8
        void* arg_10 = rax_1
        
        if (rax_1 != 0)
            *(rax_1 + 8) += 1
        
        sub_1405d1550(&arg_8)
        sub_1405d1600(&rbp_2[0xa0f], &arg_10)
        result = sub_1405d1550(&arg_10)
        i_1 += 1
        rsi_1 += 0x5240
    while (i_1 s< *(arg1 + 0xa8))

return result
