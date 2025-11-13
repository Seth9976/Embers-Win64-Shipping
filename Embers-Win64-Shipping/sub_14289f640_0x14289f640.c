// 函数: sub_14289f640
// 地址: 0x14289f640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rax = sub_142898c70(*(arg1 + 0x98))

if (*(*(arg1 + 0x20) + 0x24) s> 0)
    int32_t rdi_1 = 0
    
    if (rax s> 0)
        do
            int64_t* rax_1 = sub_142898ea0(*(arg1 + 0x98), rdi_1)
            int64_t* rsi_1 = rax_1
            
            if (rdi_1 s> 0)
                void* rax_2 = sub_1428a38c0(rax_1)
                
                if (rax_2 == 0)
                label_14289f6e6:
                    *(arg1 + 0xac) = rdi_1
                    int64_t* rax_4
                    
                    if (rsi_1 == 0)
                        rax_4 = sub_142898ea0(*(arg1 + 0x98), rdi_1)
                    else
                        rax_4 = rsi_1
                    
                    *(arg1 + 0xb8) = rax_4
                    *(arg1 + 0xb0) = 0x43
                    
                    if ((*(arg1 + 0x38))(0, arg1) == 0)
                        return 0
                else
                    int32_t rbp_1 = *(*(arg1 + 0x20) + 0x24)
                    
                    if (rbp_1 s> 0)
                        if (rbp_1 s> 5)
                            rbp_1 = 5
                        
                        if (sub_142896b50(rax_2) s< *((sx.q(rbp_1) << 2) + 0x1434ea9d4))
                            goto label_14289f6e6
            
            if (rdi_1 s< rax - 1)
                void* rax_7 = *(arg1 + 0x20)
                int32_t arg_8 = 0xffffffff
                int32_t rbp_2 = *(rax_7 + 0x24)
                
                if (rbp_2 s> 0)
                    if (rbp_2 s> 5)
                        rbp_2 = 5
                    
                    if (sub_1428a3ac0(rsi_1, nullptr, nullptr, &arg_8, nullptr) == 0
                            || arg_8 s< *((sx.q(rbp_2) << 2) + 0x1434ea9d4))
                        *(arg1 + 0xac) = rdi_1
                        
                        if (rsi_1 == 0)
                            rsi_1 = sub_142898ea0(*(arg1 + 0x98), rdi_1)
                        
                        *(arg1 + 0xb8) = rsi_1
                        *(arg1 + 0xb0) = 0x44
                        
                        if ((*(arg1 + 0x38))(0, arg1) == 0)
                            return 0
            
            rdi_1 += 1
        while (rdi_1 s< rax)

return 1
