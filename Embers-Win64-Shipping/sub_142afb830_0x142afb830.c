// 函数: sub_142afb830
// 地址: 0x142afb830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 8)
char* r9 = *(arg1 + 0x20)
int16_t* r8 = *(arg1 + 0x10)
int64_t rsi = *(arg1 + 0x18)
int32_t r10_1 = *(arg1 + 0x28) - r9.d
int16_t* arg_18 = r8
char* arg_20 = r9
int32_t* result_1 = *(arg1 + 0x30)
void* rax_1 = *(rbp + 0x30)
int64_t r12 = *(rax_1 + 0x58)
int64_t r15

if ((*(rbp + 0x38) & 0x10) == 0)
    r15 = *(rax_1 + 0xe8)
else
    r15 = *(rax_1 + 0xf0)

int16_t r13 = 0x800

if (*(rbp + 0x3f) == 0)
    r13 = 0xc00

char rax_2 = *(rax_1 + 0xfd) & 1
uint32_t rax_3 = *(rbp + 0x54)
int32_t r11 = sbb.d(&__return_addr, &__return_addr, rax_3 != 0)
int32_t rbx = 0

if (rax_3 != 0 && r10_1 s> 0)
    goto label_142afb908

while (true)
    if (r8 u>= rsi)
        goto label_142afba5b
    
    if (r10_1 s<= 0)
        *arg2 = 0xf
        goto label_142afba5b
    
    rax_3 = zx.d(*r8)
    rbx += 1
    r8 = &r8[1]
    arg_18 = r8
    
    if ((rax_3 & 0xfffff800) != 0xd800)
    label_142afb96d:
        int16_t rdx_5 = *(r15 + (zx.q(zx.d(
            *(r12 + (zx.q(zx.d(*(r12 + (sx.q(rax_3) s>> 0xa << 1))) + (rax_3 s>> 4 & 0x3f)) << 1)))
            + (rax_3 & 0xf)) << 1))
        
        if (rdx_5 u< r13)
            goto label_142afb9be
        
        *r9 = rdx_5.b
        int32_t* result_2 = result_1
        r9 = &arg_20[1]
        arg_20 = r9
        
        if (result_2 != 0)
            *result_2 = r11
            result_1 = &result_1[1]
            r9 = arg_20
        
        r8 = arg_18
        r10_1 -= 1
        rax_3 = 0
        r11 = rbx
        continue
    
    if (test_bit(rax_3, 0xa))
        goto label_142afba43
    
label_142afb908:
    
    if (r8 u>= rsi)
        goto label_142afba5b
    
    uint32_t rdx = zx.d(*r8)
    
    if ((rdx & 0xfffffc00) != 0xdc00)
    label_142afba43:
        *arg2 = 0xc
    label_142afba5b:
        *(rbp + 0x54) = rax_3
        *(arg1 + 0x10) = arg_18
        *(arg1 + 0x20) = arg_20
        int32_t* result = result_1
        *(arg1 + 0x30) = result
        return result
    
    r8 = &r8[1]
    rbx += 1
    rax_3 = ((rax_3 - 0xd7f7) << 0xa) + rdx
    arg_18 = r8
    
    if (rax_2 != 0)
        goto label_142afb96d
    
label_142afb9be:
    char rcx_13 = *(arg1 + 2)
    *(arg1 + 0x10) = r8
    rax_3 = sub_142afa850(rbp, *(rbp + 0x30), rax_3, &arg_18, rsi, &arg_20, &r9[sx.q(r10_1)], 
        &result_1, r11, rcx_13, arg2)
    r8 = arg_18
    rbx += ((r8 - *(arg1 + 0x10)) s>> 1).d
    
    if (*arg2 s> 0)
        break
    
    r11 = rbx
    r9 = arg_20
    r10_1 = *(arg1 + 0x28) - r9.d

goto label_142afba5b
