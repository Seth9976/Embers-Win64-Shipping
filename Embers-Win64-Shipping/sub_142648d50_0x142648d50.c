// 函数: sub_142648d50
// 地址: 0x142648d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[1].d)
int32_t rax = (rsi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1407755b0(arg1)

int64_t rcx = rsi * 0x58
int64_t* rcx_1 = rcx + *arg1

if (rcx == neg.q(*arg1))
    rcx_1 = nullptr
else
    *(rcx_1 + 0x4c) = 0

char rdx_1 = -0x80
*rcx_1 = *arg2
rcx_1[1].d = arg2[1].d
int32_t r8_1 = int.d(fconvert.t(254.5f)) s>> 1
*(rcx_1 + 0xc) = data_143dbb1f0.d.d
rcx_1[2].d = data_143dbb1f0:4.d
char rax_2

if (r8_1 s>= 0xffffff80)
    rax_2 = 0x7f
    
    if (r8_1 s< 0x7f)
        rax_2 = r8_1.b
else
    rax_2 = -0x80

*(rcx_1 + 0x4c) = rax_2
int32_t result = int.d(fconvert.t(0.5f)) s>> 1
char r9

if (result s>= 0xffffff80)
    r9 = 0x7f
    
    if (result s< 0x7f)
        r9 = result.b
else
    r9 = -0x80

*(rcx_1 + 0x4d) = r9
char r9_1

if (result s>= 0xffffff80)
    r9_1 = 0x7f
    
    if (result s< 0x7f)
        r9_1 = result.b
else
    r9_1 = -0x80

*(rcx_1 + 0x4e) = r9_1
*(rcx_1 + 0x4f) = 0x7f
char r9_2

if (result s>= 0xffffff80)
    r9_2 = 0x7f
    
    if (result s< 0x7f)
        r9_2 = result.b
else
    r9_2 = -0x80

rcx_1[0xa].b = r9_2
char r9_3

if (r8_1 s>= 0xffffff80)
    r9_3 = 0x7f
    
    if (r8_1 s< 0x7f)
        r9_3 = r8_1.b
else
    r9_3 = -0x80

*(rcx_1 + 0x51) = r9_3

if (result s>= 0xffffff80)
    rdx_1 = 0x7f
    
    if (result s< 0x7f)
        rdx_1 = result.b

*(rcx_1 + 0x52) = rdx_1
*(rcx_1 + 0x53) = 0x7f
*(rcx_1 + 0x54) = arg3
*(rcx_1 + 0x53) = 0x7f
return result
