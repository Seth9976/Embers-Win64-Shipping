// 函数: sub_1425de300
// 地址: 0x1425de300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_1425d6560(sx.q(arg1[0xc].d) * 0x158 + *(*arg1 + 0xc8), 4)
void* result_1 = result

if (result != 0 && *(result + 8) != 0)
    int64_t rax_2 = sx.q(arg1[0x29].d)
    int64_t rsi_1 = 0
    int64_t rcx_3 = (rax_2 + 0x15) * 2
    void* rbp_1 = nullptr
    void* var_158 = nullptr
    int64_t rbx_1 = sx.q(arg1[rcx_3 + 1].d)
    int64_t rdi_1 = arg1[rcx_3]
    int32_t var_150_1 = rbx_1.d
    
    if (rbx_1.d != 0)
        sub_1407c3650(&var_158, rbx_1.d, 0)
        rbp_1 = var_158
        memcpy(rbp_1, rdi_1, (rbx_1 * 0xc).d)
        rax_2 = zx.q(arg1[0x29].d)
    
    int32_t rax_4 = (rax_2.d + 1) & 0x80000001
    
    if (rax_4 s< 0)
        rax_4 = ((rax_4 - 1) | 0xfffffffe) + 1
    
    void* r15_1 = nullptr
    var_158 = nullptr
    int64_t rax_9 = (sx.q(rax_4) + 0x15) * 2
    int64_t rbx_2 = sx.q(arg1[rax_9 + 1].d)
    int64_t rdi_2 = arg1[rax_9]
    int32_t var_150_2 = rbx_2.d
    
    if (rbx_2.d != 0)
        sub_1407c3650(&var_158, rbx_2.d, 0)
        r15_1 = var_158
        memcpy(r15_1, rdi_2, (rbx_2 * 0xc).d)
    
    void* rbx_5 = (sx.q(arg1[0xc].d) << 6) + arg1[0x26]
    int64_t* rcx_8 = *(rbx_5 + 8)
    int32_t rax_11 = (*(*rcx_8 + 0x280))(rcx_8)
    int64_t* rcx_9 = *(rbx_5 + 8)
    int64_t rdi_3 = sx.q(rax_11)
    int64_t r8_5 = *rcx_9
    int64_t var_148
    (*(r8_5 + 0x270))(rcx_9, &var_148, r8_5)
    int64_t* rcx_10 = *(rbx_5 + 8)
    int64_t r8_6 = *rcx_10
    void var_138
    void* r13_1 = *(*(r8_6 + 0x40))(rcx_10, &var_138, r8_6)
    int64_t var_128
    int64_t var_110
    int32_t var_108
    var_110(sx.q(var_108) + var_128)
    int64_t* rcx_13 = *(rbx_5 + 8)
    void var_100
    int64_t rbx_6 = *(*(*rcx_13 + 0x50))(rcx_13, &var_100)
    int64_t var_f0
    int64_t var_d8
    int32_t var_d0
    result = var_d8(sx.q(var_d0) + var_f0)
    
    if (rdi_3 s> 0)
        int128_t zmm7
        int128_t var_48_1 = zmm7
        float* r8_7 = rbp_1 + 4
        int128_t zmm11
        int128_t var_88_1 = zmm11
        int128_t* rdx_8 = r13_1 + 8
        int128_t zmm12
        int128_t var_98_1 = zmm12
        int128_t zmm13
        int128_t var_a8_1 = zmm13
        int128_t* rbx_7 = rbx_6 - r13_1
        float* r9_2 = r15_1 - rbp_1
        int128_t zmm6
        int128_t var_38_1 = zmm6
        int128_t zmm8
        int128_t var_58_1 = zmm8
        int128_t zmm9
        int128_t var_68_1 = zmm9
        int128_t zmm10
        int128_t var_78_1 = zmm10
        
        do
            zmm7 = *(rdx_8 + 4)
            zmm11 = *(rdx_8 - 8)
            zmm12 = *(rdx_8 - 4)
            zmm13 = *rdx_8
            
            if (not(zmm7.d f== 0f))
                float zmm1 = r8_7[-1]
                zmm8 = *(arg1 + 0xc)
                float zmm4_1 = *r8_7
                zmm9 = r8_7[1]
                float zmm5_1 = *(*result_1 + (rsi_1 << 2)) f* arg1[1].d
                result = -8 - r13_1 + rdx_8 + var_148
                zmm10 = *(rbx_7 + rdx_8)
                zmm6 = *(r9_2 + r8_7 + 4)
                zmm7.d = 1f / (1f f/ zmm7.d)
                float zmm0 = zmm1 f- zmm11.d
                zmm11.d = zmm11.d f- *(rbx_7 + rdx_8 - 8)
                zmm11.d = zmm11.d f- (zmm1 f- *(r9_2 + r8_7 - 4))
                zmm1 = zmm4_1 f- zmm12.d
                zmm12.d = zmm12.d f- *(rbx_7 + rdx_8 - 4)
                zmm11.d = zmm11.d f* zmm8.d
                zmm12.d = zmm12.d f- (zmm4_1 - *(r9_2 + r8_7))
                zmm12.d = zmm12.d f* zmm8.d
                *result = (zmm0 * zmm5_1 f- zmm11.d) f* zmm7.d f+ *result
                zmm0 = zmm9.d f- zmm13.d
                zmm13.d = zmm13.d f- zmm10.d
                zmm9.d = zmm9.d f- zmm6.d
                zmm13.d = zmm13.d f- zmm9.d
                *(result + 4) = (zmm1 * zmm5_1 f- zmm12.d) f* zmm7.d f+ *(result + 4)
                zmm13.d = zmm13.d f* zmm8.d
                *(result + 8) = (zmm0 * zmm5_1 f- zmm13.d) f* zmm7.d f+ *(result + 8)
            
            rsi_1 += 1
            r8_7 = &r8_7[3]
            rdx_8 = &rdx_8[1]
        while (rsi_1 s< rdi_3)
    
    if (r15_1 != 0)
        result = sub_140a74f90(r15_1)
    
    if (rbp_1 != 0)
        return sub_140a74f90(rbp_1)

return result
