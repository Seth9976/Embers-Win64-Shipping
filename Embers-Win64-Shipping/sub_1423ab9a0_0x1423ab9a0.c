// 函数: sub_1423ab9a0
// 地址: 0x1423ab9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1 + 0x158
int64_t r12 = 0
int32_t* r15 = *rcx
uint64_t r13_1 = sx.q(rcx[1].d) << 2 u>> 2

if (r15 u> &r15[rcx[1]])
    r13_1 = 0

if (r13_1 != 0)
    int128_t zmm6
    int128_t var_38_1 = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    int128_t zmm8
    int128_t var_58_1 = zmm8
    int128_t zmm9
    int128_t var_68_1 = zmm9
    int128_t zmm10
    int128_t var_78_1 = zmm10
    int128_t zmm11
    int128_t var_88_1 = zmm11
    
    do
        int64_t rdx = sx.q(*r15)
        
        if (rdx.d s>= 0 && rdx.d s< *(arg1 + 0x130))
            void* rsi_1 = *(*(arg1 + 0x128) + (rdx << 3))
            
            if (rsi_1 != 0)
                char rax_3 = *(rsi_1 + 0x88)
                
                if ((rax_3 & 1) == 0 || ((rax_3 & 2) != 0 && *(rsi_1 + 0x3e8) == 0))
                    sub_1423b40c0(arg1, rsi_1, 0)
                    int64_t rbx_3 = sx.q(arg2[1].d)
                    int32_t rax_13 = (rbx_3 + 1).d
                    arg2[1].d = rax_13
                    
                    if (rax_13 s> *(arg2 + 0xc))
                        sub_1405a4d70(arg2)
                    
                    *(*arg2 + (rbx_3 << 3)) = rsi_1
                else
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rdx.d)
                    int32_t rdx_2 = temp0_1 & 3
                    int32_t rax_6 = temp1_1 + rdx_2
                    int64_t rdi_1 = sx.q((rax_6 & 3) - rdx_2)
                    int64_t rbx_2 = sx.q(rax_6 s>> 2) * 0xf0 + *(arg1 + 0x10)
                    int32_t rdx_3 = *(rbx_2 + (rdi_1 << 2) + 0xa0)
                    
                    if (rdx_3 != 0)
                        int32_t var_c8
                        float zmm12_1 = sub_1423b6ec0(rsi_1 + 0x100, rdx_3, &var_c8)
                        void* rax_9 = sub_141f15610(rsi_1)
                        zmm8 = var_c8
                        int32_t var_c4
                        zmm9 = var_c4
                        float zmm4_1 = *(rsi_1 + 0x100)
                        float zmm3_1 = *(rsi_1 + 0x104)
                        float zmm1_1 = zmm8.d - zmm4_1
                        int32_t var_c0
                        zmm10 = var_c0
                        float zmm2_1 = zmm9.d - zmm3_1
                        float zmm5_1 = *(rsi_1 + 0x108)
                        zmm7 = *(rsi_1 + 0x1f8)
                        float zmm0_1 = zmm10.d - zmm5_1
                        int32_t var_b0
                        zmm11 = var_b0
                        zmm6 = zmm7
                        zmm7 = _mm_max_ss(zmm7.d, 0)
                        zmm7.d = zmm7.d f* zmm7.d
                        zmm6.d = zmm6.d
                            f- _mm_sqrt_ss(0, zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 + zmm0_1 * zmm0_1)
                        zmm6.d = zmm6.d f- zmm11.d
                        zmm6 = _mm_max_ss(zmm6.d, 0)
                        zmm6.d = zmm6.d f* zmm6.d
                        
                        if (rax_9 == 0)
                            zmm2_1 = zmm12_1
                        else
                            zmm3_1 = zmm3_1 f- *(rax_9 + 0x104)
                            zmm4_1 = zmm4_1 f- *(rax_9 + 0x100)
                            zmm5_1 = zmm5_1 f- *(rax_9 + 0x108)
                            zmm2_1 =
                                _mm_sqrt_ss(0, zmm3_1 * zmm3_1 + zmm4_1 * zmm4_1 + zmm5_1 * zmm5_1)
                                + *(rax_9 + 0x1f8) f+ *(rax_9 + 0x118)
                            zmm2_1 = zmm2_1 * zmm2_1
                        
                        *(rbx_2 + (rdi_1 << 2)) = zmm8.d
                        *(rbx_2 + (rdi_1 << 2) + 0x10) = zmm9.d
                        *(rbx_2 + (rdi_1 << 2) + 0x20) = zmm10.d
                        *(rbx_2 + (rdi_1 << 2) + 0x30) = *(rsi_1 + 0x100)
                        *(rbx_2 + (rdi_1 << 2) + 0x40) = *(rsi_1 + 0x104)
                        int32_t rax_12 = *(rsi_1 + 0x108)
                        float var_bc
                        *(rbx_2 + (rdi_1 << 2) + 0x60) = var_bc
                        float var_b4
                        *(rbx_2 + (rdi_1 << 2) + 0x80) = var_b4
                        float var_b8
                        *(rbx_2 + (rdi_1 << 2) + 0x70) = var_b8
                        *(rbx_2 + (rdi_1 << 2) + 0x90) = zmm11.d
                        *(rbx_2 + (rdi_1 << 2) + 0xb0) = zmm6.d
                        *(rbx_2 + (rdi_1 << 2) + 0xc0) = zmm7.d
                        *(rbx_2 + (rdi_1 << 2) + 0xd0) = zmm2_1
                        *(rbx_2 + (rdi_1 << 2) + 0x50) = rax_12
                        *(rbx_2 + (rdi_1 << 2) + 0xa0) = 0xffff0000
        
        r15 = &r15[1]
        r12 += 1
    while (r12 != r13_1)
    
    rcx = arg1 + 0x158

int32_t rbx_4 = *(arg1 + 0x160)
rcx[1].d = 0

if (*(rcx + 0xc) != 0)
    sub_1405dadb0(rcx, 0)

return zx.q(rbx_4)
