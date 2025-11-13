// 函数: sub_1419d2ea0
// 地址: 0x1419d2ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
int32_t rsi
uint64_t result_1

if (arg3 != 1)
    int32_t rax_1
    void* rcx
    
    if (arg3 != 2)
        void* rax_2 = *(arg1 + 0x90)
        rcx = arg1 + 0x10
        
        if (rax_2 != 0)
            rcx = rax_2
        
        rax_1 = *(arg1 + 0x98)
    else
        void* rax = *(arg1 + 0x108)
        rcx = arg1 + 0xd8
        
        if (rax != 0)
            rcx = rax
        
        rax_1 = *(arg1 + 0x110)
    
    int32_t var_10_1 = rax_1
    int64_t var_18
    result = &var_18
    uint128_t zmm0 = rcx.o
    result_1 = zmm0.q
    rsi = _mm_bsrli_si128(zmm0, 8).d
else
    result_1 = arg1 + 0xa8
    result = *(result_1 + 0x20)
    rsi = *(result_1 + 0x28)
    
    if (result != 0)
        result_1 = result

int32_t rbx = 0

if (rsi s> 0)
    void* r10 = result_1 + 8
    
    do
        if ((*(r10 + 6) & 1) != 0)
            result = nullptr
            
            if (arg4[0xe] s> 0)
                int64_t r8 = 0
                
                do
                    int32_t* rcx_1 = *(arg4 + 0x30)
                    int32_t* r11_1 = arg4
                    
                    if (rcx_1 != 0)
                        r11_1 = rcx_1
                    
                    int32_t rdx_3 = *(r11_1 + r8) & 0xf
                    
                    if (rdx_3 == rbx)
                        *(r11_1 + r8) = (zx.d(*(r10 + 4)) * arg2 + *r10) << 4 | rdx_3
                    
                    result = zx.q(result.d + 1)
                    r8 += 0xc
                while (result.d s< arg4[0xe])
        
        rbx += 1
        r10 += 0x10
    while (rbx s< rsi)

return result
