// 函数: sub_14175ce20
// 地址: 0x14175ce20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rdx = arg1[1]
int64_t result

if (arg1[2] == rdx)
    sub_141701fc0(arg1, rdx, arg2)
    result = arg1[1]
else
    *rdx = *arg2
    arg1[1] += 0x10
    result = arg1[1]

int64_t r9 = *arg1
int64_t r8_3 = (result - r9) s>> 4

if (r8_3 s>= 2)
    uint128_t zmm1 = *(result - 0x10)
    int64_t i_1 = r8_3 - 1
    
    if (i_1 s> 0)
        int64_t rbx_1 = sx.q(_mm_bsrli_si128(zmm1, 8).d) * 0x38
        int64_t i
        
        do
            i = (i_1 - 1) s>> 1
            int64_t r11_2 = i * 2
            int64_t rdx_1 = **(r9 + (r11_2 << 3))
            result = sx.q(*(r9 + (r11_2 << 3) + 8))
            
            if ((*(rbx_1 + rdx_1 + 0x18)).d f>= *(result * 0x38 + rdx_1 + 0x18))
                break
            
            *(r9 + i_1 * 0x10) = *(r9 + (r11_2 << 3))
            i_1 = i
        while (i s> 0)
    
    *(r9 + i_1 * 0x10) = zmm1

return result
