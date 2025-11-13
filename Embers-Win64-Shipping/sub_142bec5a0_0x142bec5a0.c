// 函数: sub_142bec5a0
// 地址: 0x142bec5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1[0x10].d
int64_t rdx = sx.q(*(arg1 + 0x104) - arg1[0x11].d)
int64_t rax_2 = *(arg1 + 0x128)
void* r8 = rax_2 + (rdx << 3)

for (int32_t* i = *(rax_2 + (rdx << 3)); i != 0; i = *(i + 0x10))
    int32_t rcx = *i
    
    if (rcx s> r9)
        break
    
    if (rcx == r9)
        i[2] += *(arg1 + 0x118)
        i[1] += *(arg1 + 0x11c)
        return i
    
    r8 = &i[4]

int64_t r11 = arg1[0x14].q

if (r11 s>= *(arg1 + 0x138))
    longjmp(arg1, 1)
    breakpoint

int32_t* rdx_1 = arg1[0x13].q + r11 * 0x18
arg1[0x14].q = r11 + 1
*rdx_1 = r9
rdx_1[2] = *(arg1 + 0x118)
rdx_1[1] = *(arg1 + 0x11c)
int64_t rax_7 = *r8
*(rdx_1 + 0x10) = rax_7
*r8 = rdx_1
return rax_7
