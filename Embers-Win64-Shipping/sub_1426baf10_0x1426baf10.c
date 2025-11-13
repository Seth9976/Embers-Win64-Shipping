// 函数: sub_1426baf10
// 地址: 0x1426baf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t entry_zmm2
int64_t* result = sub_1426bfc00(arg1, 0, entry_zmm2)

if ((*(arg1 + 0x263) & 4) == 0)
    sub_1426bc650(arg1)
    void* rsi_1 = nullptr
    char rdx_1 = 0
    
    if (*(arg1 + 0x1b8) == 1)
        rdx_1 = 2
    
    void* rax_1 = *(arg1 + 0xa8)
    *(arg1 + 0x263) = rdx_1 | (*(arg1 + 0x263) & 0xfd) | 0x20
    
    if (rax_1 == 0)
        rax_1 = sub_141ee69e0(arg1)
    
    if (rax_1 != 0)
        void* rdi_1 = *(rax_1 + 0x138)
        
        if (rdi_1 != 0)
            void* rax_2 = sub_14272b250()
            void* rdx_2 = *(rdi_1 + 0x10)
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if (rax_3.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
                rsi_1 = *(rdi_1 + 0xa0)
    
    if (rsi_1 != 0)
        int64_t* r8_2 = *(rsi_1 + 0x40)
        int64_t rdx_3 = sx.q(*(rsi_1 + 0x48))
        int64_t* rax_5 = r8_2
        void* rcx_3 = &r8_2[rdx_3]
        
        if (r8_2 != rcx_3)
            while (*rax_5 != arg1)
                rax_5 = &rax_5[1]
                
                if (rax_5 == rcx_3)
                    goto label_1426baff1
        
        if (r8_2 == rcx_3 || ((rax_5 - r8_2) s>> 3).d == 0xffffffff)
        label_1426baff1:
            int32_t rax_8 = (rdx_3 + 1).d
            *(rsi_1 + 0x48) = rax_8
            
            if (rax_8 s> *(rsi_1 + 0x4c))
                sub_1405a4d70(rsi_1 + 0x40)
            
            *(*(rsi_1 + 0x40) + (rdx_3 << 3)) = arg1
    
    result = sub_1426bb290(arg1, *(arg1 + 0x1b0))
    *(arg1 + 0x1bc) &= 0xfe

return result
