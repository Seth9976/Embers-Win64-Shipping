// 函数: sub_142378b90
// 地址: 0x142378b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x120)
uint64_t result

if (rcx != 0)
    if (data_143de5432 != 0 || *(arg1 + 0x50) == 0)
        (*(*rcx + 0x20))()
    
    int32_t rdi_1
    rdi_1.b = data_143f138f4 == 0
    
    if (((*(arg1 + 8) u>> 0xf).b & 1) != 0)
        int64_t* rcx_1 = *(arg1 + 0x120)
        
        if ((*(*rcx_1 + 0x28))(rcx_1) == 2)
            rdi_1 = 4
    
    sub_14239a540(*(arg1 + 0x120), rdi_1)
    
    if (*(*(arg1 + 0x120) + 0x58) != 0)
        result.b = 1
        return result
    
    int64_t* rcx_4 = *(arg1 + 0x120)
    *(arg1 + 0x120) = 0
    
    if (rcx_4 != 0)
        sub_142394bb0(rcx_4)

result.b = 0
return result
