// 函数: sub_1429224d0
// 地址: 0x1429224d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* result = nullptr

if (*arg1 == 0)
    return 0

sub_1428a57b0()
sub_1428a5c40(data_144020538)
int64_t* rcx_1 = *arg1

if (rcx_1 != 0)
    int32_t var_28 = arg2
    int64_t* rax_2 = sub_1428a8d10(rcx_1, &var_28)
    
    if (rax_2 != 0)
        void* rcx_2 = rax_2[2]
        
        if (rcx_2 == 0)
            if (rax_2[3].d == 0)
                goto label_142922560
            
            result = rax_2[2]
        else if (sub_1428af9b0(rcx_2) == 0 && rax_2[3].d == 0)
        label_142922560:
            void* result_1 = sub_142898ea0(rax_2[1], 0)
            result = result_1
            int32_t rsi_1 = 1
            
            if (result_1 != 0)
                void* i
                
                do
                    if ((*(result + 0xa0) s> 0 || (data_143fecfa0 & 1) == 0)
                            && sub_1428af9b0(result) != 0)
                        if (rax_2[2] != result && sub_1428af9b0(result) != 0)
                            void* rcx_7 = rax_2[2]
                            
                            if (rcx_7 != 0)
                                sub_1428af8f0(rcx_7, 0)
                            
                            rax_2[2] = result
                        
                        break
                    
                    i = sub_142898ea0(rax_2[1], rsi_1)
                    rsi_1 += 1
                    result = i
                while (i != 0)
        else
            result = rax_2[2]
        
        rax_2[3].d = 1

sub_1428a5d00(data_144020538)
sub_1428a5550()
return result
