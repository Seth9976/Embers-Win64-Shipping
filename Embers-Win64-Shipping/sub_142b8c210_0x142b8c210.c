// 函数: sub_142b8c210
// 地址: 0x142b8c210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2 & 4) == 0)
    return 

while (true)
    void* rcx = arg1[3]
    int32_t rdi_1
    
    if (rcx == 0)
        void* rcx_1 = *arg1
        int32_t rdx_1 = *(arg1[1] + 8)
        int16_t rax_3 = *(rcx_1 + 8)
        int32_t rax_5
        
        if (rax_3 s< 0)
            rax_5 = *(rcx_1 + 0xc)
        else
            rax_5 = sx.d(rax_3) s>> 5
        
        if (rdx_1 s>= rax_5)
            rdi_1 = -1
        else
            rdi_1 = sub_142a486d0(rcx_1, rdx_1)
    else
        rdi_1 = sub_142a486d0(rcx, arg1[4].d)
    
    if (sub_142b13730(rdi_1) == 0)
        break
    
    void* rax_7 = arg1[3]
    int32_t rcx_3
    rcx_3.b = rdi_1 u> 0xffff
    
    if (rax_7 == 0)
        void* rax_10 = arg1[1]
        *(rax_10 + 8) += rcx_3 + 1
        void* rcx_6 = *arg1
        void* rdx_2 = arg1[1]
        int16_t rax_11 = *(rcx_6 + 8)
        int32_t rax_13
        
        if (rax_11 s< 0)
            rax_13 = *(rcx_6 + 0xc)
        else
            rax_13 = sx.d(rax_11) s>> 5
        
        if (*(rdx_2 + 8) s> rax_13)
            int16_t rax_14 = *(rcx_6 + 8)
            
            if (rax_14 s< 0)
                *(rdx_2 + 8) = *(rcx_6 + 0xc)
            else
                *(rdx_2 + 8) = sx.d(rax_14) s>> 5
    else
        arg1[4].d += rcx_3 + 1
        int16_t rcx_5 = *(rax_7 + 8)
        int32_t rax_9
        
        if (rcx_5 s< 0)
            rax_9 = *(rax_7 + 0xc)
        else
            rax_9 = sx.d(rcx_5) s>> 5
        
        if (arg1[4].d == rax_9)
            arg1[3] = 0
