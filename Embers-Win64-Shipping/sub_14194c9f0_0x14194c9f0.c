// 函数: sub_14194c9f0
// 地址: 0x14194c9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t* r13 = arg1
int64_t* var_160 = arg1
sub_1419a21e0(0)
int16_t* var_198
int16_t* var_150
int64_t* rax_2
int512_t zmm1
rax_2, zmm1 = sub_14193d4e0(r13, &var_198, 
    sub_14193d4e0(r13, &var_150, EnterCriticalSection(&data_143eff810)))
int32_t rdx_2 = rax_2[1].d
int32_t rdx_3 = neg.d(rdx_2)
*rax_2 = 0
int32_t r8_2 = rax_2[1].d
int16_t* var_180 = *rax_2
int32_t rcx_3 = *(rax_2 + 0xc)
int32_t rdx_6 = sbb.d(rdx_3, rdx_3, rdx_2 != 0) + 6 + r8_2
int32_t var_174 = rcx_3
rax_2[1] = 0

if (rdx_6 s> rcx_3)
    sub_1405947f0(&var_180, rdx_6)

sub_140a20ba0(&var_180, u".scan", 5)
int16_t* rcx_6 = var_198

if (rcx_6 != 0)
    zmm1 = sub_140a74f90(rcx_6)

int64_t* rax_3 = __crt_deferred_errno_cache::get(&data_143db7b00)
int16_t* rsi = var_180
uint64_t r15
r15.b = 0
int64_t* var_170 = rax_3
int64_t r8_3 = *rax_3
int16_t* const rdx_7 = &data_142d40450

if (r8_2 != 0)
    rdx_7 = rsi

bool var_1a8 = false
int64_t* rdi = rax_3
(*(r8_3 + 0x80))(rax_3, rdx_7, r8_3)
int16_t* const r8_4 = &data_142d40450
int16_t* const rdx_8 = &data_142d40450
int32_t var_148

if (var_148 != 0)
    r8_4 = var_150

if (r8_2 != 0)
    rdx_8 = rsi

(*(*rdi + 0x90))(rdi, rdx_8, r8_4)
sub_140a464c0()
int16_t* const rdx_9 = &data_142d40450

if (r8_2 != 0)
    rdx_9 = rsi

char const (* r9)[0x4] = data_14399ea08
int64_t* rax_5 = (*(r9 + 0x18))(&data_14399ea08, rdx_9, 0, r9)
int64_t* rbx_1 = rax_5

if (rax_5 == 0)
    goto label_14194d43c

int32_t var_1a0 = 0
int64_t* rcx_9 = rax_5[1]
int32_t* rdx_10 = *rcx_9

if (&rdx_10[1] u> rcx_9[1])
    int32_t* rdx_11 = &var_1a0
    
    if ((*(rbx_1 + 0x29) & 0x20) != 0)
        sub_140b54070(rbx_1, rdx_11, zmm1)
    else
        (*(*rbx_1 + 0x150))(rbx_1, rdx_11, 4)
else
    var_1a0 = *rdx_10
    int64_t* rax_8 = rbx_1[1]
    *rax_8 += 4

if (var_1a0 != 3)
    goto label_14194d43c

var_198 = nullptr
int64_t var_190 = 0
sub_1409ac860(rbx_1, &var_198, zmm1)
int64_t* rdx_13 = rbx_1[1]
int32_t* r8_5 = *rdx_13
int32_t var_1a4
bool cond:7_1

if (&r8_5[1] u> rdx_13[1])
    char var_1a7
    int32_t rax_12
    rax_12.b = var_1a7 != 0
    var_1a4 = rax_12
    r8_5 = (*(*rbx_1 + 0x150))(rbx_1, &var_1a4, 4)
    cond:7_1 = var_1a4 == 0
else
    int32_t rcx_12 = *r8_5
    *rdx_13 = &r8_5[1]
    cond:7_1 = rcx_12 == 0

char r10_1 = data_143de5480
rdi.b = cond:7_1
int64_t rsi_1 = data_143eff758
int64_t rcx_14

if (r10_1 == 0)
    rcx_14 = 0
else
    uint32_t rax_14
    rax_14, r8_5 = GetCurrentThreadId()
    r10_1 = data_143de5480
    rcx_14.b = rax_14 != data_143de5470

bool r11_1 = *(rsi_1 + (rcx_14 << 2)) != 0 ^ rdi.b
var_1a8 = r11_1

if (r11_1 == 0)
    r15.b = 0
else
    int32_t r9_1 = arg2[3]
    r8_5 = zx.q(arg2[2])
    int32_t rdx_15 = arg2[1]
    int32_t rcx_15 = *arg2
    
    if ((rcx_15 | rdx_15 | r8_5.d | r9_1) == 0)
        r15.b = 1
    else
        r8_5 = zx.q(r8_5.d) ^ zx.q(var_190.d)
        
        if (((rcx_15 ^ var_198.d) | (rdx_15 ^ var_198:4.d) | r8_5.d | (r9_1 ^ var_190:4.d)) != 0)
            r15.b = 0
        else
            r15.b = 1

int64_t rdi_1 = data_143eff7a0
char var_1a7_1 = r15.b
int64_t rcx_20

if (r10_1 == 0)
    rcx_20 = 0
else
    uint32_t rax_20
    rax_20, r8_5 = GetCurrentThreadId()
    r11_1 = var_1a8
    rcx_20.b = rax_20 != data_143de5470

int32_t var_1b8
char* var_1b0
int32_t var_188
int128_t var_140

if (*(rdi_1 + (rcx_20 << 2)) != 0 || r15.b != 0)
    if (r11_1 == 0)
    label_14194d304:
        
        if (r15.b != 0)
            r8_5 = sub_141941300(r13)
            r13[0x39].b = 3
    else
        uint64_t rax_22 = (*(*rbx_1 + 0x20))(rbx_1)
        int64_t rdx_17 = *rbx_1
        var_188 = 0
        char r14_1 = 0
        char rax_23 = (*(rdx_17 + 0x30))(rbx_1, rdx_17)
        int128_t var_130
        
        if (rax_23 == 0)
            char i
            
            do
                memset(&var_130, 0, 0x78)
                var_1a4 = 0
                int128_t* rdi_2 = &var_130
                int64_t j_1 = 6
                int64_t j
                
                do
                    sub_140b31010(rbx_1, rdi_2)
                    rdi_2 += 0x14
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                int64_t* rcx_25 = rbx_1[1]
                int32_t* rdx_19 = *rcx_25
                
                if (&rdx_19[1] u> rcx_25[1])
                    int32_t* rdx_20 = &var_1a4
                    
                    if ((*(rbx_1 + 0x29) & 0x20) != 0)
                        sub_140b54070(rbx_1, rdx_20, zmm1)
                    else
                        (*(*rbx_1 + 0x150))(rbx_1, rdx_20, 4)
                else
                    var_1a4 = *rdx_19
                    *rcx_25 += 4
                
                int32_t rax_28 = (*(*rbx_1 + 0x20))(rbx_1)
                int32_t rdi_3 = var_1a4
                
                if (rdi_3 == 0)
                    int32_t var_b8[0x1e]
                    memset(&var_b8, 0, zx.q(rdi_3 + 0x78))
                    uint64_t rcx_29 = 1
                    int32_t rdx_21 = 0
                    
                    while (rcx_29.b != 0)
                        uint64_t rcx_30 = zx.q(rdx_21) * 5
                        void* r8_7 = &var_130 + (rcx_30 << 2)
                        void* rax_30 = &var_b8[rcx_30]
                        int64_t rcx_31 = *r8_7
                        rcx_29 = rcx_31 - *rax_30
                        
                        if (rcx_31 == *rax_30)
                            int64_t rcx_32 = *(r8_7 + 8)
                            rcx_29 = rcx_32 - *(rax_30 + 8)
                            
                            if (rcx_32 == *(rax_30 + 8))
                                rcx_29 = zx.q(*(r8_7 + 0x10)) - zx.q(*(rax_30 + 0x10))
                        
                        rcx_29.b = rcx_29 == 0
                        rdx_21 += 1
                        
                        if (rdx_21 u>= 6)
                            if (rcx_29.b != 0)
                                r14_1 = 1
                            
                            break
                
                int64_t r8_8 = *rbx_1
                (*(r8_8 + 0x178))(rbx_1, zx.q(rax_28 + rdi_3), r8_8)
                i = (*(*rbx_1 + 0x30))(rbx_1)
            while (i == 0)
            r13 = var_160
        
        if (rax_23 != 0 || r14_1 == 0)
            (*(*rbx_1 + 0x1b8))(rbx_1)
            r15.b = 0
            var_1a8 = false
            goto label_14194d433
        
        (*(*rbx_1 + 0x178))(rbx_1, zx.q(rax_22.d))
        char rax_35
        rax_35, r8_5 = (*(*rbx_1 + 0x30))(rbx_1)
        
        if (rax_35 == 0)
            while (true)
                memset(&var_130, 0, 0x78)
                var_1a4 = 0
                int128_t* rdi_4 = &var_130
                int64_t i_2 = 6
                int64_t i_1
                
                do
                    sub_140b31010(rbx_1, rdi_4)
                    rdi_4 += 0x14
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                int64_t* rcx_40 = rbx_1[1]
                int32_t* rdx_25 = *rcx_40
                
                if (&rdx_25[1] u> rcx_40[1])
                    int32_t* rdx_26 = &var_1a4
                    
                    if ((*(rbx_1 + 0x29) & 0x20) != 0)
                        sub_140b54070(rbx_1, rdx_26, zmm1)
                    else
                        (*(*rbx_1 + 0x150))(rbx_1, rdx_26, 4)
                else
                    var_1a4 = *rdx_25
                    *rcx_40 += 4
                
                if (var_1a4 u> 0)
                    int128_t* rax_39 = j_sub_140a82f30(0xb0)
                    int128_t* r15_1 = rax_39
                    
                    if (rax_39 == 0)
                        r15_1 = nullptr
                    else
                        memset(rax_39, 0, 0x78)
                        __builtin_memset(r15_1 + 0x78, 0, 0x28)
                        r15_1[0xa].d = 0xffffffff
                        *(r15_1 + 0xa4) = 0
                        *(r15_1 + 0xa8) = 0
                    
                    int32_t rax_40 = var_188
                    *r15_1 = var_130
                    int128_t var_120
                    zmm1.o = var_120
                    r15_1[1] = zmm1.o
                    int128_t var_110
                    r15_1[2] = var_110
                    int128_t var_100
                    zmm1.o = var_100
                    r15_1[3] = zmm1.o
                    int128_t var_f0
                    r15_1[4] = var_f0
                    int128_t var_e0
                    zmm1.o = var_e0
                    r15_1[5] = zmm1.o
                    int128_t var_d0
                    r15_1[6] = var_d0
                    int64_t var_c0
                    zmm1.o = zx.o(var_c0)
                    r15_1[0xa].d = rax_40
                    var_188 = rax_40 + 1
                    r15_1[7].q = (zmm1.o).q
                    int16_t* rax_43 = (*(*rbx_1 + 0x20))(rbx_1)
                    int32_t rcx_44 = var_1a4
                    var_198 = rax_43
                    *(r15_1 + 0x7c) = rcx_44
                    *(r15_1 + 0x78) = rax_43.d
                    
                    if (var_1a7_1 == 0)
                        int32_t rdx_41 = *(r13 + 0x1a4)
                        int64_t r14_2
                        
                        if (rdx_41 == 0)
                            r14_2 = zx.q(r13[0x2f].d)
                            int32_t rax_51 = (r14_2 + 1).d
                            r13[0x2f].d = rax_51
                            
                            if (rax_51 s> *(r13 + 0x17c))
                                sub_1405c5340(&r13[0x2e])
                            
                            sub_1405b2ba0(&r13[0x30], 0)
                        else
                            r14_2 = sx.q(r13[0x34].d)
                            int64_t r9_4 = r13[0x2e]
                            int64_t r8_12 = sx.q(*(r14_2 * 0x88 + r9_4 + 4))
                            r13[0x34].d = r8_12.d
                            *(r13 + 0x1a4) = rdx_41 - 1
                            
                            if (rdx_41 != 1)
                                *(r8_12 * 0x88 + r9_4) = 0xffffffff
                        
                        void* rax_52 = r13[0x32]
                        void* rcx_63 = &r13[0x30]
                        
                        if (rax_52 != 0)
                            rcx_63 = rax_52
                        
                        int32_t rax_53 = r14_2.d
                        
                        if (r14_2.d s< 0)
                            rax_53 = (r14_2 + 0x1f).d
                        
                        void* r8_13 = rcx_63 + (sx.q(rax_53 s>> 5) << 2)
                        *r8_13 |= 1 << (r14_2.b & 0x1f)
                        int128_t* rdi_7 = sx.q(r14_2.d) * 0x88 + r13[0x2e]
                        *rdi_7 = var_130
                        zmm1.o = var_120
                        rdi_7[1] = zmm1.o
                        rdi_7[2] = var_110
                        zmm1.o = var_100
                        rdi_7[3] = zmm1.o
                        rdi_7[4] = var_f0
                        zmm1.o = var_e0
                        rdi_7[5] = zmm1.o
                        rdi_7[6] = var_d0
                        zmm1.o = zx.o(var_c0)
                        rdi_7[7].q = (zmm1.o).q
                        *(rdi_7 + 0x78) = r15_1
                        rdi_7[8].d = 0xffffffff
                        var_1b0 = nullptr
                        var_1b8 = r14_2.d
                        zmm1 = sub_141937200(&r13[0x2e], &var_160, sub_140b21160(rdi_7, 0x78, 0), 
                            rdi_7, var_1b8, var_1b0)
                    else
                        int64_t rsi_3 = sx.q(r13[0x11].d)
                        int32_t rcx_45 = (rsi_3 + 1).d
                        r13[0x11].d = rcx_45
                        
                        if (rcx_45 s> *(r13 + 0x8c))
                            sub_1405a4d70(&r13[0x10])
                        
                        int128_t* r9_3 = &var_130
                        int32_t rdi_5 = 0
                        *(r13[0x10] + (rsi_3 << 3)) = r15_1
                        int64_t rax_44
                        rax_44.b = 1
                        void* r11_2 = data_143eff640
                        
                        while (true)
                            if (rax_44.b != 0)
                                int64_t rcx_47 = sx.q(rdi_5) * 5
                                
                                if (*(&var_130 + (rcx_47 << 2)) != 0
                                        || *(&var_130:8 + (rcx_47 << 2)) != 0
                                        || *(&var_120 + (rcx_47 << 2)) != 0)
                                    *(r11_2 + 0x114)
                                    
                                    if (*(r11_2 + 0xe8) == *(r11_2 + 0x114))
                                    labelid_67:
                                        rax_44.b = 0
                                    else
                                        void* r8_9 = r11_2 + 0x118
                                        void* rcx_48 = *(r8_9 + 8)
                                        
                                        if (rcx_48 != 0)
                                            r8_9 = rcx_48
                                        
                                        rax_44 = zx.q(*(r8_9
                                            + (((sx.q(*(r11_2 + 0x128)) - 1) & sx.q(*r9_3)) << 2)))
                                        
                                        if (rax_44.d == 0xffffffff)
                                        labelid_67:
                                            rax_44.b = 0
                                        else
                                            int64_t r10_2 = *(r11_2 + 0xe0)
                                            int64_t r8_10
                                            
                                            while (true)
                                                r8_10 = sx.q(rax_44.d)
                                                int64_t* rcx_49 = r8_10 * 0x38
                                                
                                                if (*(rcx_49 + r10_2) == *r9_3
                                                        && *(rcx_49 + r10_2 + 8) == *(r9_3 + 8)
                                                        && *(rcx_49 + r10_2 + 0x10) == r9_3[1].d)
                                                    break
                                                
                                                rax_44 = zx.q(*(rcx_49 + r10_2 + 0x30))
                                                
                                                if (rax_44.d == 0xffffffff)
                                                    goto label_14194d080_2
                                            
                                            if (rax_44.d == 0xffffffff)
                                            label_14194d080:
                                                rax_44.b = 0
                                            else
                                                int64_t rax_48 = r8_10 * 0x38
                                                rax_44 = rax_48 + r10_2
                                                
                                                if (rax_48 == neg.q(r10_2))
                                                label_14194d080_1:
                                                    rax_44.b = 0
                                                else if (rax_44 == -0x18 || *(rax_44 + 0x18) == 0)
                                                label_14194d080_2:
                                                    rax_44.b = 0
                                                else
                                                    rax_44.b = 1
                                    
                                    if (rax_44.b != 0)
                                        rax_44.b = 1
                                else
                                    rax_44.b = 1
                                
                                rdi_5 += 1
                                r9_3 += 0x14
                                
                                if (rdi_5 s< 6)
                                    continue
                                else if (rax_44.b != 0)
                                    int64_t** rax_47 = sub_14194e5d0(&var_130, &var_140)
                                    int64_t* rdx_35
                                    
                                    if (rax_47[1].d == 0)
                                        rdx_35 = &data_142d40450
                                    else
                                        rdx_35 = *rax_47
                                    
                                    sub_140a4bcc0(*** All shaders for %s already loaded\n", rdx_35)
                                    int64_t rcx_51 = var_140.q
                                    
                                    if (rcx_51 != 0)
                                        sub_140a74f90(rcx_51)
                                    
                                    int32_t rcx_53 = var_1a4 + *(r15_1 + 0x98)
                                    *(r15_1 + 0x98) = rcx_53
                                    
                                    if (rcx_53 s> *(r15_1 + 0x9c))
                                        sub_1405daba0(&r15_1[9])
                                    
                                    (*(*rbx_1 + 0x150))(rbx_1, r15_1[9].q, zx.q(var_1a4))
                                    *(r15_1 + 0xa4) = 3
                                    sub_141934230(r13, r15_1)
                                    zmm1 = sub_141930750(r13, r15_1)
                                    break
                            
                            *(r15_1 + 0xa4) = 1
                            zmm1 = sub_141930750(r13, r15_1)
                            break
                    
                    int64_t r8_15 = *rbx_1
                    (*(r8_15 + 0x178))(rbx_1, zx.q(var_198.d + var_1a4), r8_15)
                
                char rax_59
                rax_59, r8_5 = (*(*rbx_1 + 0x30))(rbx_1)
                
                if (rax_59 != 0)
                    break
        
        r15 = zx.q(var_1a7_1)
        
        if (r15.b != 0)
            (*(*rbx_1 + 0x1b8))(rbx_1)
            int64_t* rcx_71 = var_170
            int16_t* r8_16 = &data_142d40450
            
            if (r8_2 != 0)
                r8_16 = var_180
            
            int16_t* rdx_47 = &data_142d40450
            
            if (var_148 != 0)
                rdx_47 = var_150
            
            r8_5 = (*(*rcx_71 + 0x90))(rcx_71, rdx_47, r8_16)
            goto label_14194d304
        
        if (&r13[0x2d] != &var_198)
            int64_t* rcx_78 = r13[0x2d]
            r13[0x2d] = rbx_1
            rbx_1 = nullptr
            
            if (rcx_78 != 0)
                r8_5 = (**rcx_78)(rcx_78, 1)
        
        if (&r13[0x2b] != &var_140)
            r8_5 = zx.q(*(r13 + 0x164))
            r13[0x2c].d = r8_2
            
            if (r8_2 != 0 || r8_5.d != 0)
                sub_1405a4c70(&r13[0x2b], r8_2, r8_5.d)
                r8_5 = memcpy(r13[0x2b], var_180, r8_2 * 2)
            else
                *(r13 + 0x164) = 0
    
    if (var_1a8 == 0)
        goto label_14194d433
    
    if (r15.b == 0)
        goto label_14194d47e
else
    var_1a8 = false
label_14194d433:
    rdi = var_170
label_14194d43c:
    int16_t* const rdx_50
    
    if (r13[1].d == 0)
        rdx_50 = &data_142d40450
    else
        rdx_50 = *r13
    
    (*(*rdi + 0x170))(rdi, rdx_50)
    int16_t* const rdx_51
    
    if (r13[1].d == 0)
        rdx_51 = &data_142d40450
    else
        rdx_51 = *r13
    
    char rax_70
    rax_70, r8_5 = (*(*rdi + 0x178))(rdi, rdx_51)
    
    if (rax_70 != 0)
    label_14194d47e:
        int32_t rcx_85
        int512_t zmm1_1
        rcx_85, zmm1_1 = sub_14193d4e0(r13, &var_170, r8_5.d)
        var_198 = nullptr
        int32_t var_168
        var_190.d = var_168
        sub_1405a4c70(&var_198, sbb.d(rcx_85, rcx_85, var_168 != 0) + 7 + var_168, 0)
        int64_t* rsi_6 = var_170
        memcpy(var_198, rsi_6, var_168 * 2)
        sub_140a20ba0(&var_198, u".write", 6)
        int16_t* r14_3 = var_198
        var_198 = nullptr
        int64_t var_190_1 = 0
        sub_140a464c0()
        int16_t* const rdx_56 = &data_142d40450
        
        if (var_190.d != 0)
            rdx_56 = r14_3
        
        char const (* r9_6)[0x4] = data_14399ea08
        int64_t rax_73 =
            (*(r9_6 + 0x20))(&data_14399ea08, rdx_56, 0, r9_6, var_1b8, var_1b0, var_1a8)
        r13[0x29] = rax_73
        int32_t rdi_10
        rdi_10.b = rax_73 != 0
        
        if (r14_3 != 0)
            rax_73, zmm1_1 = sub_140a74f90(r14_3)
        
        if (rsi_6 != 0)
            rax_73, zmm1_1 = sub_140a74f90(rsi_6)
        
        if (rdi_10.b == 0)
            r13[0x39].b = 0
            sub_140af98a0("Unknown", 0x11ff, ScanProgramCacheFile - Failed to open binary cache.", 
                sub_140926420(&data_143f02598, 
                sub_140b58170(&var_198, "FailedBinaryProgramArchiveOpen", 1)))
            sub_140afbb40()
        else
            if (var_1a8 != 0)
                rax_73.b = 2
            
            if (var_1a8 == 0 || r15.b != 0)
                rax_73.b = 1
            
            int64_t* rdi_11 = r13[0x29]
            r13[0x39].b = rax_73.b
            var_1a0 = 3
            int64_t* rcx_92 = rdi_11[1]
            int32_t* rdx_57 = *rcx_92
            
            if (&rdx_57[1] u> rcx_92[1])
                int32_t* rdx_58 = &var_1a0
                
                if ((*(rdi_11 + 0x29) & 0x20) != 0)
                    sub_140b54070(rdi_11, rdx_58, zmm1_1)
                else
                    (*(*rdi_11 + 0x150))(rdi_11, rdx_58, 4)
            else
                var_1a0 = *rdx_57
                int64_t* rax_76 = rdi_11[1]
                *rax_76 += 4
            
            var_140 = *arg2
            sub_1409ac860(rdi_11, &var_140, zmm1_1)
            int64_t rsi_7 = data_143eff758
            int64_t rcx_95
            
            if (data_143de5480 == 0)
                rcx_95 = 0
            else
                rcx_95.b = GetCurrentThreadId() != data_143de5470
            
            int64_t* rcx_96 = rdi_11[1]
            int64_t rax_81 = *rcx_96 + 4
            
            if (rax_81 u> rcx_96[1])
                int64_t rax_82 = *rdi_11
                int32_t r12
                r12.b = *(rsi_7 + (rcx_95 << 2)) != 0
                var_188 = r12
                (*(rax_82 + 0x150))(rdi_11, &var_188, 4)
            else
                *rcx_96 = rax_81

if (rbx_1 != 0)
    (**rbx_1)(rbx_1, 1)

int16_t* rax_63 = var_180

if (rax_63 != 0)
    sub_140a74f90(rax_63)

int16_t* rax_64 = var_150

if (rax_64 != 0)
    sub_140a74f90(rax_64)

int64_t result = LeaveCriticalSection(&data_143eff810)
__security_check_cookie(rax_1 ^ &var_1d8)
return result
