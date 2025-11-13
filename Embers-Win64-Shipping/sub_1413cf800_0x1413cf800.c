// 函数: sub_1413cf800
// 地址: 0x1413cf800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1d30)
void var_1d68
int64_t rax_1 = __security_cookie ^ &var_1d68
int128_t* rsi = arg2
float (* r15)[0x4] = arg1
int32_t rdx = sub_1413d0730(arg1, arg2, arg3)
int64_t rbx = sx.q(r15[0x31][0])
float (* rdi)[0x4] = r15[0x30][0].q
void* var_19f8 = nullptr
int32_t var_19e8 = rbx.d
void var_1cf8

if (rbx.d != 0)
    sub_1413f6b00(&var_1cf8, rbx.d, 0)
    void* rcx_1 = &var_1cf8
    float (* rdx_2)[0x4] = r15
    
    if (rdi != 0)
        rdx_2 = rdi
    
    if (var_19f8 != 0)
        rcx_1 = var_19f8
    
    rdx = memcpy(rcx_1, rdx_2, (rbx * 0x30).d)
else
    int32_t var_19e4_1 = 0x10

int128_t zmm1 = *(r15 + 0x338)
int64_t var_19d8 = r15[0x32][0].q
float var_1990 = (*r15)[0xda]
int128_t var_19d0 = *(r15 + 0x328)
void** var_1688 = nullptr
int32_t var_1d48
int32_t rax_6 = var_1d48 & 0xfffffff0
int32_t var_1678 = 0
int128_t var_19c0 = zmm1
int32_t var_1674 = 0x10
int64_t var_1668 = 0
int128_t var_19b0 = *(r15 + 0x348)
float var_1620 = -0f
int128_t var_19a0 = *(r15 + 0x358)
int64_t var_1660

do
    (&var_1660)[zx.q(rax_6) & 7] = 0
    
    if ((rax_6.b & 7) u>= 7)
        rax_6 |= 8
    else
        rax_6 ^= ((rax_6 + 1) ^ rax_6) & 7
while (((rax_6 u>> 3).b & 1) == 0)

void* i

if (r15 != &i)
    int64_t rbx_1 = sx.q(var_1678)
    float r8_2 = (*r15)[0xc5]
    r15[0x31][0] = rbx_1.d
    
    if (rbx_1.d != 0 || r8_2 != 0)
        sub_1413f6b00(r15, rbx_1.d, r8_2)
        float (* r9_1)[0x4] = r15[0x30][0].q
        void** rdx_4 = &i
        float (* rcx_12)[0x4] = r15
        
        if (var_1688 != 0)
            rdx_4 = var_1688
        
        if (r9_1 != 0)
            rcx_12 = r9_1
        
        rdx = memcpy(rcx_12, rdx_4, (rbx_1 * 0x30).d)
    else
        (*r15)[0xc5] = 2.24207754e-44f

r15[0x32][0].q = var_1668
int32_t rbx_3 = var_1d48 & 0xfffffff0
*(r15 + 0x328) = var_1660
int64_t var_1658
r15[0x33][0].q = var_1658
int64_t var_1650
*(r15 + 0x338) = var_1650
int64_t var_1648
r15[0x34][0].q = var_1648
int64_t var_1640
*(r15 + 0x348) = var_1640
int64_t var_1638
r15[0x35][0].q = var_1638
int64_t var_1630
*(r15 + 0x358) = var_1630
int64_t var_1628
r15[0x36][0].q = var_1628
(*r15)[0xda] = var_1620

do
    void* rdi_2 = (&var_1660)[zx.q(rbx_3) & 7]
    
    if (rdi_2 != 0)
        sub_1412197e0(rdi_2, rdx)
        rdx = j_sub_140a74f90(rdi_2)
    
    if ((rbx_3.b & 7) u>= 7)
        rbx_3 |= 8
    else
        rbx_3 ^= ((rbx_3 + 1) ^ rbx_3) & 7
while (((rbx_3 u>> 3).b & 1) == 0)

if (var_1688 != 0)
    rdx = sub_140a74f90(var_1688)

void* rdx_6 = sub_1412197e0(r15, rdx)
r15[0x30][0].q = 0.0
int32_t rax_27 = var_1d48 & 0xfffffff0
r15[0x31][0] = 0f
(*r15)[0xc5] = 2.24207754e-44f
r15[0x32][0].q = 0.0
(*r15)[0xda] = -0f

do
    *(r15 + ((zx.q(rax_27) & 7) << 3) + 0x328) = 0
    
    if ((rax_27.b & 7) u>= 7)
        rax_27 |= 8
    else
        rax_27 ^= ((rax_27 + 1) ^ rax_27) & 7
while (((rax_27 u>> 3).b & 1) == 0)

*(r15 + 0x3a8) = 0.0
int128_t zmm0_1
int128_t zmm1_1

if (arg3.b == 0)
    zmm1_1 = *(rsi + 4)
    float zmm2_1 = *(rsi + 8)
    zmm0_1.d = (*rsi).d f+ r15[0x37][0]
    r15[0x37][0] = zmm0_1.d
    zmm1_1.d = zmm1_1.d f+ (*r15)[0xdd]
    (*r15)[0xdd] = zmm1_1.d
    (*r15)[0xde] = zmm2_1 + (*r15)[0xde]

zmm1_1 = r15[0x38]
int128_t zmm6 = 0x3f000000
int32_t rdi_3 = 0
int128_t zmm7 = 0x3f880000
int32_t rbx_4 = var_1d48
int96_t var_1978 = r15[0x37].12
int64_t var_1958 = r15[0x39].q
i = &var_1cf8
int128_t var_1968 = zmm1_1
void* var_88 = nullptr
int32_t var_78 = 0
int32_t var_74 = 0x63

do
    void* i_1 = i
    rbx_4 &= 0xfffffff0
    void var_1948
    
    do
        uint64_t rsi_2 = zx.q(rbx_4) & 7
        uint64_t r12_1 = zx.q(rbx_4)
        void* rax_28 = *(i_1 + (rsi_2 << 3) + 0x328)
        
        if (rax_28 != 0 && (*(rax_28 + 0x368) & 0x7fffffff) u> 0)
            var_78 = rdi_3 + 1
            
            if (rdi_3 + 1 s> var_74)
                sub_1409da5f0(&var_1948, rdi_3)
            
            void* rdx_8 = &var_1948
            
            if (var_88 != 0)
                rdx_8 = var_88
            
            int64_t rax_32 = sx.q(rdi_3) << 6
            rdx_6 = rdx_8 + rax_32
            
            if (rdx_8 == neg.q(rax_32))
                rdx_6 = nullptr
            else
                *(rdx_6 + 0x10) = 0
                *(rdx_6 + 0x18) = 0
                *(rdx_6 + 0x1c) = 0x3f800000
                *(rdx_6 + 0x24) = 0
                *(rdx_6 + 0x2c) = 0x3f800000
                *rdx_6 = 0
            
            *rdx_6 = *(i + (rsi_2 << 3) + 0x328)
            zmm0_1.d = var_1958:4.d.d f* *(&data_142e669e0 + ((zx.q(r12_1.d) & 1) << 2))
            zmm0_1.d = zmm0_1.d f+ var_1978.d
            *(rdx_6 + 0x10) = zmm0_1.d
            zmm0_1.d = var_1958:4.d.d f* *(&data_142e669e0 + ((zx.q((r12_1 u>> 1).d) & 1) << 2))
            zmm0_1.d = zmm0_1.d f+ var_1978:4.d
            *(rdx_6 + 0x14) = zmm0_1.d
            zmm0_1.d = var_1958:4.d.d f* *(&data_142e669e0 + ((zx.q((r12_1 u>> 2).d) & 1) << 2))
            zmm0_1.d = zmm0_1.d f+ var_1978:8.d
            *(rdx_6 + 0x1c) = 0
            *(rdx_6 + 0x18) = zmm0_1.d
            *(rdx_6 + 0x20) = var_1958.d.d
            *(rdx_6 + 0x24) = var_1958.d.d
            *(rdx_6 + 0x28) = var_1958.d.d
            *(rdx_6 + 0x2c) = 0
            zmm1_1.d = var_1958.d.d f* zmm6.d
            zmm1_1.d = zmm1_1.d f* zmm7.d
            *(rdx_6 + 0x30) = zmm1_1.d
            zmm0_1.d = var_1958.d.d f- zmm1_1.d
            *(rdx_6 + 0x34) = zmm0_1.d
            rdi_3 = var_78
        
        if ((rbx_4.b & 7) u>= 7)
            rbx_4 |= 8
        else
            rbx_4 ^= ((rbx_4 + 1) ^ rbx_4) & 7
    while (((rbx_4 u>> 3).b & 1) == 0)
    
    for (int32_t j = 0; j s>= 0; j += 1)
        if (j s>= *(i_1 + 0x310))
            break
        
        void* i_3 = *(i_1 + 0x300)
        void* i_2 = i_1
        
        if (i_3 != 0)
            i_2 = i_3
        
        rdx_6, zmm6, zmm7 = sub_14121b290(r15, i_2 + sx.q(j) * 0x30, r15, &r15[0x37])
    
    rdi_3 = var_78
    
    if (rdi_3 == 0)
        zmm1_1 = data_142d3f660
        i.o = 0.o
        int128_t var_1d08
        var_1958 = var_1d08.q
        var_1978 = zmm1_1.12
        int128_t var_1968_2 = zmm1_1
    else
        void* r9_3 = &var_1948
        
        if (var_88 != 0)
            r9_3 = var_88
        
        int128_t* rax_49 = sx.q(rdi_3 - 1) << 6
        i.o = *(rax_49 + r9_3)
        var_1978 = (*(rax_49 + r9_3 + 0x10)).12
        int128_t var_1968_1 = *(rax_49 + r9_3 + 0x20)
        var_1958 = (*(rax_49 + r9_3 + 0x30)).q
        
        if (0 != 0)
            memmove((sx.q(rdi_3 - 1) << 6) + r9_3, (sx.q(rdi_3) << 6) + r9_3, 0 << 6)
            rdi_3 = var_78
        
        var_78 = rdi_3 - 1
        rdx_6 = sub_1409da9e0(&var_1948)
        rdi_3 = var_78
while (i != 0)

if (var_88 != 0)
    rdx_6 = sub_140a74f90(var_88)

int32_t rbx_6 = var_1d48 & 0xfffffff0
uint8_t result

do
    void* rdi_5 = *(&var_19d0 + ((zx.q(rbx_6) & 7) << 3))
    
    if (rdi_5 != 0)
        sub_1412197e0(rdi_5, rdx_6.d)
        rdx_6 = j_sub_140a74f90(rdi_5)
    
    if ((rbx_6.b & 7) u>= 7)
        rbx_6 |= 8
    else
        rbx_6 ^= ((rbx_6 + 1) ^ rbx_6) & 7
    
    result = (rbx_6 u>> 3).b
while ((result & 1) == 0)

if (var_19f8 != 0)
    result = sub_140a74f90(var_19f8)

__security_check_cookie(rax_1 ^ &var_1d68)
return result
