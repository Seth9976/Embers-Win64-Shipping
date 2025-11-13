// 函数: sub_1429bde70
// 地址: 0x1429bde70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t* var_a0 = arg1
int32_t* rsi = arg5
int32_t* var_b8 = rsi
int32_t* r15 = arg6
int32_t* var_c0 = r15
*arg1 = arg2
arg1[1] = arg3
arg1[2] = arg4
__builtin_memset(&arg1[4], 0, 0x18)

if (arg2 s>= 0)
    if (arg2 s<= 1)
        sub_1429bdb70(&arg1[4], sx.q(arg1[1]))
        int32_t i_3 = 0
        int64_t r8_4 = *(arg1 + 0x10)
        int64_t rax_18
        int64_t rdx_10
        rdx_10:rax_18 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x18) - r8_4)
        int64_t rdx_11 = rdx_10 s>> 2
        
        if (rdx_11 != neg.q(rdx_11 u>> 0x3f))
            uint64_t i = 0
            int64_t rdx_22
            
            do
                int64_t* rsi_1 = i * 0x18
                sub_1429b17e0(rsi_1 + r8_4, sx.q(r15[i]))
                int32_t j_2 = 0
                r8_4 = *(arg1 + 0x10)
                int64_t rax_22
                int64_t rdx_14
                rdx_14:rax_22 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(rsi_1 + r8_4 + 8) - *(rsi_1 + r8_4))
                int64_t rdx_15 = rdx_14 s>> 2
                
                if (rdx_15 != neg.q(rdx_15 u>> 0x3f))
                    uint64_t j = 0
                    int64_t rdx_19
                    
                    do
                        sub_142985580(*(rsi_1 + *(arg1 + 0x10)) + j * 0x18, sx.q(var_b8[i]))
                        j_2 += 1
                        r8_4 = *(arg1 + 0x10)
                        int64_t rax_27
                        int64_t rdx_18
                        rdx_18:rax_27 =
                            muls.dp.q(0x2aaaaaaaaaaaaaab, *(rsi_1 + r8_4 + 8) - *(rsi_1 + r8_4))
                        rdx_19 = rdx_18 s>> 2
                        j = zx.q(j_2)
                    while (j u< rdx_19 + (rdx_19 u>> 0x3f))
                    r15 = var_c0
                
                i_3 += 1
                int64_t rax_30
                int64_t rdx_21
                rdx_21:rax_30 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x18) - r8_4)
                rdx_22 = rdx_21 s>> 2
                i = zx.q(i_3)
            while (i u< rdx_22 + (rdx_22 u>> 0x3f))
    else if (arg2 == 2)
        sub_1429bdb70(&arg1[4], sx.q(arg4 * arg3))
        int32_t i_1 = 0
        int32_t i_2 = 0
        
        if (arg1[2] s> 0)
            do
                int32_t r14_1 = 0
                int32_t rax_5 = arg1[1]
                
                if (rax_5 s> 0)
                    do
                        int64_t r15_1 = sx.q(rax_5 * i_1 + r14_1) * 0x18
                        sub_1429b17e0(*(arg1 + 0x10) + r15_1, sx.q(*r15))
                        int64_t j_1 = 0
                        int64_t rax_9 = *(arg1 + 0x10)
                        int64_t rax_10
                        int64_t rdx_2
                        rdx_2:rax_10 =
                            muls.dp.q(0x2aaaaaaaaaaaaaab, *(r15_1 + rax_9 + 8) - *(r15_1 + rax_9))
                        int64_t rdx_3 = rdx_2 s>> 2
                        
                        if (rdx_3 != neg.q(rdx_3 u>> 0x3f))
                            int64_t rbx_1 = 0
                            int64_t rdx_7
                            
                            do
                                sub_142985580(*(r15_1 + *(arg1 + 0x10)) + rbx_1, sx.q(*rsi))
                                j_1 += 1
                                rbx_1 += 0x18
                                int64_t rax_14 = *(arg1 + 0x10)
                                int64_t rax_15
                                int64_t rdx_6
                                rdx_6:rax_15 = muls.dp.q(0x2aaaaaaaaaaaaaab, 
                                    *(r15_1 + rax_14 + 8) - *(r15_1 + rax_14))
                                rdx_7 = rdx_6 s>> 2
                            while (j_1 u< rdx_7 + (rdx_7 u>> 0x3f))
                            i_1 = i_2
                        
                        r14_1 += 1
                        rsi = &rsi[1]
                        rax_5 = arg1[1]
                        r15 = var_c0
                    while (r14_1 s< rax_5)
                    
                    rsi = var_b8
                
                i_1 += 1
                i_2 = i_1
                r15 = &r15[1]
                var_c0 = r15
            while (i_1 s< arg1[2])
    else if (arg2 == 3)
        struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
        sub_14297d3f0(&exceptionObject, "Bad initialisation of TileOffsets object")
        _CxxThrowException(&exceptionObject, &data_143946538)
        noreturn

__security_check_cookie(rax_1 ^ &var_e8)
return arg1
