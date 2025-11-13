// 函数: sub_14105d770
// 地址: 0x14105d770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void*** result_1 = j_sub_140a82f30(0x210)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    int128_t var_6c_1 = zx.o(0)
    int32_t rcx = *arg1[1]
    void* rax_3 = *arg1
    int32_t temp0_1 = _mm_bsrli_si128(zx.o(0), 0xc)
    int32_t rdx = *(rax_3 + 0x10)
    int32_t r8_1 = *(rax_3 + 0x18)
    *result = &data_142d3ff08
    result[1].d = 0
    *(result + 0xc) = 0
    result[2].w = 0x100
    result[3] = 0
    *(result + 0x3c) = rcx
    *(result + 0x20) = 1.o
    result[9] = &result[0xa]
    result[6].d = temp0_1
    *(result + 0x34) = 1
    result[7].d = 1
    result[8].d = 0
    result[0xa] = -0x3810000020000000
    result[0xb] = 0
    result[0xc].d = rdx
    *(result + 0x64) = r8_1
    *result = &data_142ef29a0
    sub_1410092b0(&result[0xd], arg2)
    result[0x24] = 0
    void* rcx_2 = &result[0x37]
    result[0x25].b = 1
    result[0xd] = &data_142f009f8
    result[0x26] = &data_142efcd90
    __builtin_memset(&result[0x27], 0, 0x14)
    result[0x2a] = &result[0xd]
    result[0x2b] = 0
    result[0x2d] = 0
    result[0x2e].d = 0
    *(result + 0x174) = 1
    result[0x2f].b = 0
    __builtin_memset(&result[0x30], 0, 0x24)
    result[0x35] = 0
    result[0x36] = 0
    *(rcx_2 + 0x10) = 0
    *(rcx_2 + 0x18) = 0
    *(rcx_2 + 0x1c) = 0x80
    void* rax_5 = *(rcx_2 + 0x10)
    
    if (rax_5 != 0)
        rcx_2 = rax_5
    
    *rcx_2 = 0
    *(rcx_2 + 8) = 0
    result[0x3b].d = 0xffffffff
    *(result + 0x1dc) = 0
    result[0x3d] = 0
    result[0x3e].d = 0
    result[0x3f] = 0
    *(result + 0x204) &= 0xfffffffe
    *result = &data_142f00b08
    result[0xd] = &data_142f00b60
    result[0x40].d = 0
    result[0x41].b = 0

int64_t* var_128
void*** var_f0
void* r14

if (*(arg2 + 0x18) != *(*arg1[2] + 0x18))
    r14 = &result[0x16]
    sub_14105a560(arg2, *arg1[4], *arg1, nullptr, r14, *arg1[1], 9, 0, u"SwapChainSurface")
else
    void*** rax_8 = j_sub_140a82f30(0x128)
    char var_120
    int32_t var_118
    int32_t var_110
    void*** rbx_2
    
    if (rax_8 == 0)
        rbx_2 = nullptr
    else
        var_110 = 1
        var_118.q = 0
        var_120.q = *arg1
        var_128.d = 0
        rbx_2 = sub_14103f260(rax_8, arg2, (1 << (data_1439c7a34).b) - 1, *arg1[3], var_128.d, 
            var_120, var_118, var_110)
    
    rbx_2[1].d += 1
    sub_14105b130(rbx_2)
    r14 = &result[0x16]
    *(r14 + 8) = 1
    sub_14105ac70(r14, rbx_2)
    *(r14 + 0x58) = 0
    int32_t rax_12 = rbx_2[0x20].d
    
    if (rax_12 != 1 && (rax_12 != 4 || *4 != 1))
        int64_t* rcx_8 = rbx_2[4]
        int64_t var_58 = 0
        int64_t var_50_1 = 0
        int32_t rax_14 =
            (*(*rcx_8 + 0x40))(rcx_8, 0, &var_58, &rbx_2[0x22], var_128, var_120, var_118, var_110)
        
        if (rax_14 s< 0)
            var_f0 = nullptr
            var_120.q = &var_f0
            int64_t var_e8_1 = 0
            sub_14106a020(rax_14, "Resource->Map(0, ReadRange, &ResourceBaseAddress)", 
                "d:\build\++ue4\sync\engine\source\runtime\d3d12rhi\private\../Public/D3D12Resources.h", 
                0x96, nullptr)
        
        *(r14 + 0x40) = rbx_2[0x22]
    
    *(r14 + 0x48) = rbx_2[0x21]
    *(r14 + 0x60) = 0

sub_141023a10(*arg1[2])
int32_t rcx_13 = *(*arg1 + 0x20)
void*** r15

if (data_143e2c99c == 0)
    int32_t var_b0 = rcx_13
    int64_t var_a4_1 = 0
    int32_t var_9c_1 = 0
    int64_t var_ac_1 = 4
    void*** rax_30 = j_sub_140a82f30(0x88)
    
    if (rax_30 == 0)
        r15 = nullptr
    else
        r15 = sub_14103f110(rax_30, arg2, &var_b0, r14)
    
    void* rbx_4 = &result[0x2c]
    sub_14104a820(rbx_4, 1)
    
    if (r15 != 0)
        r15[0xd].d += 1
    
    int32_t rcx_24 = *(rbx_4 + 0x10)
    *(rbx_4 + 0x10) = rcx_24 + 1
    
    if (rcx_24 + 1 s> *(rbx_4 + 0x14))
        sub_140809610(rbx_4, rcx_24)
    
    void* rax_33 = *(rbx_4 + 8)
    
    if (rax_33 != 0)
        rbx_4 = rax_33
    
    *(rbx_4 + (sx.q(rcx_24) << 3)) = r15
else
    int32_t var_e0 = rcx_13
    int32_t var_c8 = rcx_13
    int64_t var_d0_1 = 1
    int64_t var_dc_1 = 5
    int32_t var_d4_1 = 0
    int64_t var_b8_1 = 1
    int64_t var_c4_1 = 5
    int32_t var_bc_1 = 1
    void*** rax_20 = j_sub_140a82f30(0x88)
    
    if (rax_20 == 0)
        r15 = nullptr
    else
        r15 = sub_14103f110(rax_20, arg2, &var_e0, r14)
    
    void*** rax_22 = j_sub_140a82f30(0x88)
    
    if (rax_22 == 0)
        var_f0 = nullptr
    else
        var_f0 = sub_14103f110(rax_22, arg2, &var_c8, r14)
    
    int64_t* rbx_3 = &result[0x2c]
    sub_14104a820(rbx_3, 2)
    int32_t rcx_17 = rbx_3[2].d
    rbx_3[2].d = rcx_17 + 2
    
    if (rcx_17 + 2 s> *(rbx_3 + 0x14))
        sub_140809610(rbx_3, rcx_17)
    
    int64_t* rax_25 = rbx_3[1]
    int64_t* rcx_19 = rbx_3
    
    if (rax_25 != 0)
        rcx_19 = rax_25
    
    int64_t rax_26 = sx.q(rcx_17)
    rcx_19[rax_26] = 0
    rcx_19[rax_26 + 1] = 0
    int32_t rax_27 = result[0x2e].d
    
    if (rax_27 != 0)
        int64_t* rax_28 = rbx_3[1]
        int64_t* rcx_20 = rbx_3
        
        if (rax_28 != 0)
            rcx_20 = rax_28
        
        sub_1410407f0(rcx_20, r15)
        rax_27 = result[0x2e].d
    
    if (rax_27 u> 1)
        int64_t* rax_29 = rbx_3[1]
        
        if (rax_29 != 0)
            rbx_3 = rax_29
        
        sub_1410407f0(&rbx_3[1], var_f0)

int64_t var_90 = 0x1688
int128_t var_80 = zx.o(0)
int32_t var_94 = 4
int32_t var_98 = *(*arg1 + 0x20)
int32_t var_88 = 0
int32_t var_84 = 1
void*** rax_36 = j_sub_140a82f30(0xa8)
void*** rbx_5 = rax_36

if (rax_36 == 0)
    rbx_5 = nullptr
else
    sub_14100d6c0(rax_36, arg2)
    var_128.b = 0
    *rbx_5 = &data_142efcd08
    rbx_5[3] = &data_142efcd10
    sub_141025d40(rbx_5, &var_98, r14, 0xffffffff, var_128.b)

sub_1405d16e0(&result[0x2b], rbx_5)

if (*(arg2 + 0x18) == *(*arg1[2] + 0x18))
    result[2].b = 1
    r15[0xe].b = 1
    rbx_5[2].b = 1

__security_check_cookie(rax_1 ^ &var_148)
return result
