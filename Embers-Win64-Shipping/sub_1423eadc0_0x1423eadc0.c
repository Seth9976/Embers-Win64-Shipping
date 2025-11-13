// 函数: sub_1423eadc0
// 地址: 0x1423eadc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_141dee490()
void* result = (*(*arg1 + 0x150))(arg1)

if (result != 0)
    sub_142441a10((*(*arg1 + 0x150))(arg1), &arg1[0x4b])
    result = (*(*arg1 + 0x150))(arg1)
    void* result_1 = result
    int64_t* r9_1 = *(result + 0x4f8)
    int64_t r10_1 = sx.q(*(result + 0x500))
    int64_t* rcx_4 = r9_1
    void* r8_1 = &r9_1[r10_1]
    
    if (r9_1 != r8_1)
        while (*rcx_4 != &arg1[0x4b])
            rcx_4 = &rcx_4[1]
            
            if (rcx_4 == r8_1)
                return result
        
        int32_t rcx_6 = ((rcx_4 - r9_1) s>> 3).d
        
        if (rcx_6 != 0xffffffff)
            void* r9_2 = &r9_1[sx.q(rcx_6)]
            result = memmove(r9_2, r9_2 + 8, (r10_1.d - rcx_6 - 1) << 3)
            *(result_1 + 0x500) -= 1

return result
