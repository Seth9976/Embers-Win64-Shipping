// 函数: sub_1417fdf60
// 地址: 0x1417fdf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t rdi = 0
__builtin_memset(&arg1[1], 0, 0x1c)
arg1[5] = 0
arg1[6].d = 0
arg1[7] = 0
arg1[8].d = 0
arg1[9] = 0
arg1[0xa].d = 0
*arg1 = &data_142fe1560
__builtin_memset(&arg1[0xb], 0, 0x31)
*(arg1 + 0x8c) = 0
arg1[0x12].b = 0
*(arg1 + 0x94) = 0
__builtin_memset(&arg1[0x14], 0, 0x19)
__builtin_memset(arg1 + 0xbc, 0, 0x14)
void* rcx = &arg1[0x1a]
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rcx = rax_2

__builtin_memset(rcx, 0, 0x1c)
arg1[0x1e].d = 0xffffffff
*(arg1 + 0xf4) = 0
arg1[0x20] = 0
arg1[0x21].d = 0
arg1[0x22] = 0
arg1[0x23].b = 0
__builtin_memset(arg1 + 0x11c, 0, 0x14)
arg1[0x8a].d = 0
*(arg1 + 0x454) = 0x32
void* rax_3
int512_t zmm2
rax_3, zmm2 = sub_142c52100()
arg1[0xb] = rax_3
int512_t zmm2_1 = sub_142c521c0(rax_3, 0x276f, arg1, zmm2)
int512_t zmm2_2 = sub_142c521c0(arg1[0xb], 0x4e7e, sub_141809740, zmm2_1)
int512_t zmm2_3 = sub_142c521c0(arg1[0xb], 0x29, 1, zmm2_2)
int512_t zmm2_4 = sub_142c521c0(arg1[0xb], 0x62, zx.q(data_1439c6628), zmm2_3)
int512_t zmm2_5 = sub_142c521c0(arg1[0xb], 0x77, 3, zmm2_4)
void* rcx_6 = arg1[0xb]
int512_t zmm2_6

if (data_1439c6610 == 0)
    zmm2_6 = sub_142c521c0(rcx_6, 0x40, 0, zmm2_5)
else
    zmm2_6 = sub_142c521c0(rcx_6, 0x40, 1, zmm2_5)

int512_t zmm2_7 = sub_142c521c0(arg1[0xb], 0x34, 1, zmm2_6)
int512_t zmm2_8 = sub_142c521c0(arg1[0xb], 0x63, 1, zmm2_7)
int512_t zmm2_9 = sub_142c521c0(arg1[0xb], 0x2777, arg1, zmm2_8)
void* rdx = data_143ef9cf8

if (rdx == 0)
    void var_100
    int64_t rbx_1 = *sub_140b58170(&var_100, "HTTP", (rdx + 1).d)
    j_sub_140b3db50()
    zmm2_9 = j_sub_140b407e0(&data_143de7d78, rbx_1)
    rdx = data_143ef9cf8

if (*(rdx + 0xa0) s> 1)
    void var_c8
    sub_1408f2b40(&var_c8, *(rdx + 0x98))
    int64_t var_40
    zmm2_9 = sub_142c521c0(arg1[0xb], 0x2714, var_40, zmm2_9)
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)

if (data_1439c6611 != 0)
    zmm2_9 = sub_142c521c0(arg1[0xb], 0x4b, 1, zmm2_9)

int512_t zmm2_10 = sub_142c521c0(arg1[0xb], 0x2766, &data_142fe1718, zmm2_9)
int512_t zmm2_11 = sub_142c521c0(arg1[0xb], 0x2751, 0, zmm2_10)
int512_t zmm2_12 = sub_142c521c0(arg1[0xb], 0x4e8c, sub_14180a960, zmm2_11)
sub_142c521c0(arg1[0xb], 0x277d, arg1, zmm2_12)
int64_t r14 = sx.q(arg1[0x8a].d)
int32_t rax_5 = (r14 + 0x32).d
arg1[0x8a].d = rax_5

if (rax_5 s> *(arg1 + 0x454))
    sub_141807850(&arg1[0x26])

memset(&arg1[0x26 + r14 * 2], 0, 0x320)
void* rax_6 = data_143ef9cf8

if (rax_6 == 0)
    void var_f8
    int64_t rbx_3 = *sub_140b58170(&var_f8, "HTTP", (rax_6 + 1).d)
    j_sub_140b3db50()
    j_sub_140b407e0(&data_143de7d78, rbx_3)
    rax_6 = data_143ef9cf8

int32_t var_148 = 0
int32_t r9 = *(rax_6 + 0x70)
void* r8_7 = rax_6 + 0x58
int32_t var_144 = 1
int32_t rcx_24 = 0
void* var_140 = r8_7
int32_t var_138 = 0xffffffff
int32_t var_134 = 0
int32_t var_130 = 0

if (r9 != 0)
    void* rax_8 = *(r8_7 + 0x10)
    
    if (rax_8 != 0)
        r8_7 = rax_8
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rdx_7 = *r8_7
    int32_t var_134_2
    
    if (rdx_7 != 0)
    label_1417fe329:
        int32_t rax_15 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
        int32_t var_144_1 = rax_15
        int32_t rax_16
        
        if (rax_15 == 0)
            rax_16 = 0x20
        else
            rax_16 = 0x1f - temp0_2
        
        int32_t var_134_1 = rcx_24 - rax_16 + 0x1f
        
        if (rcx_24 - rax_16 + 0x1f s> r9)
            var_134_2 = r9
    else
        while (true)
            int64_t rdx_8 = sx.q(rdi)
            rcx_24 += 0x20
            rdi += 1
            int32_t var_130_1 = rcx_24
            var_148 = rdi
            
            if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = *(r8_7 + (rdx_8 << 2) + 4)
            int32_t var_138_1 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_1417fe329
        
        var_134_2 = r9

int128_t var_d8 = 0xffffffff
double var_e8[0x2] = var_148.o
double var_128[0x2] = (rax_6 + 0x48).o
int64_t var_108 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q

if (0 s< r9)
    int32_t i = var_e8[1]:4.d
    
    do
        int64_t* rdx_11 = *var_128[0] + sx.q(i) * 0x28
        sub_1406253f0(&arg1[0x18], rdx_11, &rdx_11[2])
        var_e8[1].d &= not.d(var_128[1]:4.d)
        sub_14059bdd0(&var_128[1])
        i = var_e8[1]:4.d
    while (i s< *(var_e8[0] i+ 0x18))

__security_check_cookie(rax_1 ^ &var_168)
return arg1
