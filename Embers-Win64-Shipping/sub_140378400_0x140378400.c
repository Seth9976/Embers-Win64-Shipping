// 函数: sub_140378400
// 地址: 0x140378400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx

if (*(arg1 + 0x10) u>= 0x20)
    int32_t rbx_1 = *(arg1 + 0x10)
    int32_t rdx_1 = 1
    
    if (*(arg1 + 2) != 0x10)
        rdx_1 = 0
    
    if (*(arg1 + 0xb) != 2)
        rdx_1 = 0
    
    uint32_t i_2 = zx.d(*(arg1 + 8))
    rdx = sbb.d(rdx_1, rdx_1, rbx_1 != 0) & sbb.d(arg1.d, arg1.d, *(arg1 + 8) != 0) & rdx_1
    
    if (i_2 s> 0)
        void* r9_1 = arg1 + 0x1c
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            uint32_t rcx_1
            rcx_1.b = *r9_1
            
            if (*(r9_1 - 0xc) != rbx_1)
                rdx = 0
            
            i_2.b = rcx_1.b
            i_2.b &= 0xf
            bool cond:3_1 = i_2.b u> 4
            i_2.b = *(r9_1 + 1)
            
            if (cond:3_1)
                rdx = 0
            
            rcx_1.b &= 0xf0
            
            if (rcx_1.b u> 0x30)
                rdx = 0
            
            if (i_2.b != 1 && i_2.b != 2)
                rdx = 0
            
            rcx_1 = zx.d(*(r9_1 + 2))
            
            if (rcx_1.w != 0)
                int16_t r10_1 = 0
                
                do
                    r10_1 += 1
                    i_2.w = rcx_1.w - 1
                    rcx_1.w &= i_2.w
                while (rcx_1.w != 0)
                
                if (r10_1 != zx.w(*(r9_1 + 1)))
                    rdx = 0
            
            r9_1 += 0x14
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    rdx = 0

return zx.q(rdx)
