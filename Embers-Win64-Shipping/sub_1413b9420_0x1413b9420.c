// 函数: sub_1413b9420
// 地址: 0x1413b9420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
int128_t zmm0
int128_t zmm1

if (result.d s>= 0)
    int32_t rsi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r9_1 = rdi
        
        if (rsi_1 s< arg2)
            do
                int32_t rdx_1 = r9_1 * 2
                uint64_t rcx = zx.q(rdx_1 + 1)
                
                if ((rcx + 1).d s< arg2)
                    void* r10_1 = *(&arg1[sx.q(rdx_1)] + 0x28)
                    zmm0 = *(r10_1 + 0x34)
                    void* r11_1 = *(&arg1[sx.q(rcx.d)] + 8)
                    zmm1 = *(r11_1 + 0x34)
                    int64_t rax_7
                    
                    if (zmm0.d f== zmm1.d)
                        rax_7.b = *(r10_1 + 0x3c) u< *(r11_1 + 0x3c)
                    else
                        rax_7.b = zmm1.d f> zmm0.d
                    
                    if (rax_7.b != 0)
                        rcx = zx.q(rdx_1)
                    
                    rcx = zx.q(rcx.d + 1)
                
                int128_t* r9_4 = &arg1[sx.q(r9_1)]
                int128_t* rdx_4 = &arg1[sx.q(rcx.d)]
                void* r10_2 = *(r9_4 + 8)
                result = *(rdx_4 + 8)
                zmm0 = *(r10_2 + 0x34)
                zmm1 = *(result + 0x34)
                
                if (zmm0.d f== zmm1.d)
                    result.b = *(r10_2 + 0x3c) u< *(result + 0x3c)
                else
                    result.b = zmm1.d f> zmm0.d
                
                if (result.b == 0)
                    break
                
                if (r9_4 != rdx_4)
                    zmm1 = *r9_4
                    *r9_4 = *rdx_4
                    *rdx_4 = zmm1
                
                result = zx.q(((rcx << 1) + 1).d)
                r9_1 = rcx.d
            while (result.d s< arg2)
        
        rsi_1 -= 2
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* rbx_3 = &arg1[sx.q(i)]
    
    do
        if (arg1 != rbx_3)
            zmm1 = *arg1
            *arg1 = *rbx_3
            *rbx_3 = zmm1
        
        int32_t r10_3 = 0
        
        if (i s> 1)
            do
                int32_t rdx_5 = r10_3 * 2
                uint64_t rcx_1 = zx.q(rdx_5 + 1)
                
                if ((rcx_1 + 1).d s< i)
                    void* r11_2 = *(&arg1[sx.q(rdx_5)] + 0x28)
                    zmm0 = *(r11_2 + 0x34)
                    uint64_t rax_13 = *(&arg1[sx.q(rcx_1.d)] + 8)
                    zmm1 = *(rax_13 + 0x34)
                    
                    if (zmm0.d f== zmm1.d)
                        rax_13.b = *(r11_2 + 0x3c) u< *(rax_13 + 0x3c)
                    else
                        rax_13.b = zmm1.d f> zmm0.d
                    
                    if (rax_13.b != 0)
                        rcx_1 = zx.q(rdx_5)
                    
                    rcx_1 = zx.q(rcx_1.d + 1)
                
                void* r10_6 = &arg1[sx.q(r10_3)]
                void* rdx_8 = &arg1[sx.q(rcx_1.d)]
                void* r11_3 = *(r10_6 + 8)
                result = *(rdx_8 + 8)
                zmm0 = *(r11_3 + 0x34)
                zmm1 = *(result + 0x34)
                
                if (zmm0.d f== zmm1.d)
                    result.b = *(r11_3 + 0x3c) u< *(result + 0x3c)
                else
                    result.b = zmm1.d f> zmm0.d
                
                if (result.b == 0)
                    break
                
                if (r10_6 != rdx_8)
                    zmm1 = *r10_6
                    *r10_6 = *rdx_8
                    *rdx_8 = zmm1
                
                result = zx.q(((rcx_1 << 1) + 1).d)
                r10_3 = rcx_1.d
            while (result.d s< i)
        
        i -= 1
        rbx_3 -= 0x10
    while (i s> 0)

return result
