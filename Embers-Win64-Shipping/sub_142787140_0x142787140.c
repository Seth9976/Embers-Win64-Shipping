// 函数: sub_142787140
// 地址: 0x142787140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2e780(arg1, arg2)
int64_t* rcx = &arg1[0x4a]
*arg1 = &data_1434aced0
arg1[5] = &data_1434ad3f0
__builtin_memset(arg1 + 0x1f4, 0, 0x14)
arg1[0x41].b = 1
__builtin_memset(arg1 + 0x20c, 0, 0x14)
arg1[0x44].b = 1
__builtin_memset(arg1 + 0x224, 0, 0x14)
arg1[0x47].b = 1
arg1[0x48] = 0
arg1[0x49] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x54]
arg1[0x4e].d = 0xffffffff
*(arg1 + 0x274) = 0
arg1[0x50] = 0
arg1[0x51].d = 0
arg1[0x52] = 0
arg1[0x53] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x58].d = 0xffffffff
*(arg1 + 0x2c4) = 0
arg1[0x5a] = 0
arg1[0x5b].d = 0
__builtin_memset(&arg1[0x5c], 0, 0x34)
__builtin_memset(&arg1[0x63], 0, 0x30)
float zmm1[0x4] = data_143f880a0
*(arg1 + 0x360) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x350) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x370) = __andps_xmmxud_memxud(data_143f880a0, data_143f880b0)
arg1[0x70].d = 0
*(arg1 + 0x384) = 0xbf800000
arg1[0x71].d = 0xbf800000
*(arg1 + 0x38c) = 0xbf800000
arg1[0x72] = 0
arg1[0x73] = 0
void* rcx_2 = &arg1[0x74]
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x78].d = 0xffffffff
*(arg1 + 0x3c4) = 0
arg1[0x7a] = 0
arg1[0x7b].d = 0
__builtin_memset(&arg1[0x7c], 0, 0x40)
*(arg1 + 0x14d) |= 0x10
*(arg1 + 0x89) |= 0x90
*(arg1 + 0x3a) &= 0xfd
void*** rax_3 = j_sub_140a82f30(0x60)
void*** rbx = rax_3

if (rax_3 == 0)
    rbx = nullptr
else
    *rbx = &data_1434ace50
    rbx[2] = 0
    rbx[3] = 0
    zmm1 = data_143f880a0
    *(rbx + 0x30) = zx.o(0)
    zmm1[0].q = zx.o(0) u>> 0x40
    *(rbx + 0x20) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
    *(rbx + 0x40) = __andps_xmmxud_memxud(data_143f880a0, data_143f880b0)
    rbx[0xa] = arg1 + 0x1f4
    *rbx = &data_1434ace70

void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 == 0)
    rax_4 = nullptr
else
    rax_4[1].d = 1
    *rax_4 = &data_142d42ea8
    *(rax_4 + 0xc) = 1
    rax_4[2] = rbx

zmm1 = rbx.o
float var_78[0x4] = zmm1
void*** rbx_1 = _mm_bsrli_si128(zmm1, 8)[0].q

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rbx_1 = rax_4

if (&var_78 != &arg1[0x7e])
    float zmm0_2[0x4] = *(arg1 + 0x3f0)
    *(arg1 + 0x3f0) = zmm1
    var_78 = zmm0_2

int64_t* rdi_1 = var_78[2].q

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp2_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)
    
    rbx_1 = rax_4

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*rbx_1)[1](rbx_1, 1)

void*** rax_9 = j_sub_140a82f30(0x60)
void*** rbx_2 = rax_9

if (rax_9 == 0)
    rbx_2 = nullptr
else
    *rbx_2 = &data_1434ace50
    rbx_2[2] = 0
    rbx_2[3] = 0
    zmm1 = data_143f880a0
    *(rbx_2 + 0x30) = zx.o(0)
    zmm1[0].q = zx.o(0) u>> 0x40
    *(rbx_2 + 0x20) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
    *(rbx_2 + 0x40) = __andps_xmmxud_memxud(data_143f880a0, data_143f880b0)
    *rbx_2 = &data_1434ace90
    rbx_2[0xa] = arg1 + 0x20c

void*** rax_10 = j_sub_140a82f30(0x18)

if (rax_10 == 0)
    rax_10 = nullptr
else
    rax_10[1].d = 1
    *rax_10 = &data_142d42ea8
    *(rax_10 + 0xc) = 1
    rax_10[2] = rbx_2

zmm1 = rbx_2.o
float var_68[0x4] = zmm1
void*** rbx_3 = _mm_bsrli_si128(zmm1, 8)[0].q

if (rbx_3 != 0)
    rbx_3[1].d += 1
    rbx_3 = rax_10

if (&var_68 != &arg1[0x80])
    float zmm0_4[0x4] = *(arg1 + 0x400)
    *(arg1 + 0x400) = zmm1
    var_68 = zmm0_4

int64_t* rdi_2 = var_68[2].q

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp6_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)
    
    rbx_3 = rax_10

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp7_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rbx_3)[1](rbx_3, 1)

void*** rax_15 = j_sub_140a82f30(0x60)
void*** rbx_4 = rax_15

if (rax_15 == 0)
    rbx_4 = nullptr
else
    *rbx_4 = &data_1434ace50
    rbx_4[2] = 0
    rbx_4[3] = 0
    zmm1 = data_143f880a0
    *(rbx_4 + 0x30) = zx.o(0)
    zmm1[0].q = zx.o(0) u>> 0x40
    *(rbx_4 + 0x20) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
    *(rbx_4 + 0x40) = __andps_xmmxud_memxud(data_143f880a0, data_143f880b0)
    *rbx_4 = &data_1434aceb0
    rbx_4[0xa] = arg1 + 0x224

void*** rax_17 = j_sub_140a82f30(0x18)

if (rax_17 == 0)
    rax_17 = nullptr
else
    rax_17[1].d = 1
    *rax_17 = &data_142d42ea8
    *(rax_17 + 0xc) = 1
    rax_17[2] = rbx_4

zmm1 = rbx_4.o
float var_58[0x4] = zmm1
void*** rbx_5 = _mm_bsrli_si128(zmm1, 8)[0].q

if (rbx_5 != 0)
    rbx_5[1].d += 1
    rbx_5 = rax_17

if (&var_58 != &arg1[0x82])
    float zmm0_6[0x4] = *(arg1 + 0x410)
    *(arg1 + 0x410) = zmm1
    var_58 = zmm0_6

int64_t* rdi_3 = var_58[2].q

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp10_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)
    
    rbx_5 = rax_17

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        void** r8_1 = *rbx_5
        (*r8_1)(rbx_5, zmm1, r8_1)
        int32_t temp11_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp11_1 == 1)
            void** r8_2 = *rbx_5
            r8_2[1](rbx_5, 1, r8_2)

return arg1
