// 函数: sub_140fef710
// 地址: 0x140fef710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_2e8
int64_t var_50_1 = __security_cookie ^ &var_2e8
int64_t* var_260 = arg2
int64_t* var_280 = arg2

if (arg3 != 0)
    sub_140ffa600(arg1, 0, &var_280, 1)
    int64_t rsi_1 = 0
    void* const rbx_1 = arg1
    
    if (arg1 == 0x18)
        rbx_1 = nullptr
    
    void var_218
    int128_t zmm6_1 = sub_141961860(&var_218, (1 << (data_1439c7a34).b) - 1)
    void* const var_1f8_1 = rbx_1
    void* const var_1f0_1 = rbx_1
    char var_190_1 = 0
    void* rax_4 = (*(*arg2 + 8))(arg2)
    int64_t rdx_2 = *arg3
    void* rax_5 = (*(rdx_2 + 8))(arg3, rdx_2)
    int64_t rdx_3 = *arg2
    int64_t* rax_6 = (*(rdx_3 + 0x20))(arg2, rdx_3)
    int64_t rdx_4 = *arg3
    var_280 = rax_6
    void* rax_7 = (*(rdx_4 + 0x20))(arg3, rdx_4)
    int64_t rdx_5 = *arg2
    (*(rdx_5 + 0x18))(arg2, rdx_5)
    int64_t rdx_6 = *arg3
    (*(rdx_6 + 0x18))(arg3, rdx_6)
    int64_t* rcx_30
    
    if (rax_4 == 0 || rax_5 == 0)
        if (var_280 != 0 && rax_7 != 0)
            int64_t* r13_2 = var_280
            
            if (r13_2 != rax_7)
                if (*(arg1 + 0x17d00) != 0)
                    void* rax_33 = *(arg1 + 0x17d18)
                    
                    if (rax_33 != 0)
                        *(rax_33 + 0x10) += 1
                
                int32_t rcx_21 = *arg4
                int32_t r8_7
                
                if (rcx_21 == 1)
                    r8_7 = 1
                else if (rcx_21 == 2)
                    r8_7 = 2
                else if (rcx_21 == 3)
                    r8_7 = 3
                else if (rcx_21 == 4)
                    r8_7 = 4
                else if (rcx_21 == 5)
                    r8_7 = 5
                else
                    r8_7 = 0
                
                int32_t rbx_5 = (r8_7 + arg4[0xa] * 6) * *(r13_2 + 0x34) + arg4[9]
                int32_t r12_4 = (r8_7 + arg4[0xb] * 6) * *(rax_7 + 0x34) + arg4[9]
                
                if (var_260[7].d u<= 1 || *(rax_7 + 0x38) u> 1)
                    char rax_39 = sub_140feb580(&arg4[1])
                    rcx_30 = *(arg1 + 0x138)
                    int32_t var_2c8_2
                    int32_t var_2c0_2
                    int64_t var_2b8_2
                    int32_t var_2b0_1
                    int64_t** var_2a8_2
                    
                    if (rax_39 == 0)
                        var_2a8_2 = nullptr
                        var_2b0_1 = rbx_5
                        var_2b8_2 = r13_2[0x15]
                        var_2c0_2 = 0
                        var_2c8_2 = 0
                    else
                        var_260.d = arg4[1]
                        var_260:4.d = arg4[2]
                        int32_t var_254_4 = arg4[3]
                        int32_t var_250_2 = arg4[4]
                        var_2a8_2 = &var_260
                        var_2b0_1 = rbx_5
                        var_2b8_2 = r13_2[0x15]
                        var_2c0_2 = 0
                        var_2c8_2 = 0
                        int32_t var_258_4 = 0
                        int32_t var_24c_2 = 1
                    
                    (*(*rcx_30 + 0x170))(rcx_30, *(rax_7 + 0xa8), zx.q(r12_4), 0, var_2c8_2, 
                        var_2c0_2, var_2b8_2, var_2b0_1, var_2a8_2)
                else
                    int64_t* rcx_28 = *(arg1 + 0x138)
                    (*(*rcx_28 + 0x1c8))(rcx_28, *(rax_7 + 0xa8), zx.q(r12_4), r13_2[0x15], rbx_5, 
                        (&data_1439c85fc)[sx.q(*(rax_7 + 0x3c)) * 0xa])
        else if (rax_4 != 0 && rax_7 != 0)
            int32_t rcx_31 = *arg4
            uint64_t r8_5
            
            if (rcx_31 == 1)
                r8_5 = 1
            else if (rcx_31 == 2)
                r8_5 = 2
            else if (rcx_31 == 3)
                r8_5 = 3
            else if (rcx_31 == 4)
                r8_5 = 4
            else if (rcx_31 == 5)
                r8_5 = 5
            else
                r8_5 = 0
            
            rcx_30 = *(arg1 + 0x138)
            (*(*rcx_30 + 0x170))(rcx_30, *(rax_7 + 0xa8), r8_5, 0, 0, 0, *(rax_4 + 0xa0), 0, 
                nullptr)
    else if (rax_4 != rax_5)
        if (*(arg1 + 0x17d00) != 0)
            void* rax_9 = *(arg1 + 0x17d18)
            
            if (rax_9 != 0)
                *(rax_9 + 0x10) += 1
        
        int64_t rax_12
        
        if (((*(arg1 + 0x2680) - 0xb000) & 0xfffffeff) == 0)
            rax_12 = sub_140fe85c0(rax_5 + 0x68, 0x22)
        
        if (((*(arg1 + 0x2680) - 0xb000) & 0xfffffeff) != 0 || rax_12 == 0 || arg2[7].d u<= 1
                || arg3[7].d u> 1)
            int32_t rdx_12 = (&data_1439c85fc)[sx.q(*(rax_5 + 0x3c)) * 0xa]
            int32_t rax_20
            
            if (rdx_12 == 0x1b)
                rax_20 = 0x1c
            else
                rax_20 = 0x57
                
                if (rdx_12 != 0x5a)
                    rax_20 = rdx_12
            
            int32_t r15_3 = arg2[7].d
            
            if (r15_3 u<= 1 || *(rax_5 + 0x38) u> 1)
                char rax_22 = sub_140feb580(&arg4[1])
                int64_t rax_23
                
                if (rax_22 != 0 && r15_3 u<= 1)
                    rax_23 = sub_140fe85c0(rax_5 + 0x68, 0x22)
                
                if (rax_22 == 0 || r15_3 u> 1 || rax_23 != 0)
                    int64_t* rcx_20 = *(arg1 + 0x138)
                    (*(*rcx_20 + 0x178))(rcx_20, *(rax_5 + 0xa0), *(rax_4 + 0xa0))
                else
                    var_260.d = arg4[1]
                    var_260:4.d = arg4[2]
                    int32_t var_254_3 = arg4[3]
                    int32_t var_250_1 = arg4[4]
                    int32_t var_258_3 = 0
                    int32_t var_24c_1 = 1
                    uint64_t rdx_15 = zx.q(sub_140feb580(&arg4[5])) * 2
                    rcx_30 = *(arg1 + 0x138)
                    (*(*rcx_30 + 0x170))(rcx_30, *(rax_5 + 0xa0), zx.q(arg4[0xb]), 
                        zx.q(arg4[rdx_15 * 2 + 1]), arg4[rdx_15 * 2 + 2], 0, *(rax_4 + 0xa0), 
                        arg4[0xa], &var_260)
            else
                int64_t* rcx_16 = *(arg1 + 0x138)
                (*(*rcx_16 + 0x1c8))(rcx_16, *(rax_5 + 0xa0), zx.q(arg4[0xb]), *(rax_4 + 0xa0), 
                    arg4[0xa], rax_20)
        else
            int64_t* rcx_9 = *(rax_5 + 0xa0)
            void var_248
            int32_t rcx_10 = (*(*rcx_9 + 0x50))(rcx_9, &var_248)
            int32_t rax_15 = arg4[1]
            int64_t* r14_2 = *(arg1 + 0x138)
            int32_t r9 = *(rax_5 + 0x64)
            int32_t r10_1 = *(rax_5 + 0x60)
            
            if (rax_15 s< 0)
            label_140fef8d1:
                var_260 = nullptr
                int32_t var_258_2 = r10_1
                int32_t var_254_2 = r9
            else
                int32_t rdx_8 = arg4[3]
                
                if (rdx_8 s< 0)
                    goto label_140fef8d1
                
                int32_t r8_1 = arg4[2]
                
                if (r8_1 s< 0)
                    goto label_140fef8d1
                
                rcx_10 = arg4[4]
                
                if (rcx_10 s< 0)
                    goto label_140fef8d1
                
                var_260.d = rax_15
                var_260:4.d = r8_1
                int32_t var_258_1 = rdx_8
                int32_t var_254_1 = rcx_10
            
            if (rax_15 s< 0)
            label_140fef90b:
                var_280 = nullptr
                int32_t var_278_2 = r10_1
                int32_t var_274_2 = r9
            else
                rcx_10 = arg4[3]
                
                if (rcx_10 s< 0)
                    goto label_140fef90b
                
                int32_t rdx_9 = arg4[2]
                
                if (rdx_9 s< 0)
                    goto label_140fef90b
                
                int32_t r8_2 = arg4[4]
                
                if (r8_2 s< 0)
                    goto label_140fef90b
                
                var_280.d = rax_15
                var_280:4.d = rdx_9
                int32_t var_278_1 = rcx_10
                int32_t var_274_1 = r8_2
            
            int32_t rcx_11 = sbb.d(rcx_10, rcx_10, *(rax_5 + 0xc0) != 0)
            
            if (rcx_11 u< *(rax_5 + 0xb8))
                rsi_1 = *(*(rax_5 + 0xb0) + (sx.q(rcx_11) << 3))
            
            char var_288
            char var_298_1 = var_288
            int32_t* var_2a8_1 = &var_260
            int32_t var_2b0
            var_2b0.q = &var_280
            int32_t* var_2b8_1 = &var_248
            int32_t var_2c0
            var_2c0.q = sub_140fe85c0(rax_5 + 0x68, 0x22)
            int32_t var_2c8
            var_2c8.q = rsi_1
            sub_140fd5b00(arg1 - 0x18, &var_218, rax_4, rax_5, arg5, arg6, zmm6_1, var_2c8, 
                var_2c0, var_2b8_1, var_2b0, var_2a8_1, r14_2)
    sub_1419628c0(&var_218)

__security_check_cookie(var_50_1 ^ &var_2e8)
