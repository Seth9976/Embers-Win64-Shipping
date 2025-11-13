// 函数: sub_141732570
// 地址: 0x141732570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rbx = arg5
void* rbp = arg1
int64_t rsi = 0
int64_t* rdi = arg3
int32_t r12 = 0
int32_t* r15 = arg2
int32_t rax = arg3[1].d
int32_t var_c8 = 0

if (rax s> *(rbx + 0xc))
    sub_1405c5570(rbx, rax)
    rax = rdi[1].d

arg5.d = 0
int32_t* r13 = nullptr

if (rax s> 0)
    int128_t zmm6
    int128_t var_58_1 = zmm6
    int64_t* rcx_1 = nullptr
    int128_t zmm7
    int128_t var_68_1 = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    int128_t zmm9
    int128_t var_88_1 = zmm9
    var_c8.q = 0
    int32_t i
    
    do
        int32_t* rdi_1 = *(rcx_1 + *rdi)
        int32_t* rax_2 = j_sub_140a82f30(0x28)
        int32_t* r14_1 = rax_2
        
        if (rax_2 == 0)
            r14_1 = nullptr
        else
            *rax_2 = *rdi_1
        
        void* rax_3 = *(rdi_1 + 0x18)
        *(r14_1 + 0x18) = rax_3
        *(rax_3 + 0x18) = r14_1
        int32_t* rax_4 = j_sub_140a82f30(0x28)
        int32_t* rbp_1 = rax_4
        
        if (rax_4 == 0)
            rbp_1 = nullptr
        else
            *rax_4 = **(rdi_1 + 0x10)
        
        int32_t* rax_5 = j_sub_140a82f30(0x28)
        int32_t* r15_1 = rax_5
        
        if (rax_5 == 0)
            r15_1 = nullptr
        else
            *r15_1 = *arg2
        
        *(r15_1 + 0x18) = r13
        
        if (r13 != 0)
            *(r13 + 0x18) = r15_1
        
        r13 = rbp_1
        *(r14_1 + 8) = r15_1
        *(r14_1 + 0x10) = rbp_1
        *(rbp_1 + 8) = r14_1
        *(rbp_1 + 0x10) = r15_1
        *(r15_1 + 8) = rbp_1
        *(r15_1 + 0x10) = r14_1
        int64_t r9 = *(arg1 + 0x28)
        int64_t rdx_2 = sx.q(*r15_1) * 3
        int64_t r8 = sx.q(*rbp_1) * 3
        int64_t rcx_5 = sx.q(*r14_1) * 3
        zmm8.d = (*(r9 + (r8 << 2) + 8)).d f- *(r9 + (rcx_5 << 2) + 8)
        zmm9.d = (*(r9 + (r8 << 2))).d f- *(r9 + (rcx_5 << 2))
        float zmm3 = *(r9 + (rdx_2 << 2) + 8) f- *(r9 + (rcx_5 << 2) + 8)
        int128_t zmm4_1
        zmm4_1.d = (*(r9 + (r8 << 2) + 4)).d f- *(r9 + (rcx_5 << 2) + 4)
        float zmm5_1 = *(r9 + (rdx_2 << 2) + 4) f- *(r9 + (rcx_5 << 2) + 4)
        zmm6.d = (*(r9 + (rdx_2 << 2))).d f- *(r9 + (rcx_5 << 2))
        float zmm0_1 = zmm8.d * zmm5_1
        zmm7.d = zmm4_1.d f* zmm3
        zmm8.d = zmm8.d f* zmm6.d
        zmm7.d = zmm7.d f- zmm0_1
        zmm4_1.d = zmm4_1.d f* zmm6.d
        zmm0_1 = zmm9.d
        zmm9.d = zmm9.d f* zmm5_1
        zmm9.d = zmm9.d f- zmm4_1.d
        zmm8.d = zmm8.d f- zmm0_1 * zmm3
        int64_t zmm1
        zmm1.d = zmm9.q.d f* zmm9.d
        zmm3 = 1f / _mm_sqrt_ss(0, zmm8.d f* zmm8.d + zmm7.d f* zmm7.d f+ zmm1.d)
        zmm7.d = zmm7.d f* zmm3
        zmm8.d = zmm8.d f* zmm3
        zmm9.d = zmm9.d f* zmm3
        int32_t var_bc_1 = zmm8.d
        int32_t** rax_11 = j_sub_140a82f30(0x38)
        int32_t** rdi_2 = rax_11
        
        if (rax_11 == 0)
            rdi_2 = nullptr
        else
            r12 |= 1
            int64_t rdx_3 = sx.q(*r14_1) * 3
            int64_t rcx_7 = *(arg1 + 0x28)
            int32_t var_a8_1 = *(rcx_7 + (rdx_3 << 2) + 8)
            int32_t var_9c_1 = zmm9.d
            uint128_t zmm0_2
            zmm0_2.q = *(rcx_7 + (rdx_3 << 2))
            rdi_2[1] = 0
            *(rdi_2 + 0x10) = zmm0_2
            uint128_t var_b0 = zmm0_2
            rdi_2[4] = zmm7.d.q
        
        if ((r12.b & 1) != 0)
            r12 &= 0xfffffffe
        
        *rdi_2 = r14_1
        *(r14_1 + 0x20) = rdi_2
        *(rbp_1 + 0x20) = rdi_2
        *(r15_1 + 0x20) = rdi_2
        int64_t rax_13 = sx.q(rbx[1].d)
        
        if (rax_13.d s<= 0)
            rdi_2[5] = 0
        else
            rdi_2[5] = *(*rbx + (rax_13 << 3) - 8)
            *(*(*rbx + (sx.q(rbx[1].d) << 3) - 8) + 0x30) = rdi_2
        
        int64_t rbp_2 = sx.q(rbx[1].d)
        int32_t rax_16 = (rbp_2 + 1).d
        rbx[1].d = rax_16
        
        if (rax_16 s> *(rbx + 0xc))
            sub_1405a4d70(rbx)
        
        rcx_1 = var_c8.q + 8
        var_c8.q = rcx_1
        *(*rbx + (rbp_2 << 3)) = rdi_2
        rdi = arg3
        i = arg5.d + 1
        arg5.d = i
    while (i s< rdi[1].d)
    rbp = arg1
    r15 = arg2

void*** r10 = arg4
*(*(***rbx + 8) + 0x18) = r13
*(r13 + 0x18) = *(***rbx + 8)
*(*(*rbx + (sx.q(rbx[1].d) << 3) - 8) + 0x30) = 0
void** rdi_3 = *r10
uint64_t r14_3 = sx.q(r10[1].d) << 3 u>> 3

if (rdi_3 u> &rdi_3[r10[1]])
    r14_3 = 0

if (r14_3 != 0)
    do
        sub_1417589b0(rbp, *(*rdi_3 + 8), *rbx, rbx[1].d)
        rsi += 1
        rdi_3 = &rdi_3[1]
    while (rsi != r14_3)
    
    r10 = arg4

uint64_t rcx_23 = *rbx
void* rdx_7 = *(r15 + 0x20)
void* r8_2 = *rcx_23
void* r9_2 = *(rcx_23 + (sx.q(rbx[1].d) << 3) - 8)
void* result = *(rdx_7 + 0x30)

if (result != 0)
    *(result + 0x28) = r9_2
    result = *(rdx_7 + 0x30)

*(r9_2 + 0x30) = result
*(rdx_7 + 0x30) = r8_2
*(r8_2 + 0x28) = rdx_7
void** rcx_24 = *r10

if (rcx_24 == 0)
    return result

return sub_140a74f90(rcx_24)
