// 函数: sub_1427a1210
// 地址: 0x1427a1210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
char result = sub_140d3e110(arg1 + 8)

if (result != 0)
    void*** rax_2 = j_sub_140a82f30(0x70)
    void*** rbx_1 = rax_2
    
    if (rax_2 == 0)
        rbx_1 = nullptr
    else
        memset(&rax_2[1], 0, 0x68)
        *rbx_1 = &data_1434b5aa8
        float zmm1[0x4] = data_143f889a0
        *(rbx_1 + 0x20) = zx.o(0)
        zmm1[0].q = zx.o(0) u>> 0x40
        *(rbx_1 + 0x10) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
        *(rbx_1 + 0x30) = __andps_xmmxud_memxud(data_143f889a0, data_143f889b0)
        float zmm2[0x4] = data_143f889a0
        zmm2[0].q = zx.o(0) u>> 0x40
        *(rbx_1 + 0x40) = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
        *(rbx_1 + 0x50) = zx.o(0)
        *(rbx_1 + 0x60) = __andps_xmmxud_memxud(data_143f889a0, data_143f889b0)
    
    void var_58
    
    if (arg1 + 0x10 != &var_58)
        void*** rcx_2 = *(arg1 + 0x10)
        *(arg1 + 0x10) = rbx_1
        
        if (rcx_2 != 0)
            (*rcx_2)[7](rcx_2, 1)
    else if (rbx_1 != 0)
        (*rbx_1)[7](rbx_1, 1)
    
    int64_t* rax_4 = sub_140d3c6e0(arg1 + 8)
    void* rbx_2 = *(arg1 + 0x10)
    int64_t r8_1 = *rax_4
    void var_48
    float (* rax_5)[0x4] = (*(r8_1 + 0x268))(rax_4, &var_48, r8_1)
    *(rbx_2 + 0x10) = *rax_5
    *(rbx_2 + 0x20) = rax_5[1]
    *(rbx_2 + 0x30) = rax_5[2]
    int64_t* rax_6 = sub_140d3c6e0(arg1 + 8)
    int64_t rdx_2 = *rax_6
    result = (*(rdx_2 + 0x278))(rax_6, rdx_2)

__security_check_cookie(rax_1 ^ &var_78)
return result
