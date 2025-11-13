// 函数: sub_1422883b0
// 地址: 0x1422883b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143312d88
__builtin_memset(&arg1[2], 0, 0x18)
int64_t rbp = sx.q(arg2[0x46].d)
int64_t r15 = arg2[0x45]
arg1[5].d = rbp.d

if (rbp.d != 0)
    sub_140638750(&arg1[4], rbp.d, 0)
    memcpy(arg1[4], r15, (rbp << 2).d)
else
    *(arg1 + 0x2c) = 0

int32_t rcx_2 = arg2[0x47].d
int16_t rax = -0x8000

if (rcx_2 s>= 0xffff8000)
    rax = 0x7fff
    
    if (rcx_2 s< 0x7fff)
        rax = rcx_2.w

arg1[6].w = rax
*(arg1 + 0x32) = *(arg2 + 0x14f)
*(arg1 + 0x33) = *(arg2 + 0x207)
char rdx_2 = ((((*(*arg2 + 0x448))(arg2) * 2) ^ *(arg1 + 0x35)) & 2) ^ *(arg1 + 0x35)
*(arg1 + 0x35) = rdx_2
rdx_2 ^= (*(arg2 + 0x14c) u>> 3 ^ rdx_2) & 4
*(arg1 + 0x35) = rdx_2
rdx_2 ^= (*(arg2 + 0x20a) ^ rdx_2) & 8
*(arg1 + 0x35) = rdx_2
rdx_2 ^= (*(arg2 + 0x20a) u>> 1 ^ rdx_2) & 0x10
*(arg1 + 0x35) = rdx_2
*(arg1 + 0x35) = (((*(arg2 + 0x20a) * 2) ^ rdx_2) & 0x20) ^ rdx_2
char rax_9 = (*(*arg2 + 0x630))(arg2)
*(arg1 + 0x35) &= 0x7f
*(arg1 + 0x35) |= rax_9 << 7
char rax_10 = sub_1405949a0()
char rcx_7 = ((*(arg1 + 0x36) & 0xfe) | rax_10) & 0xfd
*(arg1 + 0x36) = rcx_7
uint8_t rdx_3 = ((*(arg2 + 0x209) u>> 2 ^ rcx_7) & 4) ^ rcx_7
*(arg1 + 0x36) = rdx_3
*(arg1 + 0x36) = ((*(arg2 + 0x209) u>> 3 ^ rdx_3) & 8) ^ rdx_3
char rax_13 = (*(*arg2 + 0x678))(arg2)
*(arg1 + 0x36) &= 0x8f
*(arg1 + 0x36) |= (rax_13 & 7) << 4
*(arg1 + 0x37) ^= (*(arg2 + 0x205) ^ *(arg1 + 0x37)) & 7
char rax_15 = sub_141f1d600(arg2)
char rcx_10 = (*(arg1 + 0x37) & 0xf7) | rax_15 << 3
*(arg1 + 0x37) = rcx_10
uint8_t rax_16 = ((*(arg2 + 0x209) u>> 3 ^ rcx_10) & 0x10) ^ rcx_10
*(arg1 + 0x37) = rax_16
char rcx_11 = ((*(arg2 + 0x20a) << 5 ^ rax_16) & 0x20) ^ rax_16
*(arg1 + 0x37) = rcx_11
char rax_17 = ((*(arg2 + 0x20a) << 4 ^ rcx_11) & 0x40) ^ rcx_11
*(arg1 + 0x37) = rax_17
arg1[7].b &= 0xfc
*(arg1 + 0x37) = ((*(arg2 + 0x20a) << 6 ^ rax_17) & 0x7f) ^ *(arg2 + 0x20a) << 6
int32_t rax_20
rax_20.b = (*(*arg2 + 0x4c8))(arg2) != 0
rax_20.b <<= 2
char rcx_14 = (arg1[7].b & 0xfb) | rax_20.b
arg1[7].b = rcx_14
arg1[7].b = (*(arg2 + 0x20a) u>> 3 & 8) | (rcx_14 & 0xe7) | 0x20
bool rax_23 = (*(*arg2 + 0x518))(arg2)
arg1[7].b &= 0xbf
arg1[7].b |= (rax_23 == 0) << 6
char rax_25 = (*(*arg2 + 0x638))(arg2, 0)
arg1[7].b &= 0x7f
*(arg1 + 0x39) |= 1
arg1[7].b |= rax_25 << 7
char rax_26

if ((*(arg2 + 0x20b) & 0x48) == 0x48)
    rax_26 = (*(*arg2 + 0x740))(arg2)

if ((*(arg2 + 0x20b) & 0x48) != 0x48 || rax_26 != 0)
    rax_26 = 0
else
    rax_26 = 2

char rcx_18 = (*(arg1 + 0x39) & 0xfd) | rax_26
*(arg1 + 0x39) = rcx_18
rcx_18 ^= (*(arg2 + 0x20b) u>> 2 ^ rcx_18) & 4
*(arg1 + 0x39) = rcx_18
uint8_t rdx_4 = ((*(arg2 + 0x20b) u>> 2 ^ rcx_18) & 8) ^ rcx_18
*(arg1 + 0x39) = rdx_4
char rax_29 = *(arg2 + 0x20b)

if ((rax_29 & 8) == 0 || rax_29 s>= 0)
    rax_29 = 0
else
    rax_29 = 0x10

rdx_4 = (rdx_4 & 0xef) | rax_29
*(arg1 + 0x39) = rdx_4
char rax_30

if ((*(arg2 + 0x20b) & 0x48) != 0x48 || (*(arg2 + 0x20c) & 1) == 0)
    rax_30 = 0
else
    rax_30 = 0x20

*(arg1 + 0x39) = ((rdx_4 & 0xdf) | rax_30) & 0x3f
uint8_t rcx_19 = ((*(arg2 + 0x20c) u>> 5 ^ *(arg1 + 0x3a)) & 1) ^ *(arg1 + 0x3a)
*(arg1 + 0x3a) = rcx_19
rcx_19 ^= (*(arg2 + 0x20c) u>> 5 ^ rcx_19) & 2
*(arg1 + 0x3a) = rcx_19
char rax_32 = (((*(arg2 + 0x20c) * 2) ^ rcx_19) & 4) ^ rcx_19
*(arg1 + 0x3a) = rax_32
char rdx_5 = *(arg2 + 0x20c)

if ((rdx_5 & 2) == 0)
    rdx_5 u>>= 3
else
    rdx_5 = 1

rdx_5 = ((rdx_5 << 3 ^ rax_32) & 8) ^ rax_32
*(arg1 + 0x3a) = rdx_5
rdx_5 ^= (rdx_5 ^ *(arg2 + 0x20c)) & 0x10
*(arg1 + 0x3a) = rdx_5
rdx_5 ^= (*(arg2 + 0x20c) << 3 ^ rdx_5) & 0x20
*(arg1 + 0x3a) = rdx_5
rdx_5 ^= (*(arg2 + 0x20d) << 6 ^ rdx_5) & 0x40
*(arg1 + 0x3a) = rdx_5
char rax_36 = *(arg2 + 0x20d) << 4
char rcx_20 = *(arg2 + 0x20d) << 4 ^ rdx_5
*(arg1 + 0x3b) = 0xc2
char rax_37 = *(arg1 + 0x3c)
*(arg1 + 0x3a) = (rcx_20 & 0x7f) ^ rax_36
uint8_t rcx_21 = *(arg2 + 0x20a) u>> 7 | (rax_37 & 0xfe)
char rax_38 = 0
*(arg1 + 0x3c) = rcx_21

if (*(arg2 + 0x14f) != 2)
    rax_38 = 2

rax_38 |= rcx_21 & 0xfd
*(arg1 + 0x3c) = rax_38
char rcx_22 = ((*(arg2 + 0x20b) << 2 ^ rax_38) & 4) ^ rax_38
*(arg1 + 0x3c) = rcx_22
char rdx_6 = (((*(arg2 + 0x20b) * 2) ^ rcx_22) & 8) ^ rcx_22
*(arg1 + 0x3c) = rdx_6
char rax_39 = (((*(arg2 + 0x20e) * 2) ^ rdx_6) & 0x10) ^ rdx_6
*(arg1 + 0x3c) = rax_39
char rcx_23 = ((*(arg2 + 0x20d) << 3 ^ rax_39) & 0x20) ^ rax_39
*(arg1 + 0x3c) = rcx_23
*(arg1 + 0x3c) = ((*(arg2 + 0x20e) << 2 ^ rcx_23) & 0x40) ^ rcx_23
*(arg1 + 0x3d) = *(arg2 + 0x214)
uint64_t rax_42 = zx.q(*(arg2 + 0x213))

if (rax_42.d u> 9)
    rax_42.b = 0
else
    switch (rax_42)
        case 0
            rax_42.b = 0
        case 1
            rax_42.b = 1
        case 2
            rax_42.b = 2
        case 3
            rax_42.b = 3
        case 4
            rax_42.b = 4
        case 5
            rax_42.b = 5
        case 6
            rax_42.b = 6
        case 7
            rax_42.b = 7
        case 8
            rax_42.b = 8
        case 9
            rax_42.b = 9

*(arg1 + 0x3e) = rax_42.b
*(arg1 + 0x3f) = *(arg2 + 0x212) & 7
arg1[8].b = *(arg2 + 0x206)
*(arg1 + 0x41) = arg2[0x4a].b
*(arg1 + 0x42) = *(arg2 + 0x251)
*(arg1 + 0x43) = *(arg2 + 0x252)
*(arg1 + 0x44) = arg2[0x4b].d
arg1[9].d = 0
__builtin_memset(&arg1[0xa], 0, 0x30)
*(arg1 + 0x104) = *(arg2 + 0x254)
arg1[0x21] = sub_141ee6400(arg2)
arg1[0x22] = 0
void* rax_51 = arg2[0x14]
uint64_t arg_8
int64_t rax_52

if (rax_51 == 0)
    arg_8 = 0
    rax_52 = 0
else
    rax_52 = *(rax_51 + 0x18)

arg1[0x23] = rax_52
arg1[0x24] = arg3
arg1[0x25] = *(sub_140d21d80(arg2) + 0x18)
arg1[0x26].d = *(arg2 + 0x23c)
int32_t zmm0 = arg2[0x40].d

if (not(zmm0 f> 0f))
    zmm0 = 0x7f7fffff

*(arg1 + 0x134) = zmm0
arg1[0x27].d = arg2[0x3f].d
arg1[0x28] = 0
char rax_56 = arg1[7].b
arg1[0x29] = arg2

if ((rax_56 & 0x40) != 0 && rax_56 s>= 0)
    arg1[7].b = rax_56 & 0xbf

void* rax_57 = arg2[0x14]

if (rax_57 != 0)
    uint8_t rax_58 = (not.b(*(rax_57 + 0x58) u>> 4) | 0xfd) & *(arg1 + 0x35)
    *(arg1 + 0x35) = rax_58
    
    if ((rax_58 & 0x30) != 0 || (*(arg1 + 0x36) & 4) != 0)
        for (void* i = arg2[0x14]; i != 0; i = *(i + 0xe0))
            int64_t r13_1 = sx.q(arg1[0xf].d)
            int32_t rax_59 = (r13_1 + 1).d
            arg1[0xf].d = rax_59
            
            if (rax_59 s> *(arg1 + 0x7c))
                sub_1405a4d70(&arg1[0xe])
            
            arg1[0xe][r13_1] = i

void* rax_60 = sub_141ee26c0(arg2)
char rdx_8

if (rax_60 == 0 || (*(rax_60 + 0x1f6) & 1) == 0)
    rdx_8 = 0
else
    rdx_8 = 1

char rax_61 = (arg1[7].b & 0xfe) | rdx_8
arg1[7].b = rax_61
void* rcx_32

if (rax_60 == 0 || (*(rax_60 + 0x1f4) & 0x20) != 0)
    rcx_32.b = 2
else
    rcx_32.b = 0

arg1[7].b = (rax_61 & 0xfd) | rcx_32.b
char rax_63
int32_t zmm0_1
rax_63, zmm0_1 = sub_1419ba670(arg1[0x21][1].d)

if (rax_63 != 0)
    int64_t* rax_65 = (*(*arg2 + 0x520))(arg2)
    int64_t r13_2 = 0
    int64_t* r12_1 = *rax_65
    uint64_t r9_2 = sx.q(rax_65[1].d) << 3 u>> 3
    
    if (r12_1 u> &r12_1[rax_65[1]])
        r9_2 = 0
    
    arg_8 = r9_2
    
    if (r9_2 != 0)
        do
            void* rbx_1 = *r12_1
            
            if (rbx_1 != 0 && *(rbx_1 + 0x2a) != 0)
                int64_t r15_1 = sx.q(arg1[0xb].d)
                int32_t rax_68 = (r15_1 + 1).d
                arg1[0xb].d = rax_68
                
                if (rax_68 s> *(arg1 + 0x5c))
                    zmm0_1 = sub_1405a4d70(&arg1[0xa])
                    r9_2 = arg_8
                
                arg1[0xa][r15_1] = rbx_1
                char* rdx_11 = arg1[0xc]
                int64_t r8_2 = sx.q(arg1[0xd].d)
                char* rax_69 = rdx_11
                char i_1 = *(rbx_1 + 0x28)
                void* rcx_37 = &rdx_11[r8_2]
                
                if (rdx_11 != rcx_37)
                    while (*rax_69 != i_1)
                        rax_69 = &rax_69[1]
                        
                        if (rax_69 == rcx_37)
                            goto label_142288acc
                
                if (rdx_11 == rcx_37 || rax_69.d - rdx_11.d == 0xffffffff)
                label_142288acc:
                    int32_t rax_71 = (r8_2 + 1).d
                    arg1[0xd].d = rax_71
                    
                    if (rax_71 s> *(arg1 + 0x6c))
                        zmm0_1 = sub_1405daba0(&arg1[0xc])
                    
                    r9_2 = arg_8
                    arg1[0xc][r8_2] = i_1
            
            r12_1 = &r12_1[1]
            r13_2 += 1
        while (r13_2 != r9_2)

char rax_74 = (*(*arg2 + 0x528))(arg2)
int64_t rdx_13 = *arg2
void* rax_75 = (*(rdx_13 + 0x520))(arg2, rdx_13)
int32_t rcx_41 = arg1[0xb].d

if (rax_74 != 0)
    if (rax_74 != 1)
        goto label_142288b48
    
    if (rcx_41 s> 0)
        goto label_142288b44
else
    if (*(rax_75 + 8) s> 0)
    label_142288b44:
        *(arg1 + 0x37) &= 0x7f
    
label_142288b48:
    
    if (rcx_41 s> 0 && *(arg1 + 0x37) s< 0)
        (*(*arg2 + 0x530))(arg2)
        
        if (not(zmm0_1 f<= 0f))
            (*(*arg2 + 0x530))(arg2)
            *(arg1 + 0x134) = __minss_xmmss_memss(zmm0_1, *(arg1 + 0x134))

TEB* gsbase

if (data_143f53550 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f53550)
    
    if (data_143f53550 == 0xffffffff)
        int64_t* rcx_55 = data_143db18d0
        
        if (rcx_55 == 0)
            sub_140a53c40()
            rcx_55 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        data_143f53548 = (*(*rcx_55 + 0xb0))(rcx_55, u"r.VertexDeformationOutputsVelocity", r8_3)
        _Init_thread_footer(&data_143f53550)

if ((*(arg1 + 0x3b) & 4) == 0 && *(arg1 + 0x32) - 1 u<= 1)
    int64_t* rcx_46 = data_143f53548
    
    if (rcx_46 != 0 && (*(*rcx_46 + 0x90))(rcx_46) != 0)
        int32_t r14_1 = arg1[0x21][1].d
        int64_t rax_84 = *arg2
        int64_t* var_48 = nullptr
        int32_t var_40_1 = 0
        (*(rax_84 + 0x680))(arg2, &var_48, 0)
        int64_t* rbx_3 = var_48
        void* rbp_1 = &rbx_3[sx.q(var_40_1)]
        
        if (rbx_3 != rbp_1)
            do
                int64_t* rcx_48 = *rbx_3
                
                if (rcx_48 != 0)
                    int64_t* rax_87 = (*(*rcx_48 + 0x268))(rcx_48)
                    int64_t r9_3 = *rax_87
                    int64_t* rax_88 = (*(r9_3 + 0x2e8))(rax_87, zx.q(r14_1), 3, r9_3)
                    bool rcx_50
                    
                    if (data_143de5480 != 0)
                        rcx_50 = GetCurrentThreadId() == data_143de5470
                    
                    char rdx_16
                    
                    if (data_143de5480 == 0 || rcx_50 != 0)
                        rdx_16 = sub_14212f050(rax_88) << 2 | (*(arg1 + 0x3b) & 0xfb)
                    else
                        rdx_16 = sub_14212f090(rax_88) << 2 | (*(arg1 + 0x3b) & 0xfb)
                    
                    *(arg1 + 0x3b) = rdx_16
                    
                    if ((rdx_16 & 4) != 0)
                        break
                
                rbx_3 = &rbx_3[1]
            while (rbx_3 != rbp_1)
            
            rbx_3 = var_48
        
        if (rbx_3 != 0)
            sub_140a74f90(rbx_3)

return arg1
