// 函数: sub_1429d2c50
// 地址: 0x1429d2c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int64_t rdx = sx.q(*(rax + 0x50))
int32_t r11
r11.b = *(rax + 0x20) != 4
int64_t rsi = sx.q(*(rax + 0x38) + rdx.d)
int64_t r10 = rdx

if (rdx s< rsi)
    do
        void* rdx_1 = arg1[4]
        char* r8_2 = sx.q(*(*(rdx_1 + 0x60) + (r10 << 2))) + *(rdx_1 + 0xa8)
        uint64_t i_3 = zx.q(*(*(rdx_1 + 0x48) + (r10 << 1)))
        
        if ((*r8_2 & 1) != 0 && (not.b((*(*arg1 + 0x180))[r10]) & 1) != 0)
            int16_t* rdx_2 = *(rdx_1 + 0xc0) + (sx.q(*(*(rdx_1 + 0x60) + (r10 << 2))) << 2)
            int32_t rcx_2 = 0
            
            if (i_3.d s> 0)
                uint64_t i
                
                do
                    if ((*r8_2 & 0x18) != 0)
                        *rdx_2 = rcx_2.w
                        rdx_2[1] = rcx_2.w + (r11 + 2).w - 1
                    
                    rcx_2 += r11 + 2
                    r8_2 = &r8_2[1]
                    rdx_2 = &rdx_2[2]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
        
        r10 += 1
    while (r10 s< rsi)

void* rax_10 = *arg1
int64_t rcx_3 = sx.q(*(rax_10 + 0x54))
int64_t r10_1 = rcx_3
uint64_t result = zx.q(*(rax_10 + 0x3c) + rcx_3.d)
int64_t rsi_1 = sx.q(result.d)

if (rcx_3 s< rsi_1)
    do
        void* r11_2 = arg1[4]
        char* r9_2 = sx.q(*(*(r11_2 + 0x60) + (r10_1 << 2))) + *(r11_2 + 0xa8)
        result = *(r11_2 + 0x48)
        uint32_t i_4 = zx.d(*(result + (r10_1 << 1)))
        
        if ((*r9_2 & 1) != 0)
            void* rdx_3 = *arg1
            result = *(rdx_3 + 0x180)
            
            if ((not.b(*(result + r10_1)) & 1) != 0)
                void* r8_3 = arg1[2]
                result = *(r11_2 + 0xc0) + (sx.q(*(*(r11_2 + 0x60) + (r10_1 << 2))) << 2)
                
                if (i_4 s> 0)
                    int64_t r8_5 = *(r8_3 + 0xc0) + (
                        sx.q(*(*(r8_3 + 0x60) + (sx.q(*(*(rdx_3 + 0x138) + (r10_1 << 2))) << 2)))
                        << 2) - result
                    uint64_t i_2 = zx.q(i_4)
                    uint64_t i_1
                    
                    do
                        if ((*r9_2 & 0x18) != 0)
                            *result = *(r8_5 + result)
                        
                        r9_2 = &r9_2[1]
                        result += 4
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
        
        r10_1 += 1
    while (r10_1 s< rsi_1)

return result
