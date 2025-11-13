// 函数: sub_1429e46c0
// 地址: 0x1429e46c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = 1
void* rcx = arg1 + 0x10ac

while (*rcx == *(arg1 + 0x10a8))
    rax += 1
    rcx += 4
    
    if (rax s>= 3)
        return 0

int32_t rsi = 0
int32_t rbp = 0
uint32_t rdi_3 = (arg2[1].d + 1) << 7 u>> 8

if (*(arg2 + 0xc) s< 0)
    sub_142a23140(arg2)

int64_t r8 = *arg2
uint64_t rcx_3 = zx.q(rdi_3) << 0x38

if (r8 u>= rcx_3)
    rbp = 1
    rdi_3 = arg2[1].d - rdi_3
    r8 -= rcx_3

uint32_t rdx_1 = zx.d(*(zx.q(rdi_3) + &data_143603f00))
int32_t r9_1 = *(arg2 + 0xc) - rdx_1
uint32_t rdi_4 = rdi_3 << rdx_1.b
*arg2 = r8 << rdx_1.b
*(arg2 + 0xc) = r9_1
arg2[1].d = rdi_4

if (rbp != 0)
    uint32_t rdi_7 = (rdi_4 + 1) << 7 u>> 8
    
    if (r9_1 s< 0)
        sub_142a23140(arg2)
    
    int64_t r8_2 = *arg2
    uint64_t rcx_8 = zx.q(rdi_7) << 0x38
    
    if (r8_2 u>= rcx_8)
        rsi = 1
        rdi_7 = arg2[1].d - rdi_7
        r8_2 -= rcx_8
    
    uint32_t rdx_2 = zx.d(*(zx.q(rdi_7) + &data_143603f00))
    *(arg2 + 0xc) -= rdx_2
    arg2[1].d = rdi_7 << rdx_2.b
    rsi += 1
    *arg2 = r8_2 << rdx_2.b

return zx.q(rsi)
