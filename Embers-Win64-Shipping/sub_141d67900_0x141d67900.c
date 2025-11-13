// 函数: sub_141d67900
// 地址: 0x141d67900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* rax_2

if (arg2 != 0)
    rax_2 = sub_1423de540(data_143f5b298, arg1, 1)

int64_t result

if (arg2 == 0 || rax_2 == 0 || (*(rax_2 + 0x11d) & 0x20) != 0)
    result = 0
else
    void var_a0
    sub_142427eb0(&var_a0)
    int32_t var_74
    int32_t var_74_1 = var_74 | 0x40
    char var_77
    char var_77_1 = var_77 | 0xc
    char var_78_1 = 1
    void* rax_4 = sub_1420efae0(rax_2, sub_141d6f570(), nullptr, nullptr, &var_a0)
    int32_t rcx_3 = arg3[1].d
    *(rax_4 + 0x230) = *arg3
    *(rax_4 + 0x240) = rcx_3
    int64_t var_b8
    sub_140d15b50(&var_b8, arg2)
    *(rax_4 + 0x250) = var_b8
    int64_t var_b0
    
    if (rax_4 + 0x258 == &var_b0)
        int64_t rcx_7 = var_b0
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
    else
        int64_t rcx_6 = *(rax_4 + 0x258)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        *(rax_4 + 0x258) = var_b0
        int32_t var_a8
        *(rax_4 + 0x260) = var_a8
        int32_t var_a4
        *(rax_4 + 0x264) = var_a4
    
    sub_141d69540(rax_4)
    *arg4 = rax_4
    uint32_t zmm3_1[0x4] = data_143f37f90
    float zmm1_1[0x4] = zmm3_1
    int128_t var_58_1 = zx.o(0)
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm3_1, data_143f37fa0)
    zmm1_1[0].q = zx.o(0) u>> 0x40
    float var_68[0x4] = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
    uint32_t var_48_1[0x4] = temp0_1
    sub_141dc3850(rax_4, &var_68, 0, nullptr)
    result = *(rax_4 + 0x248)

__security_check_cookie(rax_1 ^ &var_e8)
return result
