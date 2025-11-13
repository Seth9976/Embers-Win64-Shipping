// 函数: sub_142ad5db0
// 地址: 0x142ad5db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
int32_t rax = sub_142b54660(&data_144016730, arg2, &arg_18)
int32_t rbx = rax

if (rax == 0)
    int32_t rax_2 = (*(*arg1 + 0x188))(arg1, zx.q(arg2 - 1))
    int64_t r8_1 = *arg1
    int32_t rax_3
    int64_t r8_2
    rax_3, r8_2 = (*(r8_1 + 0x188))(arg1, zx.q(arg2), r8_1)
    int64_t rdx_2 = *arg1
    r8_2.b = 1
    _mm_cvtepi32_pd(zx.q(rax_2 + 1))
    int32_t rax_4
    int64_t r8_3
    rax_4, r8_3 = (*(rdx_2 + 0x190))(arg1, rdx_2, r8_2)
    int64_t rdx_3 = *arg1
    r8_3.b = 1
    _mm_cvtepi32_pd(zx.q(rax_4 + 0x19))
    int32_t rax_5 = (*(rdx_3 + 0x190))(arg1, rdx_3, r8_3)
    int64_t rdx_4 = *arg1
    _mm_cvtepi32_pd(zx.q(rax_3 + 1))
    rbx = rax_5
    int32_t rax_6 = (*(rdx_4 + 0x190))(arg1, rdx_4, 0)
    int64_t r9_1 = *arg1
    
    if ((*(r9_1 + 0x198))(arg1, zx.q(rax_4), zx.q(rax_6), r9_1) == 0xc)
        char rax_9
        int64_t r8_5
        rax_9, r8_5 = (*(*arg1 + 0x1a8))(arg1, zx.q(rax_4))
        char rax_11
        
        if (rax_9 == 0)
            rax_11, r8_5 = (*(*arg1 + 0x1a8))(arg1, zx.q(rbx))
        
        if (rax_9 != 0 || rax_11 != 0)
            r8_5.b = 1
            rbx = (*(*arg1 + 0x190))(arg1, _mm_cvtepi32_pd(zx.q(rbx + 0x19)), r8_5)
    
    sub_142b54bd0(&data_144016730, arg2, rbx, &arg_18)

if (arg_18 s> 0)
    rbx = 0

return zx.q(rbx)
