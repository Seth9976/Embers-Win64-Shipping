// 函数: sub_1403ffa40
// 地址: 0x1403ffa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t rbx = sx.q(arg4)
uint64_t i_3 = zx.q(arg5)
void* rcx = *(arg3 + 0x38)
int64_t r8_1 = rbx * arg2
int64_t rax = *(rcx + (r8_1 << 3))
int64_t result = *(rcx + r8_1 * 0x10)
int64_t result_2 = result

if (i_3.d s> 0)
    int128_t zmm6
    int128_t var_58_1 = zmm6
    int128_t zmm7
    int128_t var_68_1 = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    uint64_t i_1 = zx.q(i_3.d)
    int128_t zmm9
    int128_t var_88_1 = zmm9
    int128_t zmm10
    int128_t var_98_1 = zmm10
    int128_t zmm11
    int128_t var_a8_1 = zmm11
    int64_t rax_3 = sx.q(arg6) << 3
    int64_t rdi_1 = sx.q((rbx * 2).d) << 3
    uint64_t i_2 = i_3
    int128_t zmm12
    int128_t var_b8_1 = zmm12
    int128_t zmm13
    int128_t var_c8_1 = zmm13
    int128_t zmm14
    int128_t var_d8_1 = zmm14
    void* rcx_2 = rdi_1 + arg1
    int128_t zmm15
    int128_t var_e8_1 = zmm15
    int64_t r9 = rax_3
    int64_t r10_2 = (rbx << 3) - rdi_1
    void* var_1a8_1 = rcx_2
    int64_t r8_5 = (sx.q((rbx * 3).d) << 3) - rdi_1
    int64_t var_168_1 = r10_2
    int64_t var_188_1 = r8_5
    result = (sx.q((rbx << 2).d) << 3) - rdi_1
    int64_t rdi_2 = neg.q(rdi_1)
    int64_t var_170_1 = rdi_2
    int64_t result_1 = result
    uint64_t i
    
    do
        void* rsi_1 = rdi_2 + rcx_2
        void* rbp_1 = r10_2 + rcx_2
        void* r14_1 = rcx_2
        void* r15_1 = r8_5 + rcx_2
        void* r12_1 = result + rcx_2
        
        if (rbx.d s> 0)
            int32_t* r8_7 = rcx + 4
            int32_t* rdx = r8_7
            uint64_t j_1 = zx.q(rbx.d)
            float* rbx_1 = rdx
            int32_t* rdi_3 = r8_7
            uint64_t j
            
            do
                zmm15 = *(rbp_1 + 4)
                int128_t zmm2 = *rbp_1
                int128_t zmm5 = *(r12_1 + 4)
                int64_t rax_9 = *rsi_1
                float zmm0 = zmm2.d
                zmm2.d = zmm2.d f* *r8_7
                zmm14 = zmm15
                zmm15.d = zmm15.d f* r8_7[-1]
                zmm14.d = zmm14.d f* *r8_7
                zmm12 = *(r14_1 + 4)
                zmm7 = *(r15_1 + 4)
                zmm14.d = zmm14.d f+ zmm0 f* r8_7[-1]
                zmm15.d = zmm15.d f- zmm2.d
                zmm2 = *r14_1
                zmm13 = zmm2
                zmm0 = zmm12.d * *rbx_1
                zmm2.d = zmm2.d f* *rbx_1
                zmm12.d = zmm12.d f* rbx_1[-1]
                zmm12.d = zmm12.d f- zmm2.d
                zmm2 = *r15_1
                zmm6 = zmm2
                zmm2.d = zmm2.d f* *rdx
                zmm13.d = zmm13.d f* rbx_1[-1]
                zmm6.d = zmm6.d f* rdx[-1]
                zmm13.d = zmm13.d f+ zmm0
                zmm0 = zmm7.d f* *rdx
                zmm7.d = zmm7.d f* rdx[-1]
                zmm6.d = zmm6.d f+ zmm0
                zmm7.d = zmm7.d f- zmm2.d
                zmm0 = zmm5.d f* *rdi_3
                zmm5.d = zmm5.d f* rdi_3[-1]
                zmm2 = *r12_1
                zmm8.d = zmm6.d f+ zmm13.d
                zmm9.d = zmm7.d f+ zmm12.d
                int128_t zmm4
                zmm4.d = zmm2.d f* rdi_3[-1]
                zmm2.d = zmm2.d f* *rdi_3
                zmm12.d = zmm12.d f- zmm7.d
                zmm13.d = zmm13.d f- zmm6.d
                zmm4.d = zmm4.d f+ zmm0
                zmm5.d = zmm5.d f- zmm2.d
                zmm10.d = zmm4.d f+ zmm14.d
                zmm14.d = zmm14.d f- zmm4.d
                zmm11.d = zmm5.d f+ zmm15.d
                zmm4.d = zmm11.d f* rax.d
                zmm4.d = zmm4.d f+ rax_9:4.d
                zmm15.d = zmm15.d f- zmm5.d
                zmm5.d = zmm10.d f* rax.d
                int128_t zmm3
                zmm3.d = zmm15.d f* rax:4.d
                zmm5.d = zmm5.d f+ rax_9.d
                zmm3 ^= data_142d3f780
                *rsi_1 = zmm8.d f+ zmm10.d f+ *rsi_1
                zmm5.d = zmm5.d f+ zmm8.d f* result_2.d
                *(rsi_1 + 4) = zmm9.d f+ zmm11.d f+ *(rsi_1 + 4)
                zmm4.d = zmm4.d f+ zmm9.d f* result_2.d
                zmm3.d = zmm3.d f- zmm12.d f* result_2:4.d
                zmm10.d = zmm10.d f* result_2.d
                zmm11.d = zmm11.d f* result_2.d
                zmm2.d = zmm13.d f* result_2:4.d
                r15_1 += 8
                rsi_1 += 8
                rbp_1 += 8
                r14_1 += 8
                r12_1 += 8
                r8_7 = &r8_7[arg2 * 2]
                rbx_1 = &rbx_1[arg2 * 4]
                rdx = &rdx[arg2 * 6]
                rdi_3 = &rdi_3[arg2 * 8]
                zmm10.d = zmm10.d f+ rax_9.d
                zmm11.d = zmm11.d f+ rax_9:4.d
                zmm15.d = zmm15.d f* result_2:4.d
                zmm13.d = zmm13.d f* rax:4.d
                zmm2.d = zmm2.d f+ zmm14.d f* rax:4.d
                zmm0 = zmm5.d f- zmm3.d
                zmm3.d = zmm3.d f+ zmm5.d
                zmm12.d = zmm12.d f* rax:4.d
                zmm14.d = zmm14.d f* result_2:4.d
                zmm8.d = zmm8.d f* rax.d
                *(rbp_1 - 4) = zmm4.d f- zmm2.d
                *(rbp_1 - 8) = zmm0
                *(r12_1 - 8) = zmm3.d
                zmm15.d = zmm15.d f- zmm12.d
                zmm13.d = zmm13.d f- zmm14.d
                zmm10.d = zmm10.d f+ zmm8.d
                zmm9.d = zmm9.d f* rax.d
                zmm11.d = zmm11.d f+ zmm9.d
                zmm2.d = zmm2.d f+ zmm4.d
                *(r12_1 - 4) = zmm2.d
                *(r14_1 - 8) = zmm15.d f+ zmm10.d
                *(r14_1 - 4) = zmm13.d f+ zmm11.d
                zmm11.d = zmm11.d f- zmm13.d
                zmm10.d = zmm10.d f- zmm15.d
                *(r15_1 - 8) = zmm10.d
                *(r15_1 - 4) = zmm11.d
                j = j_1
                j_1 -= 1
            while (j != 1)
            rcx_2 = var_1a8_1
            arg2 = arg_10
            rbx = zx.q(arg4)
            rdi_2 = var_170_1
            i_1 = i_2
            r8_5 = var_188_1
            result = result_1
            r9 = rax_3
            r10_2 = var_168_1
        
        rcx_2 += r9
        i = i_1
        i_1 -= 1
        i_2 = i_1
        var_1a8_1 = rcx_2
    while (i != 1)

return result
