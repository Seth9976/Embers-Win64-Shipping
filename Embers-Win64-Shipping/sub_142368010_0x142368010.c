// 函数: sub_142368010
// 地址: 0x142368010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68
sub_14229e7e0(*(arg1 + 0x30) + 0x178, &var_68)
int128_t zmm8 = zx.o(0)
void* r8_1 = *(arg1 + 0x30) + 0x10
void* rax = *(r8_1 + 0x18)

if (rax != 0)
    r8_1 = rax

int64_t rcx_2 = sx.q(*(arg1 + 0x38)) * 3
uint64_t rbx = zx.q(*(r8_1 + (rcx_2 << 3) + 8))
int64_t rdi = sx.q(*(r8_1 + (rcx_2 << 3) + 4))
arg2[1].d = 0
int32_t var_60
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, var_60)
uint64_t result = zx.q(temp0 u>> 0x1f)
int32_t rdx_2 = temp0 + result.d

if (*(arg2 + 0xc) != rdx_2)
    result = sub_1405dadb0(arg2, rdx_2)

int64_t rcx_4 = sx.q(rbx.d + (rdi + (rbx << 1)).d)

if (rdi s< rcx_4)
    void* rbx_2 = (rdi << 1) + 4
    int128_t zmm6
    int128_t var_28_1 = zmm6
    uint128_t zmm7
    uint128_t var_38_1 = zmm7
    void* rdi_1 = (rdi << 2) + 8
    int64_t i_1 = (rcx_4 - rdi - 1) u/ 3 + 1
    int64_t i
    
    do
        int64_t rdx_4 = var_68
        char var_5c
        uint32_t rcx_7
        
        if (var_5c == 0)
            rcx_7 = zx.d(*(rbx_2 + rdx_4 - 4))
        else
            rcx_7 = *(rdi_1 + rdx_4 - 8)
        
        void* rax_5 = *(arg1 + 0x30)
        int64_t r8_2 = *(rax_5 + 0x120)
        int32_t r10_1 = *(rax_5 + 0x128)
        uint64_t rax_7 = zx.q(r10_1 * rcx_7)
        float rax_8 = *(rax_7 + r8_2 + 8)
        int64_t var_98_1 = *(rax_7 + r8_2)
        uint32_t rcx_8
        
        if (var_5c == 0)
            rcx_8 = zx.d(*(rbx_2 + rdx_4 - 2))
        else
            rcx_8 = *(rdi_1 + rdx_4 - 4)
        
        uint64_t rax_10 = zx.q(r10_1 * rcx_8)
        int64_t zmm0 = *(rax_10 + r8_2)
        uint32_t rax_12
        
        if (var_5c == 0)
            rax_12 = zx.d(*(rbx_2 + rdx_4))
        else
            rax_12 = *(rdi_1 + rdx_4)
        
        zmm6.d = zmm0.d.d f- var_98_1.d
        int64_t zmm2
        zmm2.d = (*(rax_10 + r8_2 + 8)).d f- rax_8
        float zmm4 = zmm0:4.d f- var_98_1:4.d
        int64_t r14_1 = sx.q(arg2[1].d)
        uint64_t r10_2 = zx.q(r10_1 * rax_12)
        float zmm5 = *(r10_2 + r8_2 + 4) f- var_98_1:4.d
        zmm7.d = (*(r10_2 + r8_2)).d f- var_98_1.d
        int32_t rax_14 = (r14_1 + 1).d
        float zmm3 = *(r10_2 + r8_2 + 8) - rax_8
        zmm0.d = zmm2.d f* zmm5
        arg2[1].d = rax_14
        zmm2.d = zmm2.d f* zmm7.d
        float zmm1 = zmm4 * zmm3 f- zmm0.d
        zmm0 = zmm6.q
        zmm6.d = zmm6.d f* zmm5
        zmm0.d = zmm0.d f* zmm3
        zmm6.d = zmm6.d f- zmm4 f* zmm7.d
        zmm2.d = zmm2.d f- zmm0.d
        zmm6.d = zmm6.d f* zmm6.d
        zmm2.d = zmm2.d f* zmm2.d
        zmm2.d = zmm2.d f+ zmm1 * zmm1
        zmm2.d = zmm2.d f+ zmm6.d
        zmm6.d = _mm_sqrt_ss(0, zmm2.d).d f* 0.5f
        
        if (rax_14 s> *(arg2 + 0xc))
            sub_1406105e0(arg2)
        
        result = *arg2
        zmm8.d = zmm8.d f+ zmm6.d
        rdi_1 += 0xc
        rbx_2 += 6
        *(result + (r14_1 << 2)) = zmm6.d
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
