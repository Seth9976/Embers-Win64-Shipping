// 函数: sub_1419edfc0
// 地址: 0x1419edfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_1 = sub_140d3c6e0(arg1 + 0x46c)
void* result = result_1

if (result_1 != 0)
label_1419ee04b:
    void* rax_7 = sub_141a203c0()
    void* rdx_2 = *(result + 0x10)
    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
    
    if (rax_8.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
        return result
else if ((*(arg1 + 0x484) | *(arg1 + 0x480) | *(arg1 + 0x47c) | *(arg1 + 0x478)) != 0)
    int32_t rax_4 = 0
    
    if (0 == data_1439a9d84)
        data_1439a9d84 = 0
    else
        rax_4 = data_1439a9d84
    
    if (rax_4 != *(arg1 + 0x474) || *(arg1 + 0x46c) != 0xffffffff)
        void* rax_5 = sub_140ccdeb0(arg1 + 0x478)
        sub_140d3a3a0(arg1 + 0x46c, rax_5)
        
        if (rax_5 != 0 || data_143e1d7b4 == 0)
            int32_t rax_6 = 0
            
            if (0 == data_1439a9d84)
                data_1439a9d84 = 0
            else
                rax_6 = data_1439a9d84
            
            *(arg1 + 0x474) = rax_6
        
        void* result_2 = sub_140d3c6e0(arg1 + 0x46c)
        result = result_2
        
        if (result_2 != 0)
            goto label_1419ee04b

return nullptr
