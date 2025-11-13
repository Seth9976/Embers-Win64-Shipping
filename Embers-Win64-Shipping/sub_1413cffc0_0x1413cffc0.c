// 函数: sub_1413cffc0
// 地址: 0x1413cffc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x8160)
void var_8198
int64_t rax_1 = __security_cookie ^ &var_8198
int128_t* rsi = arg2
int32_t rdx = sub_1413d0800(arg1, arg2, arg3)
int64_t rbx = sx.q(*(arg1 + 0x4008))
void* rdi = *(arg1 + 0x4000)
void* var_c8 = nullptr
int32_t var_c0 = rbx.d
void var_40c8

if (rbx.d != 0)
    sub_1413f6ba0(&var_40c8, rbx.d, 0)
    void* rcx_1 = &var_40c8
    void* rdx_2 = arg1
    
    if (rdi != 0)
        rdx_2 = rdi
    
    if (var_c8 != 0)
        rcx_1 = var_c8
    
    rdx = memcpy(rcx_1, rdx_2, (rbx << 6).d)
else
    int32_t var_bc_1 = 0x100

int128_t zmm1 = *(arg1 + 0x4028)
int64_t var_b8 = *(arg1 + 0x4010)
int32_t var_70 = *(arg1 + 0x4058)
int128_t var_b0 = *(arg1 + 0x4018)
void** var_4128 = nullptr
int32_t var_8178
int32_t rax_6 = var_8178 & 0xfffffff0
int32_t var_4120 = 0
int128_t var_a0 = zmm1
int32_t var_411c = 0x100
int64_t var_4118 = 0
int128_t var_90 = *(arg1 + 0x4038)
int32_t var_40d0 = 0x80000000
int128_t var_80 = *(arg1 + 0x4048)
int64_t var_4110

do
    (&var_4110)[zx.q(rax_6) & 7] = 0
    
    if ((rax_6.b & 7) u>= 7)
        rax_6 |= 8
    else
        rax_6 ^= ((rax_6 + 1) ^ rax_6) & 7
while (((rax_6 u>> 3).b & 1) == 0)

void* i

if (arg1 != &i)
    int64_t rbx_1 = sx.q(var_4120)
    int32_t r8_2 = *(arg1 + 0x400c)
    *(arg1 + 0x4008) = rbx_1.d
    
    if (rbx_1.d != 0 || r8_2 != 0)
        sub_1413f6ba0(arg1, rbx_1.d, r8_2)
        void* rax_7 = *(arg1 + 0x4000)
        void** rdx_4 = &i
        void* rcx_12 = arg1
        
        if (var_4128 != 0)
            rdx_4 = var_4128
        
        if (rax_7 != 0)
            rcx_12 = rax_7
        
        rdx = memcpy(rcx_12, rdx_4, (rbx_1 << 6).d)
    else
        *(arg1 + 0x400c) = 0x100

*(arg1 + 0x4010) = var_4118
int32_t rbx_3 = var_8178 & 0xfffffff0
*(arg1 + 0x4018) = var_4110
int64_t var_4108
*(arg1 + 0x4020) = var_4108
int64_t var_4100
*(arg1 + 0x4028) = var_4100
int64_t var_40f8
*(arg1 + 0x4030) = var_40f8
int64_t var_40f0
*(arg1 + 0x4038) = var_40f0
int64_t var_40e8
*(arg1 + 0x4040) = var_40e8
int64_t var_40e0
*(arg1 + 0x4048) = var_40e0
int64_t var_40d8
*(arg1 + 0x4050) = var_40d8
*(arg1 + 0x4058) = var_40d0

do
    void* rdi_2 = (&var_4110)[zx.q(rbx_3) & 7]
    
    if (rdi_2 != 0)
        sub_141386770(rdi_2, rdx)
        rdx = j_sub_140a74f90(rdi_2)
    
    if ((rbx_3.b & 7) u>= 7)
        rbx_3 |= 8
    else
        rbx_3 ^= ((rbx_3 + 1) ^ rbx_3) & 7
while (((rbx_3 u>> 3).b & 1) == 0)

if (var_4128 != 0)
    rdx = sub_140a74f90(var_4128)

void* rdx_6 = sub_141386770(arg1, rdx)
*(arg1 + 0x4000) = 0
int32_t rax_28 = var_8178 & 0xfffffff0
*(arg1 + 0x4008) = 0
*(arg1 + 0x400c) = 0x100
*(arg1 + 0x4010) = 0
*(arg1 + 0x4058) = 0x80000000

do
    *(arg1 + ((zx.q(rax_28) & 7) << 3) + 0x4018) = 0
    
    if ((rax_28.b & 7) u>= 7)
        rax_28 |= 8
    else
        rax_28 ^= ((rax_28 + 1) ^ rax_28) & 7
while (((rax_28 u>> 3).b & 1) == 0)

*(arg1 + 0x4098) = 0
int128_t zmm0_1
int128_t zmm1_1

if (arg3.b == 0)
    zmm1_1 = *(rsi + 4)
    float zmm2_1 = *(rsi + 8)
    zmm0_1.d = (*rsi).d f+ *(arg1 + 0x4060)
    *(arg1 + 0x4060) = zmm0_1.d
    zmm1_1.d = zmm1_1.d f+ *(arg1 + 0x4064)
    *(arg1 + 0x4064) = zmm1_1.d
    *(arg1 + 0x4068) = zmm2_1 f+ *(arg1 + 0x4068)

zmm1_1 = *(arg1 + 0x4070)
int128_t zmm6 = 0x3f000000
int32_t rdi_3 = 0
int128_t zmm7 = 0x3f880000
int32_t rbx_4 = var_8178
int96_t var_8118 = (*(arg1 + 0x4060)).12
int64_t var_80f8 = (*(arg1 + 0x4080)).q
i = &var_40c8
int128_t var_8108 = zmm1_1
void* var_6828 = nullptr
int32_t var_6818 = 0
int32_t var_6814 = 0x63

do
    void* i_1 = i
    rbx_4 &= 0xfffffff0
    void var_80e8
    
    do
        uint64_t rsi_2 = zx.q(rbx_4) & 7
        uint64_t r12_1 = zx.q(rbx_4)
        void* rax_29 = *(i_1 + (rsi_2 << 3) + 0x4018)
        
        if (rax_29 != 0 && (*(rax_29 + 0x4058) & 0x7fffffff) u> 0)
            var_6818 = rdi_3 + 1
            
            if (rdi_3 + 1 s> var_6814)
                sub_1409da5f0(&var_80e8, rdi_3)
            
            void* rdx_8 = &var_80e8
            
            if (var_6828 != 0)
                rdx_8 = var_6828
            
            int64_t rax_33 = sx.q(rdi_3) << 6
            rdx_6 = rdx_8 + rax_33
            
            if (rdx_8 == neg.q(rax_33))
                rdx_6 = nullptr
            else
                *(rdx_6 + 0x10) = 0
                *(rdx_6 + 0x18) = 0
                *(rdx_6 + 0x1c) = 0x3f800000
                *(rdx_6 + 0x24) = 0
                *(rdx_6 + 0x2c) = 0x3f800000
                *rdx_6 = 0
            
            *rdx_6 = *(i + (rsi_2 << 3) + 0x4018)
            zmm0_1.d = var_80f8:4.d.d f* *(&data_142e669e0 + ((zx.q(r12_1.d) & 1) << 2))
            zmm0_1.d = zmm0_1.d f+ var_8118.d
            *(rdx_6 + 0x10) = zmm0_1.d
            zmm0_1.d = var_80f8:4.d.d f* *(&data_142e669e0 + ((zx.q((r12_1 u>> 1).d) & 1) << 2))
            zmm0_1.d = zmm0_1.d f+ var_8118:4.d
            *(rdx_6 + 0x14) = zmm0_1.d
            zmm0_1.d = var_80f8:4.d.d f* *(&data_142e669e0 + ((zx.q((r12_1 u>> 2).d) & 1) << 2))
            zmm0_1.d = zmm0_1.d f+ var_8118:8.d
            *(rdx_6 + 0x1c) = 0
            *(rdx_6 + 0x18) = zmm0_1.d
            *(rdx_6 + 0x20) = var_80f8.d.d
            *(rdx_6 + 0x24) = var_80f8.d.d
            *(rdx_6 + 0x28) = var_80f8.d.d
            *(rdx_6 + 0x2c) = 0
            zmm1_1.d = var_80f8.d.d f* zmm6.d
            zmm1_1.d = zmm1_1.d f* zmm7.d
            *(rdx_6 + 0x30) = zmm1_1.d
            zmm0_1.d = var_80f8.d.d f- zmm1_1.d
            *(rdx_6 + 0x34) = zmm0_1.d
            rdi_3 = var_6818
        
        if ((rbx_4.b & 7) u>= 7)
            rbx_4 |= 8
        else
            rbx_4 ^= ((rbx_4 + 1) ^ rbx_4) & 7
    while (((rbx_4 u>> 3).b & 1) == 0)
    
    for (int32_t j = 0; j s>= 0; j += 1)
        if (j s>= *(i_1 + 0x4008))
            break
        
        void* i_3 = *(i_1 + 0x4000)
        void* i_2 = i_1
        
        if (i_3 != 0)
            i_2 = i_3
        
        rdx_6, zmm6, zmm7 = sub_14138abf0(arg1, i_2 + (sx.q(j) << 6), arg1, arg1 + 0x4060)
    
    rdi_3 = var_6818
    
    if (rdi_3 == 0)
        zmm1_1 = data_142d3f660
        i.o = 0.o
        int128_t var_8138
        var_80f8 = var_8138.q
        var_8118 = zmm1_1.12
        int128_t var_8108_2 = zmm1_1
    else
        void* r9_2 = &var_80e8
        
        if (var_6828 != 0)
            r9_2 = var_6828
        
        int128_t* rax_51 = sx.q(rdi_3 - 1) << 6
        i.o = *(rax_51 + r9_2)
        var_8118 = (*(rax_51 + r9_2 + 0x10)).12
        int128_t var_8108_1 = *(rax_51 + r9_2 + 0x20)
        var_80f8 = (*(rax_51 + r9_2 + 0x30)).q
        
        if (0 != 0)
            memmove((sx.q(rdi_3 - 1) << 6) + r9_2, (sx.q(rdi_3) << 6) + r9_2, 0 << 6)
            rdi_3 = var_6818
        
        var_6818 = rdi_3 - 1
        rdx_6 = sub_1409da9e0(&var_80e8)
        rdi_3 = var_6818
while (i != 0)

if (var_6828 != 0)
    rdx_6 = sub_140a74f90(var_6828)

int32_t rbx_6 = var_8178 & 0xfffffff0
uint8_t result

do
    void* rdi_5 = *(&var_b0 + ((zx.q(rbx_6) & 7) << 3))
    
    if (rdi_5 != 0)
        sub_141386770(rdi_5, rdx_6.d)
        rdx_6 = j_sub_140a74f90(rdi_5)
    
    if ((rbx_6.b & 7) u>= 7)
        rbx_6 |= 8
    else
        rbx_6 ^= ((rbx_6 + 1) ^ rbx_6) & 7
    
    result = (rbx_6 u>> 3).b
while ((result & 1) == 0)

if (var_c8 != 0)
    result = sub_140a74f90(var_c8)

__security_check_cookie(rax_1 ^ &var_8198)
return result
