// 函数: sub_140baaa80
// 地址: 0x140baaa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *arg2
int16_t* r8 = rcx + (sx.q(arg2[1].d) << 1)
int32_t r8_1

if (r8 == rcx)
label_140baaac4:
    r8_1 = -1
else
    while (true)
        r8 -= 2
        
        if (*r8 == 0x2f)
            r8_1 = ((r8 - rcx) s>> 1).d
            break
        
        if (r8 == rcx)
            goto label_140baaac4

*arg1 = 0
arg1[1] = 0
int32_t r8_2 = arg2[1].d
int32_t rdi = r8_2 - 1

if (r8_2 == 0)
    rdi = 0

int32_t rcx_1

if (r8_1 + 1 s>= 0)
    rcx_1 = rdi
    
    if (r8_1 + 1 s< rdi)
        rcx_1 = r8_1 + 1
else
    rcx_1 = 0

int64_t r10 = sx.q(rcx_1)

if (sx.q(r8_1 + 1) + 0x7fffffff s< r10)
    rdi = rcx_1
else if (sx.q(r8_1 + 1) + 0x7fffffff s< sx.q(rdi))
    rdi = r8_1 - -0x80000000

int16_t* const rax_3

if (r8_2 == 0)
    rax_3 = &data_142d40450
else
    rax_3 = *arg2

int16_t* r15 = &rax_3[r10]
int64_t var_28 = 0
int32_t rdi_1 = rdi - rcx_1
int64_t var_20 = 0
int64_t rsi = 0
int32_t rbp = 0
int32_t r14 = 0

if (r15 != 0 && *r15 != 0 && rdi_1 s> 0)
    if (rdi_1 + 1 s> 0)
        sub_1405947f0(&var_28, rdi_1 + 1)
        r14 = var_20:4.d
        rbp = var_20.d
        rsi = var_28
    
    rbp += rdi_1 + 1
    var_20.d = rbp
    
    if (rbp s> r14)
        sub_140594770(&var_28)
        r14 = var_20:4.d
        rbp = var_20.d
        rsi = var_28
    
    UnDecorator::getReferenceType(rsi, r15, rdi_1 * 2)
    *(rsi + (sx.q(rbp) << 1) - 2) = 0

if (arg1 != &var_28)
    int64_t rcx_5 = *arg1
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *arg1 = rsi
    arg1[1].d = rbp
    *(arg1 + 0xc) = r14
else if (rsi != 0)
    sub_140a74f90(rsi)

return arg1
