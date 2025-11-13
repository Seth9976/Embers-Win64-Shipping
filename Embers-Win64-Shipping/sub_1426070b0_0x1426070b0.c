// 函数: sub_1426070b0
// 地址: 0x1426070b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = arg1
int32_t r13 = arg7
char result_1 = 0
int128_t zmm6
zmm6.d = arg3[3].d f- *arg3
int128_t zmm7
zmm7.d = arg3[4].d f- arg3[1]
int128_t zmm8
zmm8.d = arg3[5].d f- arg3[2]
int128_t zmm9
zmm9.d = arg3[9].d f- arg3[6]
int128_t zmm11
zmm11.d = arg3[0xb].d f- arg3[8]
int128_t zmm10
zmm10.d = arg3[0xa].d f- arg3[7]
char rbp = *(arg3 + 0x3f) s>> 7 & 0x20
arg3[0xf].w = r13.w - *(*(arg2 + 8) + 0x40)
uint64_t i_2 = zx.q(arg5)
char r12 = rbp | 0x50
char result = i_2.b

if ((i_2 - 1).d u<= 0xfe)
    result_1 = result

*(arg3 + 0x3e) = result_1

if (i_2.d s> 0)
    uint32_t r9 = zx.d(arg6)
    void* r14_1 = arg4 + 8
    uint32_t r10_1 = r9
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        float zmm2 = *(r14_1 - 8)
        int64_t rdx = *(arg2 + 0x18)
        uint64_t rax_3 = zx.q((zx.d(*r14_1) + r10_1) * 3)
        int32_t* rcx_4 = (sx.q(r13) << 5) + *(arg2 + 0x10)
        *(rdx + (rax_3 << 2)) = zmm6.d * zmm2 f+ *arg3
        *(rdx + (rax_3 << 2) + 4) = zmm7.d * zmm2 f+ arg3[1]
        *(rdx + (rax_3 << 2) + 8) = zmm8.d * zmm2 f+ arg3[2]
        zmm2 = *(r14_1 - 4)
        uint64_t rax_6 = zx.q((zx.d(*(r14_1 + 2)) + r10_1) * 3)
        *(rdx + (rax_6 << 2)) = zmm6.d * zmm2 f+ *arg3
        *(rdx + (rax_6 << 2) + 4) = zmm7.d * zmm2 f+ arg3[1]
        *(rdx + (rax_6 << 2) + 8) = zmm8.d * zmm2 f+ arg3[2]
        zmm2 = *(r14_1 - 8)
        uint64_t rax_9 = zx.q((zx.d(*(r14_1 + 4)) + r10_1) * 3)
        *(rdx + (rax_9 << 2)) = zmm9.d * zmm2 f+ arg3[6]
        *(rdx + (rax_9 << 2) + 4) = zmm10.d * zmm2 f+ arg3[7]
        *(rdx + (rax_9 << 2) + 8) = zmm11.d * zmm2 f+ arg3[8]
        zmm2 = *(r14_1 - 4)
        uint64_t rax_12 = zx.q((zx.d(*(r14_1 + 6)) + r10_1) * 3)
        *(rdx + (rax_12 << 2)) = zmm9.d * zmm2 f+ arg3[6]
        *(rdx + (rax_12 << 2) + 4) = zmm10.d * zmm2 f+ arg3[7]
        *(rdx + (rax_12 << 2) + 8) = zmm11.d * zmm2 f+ arg3[8]
        *(rcx_4 + 0x1e) = 4
        rcx_4[1].w = *r14_1 + r9.w
        *(rcx_4 + 6) = *(r14_1 + 2) + r9.w
        rcx_4[2].w = *(r14_1 + 4) + r9.w
        *(rcx_4 + 0xa) = *(r14_1 + 6) + r9.w
        *rcx_4 = 0xffffffff
        char rbx_1 = 0
        int32_t* r9_1 = *(r14_1 + 0x10)
        int64_t rdi_1 = *(r14_1 + 0x18)
        
        if (arg2 == r9_1)
            rbx_1 = -0x80
        
        sub_1426128a0(r11, arg2, r13, r9_1, *(r14_1 + 8), rbx_1 | r12, 0)
        char rax_19 = 0x40
        
        if (arg2 == rdi_1)
            rax_19 = -0x40
        
        sub_1426128a0(arg1, arg2, r13, *(r14_1 + 0x18), *(r14_1 + 0xc), rax_19 | rbp, 1)
        sub_1426128a0(arg1, *(r14_1 + 0x10), *(r14_1 + 8), arg2, r13, rbx_1 | rbp | 0x40, 0xff)
        char rax_21 = 0
        
        if (arg2 == rdi_1)
            rax_21 = -0x80
        
        result = sub_1426128a0(arg1, *(r14_1 + 0x18), *(r14_1 + 0xc), arg2, r13, rax_21 | r12, 0xff)
        r9 = zx.d(arg6)
        r13 += 1
        r11 = arg1
        r14_1 += 0x28
        i = i_1
        i_1 -= 1
        r10_1 = r9
    while (i != 1)

return result
