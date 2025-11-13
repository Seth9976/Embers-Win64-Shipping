// 函数: sub_1425f1bd0
// 地址: 0x1425f1bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_658
int64_t result = __security_cookie ^ &var_658
int64_t result_1 = result

if (*(arg1 + 0x48) != 0)
    if (*(arg1 + 0x1768) != 0)
        *(arg1 + 0x1770)
        *(arg1 + 0x1770) = 1
        sub_140a81580(*(arg1 + 0x1768))
    
    void* rdi_1 = arg1 + 0x1600
    int64_t i_1 = 3
    int64_t i
    
    do
        sub_1425f17c0(arg1, rdi_1 - 0x60)
        int64_t rdx_2 = *(rdi_1 - 8)
        
        if (rdx_2 != 0)
            (*(*(arg1 + 0x50) + 0x80))(*(arg1 + 0x58), rdx_2)
            *(rdi_1 - 8) = 0
        
        int64_t rsi_1 = *rdi_1
        
        if (rsi_1 != 0)
            int32_t var_638
            memset(&var_638, 0, 0x608)
            int64_t rax_3 = *(arg1 + 0x50)
            int64_t rcx_4 = *(arg1 + 0x58)
            var_638 = 0x71010008
            int64_t var_630_1 = rsi_1
            (*(rax_3 + 0xc8))(rcx_4, &var_638)
            CloseHandle(*rdi_1)
            *rdi_1 = 0
        
        rdi_1 += 0x98
        i = i_1
        i_1 -= 1
    while (i != 1)
    int64_t rcx_6 = *(arg1 + 0x58)
    
    if (rcx_6 != 0)
        (*(*(arg1 + 0x50) + 0xe0))(rcx_6)
        *(arg1 + 0x58) = 0
    
    result = FreeLibrary(*(arg1 + 0x48))
    *(arg1 + 0x48) = 0

__security_check_cookie(result_1 ^ &var_658)
return result
