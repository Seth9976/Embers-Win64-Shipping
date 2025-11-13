// 函数: sub_1428c2e20
// 地址: 0x1428c2e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = 0
*arg2 = 0
int64_t* rax = sub_1428d8d60()

if (rax != 0)
    sub_1428d8e50(rax)
    int64_t* rax_1 = sub_1428d8ba0(rax)
    int64_t* rax_2 = sub_1428d8ba0(rax)
    
    if (rax_2 != 0)
        if (*(arg1 + 0x40) == 0)
            if (sub_1428902d0(*(arg1 + 0x10), 2) == 0)
                if (sub_1428902d0(*(arg1 + 0x10), 5) == 0)
                    *arg2 |= 4
                label_1428c2fc7:
                    int32_t rax_16 = sub_14291b520(*(arg1 + 8), 0, rax, nullptr)
                    
                    if (rax_16 s>= 0)
                        if (rax_16 == 0)
                            *arg2 |= 1
                            rbp = 1
                        else if (*(arg1 + 0x40) != 0)
                            rbp = 1
                        else if (sub_1428f5900(rax_1, *(arg1 + 8)) != 0)
                            int32_t rax_18 = sub_14291b520(rax_1, 0, rax, nullptr)
                            
                            if (rax_18 s>= 0)
                                if (rax_18 == 0)
                                    *arg2 |= 2
                                
                                rbp = 1
                else
                    uint64_t rax_14 = sub_1428f51c0(*(arg1 + 8), 0xa)
                    
                    if (rax_14 != -1)
                        if (((rax_14 - 3) & 0xfffffffffffffffb) != 0)
                            *arg2 |= 8
                        
                        goto label_1428c2fc7
            else
                uint64_t rax_12 = sub_1428f51c0(*(arg1 + 8), 0x18)
                
                if (rax_12 != -1)
                    if (rax_12 != 0xb)
                        *arg2 |= 8
                    
                    goto label_1428c2fc7
        else if (sub_14288fc80(*(arg1 + 0x10), &data_1434e8ea8) s<= 0)
        label_1428c2ede:
            *arg2 |= 8
        label_1428c2eed:
            int32_t rax_7 = sub_14291b520(*(arg1 + 0x40), 0, rax, nullptr)
            
            if (rax_7 s>= 0)
                if (rax_7 == 0)
                    *arg2 |= 0x10
                
                if (sub_14291a950(rax_1, rax_2, *(arg1 + 8), *(arg1 + 0x40), rax) != 0)
                    if (sub_1428902b0(rax_2) == 0)
                        *arg2 |= 0x20
                    
                    int64_t* rcx_10 = *(arg1 + 0x48)
                    
                    if (rcx_10 != 0 && sub_14288fc80(rcx_10, rax_1) != 0)
                        *arg2 |= 0x40
                    
                    goto label_1428c2fc7
        else
            if (sub_14288fc80(*(arg1 + 0x10), *(arg1 + 8)) s>= 0)
                goto label_1428c2ede
            
            if (sub_142905ff0(rax_1, *(arg1 + 0x10), *(arg1 + 0x40), *(arg1 + 8), rax) != 0)
                if (sub_1428902b0(rax_1) != 0)
                    goto label_1428c2eed
                
                goto label_1428c2ede
    
    sub_1428d8a60(rax)
    sub_1428d8ae0(rax)

return zx.q(rbp)
