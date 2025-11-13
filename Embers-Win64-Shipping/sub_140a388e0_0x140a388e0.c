// 函数: sub_140a388e0
// 地址: 0x140a388e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_40 = arg2
int32_t i_4 = -1
int32_t i_2 = 0xffffffff
int32_t rsi = 0
int32_t var_34 = 0xffffffff
sub_1405b6730(arg1 + 8, *(arg1 + 0x10) - *(arg1 + 0x3c), 0)

if (*(arg1 + 0x50) != 0)
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8 = arg1 + 0x40
    void* rcx_2 = *(r8 + 8)
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    i_4 = *(r8 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_2)) << 2))
    int32_t i_5 = i_4
    i_2 = i_4
    
    if (i_4 != 0xffffffff)
        int64_t rdx_5 = *(arg1 + 8)
        i_2 = i_4
        int32_t i
        
        do
            int64_t rcx_3 = sx.q(i_4) * 3
            i = *(rdx_5 + (rcx_3 << 3) + 0x10)
            int32_t i_3 = i
            
            if (*(rdx_5 + (rcx_3 << 3)) == arg2)
                break
            
            i_2 = i
            i_4 = i
        while (i != 0xffffffff)

int64_t zmm1 = i_2.q
int128_t zmm0 = (arg1 + 8).o

if (i_4 != 0xffffffff)
    int64_t* r10_1 = zmm0.q
    int32_t j = zmm1:4.d
    int32_t i_1 = zmm1.d
    
    do
        if (arg3 == rsi)
            return *(*r10_1 + sx.q(i_1) * 0x18 + 8)
        
        rsi += 1
        i_1 = j
        
        if (j == 0xffffffff)
            break
        
        int64_t r8_1 = *r10_1
        
        do
            int64_t rcx_4 = sx.q(i_1) * 3
            j = *(r8_1 + (rcx_4 << 3) + 0x10)
            
            if (*(r8_1 + (rcx_4 << 3)) == zmm0:8.q)
                break
            
            i_1 = j
        while (j != 0xffffffff)
    while (i_1 != 0xffffffff)

return 0
