// 函数: sub_141c46d20
// 地址: 0x141c46d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result[0x4] = zx.o(0)
char rdi = arg4
float result_1[0x4] = arg2
int128_t zmm7 = arg3

if (arg3.d f> 0f)
    char rax_1 = arg1[5].b
    
    if (rdi == 1)
        if (rax_1 != 1)
            result = logf(__maxss_xmmss_memss((*arg1)[0], 0x38d1b717)[0])
            result[0] = result[0] * 8.68588924f
            *arg1 = result[0]
        
        result = logf(__maxss_xmmss_memss(result_1[0], 0x38d1b717)[0])
        result_1 = result
        result_1[0] = result_1[0] * 8.68588924f
    else if (rax_1 == 1)
        arg2 = *arg1
        arg2[0] = arg2[0] * 0.0500000007f
        result = powf(0x41200000[0], arg2[0])
        *arg1 = result[0]
    
    arg1[1] = result_1[0]
else
    zmm7 = 0xbf800000
    rdi = 0
    *arg1 = result_1[0]
    arg1[1] = result_1[0]

arg1[4] = 0
arg1[5].b = rdi
arg1[3] = zmm7.d
return result
