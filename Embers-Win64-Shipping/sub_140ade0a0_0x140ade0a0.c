// 函数: sub_140ade0a0
// 地址: 0x140ade0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = 0
float zmm1 = arg1[3] f* 255f
int32_t rcx_1 = int.d(zmm1 + zmm1 + 0.5f) s>> 1
char r9

if (rcx_1 s>= 0)
    r9 = -1
    
    if (rcx_1 s< 0xff)
        r9 = rcx_1.b
else
    r9 = 0

zmm1 = arg1[2] f* 255f
int32_t rcx_3 = int.d(zmm1 + zmm1 + 0.5f) s>> 1
char r8

if (rcx_3 s>= 0)
    r8 = -1
    
    if (rcx_3 s< 0xff)
        r8 = rcx_3.b
else
    r8 = 0

zmm1 = arg1[1] f* 255f
int32_t r10_1 = int.d(zmm1 + zmm1 + 0.5f) s>> 1
char rcx_4

if (r10_1 s>= 0)
    rcx_4 = -1
    
    if (r10_1 s< 0xff)
        rcx_4 = r10_1.b
else
    rcx_4 = 0

zmm1 = *arg1 * 255f
int32_t r10_3 = int.d(zmm1 + zmm1 + 0.5f) s>> 1

if (r10_3 s>= 0)
    rax = -1
    
    if (r10_3 s< 0xff)
        rax = r10_3.b

arg2[2] = rax
*arg2 = r8
arg2[1] = rcx_4
arg2[3] = r9
return arg2
