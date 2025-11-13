// 函数: sub_140ba89e0
// 地址: 0x140ba89e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
uint64_t result = __security_cookie ^ &var_e8
uint64_t result_1 = result
int32_t r8 = *(arg2 + 0xc)
int32_t rcx = *(arg2 + 8)

if (rcx != 0)
    int32_t var_c8
    int32_t rax_11
    int64_t* rcx_7
    
    if (r8 == 0)
        if (rcx s>= 0)
            rax_11 = rcx - 1
            rcx_7 = arg1 + 0x260
        label_140ba8c03:
            var_c8 = rax_11
            result = sub_140bab850(rcx_7, &var_c8)
        else
            var_c8 = not.d(rcx)
            result = sub_140bab850(arg1 + 0x240, &var_c8)
    else if (r8 == 1)
        int32_t* rdx_2 = &var_c8
        
        if (rcx s>= 0)
            var_c8 = rcx - 1
            result = sub_140bab850(arg1 + 0x280, rdx_2)
        else
            var_c8 = not.d(rcx)
            result = sub_140bab850(arg1 + 0x250, rdx_2)
    else if (r8 == 2)
        rax_11 = rcx - 1
        rcx_7 = arg1 + 0x270
        goto label_140ba8c03
    
    if (*(arg1 + 0x238) == 6)
        result = sub_140b9d980(arg1)
else
    int64_t var_c0_1
    int64_t (* rcx_1)(int64_t* arg1, int64_t* arg2)
    int32_t rdx
    int32_t rbx_1
    int64_t rsi_1
    int32_t rdi_1
    
    if (r8 == 1)
        int64_t rax_3 = *(arg1 + 0x14)
        rsi_1 = *(arg1 + 0x1d8)
        rdi_1 = *(arg1 + 0x23c)
        *(arg1 + 0x238) = 4
        rbx_1 = *(arg1 + 0x44)
        var_c0_1 = rax_3
        
        if (data_143e1a350 == 0)
            rdx = rdi_1
        else
            rdx = sub_140baa830(0x7fffffff)
        
        rcx_1 = &data_140b9bed0
    label_140ba8ac8:
        void** const var_88 = &data_142e345d8
        int32_t rax_6 = *(rsi_1 + 0x328) + 1
        int32_t var_64_1 = rdx
        int64_t (* var_58_1)(int64_t* arg1, int64_t* arg2) = rcx_1
        int32_t var_60_1 = 0
        int128_t* var_48_1 = nullptr
        
        if (rcx_1 != 0)
            rcx_1 = nullptr
        
        void*** var_98_1 = nullptr
        int32_t var_b8_1 = rdi_1
        int128_t zmm0
        zmm0.q = var_c0_1
        *(rsi_1 + 0x328) = rax_6
        int32_t var_68 = rbx_1
        uint128_t zmm1 = zmm0
        zmm0 = var_88.o
        zmm1 = _mm_unpacklo_pd(zmm1, rsi_1)
        int128_t var_80_1 = zmm1
        uint128_t var_28_1 = zmm1
        int32_t var_5c_1 = rax_6
        int128_t var_38 = zmm0
        result = sub_140b93350(rsi_1 + 0x330, &var_68)
        
        if (var_58_1 != 0)
            int128_t* rcx_3 = &var_38
            
            if (var_48_1 != 0)
                rcx_3 = var_48_1
            
            result = (*(*rcx_3 + 0x10))(rcx_3)
        
        if (rcx_1 != 0)
            void** const* rcx_4 = &var_88
            
            if (var_98_1 != 0)
                rcx_4 = var_98_1
            
            result = (*rcx_4)[2](rcx_4)
    else if (r8 == 2)
        rsi_1 = *(arg1 + 0x1d8)
        rdi_1 = *(arg1 + 0x23c)
        rbx_1 = *(arg1 + 0x44)
        var_c0_1 = *(arg1 + 0x14)
        
        if (data_143e1a350 == rcx)
            rdx = rdi_1
            rcx_1 = j_sub_140b98f30
        else
            rdx = sub_140baa830(0x7fffffff)
            rcx_1 = j_sub_140b98f30
        
        goto label_140ba8ac8

__security_check_cookie(result_1 ^ &var_e8)
return result
