// 函数: sub_14264c0b0
// 地址: 0x14264c0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t result = __security_cookie ^ &var_168
int64_t result_1 = result
void* rdi = *(arg1 + 0xa0)

if (not(9.99999975e-05f f> *(arg1 + 0x148)) && rdi != 0)
    TEB* gsbase
    
    if (data_143f71788
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f71788)
        
        if (data_143f71788 == 0xffffffff)
            sub_140b58170(&data_143f71780, "SmartLinkBroadcastTrace", 1)
            _Init_thread_footer(&data_143f71788)
    
    void var_118
    void var_b8
    sub_141eb54c0(&var_b8, data_143f71780, &var_118, 0, rdi)
    int32_t rdi_1 = 0
    int64_t var_100 = 0
    int32_t var_f8_1 = 0
    int64_t var_e0 = 0
    int32_t var_d8_1 = 0
    float var_d0
    sub_14265bbd0(arg1, &var_d0)
    float var_110
    sub_142657790(arg1, &var_110)
    float zmm3_1 = var_d0
    float var_10c
    float var_cc
    float zmm2_1 = var_cc - var_10c
    float zmm0_1 = zmm3_1 - var_110
    void* rax_3 = *(arg1 + 0xa8)
    float var_108
    float var_c8
    float zmm1_1 = var_c8 - var_108
    uint32_t r15_1 = zx.d(*(arg1 + 0x150))
    int32_t var_128 = 2
    zmm2_1 = zmm2_1 * zmm2_1 + zmm0_1 * zmm0_1 + zmm1_1 * zmm1_1
    zmm1_1 = *(arg1 + 0x148)
    float var_124_1 = zmm1_1
    void* var_148_1
    float var_f0
    int64_t* rdx_4
    int128_t* r8_3
    
    if (zmm2_1 <= zmm1_1 * zmm1_1 * 0.0625f)
        float var_e8_1 = (var_c8 + var_108) * 0.5f
        float var_ec_1 = (var_cc + var_10c) * 0.5f
        var_f0 = (zmm3_1 + var_110) * 0.5f
        
        if (rax_3 == 0)
            rax_3 = sub_141ee69e0(arg1)
        
        r8_3 = &var_f0
        rdx_4 = &var_100
    else
        if (rax_3 == 0)
            rax_3 = sub_141ee69e0(arg1)
        
        var_148_1.d = r15_1
        sub_141ec8580(rax_3, &var_100, &var_d0, &data_14399f720, var_148_1.d, &var_128, &var_b8, 
            &data_143f3a660)
        rax_3 = *(arg1 + 0xa8)
        r15_1 = zx.d(*(arg1 + 0x150))
        int32_t var_124_2 = *(arg1 + 0x148)
        var_128 = 2
        
        if (rax_3 == 0)
            rax_3 = sub_141ee69e0(arg1)
        
        r8_3 = &var_110
        rdx_4 = &var_e0
    
    var_148_1.d = r15_1
    sub_141ec8580(rax_3, rdx_4, r8_3, &data_14399f720, var_148_1.d, &var_128, &var_b8, 
        &data_143f3a660)
    int64_t* rsi_1 = nullptr
    int32_t result_2 = 0
    var_128.q = 0
    int32_t r12_1 = 0
    int32_t var_11c_1 = 0
    int32_t r15_2 = 0
    
    if (var_f8_1 s> 0)
        do
            void* rax_6 = j_sub_140d3c6e0(var_100 + sx.q(r15_2) * 0x18)
            
            if (rax_6 != 0)
                void* rax_7 = sub_14255d000()
                void* rcx_12 = *(rax_6 + 0x10)
                int64_t rdx_5 = sx.q(*(rax_7 + 0x38))
                
                if (rdx_5.d s<= *(rcx_12 + 0x38)
                        && *(*(rcx_12 + 0x30) + (rdx_5 << 3)) == rax_7 + 0x30)
                    int64_t rax_9 = *(rax_6 + 0x258)
                    var_f0.q = rax_9
                    
                    if (rax_9 != 0)
                        int64_t result_3 = sx.q(result_2)
                        result_2 = (result_3 + 1).d
                        
                        if (result_2 s> r12_1)
                            sub_1405a4d70(&var_128)
                            r12_1 = var_11c_1
                            rsi_1 = var_128.q
                        
                        rsi_1[result_3] = var_f0.q
            
            r15_2 += 1
        while (r15_2 s< var_f8_1)
    
    if (var_d8_1 s> 0)
        do
            void* rax_12 = j_sub_140d3c6e0(var_e0 + sx.q(rdi_1) * 0x18)
            
            if (rax_12 != 0)
                void* rax_13 = sub_14255d000()
                void* rcx_18 = *(rax_12 + 0x10)
                int64_t rdx_7 = sx.q(*(rax_13 + 0x38))
                
                if (rdx_7.d s<= *(rcx_18 + 0x38)
                        && *(*(rcx_18 + 0x30) + (rdx_7 << 3)) == rax_13 + 0x30)
                    int64_t r13_2 = *(rax_12 + 0x258)
                    
                    if (r13_2 != 0)
                        int64_t result_4 = sx.q(result_2)
                        result_2 = (result_4 + 1).d
                        
                        if (result_2 s> r12_1)
                            sub_1405a4d70(&var_128)
                            r12_1 = var_11c_1
                            rsi_1 = var_128.q
                        
                        rsi_1[result_4] = r13_2
            
            rdi_1 += 1
        while (rdi_1 s< var_d8_1)
    
    int64_t* rdi_2 = rsi_1
    result = sx.q(result_2)
    void* r12_2 = &rsi_1[result]
    
    if (rsi_1 != r12_2)
        do
            int64_t* rcx_22 = *rdi_2 + 0x220
            result = (*(*rcx_22 + 0x50))(rcx_22)
            
            if (result != 0)
                int64_t rdx_9 = *result
                void* rax_16 = (*(rdx_9 + 8))(result, rdx_9)
                int64_t rax_17 = sub_140d41340()
                void* rcx_24 = *(rax_16 + 0x10)
                result = rax_17 + 0x30
                int64_t rdx_10 = sx.q(*(result + 8))
                
                if (rdx_10.d s<= *(rcx_24 + 0x38) && *(*(rcx_24 + 0x30) + (rdx_10 << 3)) == result)
                    int64_t rbx_1 = sx.q(arg2[1].d)
                    int32_t rax_18 = (rbx_1 + 1).d
                    arg2[1].d = rax_18
                    
                    if (rax_18 s> *(arg2 + 0xc))
                        sub_1405a4d70(arg2)
                    
                    result = *arg2
                    *(result + (rbx_1 << 3)) = rax_16
            
            rdi_2 = &rdi_2[1]
        while (rdi_2 != r12_2)
    
    if (rsi_1 != 0)
        result = sub_140a74f90(rsi_1)
    
    int64_t rcx_28 = var_e0
    
    if (rcx_28 != 0)
        result = sub_140a74f90(rcx_28)
    
    int64_t rcx_29 = var_100
    
    if (rcx_29 != 0)
        result = sub_140a74f90(rcx_29)
    
    int64_t var_58
    
    if (var_58 != 0)
        result = sub_140a74f90(var_58)
    
    int64_t var_78
    
    if (var_78 != 0)
        result = sub_140a74f90(var_78)

__security_check_cookie(result_1 ^ &var_168)
return result
