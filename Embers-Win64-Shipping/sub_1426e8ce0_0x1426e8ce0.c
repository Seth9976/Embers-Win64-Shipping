// 函数: sub_1426e8ce0
// 地址: 0x1426e8ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_48
sub_14265ad90(&var_48, arg1, arg2, *(arg3 + 8))
int32_t rax = arg4[1].d
int64_t var_138 = 0
int64_t var_130 = 0

if (rax s> 0)
    sub_140775c70(&var_138, rax)
    rax = arg4[1].d

int64_t* rbx = *arg4
uint128_t zmm0 = *(arg3 + 0x10)
uint128_t zmm6 = *(arg3 + 0x14)
void* r14 = &rbx[sx.q(rax) * 3]
uint128_t var_128

if (zmm0.d f!= zmm6.d)
    zmm6.d = zmm6.d f- zmm0.d
    zmm6.d = zmm6.d f* 0.5f
    
    while (rbx != r14)
        int64_t zmm4_1 = data_143dbb1f8.q
        zmm0.d = zmm6.d f+ rbx[1].d
        int32_t rcx_6 = data_143dbb200
        int64_t rdi_2 = sx.q(var_130.d)
        var_128:8.d = zmm0.d
        int32_t var_88_1 = var_128:8.d
        int32_t var_f0_1 = rcx_6
        int32_t var_6c_1 = 0.d
        zmm0.q = zmm4_1
        int32_t var_e4_1 = rcx_6
        int32_t var_50 = (var_50 & 0xfffffffc) | 4
        int32_t rax_14 = (rdi_2 + 1).d
        uint128_t var_f8 = zmm0
        int64_t var_58_1 = 0
        uint64_t var_90_1 = (_mm_unpacklo_ps(*rbx, (*(rbx + 4)).q)).q
        int64_t var_68_1 = zmm4_1
        var_130.d = rax_14
        
        if (rax_14 s> var_130:4.d)
            sub_140775520(&var_138)
        
        int64_t rax_15 = var_138
        int64_t rcx_8 = rdi_2 * 9
        rbx = &rbx[3]
        *(rax_15 + (rcx_8 << 3)) = var_90_1.o
        *(rax_15 + (rcx_8 << 3) + 0x10) = zmm0
        *(rax_15 + (rcx_8 << 3) + 0x20) = zmm4_1:4.o
        *(rax_15 + (rcx_8 << 3) + 0x30) = rcx_6.o
        *(rax_15 + (rcx_8 << 3) + 0x40) = var_50.q
else
    while (rbx != r14)
        uint128_t zmm2 = zx.o(data_143dbb1f8.q)
        int32_t rcx_3 = data_143dbb200
        int64_t rdi_1 = sx.q(var_130.d)
        int32_t var_d0_1 = rbx[1].d
        var_128:0xc.q = zmm2.q
        uint64_t var_d8_1 = *rbx
        var_128:8.d = rcx_3
        int32_t var_b4_1 = 0.d
        zmm0.q = zmm2.q
        int32_t var_114_1 = rcx_3
        uint64_t var_b0_1 = zmm2.q
        int32_t var_98 = (var_98 & 0xfffffffc) | 4
        int32_t rax_7 = (rdi_1 + 1).d
        var_128 = zmm0
        int64_t var_a0_1 = 0
        var_130.d = rax_7
        
        if (rax_7 s> var_130:4.d)
            sub_140775520(&var_138)
        
        int64_t rax_8 = var_138
        int64_t rcx_5 = rdi_1 * 9
        rbx = &rbx[3]
        *(rax_8 + (rcx_5 << 3)) = var_d8_1.o
        *(rax_8 + (rcx_5 << 3) + 0x10) = zmm0
        int64_t var_118
        *(rax_8 + (rcx_5 << 3) + 0x20) = var_118:4.o
        *(rax_8 + (rcx_5 << 3) + 0x30) = rcx_3.o
        *(rax_8 + (rcx_5 << 3) + 0x40) = var_98.q

zmm0 = *(arg3 + 0x18)
uint128_t zmm1_1
zmm1_1.d = (*(arg3 + 0x10)).d f+ *(arg3 + 0x14)
int32_t var_108 = zmm0.d
int32_t var_104 = zmm0.d
zmm0 = var_48
zmm1_1.d = zmm1_1.d f* 0.5f
var_128 = zmm0
void* rax_16 = _mm_bsrli_si128(zmm0, 8).q
int32_t var_100 = zmm1_1.d

if (rax_16 != 0)
    *(rax_16 + 8) += 1

uint64_t result = (*(*arg1 + 0x710))(arg1, &var_138, &var_108, &var_128, 0)
int32_t r14_1 = var_130.d
int32_t r14_2 = r14_1 - 1

if (r14_1 - 1 s>= 0)
    int64_t rax_18 = sx.q(r14_2)
    int64_t rbx_2 = rax_18 * 0x18
    result = zx.q(r14_2 + 1)
    int64_t rdi_4 = rax_18 * 0x48
    int64_t r12_1 = rbx_2
    int64_t r15_2 = sx.q(result.d) * 0x18
    int32_t temp2_1
    
    do
        int64_t rcx_11 = var_138
        
        if ((*(rcx_11 + rdi_4 + 0x40) & 2) != 0)
            uint128_t* rax_19 = *arg4
            *(rax_19 + rbx_2) = *(rcx_11 + rdi_4 + 0x28)
            *(rax_19 + rbx_2 + 0x10) = *(rcx_11 + rdi_4 + 0x38)
            result = *arg4
            zmm0.d = (*(arg3 + 0x24)).d f+ *(result + rbx_2 + 8)
            *(result + rbx_2 + 8) = zmm0.d
        else if (arg5 == 1)
            int32_t rcx_12 = arg4[1].d
            int32_t rax_21 = rcx_12 - r14_2
            
            if (rax_21 != 1)
                int64_t rcx_13 = *arg4
                memmove(rcx_13 + r12_1, rcx_13 + r15_2, (rax_21 - 1) * 0x18)
                rcx_12 = arg4[1].d
            
            result = zx.q(rcx_12 - 1)
            arg4[1].d = result.d
        
        r15_2 -= 0x18
        r12_1 -= 0x18
        rdi_4 -= 0x48
        rbx_2 -= 0x18
        temp2_1 = r14_2
        r14_2 -= 1
    while (temp2_1 - 1 s>= 0)

int64_t rcx_15 = var_138

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

int64_t* rbx_3 = var_48:8.q

if (rbx_3 != 0)
    result = zx.q(rbx_3[1].d)
    rbx_3[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t rdi_5 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rdi_5 == 1)
            return (*(*rbx_3 + 8))(rbx_3, zx.q(rdi_5))

return result
