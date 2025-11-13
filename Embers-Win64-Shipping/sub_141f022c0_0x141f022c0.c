// 函数: sub_141f022c0
// 地址: 0x141f022c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x40))()
void* result = sub_142577f80()

if (result != 0)
    sub_140d3a3a0(&arg1[1], result)
    int32_t r8_1 = *(result + 0x5c)
    int32_t rcx_4 = (*(result + 0x58) - 1 + r8_1) & not.d(r8_1 - 1)
    int32_t rax_3 = 1
    
    if (rcx_4 != 0)
        rax_3 = rcx_4
    
    void*** rax_4 = sub_140a82f30(sx.q(rax_3), 0)
    arg1[2] = rax_4
    int64_t* rbx_1 = *arg2
    sub_141f2d8c0(rax_4, rbx_1)
    *rax_4 = &data_1432676d0
    float zmm1_1[0x4] = data_143f3ada0
    *(rax_4 + 0xc0) = zx.o(0)
    zmm1_1[0].q = zx.o(0) u>> 0x40
    *(rax_4 + 0xb0) = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
    *(rax_4 + 0xd0) = __andps_xmmxud_memxud(data_143f3ada0, data_143f3adb0)
    rax_4[0x1c].d = *(rbx_1 + 0x23c)
    result = rbx_1[0x80]
    rax_4[0x1d] = result
    
    if ((*(rbx_1 + 0x14c) & 1) == 0)
        result = sub_1405c6ac0(rbx_1, 0, 0)
    
    *(rax_4 + 0xb0) = *(rbx_1 + 0x1c0)
    *(rax_4 + 0xc0) = *(rbx_1 + 0x1d0)
    *(rax_4 + 0xd0) = *(rbx_1 + 0x1e0)
    arg1[4].b = 1

return result
