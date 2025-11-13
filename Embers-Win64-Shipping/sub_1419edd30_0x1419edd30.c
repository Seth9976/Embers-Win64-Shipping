// 函数: sub_1419edd30
// 地址: 0x1419edd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_1 = sub_140d3c6e0(arg1 + 0x560)
void* result = result_1

if (result_1 != 0)
label_1419eddbb:
    void* rax_7 = sub_141a20880()
    void* rdx_2 = *(result + 0x10)
    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
    
    if (rax_8.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
        return result
else if ((*(arg1 + 0x578) | *(arg1 + 0x574) | *(arg1 + 0x570) | *(arg1 + 0x56c)) != 0)
    int32_t rax_4 = 0
    
    if (0 == data_1439a9d84)
        data_1439a9d84 = 0
    else
        rax_4 = data_1439a9d84
    
    if (rax_4 != *(arg1 + 0x568) || *(arg1 + 0x560) != 0xffffffff)
        void* rax_5 = sub_140ccdeb0(arg1 + 0x56c)
        sub_140d3a3a0(arg1 + 0x560, rax_5)
        
        if (rax_5 != 0 || data_143e1d7b4 == 0)
            int32_t rax_6 = 0
            
            if (0 == data_1439a9d84)
                data_1439a9d84 = 0
            else
                rax_6 = data_1439a9d84
            
            *(arg1 + 0x568) = rax_6
        
        void* result_2 = sub_140d3c6e0(arg1 + 0x560)
        result = result_2
        
        if (result_2 != 0)
            goto label_1419eddbb

return nullptr
