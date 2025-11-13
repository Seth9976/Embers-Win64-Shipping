// 函数: sub_142386710
// 地址: 0x142386710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* r14 = arg2[1]
int32_t r8 = 0

if (*arg2 == 0)
label_142386860:
    
    if (r14 == 0)
        goto label_1423868be
    
    int64_t rdi_1 = sx.q(*(arg1 + 0x100))
    
    if (rdi_1.d s< *(arg1 + 8))
        int64_t rsi_1 = rdi_1 << 3
        
        do
            sub_14235f750(*(*r14 + rsi_1))
            rdi_1 = zx.q(rdi_1.d + 1)
            rsi_1 += 8
        while (rdi_1.d s< *(arg1 + 8))
    
    goto label_1423868be

int128_t* result
int64_t (* var_b8)(int64_t* arg1, int64_t* arg2)
void** const var_98
void (* var_78)(int64_t* arg1, int64_t* arg2)
void** const var_58
void*** rax_8
void** const* rcx_3

if (r14 == 0)
label_1423868be:
    void*** var_a8_1 = nullptr
    var_98 = &data_142da2668
    void* var_90_1 = arg1
    var_b8 = sub_142385b40
    void*** var_68_1 = nullptr
    var_58 = &data_142da2668
    var_78 = sub_142385b40
    void* var_50_1 = arg1
    *(arg1 + 0x60) = 1
    sub_140a3c510(arg1 + 0x70, &var_78)
    *(arg1 + 0xb0) = 1
    result = sub_140a3c510(arg1 + 0xc0, &var_b8)
    
    if (var_78 != 0)
        void** const* rcx_8 = &var_58
        
        if (var_68_1 != 0)
            rcx_8 = var_68_1
        
        result = (*rcx_8)[2](rcx_8)
    
    if (var_b8 != 0)
        rax_8 = var_a8_1
        rcx_3 = &var_98
    label_14238694d:
        
        if (rax_8 != 0)
            rcx_3 = rax_8
        
        result = (*rcx_3)[2](rcx_3)
else
    int64_t r10_1 = sx.q(*(arg1 + 0x100))
    int32_t r9_1 = *(arg1 + 8)
    
    if (r10_1.d s< r9_1)
        uint64_t i_1 = zx.q(r9_1 - r10_1.d)
        int64_t* rdx = *r14 + (r10_1 << 3)
        uint64_t i
        
        do
            int64_t rax_3 = *rdx
            rdx = &rdx[1]
            r8 = r8 - 1 + *(rax_3 + 8)
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (r8 u> *(arg1 + 0x110) && *(arg1 + 0x10c) s> 0)
        *(arg1 + 0x110) = r8
    
    if (r8 == 0)
        goto label_142386860
    
    int32_t rax_4 = *(arg1 + 0x10c)
    
    if (rax_4 s>= data_143a2ff98)
        goto label_142386860
    
    *(arg1 + 0x55) = 1
    *(arg1 + 0x10c) = rax_4 + 1
    *(arg1 + 0x60) = 2
    var_58 = &data_142da2668
    void*** var_68 = nullptr
    var_78 = sub_142385a90
    var_98 = &data_142da2668
    var_b8 = sub_142385ad0
    void* var_50 = arg1
    void*** var_a8 = nullptr
    void* var_90 = arg1
    sub_140a3c510(arg1 + 0x70, &var_b8)
    *(arg1 + 0xb0) = 2
    result = sub_140a3c510(arg1 + 0xc0, &var_78)
    
    if (var_b8 != 0)
        void** const* rcx_2 = &var_98
        
        if (var_a8 != 0)
            rcx_2 = var_a8
        
        result = (*rcx_2)[2](rcx_2)
    
    if (var_78 != 0)
        rax_8 = var_68
        rcx_3 = &var_58
        goto label_14238694d
__security_check_cookie(rax_1 ^ &var_d8)
return result
