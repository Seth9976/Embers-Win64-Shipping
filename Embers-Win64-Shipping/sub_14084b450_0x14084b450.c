// 函数: sub_14084b450
// 地址: 0x14084b450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r10 = *(arg3 + 0x80)
void* r11 = arg1
void* var_50 = arg4
int32_t* rax_1 = arg3
int32_t* result_2 = arg3

if (r10 != 0)
    rax_1 = r10

int32_t rsi = 0
rax_1[sx.q(arg2)] = 0
int32_t r15 = *(r11 + 0xa8)
int32_t r12_1 = r15 * arg2
int32_t rdx = *(arg4 + 0x88)
char rcx_2 = r12_1.b & 0x1f
int32_t r8_1 = r12_1 s>> 5
int32_t rdi = 1 << rcx_2
int32_t rbp = 0xffffffff << rcx_2
int32_t r9_1 = r12_1 & 0xffffffe0
int32_t var_58 = r8_1
int32_t rcx_3 = r12_1
int32_t var_44 = rcx_3
int32_t var_54 = rdi
int32_t var_40 = r9_1

if (r12_1 != rdx)
    void* rax_2 = *(arg4 + 0x80)
    rcx_3 = rdx
    void* r11_1 = arg4
    
    if (rax_2 != 0)
        r11_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdx - 1)
    int32_t r10_2 = *(r11_1 + (sx.q(r8_1) << 2)) & rbp
    
    if (r10_2 != 0)
    label_14084b54c:
        rdi = neg.d(r10_2) & r10_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rdi)
        var_54 = rdi
        int32_t rax_7
        
        if (rdi == 0)
            rax_7 = 0x20
        else
            rax_7 = 0x1f - temp0_2
        
        int32_t rax_8 = r9_1 - rax_7 + 0x1f
        
        if (rax_8 s> rcx_3)
            rax_8 = rcx_3
        
        rcx_3 = rax_8
        var_44 = rax_8
    else
        while (true)
            int64_t rdx_4 = sx.q(r8_1)
            r9_1 += 0x20
            r8_1 += 1
            int32_t var_40_1 = r9_1
            var_58 = r8_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_44 = rcx_3
                break
            
            r10_2 = *(r11_1 + (rdx_4 << 2) + 4)
            rbp = -1
            
            if (r10_2 != 0)
                goto label_14084b54c
    
    r11 = arg1

int32_t r15_1 = r15 + r12_1
int64_t result

if (rcx_3 s>= r15_1)
label_14084b62e:
    int32_t* result_3 = *(result_2 + 0x80)
    
    if (result_3 != 0)
        result_2 = result_3
    
    result_2[sx.q(arg2)] = rsi + 1
    result.b = 1
else
    while (true)
        int64_t result_1 = *(result_2 + 0x80)
        int32_t rcx_4 = rcx_3 - r12_1
        int32_t r14_1 = rsi
        result = result_2
        
        if (result_1 != 0)
            result = result_1
        
        int32_t rdx_6 = *(result + (sx.q(rcx_4) << 2))
        
        if (rdx_6 != 0)
            if (rdx_6 s< 0)
                result = sub_14084b450(r11, zx.q(rcx_4), result_2, arg4)
            
            if (rdx_6 s>= 0 || result.b != 0)
                int32_t* result_5 = *(result_2 + 0x80)
                int32_t* result_4 = result_2
                
                if (result_5 != 0)
                    result_4 = result_5
                
                rsi = result_4[sx.q(rcx_4)]
                
                if (r14_1 s>= rsi)
                    rsi = r14_1
                
                sub_1408504b0(&var_58)
                rcx_3 = var_44
                
                if (rcx_3 s>= r15_1)
                    goto label_14084b62e
                
                rbp &= not.d(rdi)
                rdi = var_54
                r11 = arg1
                continue
        
        result.b = 0
        break

return result
