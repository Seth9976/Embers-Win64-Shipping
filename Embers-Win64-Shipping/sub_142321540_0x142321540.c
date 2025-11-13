// 函数: sub_142321540
// 地址: 0x142321540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x348)
uint64_t result

if (rcx != 0)
    int64_t* r8_1
    
    if (data_143de5432 == 0)
        r8_1 = rcx
    
    if (data_143de5432 != 0 || *(arg1 + 0x58) == 0)
        (*(*rcx + 0x20))()
        rcx = *(arg1 + 0x348)
        r8_1 = rcx
    
    int32_t rdx_1
    rdx_1.b = data_143f138f4 == 0
    
    if (((*(arg1 + 8) u>> 0xf).b & 1) != 0)
        int32_t rax_3
        
        if (*(rcx + 0x54) == 0)
            rax_3 = rcx[0xc].d
        else
            rax_3 = rcx[0x16].d
        
        r8_1 = rcx
        
        if (rax_3 == 2)
            rdx_1 = rax_3
    
    sub_14239a540(r8_1, rdx_1)
    
    if (*(*(arg1 + 0x348) + 0x58) != 0)
        result.b = 1
        return result
    
    int64_t* rcx_3 = *(arg1 + 0x348)
    *(arg1 + 0x348) = 0
    
    if (rcx_3 != 0)
        sub_142394bb0(rcx_3)

result.b = 0
return result
