// 函数: sub_1414f8a70
// 地址: 0x1414f8a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = -0x80
float zmm1 = *arg2 * 127f
int32_t r8_1 = int.d(zmm1 + zmm1 + 0.5f) s>> 1
char rdx

if (r8_1 s>= 0xffffff80)
    rdx = 0x7f
    
    if (r8_1 s< 0x7f)
        rdx = r8_1.b
else
    rdx = -0x80

*arg1 = rdx
zmm1 = arg2[1] f* 127f
int32_t r8_3 = int.d(zmm1 + zmm1 + 0.5f) s>> 1
char rdx_1

if (r8_3 s>= 0xffffff80)
    rdx_1 = 0x7f
    
    if (r8_3 s< 0x7f)
        rdx_1 = r8_3.b
else
    rdx_1 = -0x80

arg1[1] = rdx_1
zmm1 = arg2[2] f* 127f
int32_t rdx_3 = int.d(zmm1 + zmm1 + 0.5f) s>> 1

if (rdx_3 s>= 0xffffff80)
    rax = 0x7f
    
    if (rdx_3 s< 0x7f)
        rax = rdx_3.b

arg1[2] = rax
arg1[3] = 0x7f
return arg1
