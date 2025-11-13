// 函数: sub_1428d8810
// 地址: 0x1428d8810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t r12 = 0
int64_t* r15 = nullptr
int32_t rax = sub_142898c70(*(arg1 + 0x58))

if (rax s> 0)
    int64_t* rax_1 = sub_1428d8d60()
    r15 = rax_1
    
    if (rax_1 != 0)
        int64_t* rbp_1 = *(arg1 + 0x38)
        int64_t* rsi_1 = *(arg1 + 0x30)
        int32_t rdi_1 = 0
        
        if (rax s> 0)
            do
                int64_t** rax_2 = sub_142898ea0(*(arg1 + 0x58), rdi_1)
                int64_t* rax_3 = rax_2[3]
                
                if (rax_3 == 0)
                    rax_3 = sub_142890740()
                    rax_2[3] = rax_3
                    
                    if (rax_3 == 0)
                        goto label_1428d88e5
                
                if (sub_1428d9290(rax_3, rsi_1, rbp_1, r15) == 0)
                    goto label_1428d88e5
                
                rsi_1 = rax_2[3]
                rdi_1 += 1
                rbp_1 = *rax_2
            while (rdi_1 s< rax)
        
        r12 = 1

label_1428d88e5:
sub_1428d8ae0(r15)
return zx.q(r12)
