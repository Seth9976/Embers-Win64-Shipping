// 函数: sub_142852680
// 地址: 0x142852680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = 0x20
__chkstk(0x20)
void* rdx = *(arg1 + 0x508)

if (*(rdx + 0x90) != 0)
    int32_t r8_1 = *(arg1 + 0x38)
    
    if (r8_1 == 0 || *(rdx + 0xb8) != 0 || (*(arg1 + 0x558) & 1) == 0)
        int64_t* result_1 = *(arg1 + 0x738)
        int32_t rbp_1 = result_1[9].d
        int32_t rsi_2 = rbp_1 & arg2
        
        if (rsi_2 != 0)
            if (*(arg1 + 0xc8) == 0)
            label_142852722:
                result = result_1
                
                if (not(test_bit(rbp_1, 9)))
                    int32_t* r9_2 = *(arg1 + 8)
                    
                    if ((*(*(r9_2 + 0xc0) + 0x60) & 8) != 0)
                        sub_142857200(result_1, rdx)
                        result = *(arg1 + 0x738)
                    else
                        int32_t rax_1 = *r9_2
                        
                        if (rax_1 s< 0x304 || rax_1 == 0x10000 || r8_1 == 0
                                || (*(arg1 + 0x16e0) u> 0 && (*(arg1 + 0x5c4) & 0x1000000) == 0)
                                || result_1[0xb] != 0)
                            sub_142857200(result_1, rdx)
                            result = *(arg1 + 0x738)
                        else
                            result = result_1
                            
                            if ((*(arg1 + 0x5c4) & 0x4000) != 0)
                                sub_142857200(result_1, rdx)
                                result = *(arg1 + 0x738)
                
                if (result[0xa] != 0)
                    sub_142857900(*(arg1 + 0x508))
                    result = (*(*(arg1 + 0x738) + 0x50))(arg1, *(arg1 + 0x508))
                    
                    if (result.d == 0)
                        result = sub_1428574d0(*(arg1 + 0x508))
            else
                int32_t* r9_1 = *(arg1 + 8)
                result = *(r9_1 + 0xc0)
                
                if ((result[0xc].b & 8) == 0)
                    result = zx.q(*r9_1)
                    
                    if (result.d s>= 0x304 && result.d != 0x10000)
                        goto label_142852722
        
        if (rbp_1.b s>= 0 && rsi_2 == arg2)
            void* const rcx_3 = 0x70
            
            if ((arg2.b & 1) == 0)
                rcx_3 = 0x7c
            
            result = *(arg1 + 0x738)
            
            if ((*(rcx_3 + result)).b == 0xff)
                _time64(nullptr)
                return sub_142857420(*(arg1 + 0x738))

return result
