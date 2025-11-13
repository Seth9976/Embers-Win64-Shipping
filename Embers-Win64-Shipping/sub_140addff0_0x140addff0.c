// 函数: sub_140addff0
// 地址: 0x140addff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = 0
int32_t r8 = int.d(arg1[3] f* 255f)
char rcx

if (r8 s>= 0)
    rcx = -1
    
    if (r8 s< 0xff)
        rcx = r8.b
else
    rcx = 0

int32_t r9 = int.d(arg1[2] f* 255f)
char r8_1

if (r9 s>= 0)
    r8_1 = -1
    
    if (r9 s< 0xff)
        r8_1 = r9.b
else
    r8_1 = 0

int32_t r10 = int.d(arg1[1] f* 255f)
char r9_1

if (r10 s>= 0)
    r9_1 = -1
    
    if (r10 s< 0xff)
        r9_1 = r10.b
else
    r9_1 = 0

int32_t r10_1 = int.d(*arg1 * 255f)

if (r10_1 s>= 0)
    rax = -1
    
    if (r10_1 s< 0xff)
        rax = r10_1.b

arg2[2] = rax
*arg2 = r8_1
arg2[1] = r9_1
arg2[3] = rcx
return arg2
