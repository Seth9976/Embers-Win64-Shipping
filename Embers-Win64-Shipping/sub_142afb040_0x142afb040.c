// 函数: sub_142afb040
// 地址: 0x142afb040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = arg3
void* r15 = *(arg1 + 8)
char* r9 = *(arg1 + 0x20)
int16_t* r10 = *(arg1 + 0x10)
int32_t r11_1 = *(arg1 + 0x28) - r9.d
int64_t r12 = *(arg1 + 0x18)
char r8 = *(*(r15 + 0x30) + 0xfd)
int32_t* result_1 = *(arg1 + 0x30)
int16_t* var_60 = r10
char* var_68 = r9
void* rax_2 = *(r15 + 0x30)
char arg_8 = r8
int64_t rcx = *(rax_2 + 0x58)
int64_t rdx = *(rax_2 + 0x60)
int64_t var_58 = rdx
int64_t rbx

if ((*(r15 + 0x38) & 0x10) == 0)
    rbx = *(rax_2 + 0xe8)
else
    rbx = *(rax_2 + 0xf0)

int32_t rax_3 = *(rax_2 + 0x104)
uint64_t rax_4 = zx.q(*(r15 + 0x54))
int64_t var_50 = rbx
int32_t rdi = sbb.d(arg3.d, arg3.d, rax_4.d != 0)
int32_t rsi = 0

if (rax_4.d != 0 && r11_1 s> 0)
    goto label_142afb1a0

while (true)
    if (r10 u>= r12)
        goto label_142afb395
    
    if (r11_1 s<= 0)
    label_142afb385:
        *arg2 = 0xf
    label_142afb395:
        *(r15 + 0x54) = rax_4.d
        *(arg1 + 0x10) = var_60
        *(arg1 + 0x20) = var_68
        int32_t* result = result_1
        *(arg1 + 0x30) = result
        return result
    
    rax_4 = zx.q(*r10)
    rsi += 1
    r10 = &r10[1]
    var_60 = r10
    
    if (rax_4.d s<= 0x7f)
        if (not(test_bit(rax_3, zx.d((rax_4.d s>> 2).b))))
            rdx = var_58
        else
            *r9 = rax_4.b
            int32_t* result_2 = result_1
            r9 = &var_68[1]
            var_68 = r9
            
            if (result_2 != 0)
                *result_2 = rdi
                rdi = rsi
                result_1 = &result_1[1]
                r9 = var_68
            
            r10 = var_60
            r11_1 -= 1
            rdx = var_58
            rax_4 = 0
            continue
    
    uint32_t rbx_1
    
    if (rax_4.d s> 0xd7ff)
        if ((rax_4.d & 0xfffff800) != 0xd800 || (r8 & 2) != 0)
            goto label_142afb1f5
        
        if (test_bit(rax_4.d, 0xa))
            *arg2 = 0xc
            goto label_142afb395
        
    label_142afb1a0:
        
        if (r10 u>= r12)
            goto label_142afb395
        
        uint32_t rdx_4 = zx.d(*r10)
        
        if ((rdx_4 & 0xfffffc00) != 0xdc00)
            *arg2 = 0xc
            goto label_142afb395
        
        r10 = &r10[1]
        rsi += 1
        rax_4 = zx.q(((rax_4.d - 0xd7f7) << 0xa) + rdx_4)
        var_60 = r10
        
        if ((r8 & 1) == 0)
        label_142afb246:
            char rcx_25 = *(arg1 + 2)
            *(arg1 + 0x10) = r10
            rax_4 = sub_142afa850(r15, *(r15 + 0x30), rax_4.d, &var_60, r12, &var_68, 
                &r9[sx.q(r11_1)], &result_1, rdi, rcx_25, arg2)
            r10 = var_60
            rsi += ((r10 - *(arg1 + 0x10)) s>> 1).d
            
            if (*arg2 s> 0)
                break
            
            rdi = rsi
            r9 = var_68
            r8 = arg_8
            r11_1 = *(arg1 + 0x28) - r9.d
            rbx = var_50
            rdx = var_58
            continue
        else
        label_142afb1f5:
            int32_t r8_2 = *(rcx +
                (zx.q(zx.d(*(rcx + (sx.q(rax_4.d) s>> 0xa << 1))) + (rax_4.d s>> 4 & 0x3f)) << 2))
            int32_t rdx_8 = rax_4.d & 0xf
            rbx_1 = zx.d(*(rbx + (zx.q((zx.d(r8_2.w) << 4) + rdx_8) << 1)))
            
            if (test_bit(r8_2, zx.d(rdx_8.b + 0x10)))
                r8 = arg_8
            else if (*(r15 + 0x3f) != 0 || (rax_4 - 0xe000).d u< 0x1900)
                if (rbx_1 == 0)
                    goto label_142afb246
                
                r8 = arg_8
            else
                if ((rax_4 - 0xf0000).d u>= 0x20000 || rbx_1 == 0)
                    goto label_142afb246
                
                r8 = arg_8
    else
        rbx_1 = zx.d(*(rbx + (zx.q(zx.d(*(rdx + (rax_4 s>> 6 << 1))) + (rax_4.d & 0x3f)) << 1)))
        
        if (rbx_1 == 0)
            goto label_142afb246
    
    if (rbx_1 u> 0xff)
        *r9 = (rbx_1 u>> 8).b
        char* rax_10 = &var_68[1]
        var_68 = rax_10
        
        if (r11_1 s< 2)
            int32_t* result_6 = result_1
            
            if (result_6 != 0)
                *result_6 = rdi
                result_1 = &result_1[1]
            
            *(r15 + 0x68) = rbx_1.b
            rax_4 = 0
            *(r15 + 0x5b) = 1
            goto label_142afb385
        
        *rax_10 = rbx_1.b
        int32_t* result_4 = result_1
        r9 = &var_68[1]
        var_68 = r9
        
        if (result_4 != 0)
            *result_4 = rdi
            void* result_5 = &result_1[1]
            result_1 = result_5
            *result_5 = rdi
            result_1 = &result_1[1]
            r9 = var_68
        
        r11_1 -= 2
    else
        *r9 = rbx_1.b
        int32_t* result_3 = result_1
        r9 = &var_68[1]
        var_68 = r9
        
        if (result_3 != 0)
            *result_3 = rdi
            result_1 = &result_1[1]
            r9 = var_68
        
        r11_1 -= 1
    
    r10 = var_60
    rax_4 = 0
    rbx = var_50
    rdi = rsi
    rdx = var_58

goto label_142afb395
