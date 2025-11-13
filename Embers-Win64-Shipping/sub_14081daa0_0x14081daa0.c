// 函数: sub_14081daa0
// 地址: 0x14081daa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14081d930(arg1, *arg2)
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2].d = arg2[2].d

if (&arg1[3] != &arg2[3])
    void* rbx_1 = arg1[3]
    
    if ((rbx_1.b & 1) != 0)
        rbx_1 = (rbx_1 s>> 1) + &arg1[3]
    
    int32_t i_3 = arg1[4].d
    
    if (i_3 != 0)
        int32_t i
        
        do
            sub_1405d1550(rbx_1)
            rbx_1 += 0x20
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    void* rsi_2 = arg2[3]
    int32_t i_2 = arg2[4].d
    
    if ((rsi_2.b & 1) != 0)
        rsi_2 = (rsi_2 s>> 1) + &arg2[3]
    
    int32_t r8_1 = *(arg1 + 0x24)
    arg1[4].d = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_1405e3e00(&arg1[3], i_2, r8_1)
        void* rdx_2 = arg1[3]
        
        if ((rdx_2.b & 1) != 0)
            rdx_2 = (rdx_2 s>> 1) + &arg1[3]
        
        if (i_2 != 0)
            void* rcx_2 = rsi_2 + 0xc
            void* rdx_4 = rdx_2 + 0xc
            int32_t i_1
            
            do
                void* rax_3 = *(rcx_2 - 0xc)
                *(rdx_4 - 0xc) = rax_3
                
                if (rax_3 != 0)
                    *(rax_3 + 8) += 1
                
                *(rdx_4 - 4) = *(rcx_2 - 4)
                *rdx_4 = *rcx_2
                *(rdx_4 + 4) = *(rcx_2 + 4)
                *(rdx_4 + 8) = *(rcx_2 + 8)
                *(rdx_4 + 0xc) = *(rcx_2 + 0xc)
                *(rdx_4 + 0x10) = *(rcx_2 + 0x10)
                *(rdx_4 + 0x11) = *(rcx_2 + 0x11)
                char rax_11 = *(rcx_2 + 0x12)
                rcx_2 += 0x20
                *(rdx_4 + 0x12) = rax_11
                rdx_4 += 0x20
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x24) = i_2

arg1[5] = arg2[5]
arg1[6].b = arg2[6].b
*(arg1 + 0x31) = *(arg2 + 0x31)
return arg1
