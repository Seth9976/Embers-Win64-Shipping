// 函数: sub_140834940
// 地址: 0x140834940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141fe0c50(0)
int64_t* r14 = *(rax + 0x28)
void* r13 = &r14[sx.q(*(rax + 0x30))]
int64_t result

if (r14 == r13)
label_140834a61:
    result.b = 0
else
    while (true)
        void* rbp_1 = *r14
        
        if (rbp_1 != 0)
            void* rax_1 = sub_14249a9d0()
            void* rdx = *(rbp_1 + 0x10)
            result = sx.q(*(rax_1 + 0x38))
            
            if (result.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (result << 3)) == rax_1 + 0x30)
                int16_t* rdx_1
                
                if (arg2[1].d == 0)
                    rdx_1 = &data_142d40450
                else
                    rdx_1 = *arg2
                
                int16_t* const rcx_1
                
                if (*(rbp_1 + 0x40) == 0)
                    rcx_1 = &data_142d40450
                else
                    rcx_1 = *(rbp_1 + 0x38)
                
                if (sub_140a54510(rcx_1, rdx_1).d == 0)
                    result = sub_14087d530()
                    void* rsi_1 = *(result + 0x118)
                    
                    if (rsi_1 == 0)
                        int64_t rdx_2 = *result
                        (*(rdx_2 + 0x390))(result, rdx_2)
                        rsi_1 = *(result + 0x118)
                    
                    int32_t rdi_1 = 0
                    int32_t i = 0
                    
                    if (*(rsi_1 + 0x88) s> 0)
                        do
                            if (sub_140834810(arg1, rbp_1, i).b != 0)
                                if (i != 0xffffffff)
                                    result = zx.q(1 << i.b)
                                else
                                    result = zx.q(i)
                                
                                rdi_1 |= result.d
                            
                            i += 1
                        while (i s< *(rsi_1 + 0x88))
                        
                        if (rdi_1 != 0)
                            result.b = 1
                            break
        
        r14 = &r14[1]
        
        if (r14 == r13)
            goto label_140834a61

return result
