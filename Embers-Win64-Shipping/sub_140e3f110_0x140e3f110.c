// 函数: sub_140e3f110
// 地址: 0x140e3f110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x1cc)
int32_t r10 = 1
int32_t rcx
void* rdi_1
int32_t r8
int32_t r9

if (rax != 1)
    if (rax != 3)
        sub_140e43530(arg1, 0xffffff18)
        noreturn
    
    if (*(arg1 + 0x1d4) != 1 || *(arg1 + 0x1e4) != 1 || *(arg1 + 0x1d8) != 1
            || *(arg1 + 0x1e8) != 1)
        sub_140e43530(arg1, 0xffffff19)
        noreturn
    
    int32_t rax_1 = arg1[0x1d].d
    
    if (rax_1 != 1)
        if (rax_1 != 2)
            sub_140e43530(arg1, 0xffffff19)
            noreturn
        
        rdi_1 = &arg1[0x1e]
        
        if (*rdi_1 != 1)
            if (*rdi_1 != 2)
                sub_140e43530(arg1, 0xffffff19)
                noreturn
            
            *(arg1 + 0x1c8) = 4
            r8 = 4
            *(arg1 + 0x250c) = 6
            *(arg1 + 0x274) = 0x10
            *(arg1 + 0x278) = 0x10
            rcx = 0x10
            r9 = rcx
        else
            *(arg1 + 0x1c8) = rax_1
            r9 = rax_1 + 0xe
            *(arg1 + 0x250c) = 4
            r8 = rax_1
            *(arg1 + 0x274) = 0x10
            rcx = 8
            *(arg1 + 0x278) = 8
    else
        rdi_1 = &arg1[0x1e]
        int32_t rax_2 = *rdi_1
        
        if (rax_2 != 1)
            if (rax_2 != 2)
                sub_140e43530(arg1, 0xffffff19)
                noreturn
            
            *(arg1 + 0x250c) = 4
            r8 = 3
            *(arg1 + 0x1c8) = 3
            *(arg1 + 0x274) = 8
            r9 = 8
            rcx = rax_2 + 0xe
            *(arg1 + 0x278) = 0x10
        else
            *(arg1 + 0x1c8) = 1
            *(arg1 + 0x250c) = 3
            rcx = 8
            *(arg1 + 0x274) = 8
            r8 = 1
            *(arg1 + 0x278) = 8
            r9 = rcx
else
    if (arg1[0x1d].d != 1)
        sub_140e43530(arg1, 0xffffff19)
        noreturn
    
    rdi_1 = &arg1[0x1e]
    
    if (*rdi_1 != 1)
        sub_140e43530(arg1, 0xffffff19)
        noreturn
    
    *(arg1 + 0x1c8) = 0
    r8 = 0
    *(arg1 + 0x250c) = 1
    rcx = 8
    *(arg1 + 0x274) = 8
    *(arg1 + 0x278) = 8
    r9 = rcx

*(arg1 + 0x2508) = divs.dp.d(sx.q(*(arg1 + 0x108) - 1 + r9), r9)
bool cond:1 = r8 != 0
r8.b = 1
arg1[0x252].d = divs.dp.d(sx.q(*(arg1 + 0x10c) - 1 + rcx), rcx)

if (cond:1)
    r10 = 4

*(arg1 + 0x2c4) = r10
int32_t rcx_1 = *(arg1 + 0x108)
uint64_t rdx_5 = zx.q(((rcx_1 + 0xf) & 0xfff0) * r10)
*(arg1 + 0x2bc) = *(arg1 + 0x2c4) * rcx_1
arg1[0x2c].d = rdx_5.d
arg1[0x357].q = sub_140e34940(arg1, rdx_5, r8.b)

if (*(arg1 + 0x1c8) - 3 u<= 1)
    *(arg1 + 0x3578) = sub_140e34940(arg1, sx.q(arg1[0x2c].d), 1)

int32_t rcx_4 = *(arg1 + 0x250c)
int32_t rax_20 = rcx_4 * *(arg1 + 0x2508)
arg1[0x28].d = rax_20

if (rax_20 s> 0x2000)
    sub_140e43530(arg1, 0xffffff1c)
    noreturn

int32_t i = 0
*(arg1 + 0x2538) = sub_140e34940(arg1, sx.q(rcx_4 << 6) * 2, 0)
void* __offset(_SETJMP_FLOAT128, 0x2540) rax_21

if (*(arg1 + 0x250c) s> 0)
    rax_21 = &arg1[0x254]
    
    do
        *rax_21 = 0x40
        rax_21 += 4
        i += 1
    while (i s< *(arg1 + 0x250c))

int32_t rcx_8 = *rdi_1 * arg1[0x1d].d
*(arg1 + 0x2518) = rcx_8
int32_t rcx_9 = rcx_8 * *(arg1 + 0x1cc)
arg1[0x251].d = rcx_9
int32_t rdx_10 = rcx_9 * *(arg1 + 0x2508)
rax_21.b = rcx_9 == 0xc
*(arg1 + 0x251c) = rax_21.b
*(arg1 + 0x2514) = rdx_10

if (rcx_9 != 0xc)
    rdx_10 = arg1[0x28].d

*(arg1 + 0x2568) = sub_140e34940(arg1, sx.q(rdx_10 << 6), 0)
int32_t rdx_13 = 0x2c8d00
int32_t i_1 = -0xb2f480
*(arg1 + 0x2b4) = *(arg1 + 0x10c)
int32_t r8_2 = 0x5b6900
*(arg1 + 0x2b8) = 0
int32_t r9_1 = -0xe25100
void* rbx_1 = &arg1[0x297]
int32_t result

do
    *(rbx_1 + 0x400) = r8_2
    int32_t rax_25 = i_1 s>> 0x10
    i_1 += 0x166e9
    *(rbx_1 - 0x400) = rax_25
    *(rbx_1 + 0x800) = rdx_13
    rbx_1 += 4
    result = r9_1 s>> 0x10
    r9_1 += 0x1c5a2
    r8_2 -= 0xb6d2
    *(rbx_1 - 4) = result
    rdx_13 -= 0x581a
while (i_1 s<= 0xb28d97)

return result
