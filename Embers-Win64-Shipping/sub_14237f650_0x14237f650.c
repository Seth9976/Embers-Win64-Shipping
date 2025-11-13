// 函数: sub_14237f650
// 地址: 0x14237f650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg2
sub_1422883b0(arg1, arg2, *(arg2[0x88] + 0x18))
int32_t i_4 = 0
*arg1 = &data_143335bb8
void* rsi = &arg1[0x2c]
arg1[0x2a] = *(r13[0x88] + 0x50)
arg1[0x2b] = *(r13[0x88] + 0x58)
*rsi = 0
*(rsi + 8) = 0
arg1[0xa0] = 0
arg1[0xa1].d = 0
*(arg1 + 0x50c) = 8
arg1[0xc2] = 0
arg1[0xc3].d = 0
*(arg1 + 0x61c) = 8
arg1[0xc4].d = r13[0x86].d
int32_t rcx_5 = ((zx.d(*(r13 + 0x20b)) u>> 3 ^ arg1[0xc5].d) & 1) ^ arg1[0xc5].d
arg1[0xc5].d = rcx_5
arg1[0xc5].d = ((zx.d(*(r13 + 0x44d)) u>> 3 ^ rcx_5) & 2) ^ rcx_5
sub_141f15fd0(r13, &arg1[0xc6], arg1[0x21][1].d)
arg1[0xc7] = r13[0x88]
uint32_t r12 = arg1[0x21][1].d
uint32_t var_64 = r12
int32_t i_8

if ((*(r13 + 0x44c) & 4) == 0)
    i_8 = *(r13[0x88] + 0x60)
else
    i_8 = r13[0x87].d

int64_t* rax_14 = arg1[0x2a]
int32_t i = 0

if (rax_14[1].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        if (sub_142366560(*(rsi_1 + *rax_14)) s> 0)
            break
        
        rax_14 = arg1[0x2a]
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< rax_14[1].d)
    
    rsi = &arg1[0x2c]

if (i_8 s>= i)
    int32_t i_6 = arg1[0x2a][1].d - 1
    
    if (i_8 s< i_6)
        i_6 = i_8
    
    i = i_6

*(arg1 + 0x624) = i
void var_60
char arg_8
sub_140acc920(&var_60, sub_141f6af80(r13, &arg_8))
*(arg1 + 0x3b) |= 8
char rax_17

if ((*(r13 + 0x20b) & 0x48) != 0x48 || (*(r13 + 0x44d) & 1) == 0 || *(r13 + 0x14f) == 0)
    rax_17 = 0
else
    rax_17 = 0x80

*(arg1 + 0x39) &= 0x7f
*(arg1 + 0x39) |= rax_17
int32_t zmm0 = *(r13 + 0x454)

if (zmm0 f>= 0f)
    zmm0 = __minss_xmmss_memss(zmm0, 0x3f800000)
else
    zmm0 = (zx.o(0)).d

arg1[9].d = zmm0

if ((*(r13 + 0x44d) & 2) == 0)
    zmm0 = *(r13[0x88] + 0x84)
else
    zmm0 = r13[0x8b].d

int64_t* rdx_3 = arg1[0x2a]
*(arg1 + 0x4c) = _mm_max_ss(zmm0, 0)
arg1[0x2e] = *(**rdx_3 + 0x38)
int64_t rax_20

if (data_143f597d8 != 0)
    rax_20 = *sub_142126870(sub_14210f630(0), &arg_8, r12)
    arg1[0xc6] |= rax_20
    rdx_3 = arg1[0x2a]

int32_t i_7 = *(rsi + 8)
r12.b = 0
int32_t r14 = rdx_3[1].d
void* rbx = *rsi
arg_8 = 0

if (i_7 != 0)
    int32_t i_1
    
    do
        int64_t rcx_13 = *(rbx + 0x68)
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        sub_1405d1550(rbx + 0x58)
        int64_t rcx_15 = *(rbx + 0x40)
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        *rbx = &data_14301de90
        sub_1405d1550(rbx + 0x28)
        rbx -= -0x80
        i_1 = i_7
        i_7 -= 1
    while (i_1 != 1)
    r12.b = 0

*(rsi + 8) = 0

if (*(rsi + 0xc) != r14)
    sub_140888ba0(rsi, r14)

void* r8_5 = arg1[0x2a]
char arg_20

if (*(r8_5 + 0x5c) == 0)
    arg_20 = 0

if (*(r8_5 + 0x5c) != 0 || arg3 != 0)
    arg_20 = 1

if ((*(r13 + 0x44c) & 1) == 0 || (*(arg1 + 0x633) & 8) == 0)
    rax_20.b = 0
else
    rax_20.b = 1

arg1[0x2f].b = rax_20.b

if (data_143f0f21f != 0)
    uint64_t rdx_6 = zx.q(data_143f0f1a0)
    
    if (((*(sx.q(rdx_6.d) * 0x14 + &data_143f025fc) u>> 0x13).b & 1) != 0
            && test_bit(data_143f13cd8, rdx_6))
        int64_t rbp = sx.q(*(r8_5 + 8))
        int64_t r14_1 = sx.q(arg1[3].d)
        int32_t rax_27 = (r14_1 + rbp).d
        arg1[3].d = rax_27
        
        if (rax_27 s> *(arg1 + 0x1c))
            sub_1405a4d70(&arg1[2])
        
        memset(&arg1[2][r14_1], 0, rbp << 3)
        int32_t i_2 = 0
        
        if (arg1[0x2a][1].d s> 0)
            int64_t r8_8 = 0
            
            do
                r8_8 += 8
                i_2 += 1
                *(r8_8 + arg1[2] - 8) = *(*arg1[0x2a] + r8_8 - 8) + 0x200
            while (i_2 s< arg1[0x2a][1].d)

int32_t i_3 = 0
int32_t i_5 = 0
int32_t var_78
char var_70

if (arg1[0x2a][1].d s> 0)
    int64_t r12_1 = 0
    
    do
        int64_t rbx_1 = sx.q(*(rsi + 8))
        int32_t rax_34 = (rbx_1 + 1).d
        *(rsi + 8) = rax_34
        
        if (rax_34 s> *(rsi + 0xc))
            sub_1408888d0(rsi)
            i_3 = i_5
        
        int64_t rcx_24 = rbx_1 << 7
        void*** rax_37
        
        if (rcx_24 == neg.q(*rsi))
            rax_37 = nullptr
        else
            var_70 = arg_20
            var_78 = *(arg1 + 0x624)
            rax_37 = sub_14237df70(rcx_24 + *rsi, r13, &arg1[0x2a][2], i_3, var_78, var_70)
        
        int64_t j_1 = sx.q(rax_37[9].d)
        
        if (j_1 s> 0)
            int64_t rsi_2 = 0
            int64_t rbp_1 = 0
            int64_t j
            
            do
                void* rbx_2 = rax_37[8]
                void* rdx_13 = *(*arg1[0x2a] + r12_1) + 0x10
                void* rax_39 = *(rdx_13 + 0x18)
                
                if (rax_39 != 0)
                    rdx_13 = rax_39
                
                arg_8 |= *(rdx_13 + rbp_1 + 0x15)
                int64_t rax_41 = sub_14210f630(0)
                void* rcx_27 = &rax_37[6]
                
                if (rbx_2 != 0)
                    rcx_27 = rbx_2
                
                if (*(rcx_27 + rsi_2) == rax_41)
                    int64_t rax_44 = *sub_142126870(sub_14210f630(0), &var_60, var_64)
                    arg1[0xc6] |= rax_44
                
                rbp_1 += 0x18
                rsi_2 += 0x10
                j = j_1
                j_1 -= 1
            while (j != 1)
            r13 = arg2
            rsi = &arg1[0x2c]
            i_4 = 0
        
        r12_1 += 8
        i_3 = i_5 + 1
        i_5 = i_3
    while (i_3 s< arg1[0x2a][1].d)
    
    r12 = zx.d(arg_8)

char rax_46 = sub_142292f00()

if (rax_46 != 0 || (*(arg1 + 0x633) & 8) == 0)
    rax_46 = 0x20

arg1[7].b &= 0xdf
arg1[7].b |= rax_46
int32_t rax_47 = arg1[0xc5].d
int32_t rcx_29

if ((rax_47.b & 1) != 0)
    rcx_29 = 1

if ((rax_47.b & 1) == 0 || r12.b == 0)
    rcx_29 = 0

int32_t rax_49 = (rax_47 & 0xfffffffe) | rcx_29
char rcx_30 = *(arg1 + 0x39)
arg1[0xc5].d = rax_49

if ((rcx_30 & 2) == 0 || (rax_49.b & 1) == 0)
    rax_49.b = 0
else
    rax_49.b = 2

*(arg1 + 0x3b) |= 1
*(arg1 + 0x39) = (rcx_30 & 0xfd) | rax_49.b
int64_t rax_50 = sx.q(data_143f0f1a0)
int64_t rdx_16

if (rax_50.d u> 0x1e || not(test_bit(0x6562c800, rax_50.d)))
    rdx_16 = rax_50 * 5

if ((rax_50.d u<= 0x1e && test_bit(0x6562c800, rax_50.d))
        || (*((rdx_16 << 2) + &data_143f025fc) & 1) != 0)
    rax_50 = sub_1419a5610()
else if (var_64 s< 3 || rax_50.d == 6 || rax_50.d == 0xd)
    rax_50.b = 0
else
    int64_t rdx_17 = *(&data_143f025f0 + (rdx_16 << 2))
    
    if (rdx_17 == data_143f025b8 || rax_50.d == 0x19 || rdx_17 == data_143f025d0
            || rax_50.d == 0x30)
        rax_50.b = 0
    else
        int64_t rdx_18 = rax_50 * 5
        
        if (((*((rdx_18 << 2) + 0x143f02600) u>> 1).b & 1) == 0
                || ((*((rdx_18 << 2) + &data_143f025fc) u>> 0x17).b & 1) != 0)
            rax_50.b = 1
        else
            rax_50.b = 0

*(arg1 + 0x3b) &= 0xfd
rax_50.b ^= 1
void* rcx_32 = arg1[0xc7]
rax_50.b *= 2
*(arg1 + 0x3b) |= rax_50.b
*(arg1 + 0x44) = __minss_xmmss_memss(r13[0x4b].d f* *(r13[0x88] + 0x64), 0x40400000)

if (rcx_32 != 0)
    void* rax_54 = arg1[0x2a]
    
    if (rax_54 != 0 && *(rcx_32 + 0xc8) != 0 && *(rax_54 + 0x18) s> 0)
        do
            int64_t* rcx_33 = arg1[0x21]
            int64_t rbx_3 = sx.q(i_4) * 0x430
            int64_t r9_2 = *rcx_33
            (*(r9_2 + 0x208))(rcx_33, arg1[0x2a][2] + rbx_3, arg1[0xc7], r9_2, var_78, var_70, i_5)
            int64_t* rcx_34 = arg1[0x21]
            int64_t r9_3 = *rcx_34
            (*(r9_3 + 0x208))(rcx_34, arg1[0x2a][2] + 0x210 + rbx_3, arg1[0xc7], r9_3)
            i_4 += 1
        while (i_4 s< arg1[0x2a][3].d)

return arg1
