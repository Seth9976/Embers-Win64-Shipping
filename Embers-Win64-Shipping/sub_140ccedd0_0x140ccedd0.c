// 函数: sub_140ccedd0
// 地址: 0x140ccedd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x326) == 0 && *(arg1 + 0x1b8) s>= 1)
    int32_t rdx_1 = *(arg1 + 0x1bc)
    
    if (rdx_1 s> 0)
        int64_t* rcx = *(arg1 + 0x2d8)
        (*(*rcx + 0x178))(rcx, rdx_1)
        int32_t rax_2 = *(arg1 + 0x1b8) + *(arg1 + 0x2f8)
        *(arg1 + 0x2f8) = rax_2
        
        if (rax_2 s> *(arg1 + 0x2fc))
            sub_1405a4cf0(arg1 + 0x2f0)
        
        if (((*(arg1 + 0x228) & 2) == 0 || *(arg1 + 0x270) != 0) && (*(arg1 + 0x229) & 0x20) == 0)
            int64_t* rcx_5 = *(arg1 + 0x2d8)
            int64_t r9_2 = *rcx_5
            (*(r9_2 + 0x150))(rcx_5, *(arg1 + 0x2f0), sx.q(*(arg1 + 0x1b8)) << 2, r9_2)
        else
            int32_t i = 0
            int64_t* rbx_1 = *(arg1 + 0x2b8)
            
            if (*(arg1 + 0x1b8) s> 0)
                int32_t* r14_1 = nullptr
                
                do
                    void* rax_3 = *rbx_1
                    int32_t arg_8 = 0
                    int64_t* r9_1 = *(rax_3 + 8)
                    int64_t* rcx_2 = r9_1[1]
                    int32_t* rdx_3 = *rcx_2
                    
                    if (&rdx_3[1] u> rcx_2[1])
                        int32_t* rdx_4 = &arg_8
                        
                        if ((*(r9_1 + 0x29) & 0x20) != 0)
                            sub_140b54070(r9_1, rdx_4, arg2)
                        else
                            (*(*r9_1 + 0x150))(r9_1, rdx_4, 4)
                    else
                        arg_8 = *rdx_3
                        int64_t* rax_6 = r9_1[1]
                        *rax_6 += 4
                    
                    i += 1
                    *(r14_1 + *(arg1 + 0x2f0)) = arg_8
                    r14_1 = &r14_1[1]
                while (i s< *(arg1 + 0x1b8))
        
        *(arg1 + 0x326) = 1
        int32_t rbp
        rbp.b = sub_140cc1900(arg1, u"serialize preload dependencies", 1) != 0
        return zx.q(rbp + 1)

return 1
