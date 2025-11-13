// 函数: sub_1422e0820
// 地址: 0x1422e0820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg3
int64_t* rbx = arg4

if (arg1 != 0)
    if (sub_142391f10(rbx) != 0)
        int32_t rax_2 = sub_14238e470()
        int64_t* r8_1 = *rbx
        
        if (r8_1 != 0 && rax_2 s>= 0 && rax_2 s< r8_1[1].d)
            rbx = *(*r8_1 + (sx.q(rax_2) << 3))
    
    float* rcx_2 = arg1 + 0x3c
    arg3.d = (*(rbx + 0x614)).d f- arg2[2]
    int32_t r8_2 = 7
    int64_t rax_4 = 7
    float zmm4_1 = rbx[0xc2].d f- arg2[1]
    float zmm3 = *(rbx + 0x60c) - *arg2
    float temp0_1 = _mm_max_ss(*(rbx + 0x294) * 0.5f, rbx[0x50].d f* 0.5f)
    arg3.d = arg3.d f* arg3.d
    float zmm1 = arg6 f* *(rbx + 0xd5c)
    float zmm5_1 = temp0_1 f* zmm6.d
    zmm5_1 = zmm5_1 * zmm5_1 /
        __maxss_xmmss_memss((zmm4_1 * zmm4_1 + zmm3 * zmm3 f+ arg3.d) f* *(rbx + 0x2ac), 0x3f800000)
    int64_t temp0_3
    
    do
        float zmm0_1 = zmm1 * *rcx_2
        
        if (zmm0_1 * zmm0_1 * 0.25f > zmm5_1)
            int32_t rdx = arg5.d
            
            if (r8_2 s>= rdx)
                return zx.q(r8_2.b)
            
            return zx.q(rdx.b)
        
        r8_2 -= 1
        rcx_2 -= 4
        temp0_3 = rax_4
        rax_4 -= 1
    while (temp0_3 - 1 s>= 0)

return zx.q(arg5)
