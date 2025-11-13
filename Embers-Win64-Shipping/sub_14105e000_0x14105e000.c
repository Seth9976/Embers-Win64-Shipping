// 函数: sub_14105e000
// 地址: 0x14105e000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
uint64_t result = __security_cookie ^ &var_78
uint64_t result_1 = result

if (*(arg1 + 0x169) == 0)
    sub_141062d30(arg1 + 0x128, 0x60, 0)
    
    if (*(arg1 + 0x169) == 0)
        int128_t* rax_2 = *(arg1 + 0x138) + *(arg1 + 0x160)
        *rax_2 = *arg2
        rax_2[1] = arg2[1]
        rax_2[2] = arg2[2]
        rax_2[3] = arg2[3]
        rax_2[4] = arg2[4]
        rax_2[5] = arg2[5]
        *(arg1 + 0x160) += 0x60
    
    void* rcx_1 = *arg2
    int64_t* rcx_2
    
    if (rcx_1 != 0)
        rcx_2 = *(rcx_1 + 0x80)
    
    int64_t rsi_1
    
    if (rcx_1 == 0 || rcx_2 == 0)
        rsi_1 = 0
    else
        rsi_1 = (*(*rcx_2 + 0x20))(rcx_2)
    
    sub_141062d30(arg1 + 0x128, 8, 0)
    
    if (*(arg1 + 0x169) == 0)
        *(*(arg1 + 0x138) + *(arg1 + 0x160)) = rsi_1
        *(arg1 + 0x160) += 8
    
    if (rsi_1 != 0)
        double var_50[0x2]
        sub_14104c100(*(arg1 + 8) + 0x1a0, &var_50, *arg2)
        sub_141062d30(arg1 + 0x128, 0x20, 0)
        
        if (*(arg1 + 0x169) == 0)
            double (* rax_8)[0x2] = *(arg1 + 0x138) + *(arg1 + 0x160)
            *rax_8 = var_50
            int128_t var_40
            rax_8[1] = var_40
            *(arg1 + 0x160) += 0x20
    
    HANDLE rsi_2 = *(arg2 + 0x18)
    
    if (rsi_2 != 0)
        int64_t rdi_1 = arg2[1].q
        sub_141062d30(arg1 + 0x128, rsi_2, 0)
        
        if (*(arg1 + 0x169) == 0)
            memcpy(*(arg1 + 0x138) + *(arg1 + 0x160), rdi_1, rsi_2.d)
            *(arg1 + 0x160) += rsi_2
    
    if (*(arg3 + 0x28) == 0)
        sub_141026e90(arg3)
    else
        *(arg3 + 0x10)
    
    sub_14106a390(arg1, 1)
    int32_t rax_11 = *(arg1 + 0x160)
    *(arg1 + 0x170) += 1
    result = zx.q(rax_11 - 0xc)
    bool cond:1_1 = *(arg1 + 0x150) == 0
    *(arg1 + 0x174) = result.d
    
    if (not(cond:1_1) && *(arg1 + 0x169) == 0)
        int64_t* rcx_12 = *(arg1 + 0x138)
        *rcx_12 = *(arg1 + 0x16c)
        rcx_12[1].d = *(arg1 + 0x174)
        result = FlushViewOfFile(*(arg1 + 0x150), *(arg1 + 0x160))

__security_check_cookie(result_1 ^ &var_78)
return result
