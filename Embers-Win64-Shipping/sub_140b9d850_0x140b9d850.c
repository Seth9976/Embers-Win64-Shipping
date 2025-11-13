// 函数: sub_140b9d850
// 地址: 0x140b9d850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
int64_t result = QueryPerformanceCounter(&performanceCount)

if (*(arg1 + 0xc8) != 0)
    result = sub_140ba9200(arg1)

if ((*(arg1 + 0x29) & 1) == 0)
    void* rcx_2 = *(arg1 + 0xb8)
    result = *(rcx_2 + 0x10)
    
    if (*(rcx_2 + 0x63) == 0 || result == 0)
        *(rcx_2 + 0x10) = 0
    
    if ((*(rcx_2 + 0x63) == 0 || result == 0) && result != 0)
        int64_t rcx_3 = *(arg1 + 0xf0)
        *(arg1 + 0xe0) = rcx_3
        int64_t rcx_4 = rcx_3 + *(arg1 + 0xf8)
        bool cond:0_1 = *(arg1 + 0x110) == 4
        *(arg1 + 0xc8) = result
        *(arg1 + 0xe8) = rcx_4
        
        if (not(cond:0_1))
            int64_t* rcx_5 = *(arg1 + 0x90)
            result = (*(*rcx_5 + 0x18))(rcx_5)
            
            if (result.b != 0)
                sub_140b9d7f0(arg1)
                int32_t rax_1 = data_143e1a334
                int32_t r9_1
                
                if (rax_1 s>= 0)
                    r9_1 = 5
                    
                    if (rax_1 s< 5)
                        r9_1 = rax_1
                else
                    r9_1 = 0
                
                int64_t* rcx_7 = *(arg1 + 0x90)
                result = (*(*rcx_7 + 0x10))(rcx_7, *(arg1 + 0xe8) - *(arg1 + 0x108) - 1, 1, 
                    zx.q(r9_1) | 0x100, 0, 0)
                *(arg1 + 0xc0) = result
    else
        *(arg1 + 0x29) |= 1

int64_t* rcx_8 = *(arg1 + 0xb8)

if (rcx_8 != 0)
    result = (**rcx_8)(rcx_8, 1)

*(arg1 + 0xb8) = 0
*(arg1 + 0xf0) = 0
*(arg1 + 0xf8) = 0
return result
