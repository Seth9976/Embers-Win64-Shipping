// 函数: sub_1421b34f0
// 地址: 0x1421b34f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x28)
void* result = *(rbx + 0x50)

if (*(result + 0xa8) s> 0)
    int32_t i = 0
    char* r9_1 = nullptr
    int64_t r10_1 = 0
    void* result_1
    
    do
        int64_t rdx_1 = sx.q(*(rbx + 0x28))
        result_1 = result
        
        if (rdx_1.d s< *(arg1 + 0x168))
            int64_t* rdx_3 = (rdx_1 << 4) + *(arg1 + 0x160)
            
            if (i s< rdx_3[1].d && not(*(*(result + 0xa0) + r10_1 + 8) f> *(arg1 + 0x12c)))
                r9_1[*rdx_3] = 1
                result_1 = *(rbx + 0x50)
        
        i += 1
        r9_1 = &r9_1[1]
        r10_1 += 0xc
        result = result_1
    while (i s< *(result_1 + 0xa8))

return result
