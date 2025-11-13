// 函数: sub_14233ce90
// 地址: 0x14233ce90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x78) s<= 0)
    return 

int64_t rdi_1 = 0
int64_t rsi_1 = 0

do
    int64_t* r8_2 = *(arg1 + 0x70) + rsi_1
    
    if (*(*(**r8_2 + rdi_1) + 0xec) u> 0)
        void* rdx = nullptr
        
        if (i s>= 0 && i s< *(arg2 + 0x578))
            rdx = *(arg2 + 0x570) + sx.q(i) * 0x28
        
        sub_14233c970(r8_2, rdx)
    
    i += 1
    rsi_1 += 0x2a0
    rdi_1 += 8
while (i s< *(arg1 + 0x78))
