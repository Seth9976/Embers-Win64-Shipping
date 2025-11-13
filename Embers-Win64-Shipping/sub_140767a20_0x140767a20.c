// 函数: sub_140767a20
// 地址: 0x140767a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
*(arg2 + 2) = 0
*(arg2 + 0xa) = 0
*(arg2 + 0xe) = 0
int32_t rcx = arg2[1].d
*(arg2 + 2) |= 1
int32_t rcx_1 = rcx | 0x80
arg2[1].d = rcx_1

if (*(arg1 + 0x198) != 0 && ((*(arg3 + 0x1548) - 1) & 0xfffffffd) == 0)
    int32_t rcx_2 = rcx_1 | 2
    int32_t rsi_1 = 0x10
    arg2[1].d = rcx_2
    int64_t* rdi_1 = *(arg1 + 0x178)
    void* rbp_1 = &rdi_1[sx.q(*(arg1 + 0x180))]
    int32_t rax_4 = rcx_2
    
    if (rdi_1 != rbp_1)
        do
            int64_t* rcx_3 = *rdi_1
            
            if (rcx_3 != 0)
                void var_28
                int128_t* rax_6 = (*(*rcx_3 + 0x20))(rcx_3, &var_28, arg3, arg1)
                int64_t* rcx_4 = arg2
                
                if (arg2 u> rax_6 + 0xf || arg2 + 0xf u< rax_6)
                    *arg2 |= *rax_6
                else
                    int64_t i_1 = 0x10
                    int64_t i
                    
                    do
                        *rcx_4 |= *(rax_6 - arg2 + rcx_4)
                        rcx_4 += 1
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
            
            rdi_1 = &rdi_1[1]
        while (rdi_1 != rbp_1)
        
        rcx_2 = arg2[1].d
        rax_4 = rcx_2
    
    char rdx_2 = *(arg1 + 0x32)
    
    if (rdx_2 == 2)
        if ((*(arg2 + 2) & 1) != 0)
            goto label_140767b41
        
        rax_4 = rcx_2
        rsi_1 = 0
    else if (rdx_2 != 1 || (*(arg2 + 2) & 1) == 0)
        rax_4 = rcx_2
        rsi_1 = 0
    else
    label_140767b41:
        
        if (rax_4.b s>= 0)
            rax_4 = rax_4
            rsi_1 = 0
    
    arg2[1].d = (rax_4 & 0xffffffef) | rsi_1

return arg2
