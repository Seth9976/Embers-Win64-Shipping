// 函数: sub_142bdc1a0
// 地址: 0x142bdc1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = *(arg2 + 8)
int32_t* result_1 = nullptr
uint64_t i_6 = zx.q(*arg2)
int32_t r8 = 0
uint32_t rbp = 0
int32_t rdx = 0
int32_t i_5 = *arg1
int32_t* result = *(arg1 + 8)

if (i_5 != 0)
    result = &result[4]
    int32_t i
    
    do
        *result &= 0xfffffffb
        result[4] = 0xffffffff
        result = &result[0xa]
        i = i_5
        i_5 -= 1
    while (i != 1)

if (i_6.d != 0)
    int64_t r11_1 = 0
    uint64_t i_3 = i_6
    uint64_t i_1
    
    do
        if (r8 == 0)
            rbp = zx.d(*rdi)
            r8 = 0x80
            rdi = &rdi[1]
        
        if ((r8 & rbp) != 0)
            void* r9_1 = *(arg1 + 8) + r11_1
            result = zx.q(*(r9_1 + 0x10))
            
            if ((result.b & 4) == 0)
                result = zx.q(result.d) | 4
                *(r9_1 + 0x10) = result.d
                
                if (rdx u< *arg1)
                    result = *(arg1 + 0x10)
                    uint64_t rcx = zx.q(rdx)
                    rdx += 1
                    *(result + (rcx << 3)) = r9_1
        
        r8 s>>= 1
        r11_1 += 0x28
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

arg1[1] = rdx
void* rbx_1 = *(arg1 + 0x10)

if (rdx s> 1)
    int64_t* r11_2 = rbx_1 + 8
    uint64_t i_4 = zx.q(rdx - 1)
    uint64_t i_2
    
    do
        int32_t* r8_1 = *r11_2
        result = result_1
        
        if (result_1 s>= 0)
            int32_t* result_2
            
            do
                int32_t* rdx_1 = *(rbx_1 + (result << 3))
                
                if (*rdx_1 s< *r8_1)
                    break
                
                *(rbx_1 + (result << 3) + 8) = rdx_1
                *(rbx_1 + (result << 3)) = r8_1
                result_2 = result
                result -= 1
            while (result_2 - 1 s>= 0)
        
        r11_2 = &r11_2[1]
        result_1 += 1
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

return result
