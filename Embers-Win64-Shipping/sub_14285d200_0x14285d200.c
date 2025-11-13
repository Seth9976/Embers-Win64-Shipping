// 函数: sub_14285d200
// 地址: 0x14285d200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x188)
void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t r14 = *(arg1 + 0x1658)
arg1[0xa] = 1
int32_t result

if (arg4 u< r14 || (*(arg1 + 0x868) != 0 && arg4 u< *(arg1 + 0x1678) + r14))
    sub_142856580(arg1, 0x50, 0x9e, 0x10f, "ssl\record\rec_layer_s3.c", 0x16c)
    result = -1
else
    int32_t rax_2
    
    if (arg1[0x21] == 4)
        rax_2 = sub_14287f730(arg1, arg4, 0, 1)
    
    if (arg1[0x21] == 4 && rax_2 == 0)
        result = -1
    else
        *(arg1 + 0x1658) = 0
        
        if (sub_142856410(arg1) == 0)
        label_14285d2e0:
            
            if (*(arg1 + 0x868) == 0)
                goto label_14285d31f
            
            int64_t var_178
            result = sub_14285d5a0(arg1, arg2, arg3 + r14, *(arg1 + 0x1678), &var_178)
            
            if (result s> 0)
                r14 += var_178
            label_14285d31f:
                
                if (r14 != arg4)
                    int64_t rsi_1 = arg4 - r14
                    uint64_t rbp_1 = zx.q(sub_142851cc0(arg1))
                    int32_t rax_6 = sub_142851d30(arg1)
                    uint64_t r15_1 = *(arg1 + 0x5f8)
                    uint64_t r13_1 = zx.q(rax_6)
                    
                    if (r15_1 u<= 0x20)
                        if (r15_1 == 0)
                            r15_1 = 1
                        else
                            int64_t* rcx_10 = *(arg1 + 0x460)
                            
                            if (rcx_10 == 0)
                                r15_1 = 1
                            else if (not(test_bit(sub_142890eb0(sub_140687ad0(rcx_10)), 0x17))
                                    || (*(*(*(arg1 + 8) + 0xc0) + 0x60) & 1) == 0)
                                r15_1 = 1
                        
                        if (rbp_1 == 0 || r13_1 == 0 || r13_1 u> rbp_1)
                            sub_142856580(arg1, 0x50, 0x9e, 0x44, "ssl\record\rec_layer_s3.c", 
                                0x243)
                            result = -1
                        else
                            while (true)
                                uint64_t rax_10
                                
                                if (rsi_1 != 0)
                                    rax_10 = divu.dp.q(0:(rsi_1 - 1), r13_1) + 1
                                else
                                    rax_10 = zx.q((rsi_1 + 1).d)
                                
                                uint64_t r9_1 = r15_1
                                
                                if (rax_10 u<= r15_1)
                                    r9_1 = rax_10
                                
                                int64_t rdx_6 = 0
                                uint64_t temp0_2 = divu.dp.q(rdx_6:rsi_1, r9_1)
                                int64_t var_158[0x20]
                                
                                if (temp0_2 u< rbp_1)
                                    int64_t rax_16 = 0
                                    
                                    if (r9_1 != 0)
                                        do
                                            var_158[rax_16] = temp0_2
                                            
                                            if (rax_16 u< modu.dp.q(rdx_6:rsi_1, r9_1))
                                                var_158[rax_16] = temp0_2 + 1
                                            
                                            rax_16 += 1
                                        while (rax_16 u< r9_1)
                                else
                                    int64_t rcx_14
                                    int64_t rdi_2
                                    
                                    if (r9_1 != 0)
                                        rdi_2, rcx_14 = __memfill_u64(&var_158, rbp_1, r9_1)
                                
                                result, arg5 = sub_14285b890(arg1, arg2, arg3 + r14, &var_158, 
                                    arg5, r9_1, 0, &var_178)
                                
                                if (result s<= 0)
                                    *(arg1 + 0x1658) = r14
                                    break
                                
                                int64_t rdi_3 = var_178
                                
                                if (rdi_3 != rsi_1 && (arg2 != 0x17 || (arg1[0x172].b & 1) == 0))
                                    rsi_1 -= rdi_3
                                    r14 += rdi_3
                                    continue
                                
                                *(*(arg1 + 0xa8) + 0xdc) = 0
                                
                                if (result == rsi_1.d && (arg1[0x172].b & 0x10) != 0
                                        && (*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
                                    sub_14285d7e0(arg1)
                                
                                *arg6 = rdi_3 + r14
                                result = 1
                                break
                    else
                        sub_142856580(arg1, 0x50, 0x9e, 0x44, "ssl\record\rec_layer_s3.c", 0x233)
                        result = -1
                else
                    if ((arg1[0x172].b & 0x10) != 0 && (*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
                        sub_14285d7e0(arg1)
                    
                    *arg6 = r14
                    result = 1
            else
                *(arg1 + 0x1658) = r14
        else
            if (sub_1428565f0(arg1) != 0 || arg1[0x21] == 6)
                goto label_14285d2e0
            
            result = (*(arg1 + 0x30))(arg1)
            
            if (result s>= 0)
                if (result != 0)
                    goto label_14285d2e0
                
                result = -1

__security_check_cookie(rax_1 ^ &var_1b8)
return result
