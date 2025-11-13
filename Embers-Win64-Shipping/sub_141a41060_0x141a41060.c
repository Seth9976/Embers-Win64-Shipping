// 函数: sub_141a41060
// 地址: 0x141a41060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** i = *arg1
int64_t result = sx.q(arg1[1].d)

for (void* rbp_1 = result * 0x88 + i; i != rbp_1; i = &i[0x11])
    char rax = i[0x10].b
    void** i_1 = i
    int64_t var_18 = 0
    rax &= 2
    
    if (rax == 0)
        i_1 = *i
    
    int64_t rcx = i_1[1]
    void** i_2 = i
    int64_t var_10_1 = rcx
    
    if (rax == 0)
        i_2 = *i
    
    int32_t r10_3 = ((rcx u>> 0x20).d * 0x17 + rcx.d) ^ 0xbd49d10d
    void* rax_6
    
    if (arg2[1].d == *(arg2 + 0x34))
    label_141a41138:
        rax_6 = sub_141a2a300(arg2, r10_3, &var_18)
    else
        void* rdx = arg2[8]
        void* r9_1 = &arg2[7]
        
        if (rdx != 0)
            r9_1 = rdx
        
        int32_t rax_5 = *(r9_1 + (((sx.q(arg2[9].d) - 1) & sx.q(r10_3)) << 2))
        
        if (rax_5 == 0xffffffff)
        label_141a41138_1:
            rax_6 = sub_141a2a300(arg2, r10_3, &var_18)
        else
            int64_t* rdx_3
            
            while (true)
                rdx_3 = (sx.q(rax_5) << 6) + *arg2
                
                if (*rdx_3 == 0 && rdx_3[1] == rcx)
                    break
                
                rax_5 = rdx_3[7].d
                
                if (rax_5 == 0xffffffff)
                    goto label_141a41138_2
            
            if (rax_5 == 0xffffffff || rdx_3 == 0)
            label_141a41138_2:
                rax_6 = sub_141a2a300(arg2, r10_3, &var_18)
            else
                rax_6 = &rdx_3[2]
    
    void* r8_6 = *i_2
    result = (*(r8_6 + 8))(i_2, rax_6, r8_6)

return result
