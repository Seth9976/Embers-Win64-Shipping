// 函数: sub_140d7a930
// 地址: 0x140d7a930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r11 = arg2

if (arg1[1].d != *(arg1 + 0x34))
    void* rdx = arg1[8]
    void* r8 = &arg1[7]
    uint32_t r10_2 = (*arg3 u>> 4).d
    int32_t r9_2 = (0x9e3779b9 - r10_2) ^ r10_2 << 8
    int32_t rcx_2 = neg.d(r9_2 + r10_2) ^ r9_2 u>> 0xd
    int32_t r10_5 = (r10_2 - r9_2 - rcx_2) ^ rcx_2 u>> 0xc
    int32_t r9_5 = (r9_2 - r10_5 - rcx_2) ^ r10_5 << 0x10
    int32_t rcx_5 = (rcx_2 - r9_5 - r10_5) ^ r9_5 u>> 5
    int32_t r10_8 = (r10_5 - r9_5 - rcx_5) ^ rcx_5 u>> 3
    int32_t r9_8 = (r9_5 - r10_8 - rcx_5) ^ r10_8 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t i =
        *(r8 + (((sx.q(rcx_5 - r9_8 - r10_8) ^ zx.q(r9_8) u>> 0xf) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t rcx_11 = *arg1
        
        do
            int64_t r14_1 = 0
            int64_t* r15_1 = sx.q(i) * 0x38
            int64_t* rdi_1 = *(r15_1 + rcx_11 + 8)
            
            if (rdi_1 != 0)
                int32_t rax_20 = rdi_1[1].d
                
                if (rax_20 == 0)
                    rdi_1 = nullptr
                else
                    rdi_1[1].d = rax_20 + 1
                    
                    if (rdi_1 != 0)
                        r14_1 = *(r15_1 + rcx_11)
            
            int64_t* rsi_1 = arg3[1]
            int64_t rbp_1 = 0
            
            if (rsi_1 != 0)
                int32_t rax_22 = rsi_1[1].d
                
                if (rax_22 != 0)
                    rsi_1[1].d = rax_22 + 1
                    
                    if (rsi_1 != 0)
                        rbp_1 = *arg3
                        rsi_1[1].d -= 1
                        
                        if (rsi_1[1].d == 1)
                            (**rsi_1)(rsi_1)
                            int32_t temp3_1 = *(rsi_1 + 0xc)
                            *(rsi_1 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rsi_1 + 8))(rsi_1, 1)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp1_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            if (r14_1 == rbp_1)
                *arg2 = i
                return arg2
            
            rcx_11 = *arg1
            i = *(r15_1 + rcx_11 + 0x30)
        while (i != 0xffffffff)
        
        r11 = arg2

*r11 = 0xffffffff
return r11
