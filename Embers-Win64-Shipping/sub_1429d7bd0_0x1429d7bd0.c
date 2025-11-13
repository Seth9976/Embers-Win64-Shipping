// 函数: sub_1429d7bd0
// 地址: 0x1429d7bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx = *(arg1 + 8)
int32_t i = 0

if (*rcx s<= 0)
    return 

int32_t* rsi_1 = nullptr
int32_t* r14_1 = nullptr

do
    int32_t rdx_1 = *(r14_1 + *(arg1 + 0xa8))
    
    if (rdx_1 != 0xffffffff)
        int32_t r9_1 = rdx_1 * 2
        void* r8_1 = *(arg1 + 0x10)
        int32_t r10_1 = *(rsi_1 + *(rcx + 0x18))
        int64_t rdi_1 = *(arg1 + 0x90) + (sx.q(*(*(arg1 + 0x68) + rsi_1 + 4)) << 2)
        int64_t r15_1 = sx.q(r9_1) << 2
        int32_t* rcx_3 = *(r8_1 + 0x150) + r15_1
        *rcx_3 = r10_1
        int32_t rax_5
        
        if (rdx_1 != 0)
            rax_5 = rcx_3[-2] + rcx_3[-1]
        else
            rax_5 = 0
        
        rcx_3[1] = rax_5
        int32_t r11_1 = 0
        int32_t rax_7 = *(r8_1 + 0x14)
        
        if (rax_7 s< r10_1)
            rax_7 = r10_1
        
        *(r8_1 + 0x14) = rax_7
        void* r8_2 = *(arg1 + 0x10)
        int64_t rcx_4 = sx.q(r9_1 + 1)
        int32_t* r9_2 = *(r8_2 + 0x168) + (sx.q(*(*(r8_2 + 0x150) + (rcx_4 << 2))) << 2)
        int16_t* r8_3 = *(r8_2 + 0x180) + (sx.q(*(*(r8_2 + 0x150) + (rcx_4 << 2))) << 1)
        int32_t rax_13 = 0
        
        if (r10_1 s> 0)
            do
                int32_t rcx_7 = rax_13 - 1
                
                if (rax_13 == 0)
                    rcx_7 = r10_1 - 1
                
                int32_t rdx_3 = *(rdi_1 + (sx.q(rcx_7) << 2))
                
                if (rdx_3 != 0xffffffff)
                    *r9_2 = rdx_3
                    r11_1 += 1
                    r9_2 = &r9_2[1]
                    *r8_3 = 0
                    r8_3 = &r8_3[1]
                
                rax_13 += 1
            while (rax_13 s< r10_1)
        
        *(r15_1 + *(*(arg1 + 0x10) + 0x150)) = r11_1
    
    rcx = *(arg1 + 8)
    i += 1
    r14_1 = &r14_1[1]
    rsi_1 = &rsi_1[2]
while (i s< *rcx)
