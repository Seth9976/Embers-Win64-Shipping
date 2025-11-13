// 函数: sub_14100e450
// 地址: 0x14100e450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (void* i = *(arg1 + 8); i != 0; i = *(arg1 + 8))
    *(arg1 + 8) = **(arg1 + 8)
    
    if (i != 0)
        void* rcx_1 = *(i + 0x10)
        *(i + 8) = &data_142efcd90
        
        if (rcx_1 != 0)
            int32_t rax_1 = *(rcx_1 + 0x14)
            *(rcx_1 + 0x14) -= 1
            
            if (rax_1 == 1)
                int64_t* rcx_2 = *(i + 0x10)
                
                if (rcx_2 != 0)
                    sub_141011360(rcx_2, rax_1.b)
        
        j_sub_140a74f90(i)
