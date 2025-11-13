// 函数: sub_1429e4ba0
// 地址: 0x1429e4ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t r14 = 0
int32_t r15 = 1
uint32_t rbx_5
int32_t r9_2
int32_t temp0_1

do
    int32_t rsi_1 = 0
    uint32_t rbx_4 = (arg1[1].d + 1) << 7 u>> 8
    
    if (*(arg1 + 0xc) s< 0)
        sub_142a23140(arg1)
    
    int64_t r8_1 = *arg1
    uint64_t rcx_2 = zx.q(rbx_4) << 0x38
    
    if (r8_1 u>= rcx_2)
        rsi_1 = 1
        rbx_4 = arg1[1].d - rbx_4
        r8_1 -= rcx_2
    
    uint32_t rdx_1 = zx.d(*(zx.q(rbx_4) + &data_143603f00))
    r9_2 = *(arg1 + 0xc) - rdx_1
    rbx_5 = rbx_4 << rdx_1.b
    r14 |= rsi_1 << r15.b
    *arg1 = r8_1 << rdx_1.b
    temp0_1 = r15
    r15 -= 1
    *(arg1 + 0xc) = r9_2
    arg1[1].d = rbx_5
while (temp0_1 - 1 s>= 0)

if (r14 != 3)
    return zx.q(r14)

uint32_t rbx_8 = (rbx_5 + 1) << 7 u>> 8

if (r9_2 s< 0)
    sub_142a23140(arg1)

int64_t r8_3 = *arg1
uint64_t rcx_8 = zx.q(rbx_8) << 0x38

if (r8_3 u>= rcx_8)
    rbp = 1
    rbx_8 = arg1[1].d - rbx_8
    r8_3 -= rcx_8

uint32_t rdx_2 = zx.d(*(zx.q(rbx_8) + &data_143603f00))
*(arg1 + 0xc) -= rdx_2
arg1[1].d = rbx_8 << rdx_2.b
*arg1 = r8_3 << rdx_2.b
return zx.q(rbp + 3)
