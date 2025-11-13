// 函数: sub_14287d880
// 地址: 0x14287d880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x78)
uint128_t zmm0 = *arg2
int32_t arg_10 = 0
int64_t* r15 = nullptr
int64_t* rsi = nullptr
int64_t rcx = _mm_bsrli_si128(zmm0, 8).q

if (rcx u>= 2)
    char* rax_1 = zmm0.q
    uint128_t var_48
    var_48:8.q = rcx - 2
    uint64_t r14_3 = zx.q(*rax_1) << 8 | zx.q(rax_1[1])
    
    if (rcx - 2 u>= r14_3)
        void* rdx_1 = &rax_1[2 + r14_3]
        int64_t rcx_2 = rcx - 2 - r14_3
        var_48.q = rdx_1
        var_48:8.q = rcx_2
        *arg2 = var_48
        
        if (rcx_2 u>= 2)
            uint64_t r12_2 = zx.q(*(rdx_1 + 1)) | zx.q(*rdx_1) << 8
            uint128_t var_48_1
            var_48_1:8.q = var_48:8.q - 2
            
            if (var_48:8.q - 2 u>= r12_2)
                int64_t rcx_5 = var_48:8.q - 2 - r12_2
                void* rdx_2 = rdx_1 + 2 + r12_2
                var_48_1.q = rdx_2
                var_48_1:8.q = rcx_5
                *arg2 = var_48_1
                
                if (rcx_5 u>= 2)
                    uint64_t rbp_3 = zx.q(*rdx_2) << 8 | zx.q(*(rdx_2 + 1))
                    uint128_t var_48_2
                    var_48_2.q = rdx_2 + 2
                    var_48_2:8.q = var_48_1:8.q - 2
                    
                    if (var_48_1:8.q - 2 u>= rbp_3)
                        var_48_2.q = rdx_2 + 2 + rbp_3
                        var_48_2:8.q = var_48_1:8.q - 2 - rbp_3
                        *arg2 = var_48_2
                        int32_t* r13 = sub_1428968f0()
                        void* rax_8 = sub_1428c1750()
                        int32_t rax_13
                        int32_t rdx_6
                        int64_t* rbp_4
                        int32_t r9_1
                        
                        if (r13 == 0 || rax_8 == 0)
                            rax_13 = 0x842
                            r9_1 = 0x41
                            rbp_4 = nullptr
                            rdx_6 = 0x50
                        else
                            int64_t* rax_9 = sub_14288fa60(&rax_1[2], r14_3.d, nullptr)
                            r15 = sub_14288fa60(rdx_1 + 2, r12_2.d, nullptr)
                            int64_t* rax_11 = sub_14288fa60(rdx_2 + 2, rbp_3.d, nullptr)
                            rbp_4 = rax_9
                            rsi = rax_11
                            
                            if (rbp_4 == 0 || r15 == 0 || rax_11 == 0)
                                rax_13 = 0x84e
                                r9_1 = 3
                                rdx_6 = 0x50
                            else if (sub_142890300(rax_11) == 0)
                                if (sub_1428c1a70(rax_8, rbp_4, nullptr, r15) != 0)
                                    r15 = nullptr
                                    
                                    if (sub_1428c3180(rax_8, &arg_10) == 0 || arg_10 != 0)
                                        rdx_6 = 0x2f
                                        rax_13 = 0x862
                                        rbp_4 = nullptr
                                        r9_1 = 0x66
                                    else
                                        sub_1428c1a10(rax_8, rsi, 0)
                                        rsi = nullptr
                                        
                                        if (sub_1428546e0(arg1, 0x40007, sub_1428c19b0(rax_8), 0, 
                                                rax_8) != 0)
                                            if (sub_142896310(r13, 0x1c, rax_8) != 0)
                                                *(*(arg1 + 0xa8) + 0x408) = r13
                                                
                                                if ((*(*(*(arg1 + 0xa8) + 0x238) + 0x20) & 3) != 0)
                                                    *arg3 = sub_1428a38c0(*(*(arg1 + 0x508) + 0xf8))
                                                
                                                return 1
                                            
                                            rax_13 = 0x875
                                            r9_1 = 6
                                            rbp_4 = nullptr
                                            rdx_6 = 0x50
                                        else
                                            rdx_6 = 0x28
                                            rax_13 = 0x86f
                                            r9_1 = 0x18a
                                            rbp_4 = nullptr
                                else
                                    rax_13 = 0x85b
                                    r9_1 = 3
                                    rdx_6 = 0x50
                            else
                                rdx_6 = 0x2f
                                rax_13 = 0x855
                                r9_1 = 0x66
                        
                        sub_142856580(arg1, rdx_6, 0x1a3, r9_1, "ssl\statem\statem_clnt.c", rax_13)
                        sub_1428901a0(rbp_4)
                        sub_1428901a0(r15)
                        sub_1428901a0(rsi)
                        sub_1428c1620(rax_8)
                        sub_1428965a0(r13)
                        return 0

sub_142856580(arg1, 0x32, 0x1a3, 0x9f, "ssl\statem\statem_clnt.c", 0x839)
return 0
