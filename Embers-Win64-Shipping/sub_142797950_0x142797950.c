// 函数: sub_142797950
// 地址: 0x142797950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
uint64_t result = arg3[0x86]
int32_t r14 = 0

if (result == 0)
    result.b = 0
else
    result = *(result + 0x58)
    
    if (result == 0 || *(result + 8) == 0)
        result.b = 0
    else
        sub_142795810(arg4 + 0x10)
        void* rax_2 = *(arg2 + 0x130)
        int128_t* rdx = rax_2 + 0x1c0
        
        if (rax_2 == 0)
            rdx = &data_143dbb0c0
        
        sub_1427964b0(arg4 + 0x10, rdx)
        int64_t var_88
        sub_141f3baa0(arg3, &var_88)
        int32_t* rsi_1 = *(arg4 + 0x20)
        int64_t rbp_1 = 0
        uint64_t r12_2 = sx.q(*(arg4 + 0x28)) << 2 u>> 2
        
        if (rsi_1 u> &rsi_1[sx.q(*(arg4 + 0x28))])
            r12_2 = 0
        
        int64_t rbx
        
        if (r12_2 != 0)
            do
                rbx = sx.q(*rsi_1)
                int32_t var_80
                
                if (rbx.d s>= 0 && rbx.d s< var_80)
                    int32_t* rcx_6
                    
                    if (*(arg4 + 0xa8) == *(arg4 + 0xd4))
                    label_142797a8f:
                        rcx_6 = nullptr
                    else
                        void* r8 = arg4 + 0xd8
                        void* rcx_3 = *(r8 + 8)
                        
                        if (rcx_3 != 0)
                            r8 = rcx_3
                        
                        int32_t rax_6 = *(r8 + (((sx.q(*(arg4 + 0xe8)) - 1) & rbx) << 2))
                        
                        if (rax_6 == 0xffffffff)
                        label_142797a8f_1:
                            rcx_6 = nullptr
                        else
                            while (true)
                                rcx_6 = (sx.q(rax_6) << 4) + *(arg4 + 0xa0)
                                
                                if (*rcx_6 == rbx.d)
                                    break
                                
                                rax_6 = rcx_6[2]
                                
                                if (rax_6 == 0xffffffff)
                                    goto label_142797a8f_2
                            
                            if (rax_6 == 0xffffffff)
                            label_142797a8f_2:
                                rcx_6 = nullptr
                    
                    int32_t rdx_6 = *(*(arg4 + 0x30) + (sx.q(rcx_6[1]) << 2))
                    float (* rax_9)[0x4]
                    float var_78[0x3][0x4]
                    
                    if (rdx_6 == 0xffffffff)
                        rax_9 =
                            (*(*arg3 + 0x408))(arg3, &var_78, *sub_14278ff80(arg4 + 0x10, rbx.d), 3)
                    else
                        rax_9 = sub_142316340(sub_1423162f0(arg3[0x86], rdx_6), &var_78)
                    sub_1427965f0(arg4 + 0x10, rbx.d, rax_9)
                    r14 += 1
                
                rsi_1 = &rsi_1[1]
                rbp_1 += 1
            while (rbp_1 != r12_2)
        
        int64_t rcx_12 = var_88
        rbx.b = r14 s> 0
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        result = zx.q(rbx.b)

__security_check_cookie(rax_1 ^ &var_a8)
return result
