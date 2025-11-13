// 函数: sub_142602500
// 地址: 0x142602500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x60)

if (rdi != 0)
    int64_t rcx = *rdi
    
    if (rcx != 0)
        data_143b50298(rcx)
    
    int64_t rcx_1 = rdi[2]
    
    if (rcx_1 != 0)
        data_143b50298(rcx_1)
    
    int64_t rcx_2 = rdi[1]
    
    if (rcx_2 != 0)
        data_143b50298(rcx_2)

int64_t* rdi_1 = *(arg1 + 0x68)

if (rdi_1 != 0)
    int64_t rcx_3 = *rdi_1
    
    if (rcx_3 != 0)
        data_143b50298(rcx_3)
    
    int64_t rcx_4 = rdi_1[2]
    
    if (rcx_4 != 0)
        data_143b50298(rcx_4)
    
    int64_t rcx_5 = rdi_1[1]
    
    if (rcx_5 != 0)
        data_143b50298(rcx_5)

int64_t* result = *(arg1 + 0x70)

if (result != 0)
    int64_t rcx_6 = *result
    
    if (rcx_6 != 0)
        result = data_143b50298(rcx_6)

int64_t rcx_7 = *(arg1 + 0x60)

if (rcx_7 != 0)
    result = data_143b50298(rcx_7)

int64_t rcx_8 = *(arg1 + 0x68)

if (rcx_8 != 0)
    result = data_143b50298(rcx_8)

int64_t rcx_9 = *(arg1 + 0x70)

if (rcx_9 == 0)
    return result

return data_143b50298(rcx_9)
