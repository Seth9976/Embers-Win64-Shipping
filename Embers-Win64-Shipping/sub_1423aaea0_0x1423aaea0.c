// 函数: sub_1423aaea0
// 地址: 0x1423aaea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118

if (*(arg1 + 0x54) == 0 && *arg2 != 0)
    void* rax_2 = arg2[1]
    
    if (rax_2 != 0)
        void* rax_3 = *(rax_2 + 0xe8)
        void* var_c0 = rax_3
        
        if (rax_3 != 0)
            *(rax_3 + 8) += 1
            int64_t rbx_1 = *arg2
            void* r10_1 = arg1 + 0x108
            void* rdx = *(r10_1 + 0x70)
            int32_t r11_1 = *(arg1 + 0xc)
            void* rcx = *(rbx_1 + 0xd0)
            int64_t* rdi_1 = data_143f0f180
            int64_t r8_1 = sx.q(*(arg1 + 8)) << 3
            int32_t* r14_1 = *(r8_1 + *(rcx + 0x18))
            
            if (rdx != 0)
                r10_1 = rdx
            
            void var_c8
            (*(*rdi_1 + 0x218))(rdi_1, &var_c8, zx.q(*r14_1), zx.q(r14_1[1]), *(var_c0 + 0x3c), 
                r11_1, ((zx.d(*(rbx_1 + 0x60)) & 1) | 0x40) << 4, r10_1 + r8_1, 
                *(arg2[1] + 0x60) - *(rcx + 0x20) + r11_1)
            sub_1405d1600(arg1 + 0x100, &var_c8)
            sub_1405d1550(&var_c8)
        
        sub_1405d1550(&var_c0)

sub_1423adc90(arg1, arg2)
sub_1423ac010(arg1, arg2)
void* var_50 = arg1
void*** var_68 = nullptr
void** const var_58 = &data_142da2668
void*** var_a8 = nullptr
int64_t* (* var_78)(int64_t* arg1, void* arg2, uint128_t arg3 @ zmm2, uint128_t arg4 @ zmm3) =
    sub_1423ab360
void* var_90 = arg1
void** const var_98 = &data_142da2668
void (* var_b8)(int64_t* arg1, void* arg2, uint128_t arg3 @ zmm2, uint128_t arg4 @ zmm3) =
    j_sub_1423a6ce0
*(arg1 + 0x60) = 1
sub_140a3c510(arg1 + 0x70, &var_b8)
*(arg1 + 0xb0) = 1
int128_t* result = sub_140a3c510(arg1 + 0xc0, &var_78)

if (var_b8 != 0)
    void** const* rcx_9 = &var_98
    
    if (var_a8 != 0)
        rcx_9 = var_a8
    
    result = (*rcx_9)[2](rcx_9)

if (var_78 != 0)
    void** const* rcx_10 = &var_58
    
    if (var_68 != 0)
        rcx_10 = var_68
    
    result = (*rcx_10)[2](rcx_10)

__security_check_cookie(rax_1 ^ &var_118)
return result
