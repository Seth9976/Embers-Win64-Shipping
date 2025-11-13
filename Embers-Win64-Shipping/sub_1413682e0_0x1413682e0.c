// 函数: sub_1413682e0
// 地址: 0x1413682e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = arg3
void* rdx = arg2[8]
char rbx = arg3
int64_t rdi = 0
int64_t r12 = *(rdx + 0x188)
uint32_t arg_8 = 0
int64_t var_98 = r12
int64_t var_b8 = r12
sub_141080be0(arg1, rdx, r12, *(*arg2 + 0x10))
sub_1413aa060(arg1 + 0x118, r12, arg2, data_14395f4d0, 0, nullptr)
void* rax = *arg2
char rcx_1 = 0

if (*(rax + 8) != 0)
    rcx_1 = (*(*(rax + 0x15a8) + 0x4c8) u% 7).b

int32_t var_90
sub_14135bd40(&var_90, zx.d(rcx_1))
int32_t zmm8 = (zx.o(0)).d

if (*(arg1 + 0x238) == 0)
    int32_t var_88_1 = 0x3f800000
else
    int32_t var_88 = 0

uint32_t count = zx.d(*(arg1 + 0x214))
void* r13 = arg2[8]

if (count u>= 0xc)
    count = 0xc

if (count != 0)
    arg4 = zx.d(*(arg1 + 0x212))
    uint32_t rax_9 = zx.d(*(arg1 + 0x210))
    int64_t rbx_3 = (*(r13 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_11 = zx.q(count) + rbx_3
    
    if (rax_11 u> *(r13 + 0x38))
        sub_140b0e3d0(r13 + 0x30, count + 0x10)
        rbx_3 = (*(r13 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_11 = zx.q(count) + rbx_3
    
    *(r13 + 0x30) = rax_11
    memcpy(rbx_3, &var_90, count)
    void*** rcx_8 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_13 = &rcx_8[6]
    
    if (rax_13 u> *(r13 + 0x38))
        sub_140b0e3d0(r13 + 0x30, 0x38)
        rcx_8 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
        rax_13 = &rcx_8[6]
    
    *(r13 + 0x30) = rax_13
    void** rax_14 = *(r13 + 8)
    *(r13 + 0x14) += 1
    *rax_14 = rcx_8
    *(r13 + 8) = &rcx_8[1]
    rcx_8[1] = 0
    *rcx_8 = &data_142d549d8
    rcx_8[4].d = rax_9
    rcx_8[3] = rbx_3
    rbx = arg_18
    *(rcx_8 + 0x24) = arg4
    rcx_8[2] = r12
    rcx_8[5].d = count

void* rcx_12 = arg2[8]
uint32_t temp0[0x4] = __andps_xmmxud_memxud(*(*arg2 + 0xff0), data_142d3f770)
temp0[0] = temp0[0] f* 0.00999999978f
arg_18.d = temp0[0]
sub_1405eb490(rcx_12, &var_b8, arg1 + 0x216, &arg_18, 0)
int64_t rdx_7 = arg2[1]
int32_t rax_20 = arg2[2].d - rdx_7.d
uint32_t r8_5 = (rdx_7 u>> 0x20).d
int32_t rcx_14 = *(arg2 + 0x14) - r8_5
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(rdx_7.d))
void* rcx_15 = arg2[8]
uint128_t zmm2
zmm2.d = _mm_cvtepi32_ps(zx.o(rax_20)).d f* 0.5f
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(neg.d(rcx_14))).d f* 0.5f
zmm7.d = zmm7.d f+ zmm2.d
uint128_t zmm6
zmm6.d = _mm_cvtepi32_ps(zx.o(rcx_14)).d f* 0.5f
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(r8_5))
int32_t var_a8 = zmm2.d
zmm6.d = zmm6.d f+ zmm0_1.d
int32_t var_a4 = zmm1.d
int32_t zmm6_1 = sub_1405d0cd0(rcx_15, &var_b8, arg1 + 0x222, &var_a8, 0)
void* rcx_16 = arg2[8]
int32_t var_a0 = zmm7.d
int32_t var_9c = zmm6_1
sub_1405d0cd0(rcx_16, &var_b8, arg1 + 0x21c, &var_a0, 0)

if (rbx == 0)
    zmm8 = sub_1413138a0(*arg2)

void* rcx_18 = arg2[8]
int32_t arg_20 = zmm8
sub_1405eb490(rcx_18, &var_b8, arg1 + 0x228, &arg_20, 0)
void* rax_23

if (rbx != 0)
    rax_23 = sub_14141f470(*arg2)

int64_t* var_b0
int64_t* rbx_6
int32_t r15

if (rbx == 0 || rax_23 == 0)
    rbx_6 = nullptr
    r15 = 2
    var_b0 = nullptr
else
    void* rcx_21 = *(sub_14141f470(*arg2) + 8)
    arg4.q = rcx_21
    
    if (rcx_21 != 0)
        *(rcx_21 + 8) += 1
        var_98 = var_b8
    
    rdi = arg4.q
    r15 = 1
    rbx_6 = var_b0

void* r13_1 = arg2[8]

if (*(arg1 + 0x236) u> 0)
    uint32_t rax_26 = zx.d(*(arg1 + 0x234))
    void*** rcx_24 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_27 = &rcx_24[5]
    
    if (rax_27 u> *(r13_1 + 0x38))
        sub_140b0e3d0(r13_1 + 0x30, 0x30)
        rcx_24 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_27 = &rcx_24[5]
    
    *(r13_1 + 0x30) = rax_27
    void**** rax_28 = *(r13_1 + 8)
    *(r13_1 + 0x14) += 1
    *rax_28 = rcx_24
    *(r13_1 + 8) = &rcx_24[1]
    rcx_24[1] = 0
    *rcx_24 = &data_142d5ebf8
    rcx_24[2] = var_98
    rcx_24[3].d = rax_26
    rcx_24[4] = rdi

if ((r15.b & 2) != 0)
    r15 &= 0xfffffffd
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            if (var_b0[2].b != 0)
                (**var_b0)(var_b0, 1)
            else
                char rax_33
                
                if (data_143f0f1d0 == 0)
                    rax_33 = sub_1405949a0()
                
                if (data_143f0f1d0 == 0 && rax_33 != 0)
                    (**var_b0)(var_b0, 1)
                else
                    bool z_1
                    
                    if (0 == *(var_b0 + 0xc))
                        *(var_b0 + 0xc) = 1
                        z_1 = true
                    else
                        *(var_b0 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        sub_1405dcc10(&data_143f02390, var_b0)

if ((r15.b & 1) != 0)
    void* rax_36 = arg4.q
    
    if (rax_36 != 0)
        int32_t rdi_1 = *(rax_36 + 8)
        *(rax_36 + 8) -= 1
        
        if (rdi_1 == 1)
            int64_t* rbx_8 = arg4.q
            char rax_37
            
            if (rbx_8[2].b == 0 && data_143f0f1d0 == 0)
                rax_37 = sub_1405949a0()
            
            if (rbx_8[2].b != 0 || (data_143f0f1d0 == 0 && rax_37 != 0))
                (**rbx_8)(rbx_8, 1)
            else
                bool z_2
                
                if (0 == *(rbx_8 + 0xc))
                    *(rbx_8 + 0xc) = 1
                    z_2 = true
                else
                    *(rbx_8 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, arg4.q)

return sub_1405d0e10(arg2[8], &var_b8, arg1 + 0x22e, *arg2 + 0xdd0, 0)
