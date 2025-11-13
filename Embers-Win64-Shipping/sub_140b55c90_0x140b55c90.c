// 函数: sub_140b55c90
// 地址: 0x140b55c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b508e0()
AcquireSRWLockExclusive(&data_143de8578)
int128_t var_18 = *arg1

if (sub_140b523d0(&data_143de8590, &var_18) == 0)
    void* r9_1 = data_143de8580
    void* rax_1 = r9_1
    void* r8_3 = (sx.q(data_143de8588.d) << 5) + r9_1
    int32_t rax_2
    
    if (r9_1 == r8_3)
    label_140b55d3a:
        rax_2 = -1
    else
        int64_t rsi_1 = var_18.q
        int64_t rbp_1 = var_18:8.q
        
        while (true)
            int32_t rdx_5 = (*(rax_1 + 0xc) ^ (rbp_1 u>> 0x20).d)
                | (*(rax_1 + 4) ^ (rsi_1 u>> 0x20).d) | (*(rax_1 + 8) ^ rbp_1.d)
                | (*rax_1 ^ rsi_1.d)
            
            if (rdx_5 == 0)
                rax_2 = ((rax_1 - r9_1) s>> 5).d
                break
            
            rax_1 += 0x20
            
            if (rax_1 == r8_3)
                goto label_140b55d3a
    
    int64_t rcx_6 = data_143de8580
    int64_t r9_3 = sx.q(rax_2) << 5
    int32_t temp0_1 = *(r9_3 + rcx_6 + 0x14)
    *(r9_3 + rcx_6 + 0x14) -= 1
    
    if (temp0_1 == 1)
        int32_t rdx_6 = data_143de8588.d
        int32_t rcx_9 = rdx_6 - rax_2 - 1
        
        if (rcx_9 s>= 1)
            rcx_9 = 1
        
        if (rcx_9 != 0)
            int64_t rax_3 = data_143de8580
            memcpy(rax_3 + r9_3, (sx.q(rdx_6 - rcx_9) << 5) + rax_3, rcx_9 << 5)
            rdx_6 = data_143de8588.d
        
        data_143de8588.d = rdx_6 - 1
        sub_1405dad20(&data_143de8580)

return ReleaseSRWLockExclusive(&data_143de8578)
