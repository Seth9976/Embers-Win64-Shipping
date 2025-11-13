// 函数: sub_14105e1e0
// 地址: 0x14105e1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
uint64_t result = __security_cookie ^ &var_88
uint64_t result_1 = result

if (*(arg1 + 0x109) == 0)
    sub_141062d30(arg1 + 0xc8, 0x300, 0)
    
    if (*(arg1 + 0x109) == 0)
        int128_t* rcx_1 = arg2
        void* rax_2 = *(arg1 + 0xd8) + *(arg1 + 0x100)
        int64_t i_2 = 6
        int64_t i
        
        do
            rax_2 += 0x80
            int128_t zmm0_1 = *rcx_1
            rcx_1 = &rcx_1[8]
            *(rax_2 - 0x80) = zmm0_1
            *(rax_2 - 0x70) = rcx_1[-7]
            *(rax_2 - 0x60) = rcx_1[-6]
            *(rax_2 - 0x50) = rcx_1[-5]
            *(rax_2 - 0x40) = rcx_1[-4]
            *(rax_2 - 0x30) = rcx_1[-3]
            *(rax_2 - 0x20) = rcx_1[-2]
            *(rax_2 - 0x10) = rcx_1[-1]
            i = i_2
            i_2 -= 1
        while (i != 1)
        *(arg1 + 0x100) += 0x300
    
    void* rcx_2 = *arg2
    int64_t* rcx_3
    
    if (rcx_2 != 0)
        rcx_3 = *(rcx_2 + 0x80)
    
    int64_t rsi_1
    
    if (rcx_2 == 0 || rcx_3 == 0)
        rsi_1 = 0
    else
        rsi_1 = (*(*rcx_3 + 0x20))(rcx_3)
    
    sub_141062d30(arg1 + 0xc8, 8, 0)
    
    if (*(arg1 + 0x109) == 0)
        *(*(arg1 + 0xd8) + *(arg1 + 0x100)) = rsi_1
        *(arg1 + 0x100) += 8
    
    if (rsi_1 != 0)
        double var_60[0x2]
        sub_14104c100(*(arg1 + 8) + 0x1a0, &var_60, *arg2)
        sub_141062d30(arg1 + 0xc8, 0x20, 0)
        
        if (*(arg1 + 0x109) == 0)
            double (* rax_8)[0x2] = *(arg1 + 0xd8) + *(arg1 + 0x100)
            *rax_8 = var_60
            int128_t var_50
            rax_8[1] = var_50
            *(arg1 + 0x100) += 0x20
    
    int32_t rax_9 = arg2[0x43].d
    
    if (rax_9 != 0)
        int64_t rbp_1 = arg2[0x42]
        uint64_t rsi_3 = zx.q(rax_9) << 5
        sub_141062d30(arg1 + 0xc8, rsi_3, 0)
        
        if (*(arg1 + 0x109) == 0)
            memcpy(*(arg1 + 0xd8) + *(arg1 + 0x100), rbp_1, rsi_3.d)
            *(arg1 + 0x100) += rsi_3
        
        int32_t i_1 = 0
        
        if (arg2[0x43].d u> 0)
            do
                uint64_t r14_2 = zx.q(i_1) << 5
                char* _String = *(r14_2 + arg2[0x42])
                int32_t rax_11
                
                if (_String != 0)
                    rax_11 = strnlen(_String, 0xff)
                else
                    rax_11 = 0
                
                HANDLE rbp_2 = zx.q(rax_11 + 1)
                sub_141062d30(arg1 + 0xc8, 4, 0)
                
                if (*(arg1 + 0x109) == 0)
                    *(*(arg1 + 0xd8) + *(arg1 + 0x100)) = rbp_2.d
                    *(arg1 + 0x100) += 4
                
                int64_t r14_3 = *(r14_2 + arg2[0x42])
                sub_141062d30(arg1 + 0xc8, rbp_2, 0)
                
                if (*(arg1 + 0x109) == 0)
                    memcpy(*(arg1 + 0xd8) + *(arg1 + 0x100), r14_3, rbp_2.d)
                    *(arg1 + 0x100) += rbp_2
                
                i_1 += 1
            while (i_1 u< arg2[0x43].d)
    
    HANDLE rsi_4 = arg2[3]
    
    if (rsi_4 != 0)
        int64_t rbp_3 = arg2[2]
        sub_141062d30(arg1 + 0xc8, rsi_4, 0)
        
        if (*(arg1 + 0x109) == 0)
            memcpy(*(arg1 + 0xd8) + *(arg1 + 0x100), rbp_3, rsi_4.d)
            *(arg1 + 0x100) += rsi_4
    
    HANDLE rsi_5 = arg2[5]
    
    if (rsi_5 != 0)
        int64_t rbp_4 = arg2[4]
        sub_141062d30(arg1 + 0xc8, rsi_5, 0)
        
        if (*(arg1 + 0x109) == 0)
            memcpy(*(arg1 + 0xd8) + *(arg1 + 0x100), rbp_4, rsi_5.d)
            *(arg1 + 0x100) += rsi_5
    
    HANDLE rsi_6 = arg2[7]
    
    if (rsi_6 != 0)
        int64_t rbp_5 = arg2[6]
        sub_141062d30(arg1 + 0xc8, rsi_6, 0)
        
        if (*(arg1 + 0x109) == 0)
            memcpy(*(arg1 + 0xd8) + *(arg1 + 0x100), rbp_5, rsi_6.d)
            *(arg1 + 0x100) += rsi_6
    
    HANDLE rsi_7 = arg2[9]
    
    if (rsi_7 != 0)
        int64_t rbp_6 = arg2[8]
        sub_141062d30(arg1 + 0xc8, rsi_7, 0)
        
        if (*(arg1 + 0x109) == 0)
            memcpy(*(arg1 + 0xd8) + *(arg1 + 0x100), rbp_6, rsi_7.d)
            *(arg1 + 0x100) += rsi_7
    
    HANDLE rsi_8 = arg2[0xb]
    
    if (rsi_8 != 0)
        int64_t rdi_1 = arg2[0xa]
        sub_141062d30(arg1 + 0xc8, rsi_8, 0)
        
        if (*(arg1 + 0x109) == 0)
            memcpy(*(arg1 + 0xd8) + *(arg1 + 0x100), rdi_1, rsi_8.d)
            *(arg1 + 0x100) += rsi_8
    
    if (*(arg3 + 0x28) == 0)
        sub_141026e90(arg3)
    else
        *(arg3 + 0x10)
    
    sub_14106a390(arg1, 0)
    int32_t rax_17 = *(arg1 + 0x100)
    *(arg1 + 0x110) += 1
    result = zx.q(rax_17 - 0xc)
    bool cond:1_1 = *(arg1 + 0xf0) == 0
    *(arg1 + 0x114) = result.d
    
    if (not(cond:1_1) && *(arg1 + 0x109) == 0)
        int64_t* rcx_32 = *(arg1 + 0xd8)
        *rcx_32 = *(arg1 + 0x10c)
        rcx_32[1].d = *(arg1 + 0x114)
        result = FlushViewOfFile(*(arg1 + 0xf0), *(arg1 + 0x100))

__security_check_cookie(result_1 ^ &var_88)
return result
