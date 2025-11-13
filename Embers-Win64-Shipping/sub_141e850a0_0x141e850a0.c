// 函数: sub_141e850a0
// 地址: 0x141e850a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1423de050()
sub_142409910(arg4, _mm_cvtepi32_ps(zx.o(arg6)), _mm_cvtepi32_ps(zx.o(arg7)), Stream Caches:", rax, 
    &data_14399f5c0, &data_14399f5e0)
void* r14 = *(arg1 + 0x10)
int32_t r15_1 = arg7 + 0xc
int32_t r13 = r15_1
void* r12_2 = sx.q(*(arg1 + 0x18)) * 0x90 + r14

if (r14 == r12_2)
    return zx.q(r15_1 * 2)

do
    int16_t* var_58
    sub_140a2e390(&var_58, u"Cache %d", 0)
    int16_t* const rdi_1 = &data_142d40450
    int16_t* rcx_2 = var_58
    int32_t var_50
    
    if (var_50 != 0)
        rdi_1 = rcx_2
    
    int16_t* rbp_1 = nullptr
    int32_t rsi_1 = 0
    int16_t* var_68 = nullptr
    int32_t rax_2 = 0
    int64_t var_60_1 = 0
    
    if (rdi_1 != 0 && *rdi_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rdi_1[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_68, rbx_1.d + 1)
            rax_2 = var_60_1:4.d
            rsi_1 = var_60_1.d
            rbp_1 = var_68
        
        rsi_1 += rbx_1.d + 1
        var_60_1.d = rsi_1
        
        if (rsi_1 s> rax_2)
            sub_140594770(&var_68)
            rsi_1 = var_60_1.d
            rbp_1 = var_68
        
        UnDecorator::getReferenceType(rbp_1, rdi_1, (rbx_1.d + 1) * 2)
        rcx_2 = var_58
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int16_t* rbx_3 = &data_142d40450
    
    if (rsi_1 != 0)
        rbx_3 = rbp_1
    
    void* rax_3 = sub_1423de050()
    int128_t* var_88_1 = &data_14399f5e0
    int128_t* var_90_1 = &data_14399f5c0
    sub_142409910(arg4, _mm_cvtepi32_ps(zx.o(arg6)), _mm_cvtepi32_ps(zx.o(r15_1)), rbx_3, rax_3, 
        &data_14399f5c0, &data_14399f5e0)
    r15_1 += 0xc
    int64_t var_78_1 = arg9
    int64_t var_80_1 = arg8
    var_88_1.d = r15_1
    var_90_1.d = arg6
    int32_t arg_8
    sub_141e788b0(r14, &arg_8, arg2, arg3, arg4.d)
    int32_t rax_6 = arg5
    arg6 += arg_8
    
    if (r13 s>= rax_6)
        rax_6 = r13
    
    r13 = rax_6
    
    if (rbp_1 != 0)
        sub_140a74f90(rbp_1)
    
    r14 += 0x90
while (r14 != r12_2)

return zx.q(r15_1 + r13)
