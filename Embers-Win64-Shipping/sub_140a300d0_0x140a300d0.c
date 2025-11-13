// 函数: sub_140a300d0
// 地址: 0x140a300d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* wcs2 = arg3

if (arg1[1].d s<= 1 || wcs2 == 0 || *arg3 == 0)
    sub_140596d10(arg2, arg1)
    return arg2

int16_t* wcs1 = *arg1
int64_t r12 = -1

do
    r12 += 1
while (arg3[r12] != 0)

int64_t r14 = -1

do
    r14 += 1
while (*(arg4 + (r14 << 1)) != 0)

int64_t var_60 = 0
int32_t rsi = 0
int32_t r15 = 0
int32_t var_54 = 0

while (true)
    void* rax
    
    if (arg5 != 1)
        rax = wcsstr(wcs1, wcs2)
    else
        rax = sub_140a32c90(wcs1, wcs2)
    
    if (rax == 0)
        break
    
    int32_t rbx_3 = ((rax - wcs1) s>> 1).d
    
    if (rbx_3 != 0)
        int64_t rdi_1 = sx.q(rsi)
        int32_t rax_1
        rax_1.b = rsi == 0
        rsi = rdi_1.d + rax_1 + rbx_3
        
        if (rsi s> r15)
            sub_140594770(&var_60)
            r15 = var_54
        
        int64_t rcx_3
        rcx_3.b = rdi_1.d != 0
        int64_t rdi_2 = var_60 + ((rdi_1 - rcx_3) << 1)
        int64_t rbx_4 = sx.q(rbx_3) * 2
        UnDecorator::getReferenceType(rdi_2, wcs1, rbx_4.d)
        *(rbx_4 + rdi_2) = 0
    
    if (r14.d != 0)
        int64_t rbx_5 = sx.q(rsi)
        int32_t rax_5
        rax_5.b = rsi == 0
        rsi = rbx_5.d + rax_5 + r14.d
        
        if (rsi s> r15)
            sub_140594770(&var_60)
            r15 = var_54
        
        int64_t rcx_7
        rcx_7.b = rbx_5.d != 0
        int64_t rdi_3 = var_60 + ((rbx_5 - rcx_7) << 1)
        int64_t rbx_6 = sx.q(r14.d) * 2
        UnDecorator::getReferenceType(rdi_3, arg4, rbx_6.d)
        *(rbx_6 + rdi_3) = 0
    
    wcs2 = arg3
    wcs1 = (sx.q(r12.d) << 1) + rax

int64_t r15_1 = -1

do
    r15_1 += 1
while (wcs1[r15_1] != 0)

int32_t r14_1 = var_54

if (r15_1.d != 0)
    int64_t rbx_7 = sx.q(rsi)
    int32_t rax_10
    rax_10.b = rsi == 0
    rsi = rbx_7.d + rax_10 + r15_1.d
    
    if (rsi s> r14_1)
        sub_140594770(&var_60)
        r14_1 = var_54
    
    int64_t rcx_11
    rcx_11.b = rbx_7.d != 0
    int64_t rdi_4 = var_60 + ((rbx_7 - rcx_11) << 1)
    int64_t rbx_8 = sx.q(r15_1.d) * 2
    UnDecorator::getReferenceType(rdi_4, wcs1, rbx_8.d)
    *(rbx_8 + rdi_4) = 0

*arg2 = var_60
arg2[1].d = rsi
*(arg2 + 0xc) = r14_1
return arg2
