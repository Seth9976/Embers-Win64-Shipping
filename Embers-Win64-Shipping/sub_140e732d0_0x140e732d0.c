// 函数: sub_140e732d0
// 地址: 0x140e732d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1

if (*(arg2 + 0x5c) != 0)
    int64_t rax_1 = sx.q(*(arg2 + 0x50))
    
    if (rax_1.d s< 0xb)
        int64_t rdx = rax_1 * 3
        int64_t zmm0
        zmm0.d = (*(arg2 + 0x18)).d f- *(arg1 + (rdx << 3) + 0x2d8)
        zmm1 = *(arg2 + 0x1c) f- *(arg1 + (rdx << 3) + 0x2dc)
        zmm0.d = zmm0.d f* zmm0.d
        zmm0.d = zmm0.d f+ zmm1 * zmm1
        
        if (not(_mm_sqrt_ss(zmm0.d, zmm0.d).d f< data_143e29e90))
            if (*(arg1 + (rdx << 3) + 0x2d0) != 0)
                *(arg1 + (rdx << 3) + 0x2d0) = 0
            
            *(arg1 + (rdx << 3) + 0x2d8) = 0

int64_t rsi = sx.q(*(arg2 + 0x50))

if (*(arg1 + 0x98) != *(arg1 + 0xc4))
    void* rcx = *(arg1 + 0xd0)
    void* r8_1 = arg1 + 0xc8
    
    if (rcx != 0)
        r8_1 = rcx
    
    int32_t i = *(r8_1 + (((sx.q(*(arg1 + 0xd8)) - 1) & rsi) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x90)
        
        do
            int64_t rdx_4 = sx.q(i) * 5
            void* rcx_2 = r8_2 + (rdx_4 << 2)
            
            if (*(r8_2 + (rdx_4 << 2)) == rsi.d)
                if (i == 0xffffffff || rcx_2 == 0)
                    break
                
                *(rcx_2 + 4) = *(arg2 + 0x18)
                return i
            
            i = *(rcx_2 + 0xc)
        while (i != 0xffffffff)

int32_t var_18
sub_140a9e570(arg1 + 0x90, &var_18)
float arg_8
zmm1 = arg_8
int32_t rax_3 = var_18
int32_t* var_10
var_10[1] = arg_8
var_10[2] = zmm1
*var_10 = rsi.d
var_10[3] = 0xffffffff
sub_140e60eb0(arg1 + 0x90, &arg_8, rsi.d, var_10, rax_3, nullptr)
int64_t rax_5 = *(arg1 + 0x90)
*(rax_5 + sx.q(arg_8) * 0x14 + 4) = *(arg2 + 0x18)
return rax_5
