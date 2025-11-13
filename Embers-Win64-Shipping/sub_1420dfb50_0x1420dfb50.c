// 函数: sub_1420dfb50
// 地址: 0x1420dfb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 8)

if ((result[5].d & 0x40000) != 0)
    int32_t i = 0
    
    if (result[1].d s> 0)
        float* r10_1 = nullptr
        int64_t* rdx = nullptr
        
        do
            float zmm1 = *(arg1 + 0x10)
            
            if (*(arg1 + 0x18) != 0)
                zmm1 = zmm1 * *(*(rdx + *result) + 0x1308) * 0.00999999978f
            
            if (zmm1 >= 0.00999999978f)
                zmm1 = _mm_min_ss(zmm1, 0x40800000)
            else
                zmm1 = 0.00999999978f
            
            i += 1
            rdx = &rdx[1]
            *(r10_1 + *arg2) = zmm1
            r10_1 = &r10_1[1]
            result = *(arg1 + 8)
        while (i s< result[1].d)

return result
