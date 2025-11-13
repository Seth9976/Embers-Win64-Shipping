// 函数: sub_141ef6630
// 地址: 0x141ef6630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xb8)

if (rcx == 0)
    return 

if (arg2 != 0)
    (*(*rcx + 0x800))(rcx, 0, 0)
    int64_t* rcx_1 = *(arg1 + 0xb8)
    (*(*rcx_1 + 0x800))(rcx_1, 1, 0)
    uint128_t zmm7 = zx.o(*(arg1 + 0x428))
    int32_t rdi_1 = *(arg1 + 0x430)
    uint128_t zmm6 = zx.o(*(arg1 + 0x434))
    int32_t rbx_1 = *(arg1 + 0x43c)
    memset(arg1 + 0x3e8, 0, 0x88)
    *(arg1 + 0x428) = zmm7.q
    uint128_t zmm0 = zx.o(0)
    *(arg1 + 0x434) = zmm6.q
    *(arg1 + 0x430) = rdi_1
    *(arg1 + 0x43c) = rbx_1
    *(arg1 + 0x3f0) = 0x3f800000
    zmm6 = *(arg1 + 0x470)
    
    if (not(zmm6.d f<= 0f))
        zmm0.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
        zmm0.d = zmm0.d f- 1f
        zmm0.d = zmm0.d f* zmm6.d
    
    *(arg1 + 0x474) = zmm0.d
    return 

void* rcx_3 = *(arg1 + 0x148)

if (rcx_3 == 0 || *(rcx_3 + 0x290) != *(arg1 + 0xb0))
    return 

void* rax = sub_141db59c0(*(rcx_3 + 0x10))
int64_t* rdi_2

if (rax == 0)
    rdi_2 = nullptr
else
    rdi_2 = *(rax + 0x290)

if (rdi_2 == 0)
    return 

int64_t rbx_2 = **(arg1 + 0xb8)
int32_t rax_6 = (*(*rdi_2 + 0x4d0))(rdi_2, 0)
(*(rbx_2 + 0x800))(*(arg1 + 0xb8), 0, zx.q(rax_6))
int64_t rbx_3 = **(arg1 + 0xb8)
int32_t rax_9 = (*(*rdi_2 + 0x4d0))(rdi_2, 1)
(*(rbx_3 + 0x800))(*(arg1 + 0xb8), 1, zx.q(rax_9))
