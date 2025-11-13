// 函数: sub_142afb510
// 地址: 0x142afb510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = arg3
char* r9 = *(arg1 + 0x20)
void* r13 = *(arg1 + 8)
int32_t* result_2 = *(arg1 + 0x30)
int32_t r11 = *(arg1 + 0x28)
char* var_68 = r9
int32_t r11_1 = r11 - r9.d
int32_t* result_1 = result_2
int16_t* rax = *(arg1 + 0x10)
int64_t r12 = *(arg1 + 0x18)
int16_t* arg_20 = rax
void* rcx = *(r13 + 0x30)
int64_t rdx = *(rcx + 0x58)
int64_t var_60 = rdx
int64_t rsi

if ((*(r13 + 0x38) & 0x10) == 0)
    rsi = *(rcx + 0xe8)
else
    rsi = *(rcx + 0xf0)

int32_t rcx_1 = *(rcx + 0x104)
int16_t* rbx = rax
int16_t rcx_2 = 0x800

if (*(r13 + 0x3f) == 0)
    rcx_2 = 0xc00

int64_t var_58 = rsi
uint64_t r10 = zx.q(*(r13 + 0x54))
int32_t rdi = sbb.d(arg3.d, arg3.d, r10.d != 0)
int32_t rcx_6 = ((r12 - rax) s>> 1).d

if (rcx_6 s>= r11_1)
    rcx_6 = r11_1

int32_t r11_2 = rcx_6

if (r10.d != 0 && rcx_6 s> 0)
    goto label_142afb675

while (true)
    if (r11_2 s<= 0)
    label_142afb79a:
        
        if (*arg2 s> 0)
            goto label_142afb7c2
        
        if (rax u< r12 && r9 u>= *(arg1 + 0x28))
            *arg2 = 0xf
        
        goto label_142afb7c2
    
    r10 = zx.q(*rax)
    rax = &rax[1]
    arg_20 = rax
    
    if (r10.d s> 0x7f)
        goto label_142afb64a
    
    if (not(test_bit(rcx_1, zx.d((r10.d s>> 2).b))))
        rdx = var_60
    label_142afb64a:
        int16_t rdx_6 = *(rsi + (zx.q(
            zx.d(*(var_60 + (zx.q((r10.d s>> 4 & 0x3f) + zx.d(*(rdx + (r10 s>> 0xa << 1)))) << 1)))
            + (r10.d & 0xf)) << 1))
        
        if (rdx_6 u>= rcx_2)
            *r9 = rdx_6.b
            goto label_142afb605
        
        if ((r10.d & 0xfffff800) != 0xd800)
            goto label_142afb6b4
        
        if (test_bit(r10.d, 0xa))
            *arg2 = 0xc
            break
        
    label_142afb675:
        
        if (rax u>= r12)
            if (*(arg1 + 2) == 0)
                goto label_142afb79a
            
            *arg2 = 0xb
        label_142afb7c2:
            
            if (result_2 != 0)
                int64_t i_2 = (rax - rbx) s>> 1
                
                if (i_2 != 0)
                    if (*arg2 == 0xb)
                        i_2 -= 1
                    
                    if (i_2 != 0)
                        int64_t i
                        
                        do
                            *result_2 = rdi
                            rdi += 1
                            result_2 = &result_1[1]
                            result_1 = result_2
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
            
            *(r13 + 0x54) = r10.d
            *(arg1 + 0x10) = arg_20
            *(arg1 + 0x20) = var_68
            int32_t* result = result_1
            *(arg1 + 0x30) = result
            return result
        
        uint32_t rdx_7 = zx.d(*rax)
        
        if ((rdx_7 & 0xfffffc00) != 0xdc00)
            *arg2 = 0xc
            break
        
        rax = &rax[1]
        r10 = zx.q(((r10.d - 0xd7f7) << 0xa) + rdx_7)
        arg_20 = rax
    label_142afb6b4:
        int32_t rsi_1
        rsi_1.b = r10.d u> 0xffff
        
        if (result_2 != 0)
            int32_t i_1 = ((rax - rbx) s>> 1).d - (rsi_1 + 1)
            
            if (i_1 s> 0)
                do
                    *result_2 = rdi
                    i_1 -= 1
                    rdi += 1
                    result_2 = &result_1[1]
                    result_1 = result_2
                while (i_1 s> 0)
                
                rax = arg_20
        
        int16_t* rbx_1 = rax
        int32_t rax_3 = sub_142afa850(r13, *(r13 + 0x30), r10.d, &arg_20, r12, &var_68, 
            *(arg1 + 0x28), &result_1, rdi, *(arg1 + 2), arg2)
        result_2 = result_1
        r10 = zx.q(rax_3)
        rax = arg_20
        rbx = rax
        rdi += ((rax - rbx_1) s>> 1).d + rsi_1 + 1
        
        if (*arg2 s> 0)
            goto label_142afb7c2
        
        r9 = var_68
        rsi = var_58
        r11_2 = *(arg1 + 0x28) - r9.d
        int32_t rcx_32 = ((r12 - rax) s>> 1).d
        
        if (rcx_32 s< r11_2)
            rdx = var_60
            r11_2 = rcx_32
            continue
        
        rdx = var_60
    else
        *r9 = r10.b
    label_142afb605:
        r11_2 -= 1
        rax = arg_20
        r9 = &var_68[1]
        result_2 = result_1
        r10 = 0
        var_68 = r9
        rdx = var_60

goto label_142afb7c2
