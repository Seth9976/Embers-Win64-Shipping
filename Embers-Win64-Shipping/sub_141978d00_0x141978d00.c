// 函数: sub_141978d00
// 地址: 0x141978d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int64_t pguid = 0
int64_t var_228 = 0
int128_t zmm0 = pguid.o
int128_t* var_298 = arg4
*arg4 = zmm0
arg1[0x10].d = 0
sub_14196c7e0(&arg1[0x11], 0)
sub_140597df0(arg1, arg2)
arg1[2].d = arg3
int16_t* var_278
sub_1419882c0(&var_278, arg3)
*(arg1 + 0x14) = var_278
int64_t var_2b8
int64_t* rax_3 = sub_140b63b70(arg1 + 0x14, &var_2b8)
int16_t* const r15 = &data_142d40450

if (rax_3[1].d != 0)
    *rax_3

int16_t* const r8

if (arg2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg2

sub_140a2e390(&var_278, u"%s_%s.stable.upipelinecache", r8)
int64_t var_78 = 0
int16_t var_178[0x80]
int16_t (* var_70)[0x80] = &var_178
int32_t var_68 = 7
sub_1405a7220(&var_178, 8, "Windows", 8, 0x3f)
int64_t var_1e8
int64_t* rax_4 = sub_140b25050(&var_1e8)
int32_t rdx_3 = rax_4[1].d
int32_t rdx_4 = neg.d(rdx_3)
int32_t* var_2e8 = *rax_4
*rax_4 = 0
int32_t rcx_8 = rax_4[1].d
int32_t rcx_9 = *(rax_4 + 0xc)
rax_4[1] = 0
int32_t rdx_7 = sbb.d(rdx_4, rdx_4, rdx_3 != 0) + 0x10 + rcx_8

if (rdx_7 s> rcx_9)
    sub_1405947f0(&var_2e8, rdx_7)

sub_140a2cf70(&var_2e8, u"PipelineCaches", 0xe)
int64_t rbx_1 = -1

do
    rbx_1 += 1
while ((*var_70)[rbx_1] != 0)

int32_t rdx_8 = (rbx_1 + 1).d
int32_t r8_1

if (rcx_8 == 0)
    r8_1 = 1

if (rcx_8 != 0 || rdx_8 == 0)
    r8_1 = 0

int16_t* var_2d0 = var_2e8
int32_t rdx_10 = rdx_8 + rcx_8 + r8_1
var_2e8 = nullptr
int32_t var_2e0
var_2e0.q = 0

if (rdx_10 s> rcx_9)
    sub_1405947f0(&var_2d0, rdx_10)

sub_140a2cf70(&var_2d0, var_70, rbx_1.d)
int32_t var_270
int32_t rbx_3

if (var_270 == 0)
    rbx_3 = 0
else
    rbx_3 = var_270 - 1

int32_t r8_3

if (rcx_8 == 0)
    r8_3 = rcx_8 + 1

if (rcx_8 != 0 || rbx_3 == 0xffffffff)
    r8_3 = 0

int16_t* var_220 = var_2d0
int32_t rdx_14 = rbx_3 + 1 + rcx_8 + r8_3
var_2d0 = nullptr
int32_t var_214 = rcx_9
int32_t var_2c8
var_2c8.q = 0

if (rdx_14 s> rcx_9)
    sub_1405947f0(&var_220, rdx_14)

sub_140a2cf70(&var_220, var_278, rbx_3)
int16_t* rcx_18 = var_2d0

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int32_t* rcx_19 = var_2e8

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t rcx_20 = var_1e8

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

if (var_78 != 0)
    sub_140a74f90(var_78)

int16_t* rcx_22 = var_278

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t rcx_23 = var_2b8

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t* rax_9 = sub_140b63b70(arg1 + 0x14, &var_1e8)

if (rax_9[1].d != 0)
    *rax_9

int16_t* const r8_5

if (arg2[1].d == 0)
    r8_5 = &data_142d40450
else
    r8_5 = *arg2

sub_140a2e390(&var_278, u"%s_%s.upipelinecache", r8_5)
int64_t var_78_1 = 0
int16_t (* var_70_1)[0x80] = &var_178
int32_t var_68_1 = 7
sub_1405a7220(&var_178, 8, "Windows", 8, 0x3f)
int64_t* rax_10 = sub_140b25050(&var_2b8)
int32_t rdx_17 = rax_10[1].d
int32_t rdx_18 = neg.d(rdx_17)
var_2e8 = *rax_10
*rax_10 = 0
int32_t rcx_29 = rax_10[1].d
int32_t rcx_30 = *(rax_10 + 0xc)
rax_10[1] = 0
int32_t rdx_21 = sbb.d(rdx_18, rdx_18, rdx_17 != 0) + 0x10 + rcx_29

if (rdx_21 s> rcx_30)
    sub_1405947f0(&var_2e8, rdx_21)

sub_140a2cf70(&var_2e8, u"PipelineCaches", 0xe)
int64_t rbx_4 = -1

do
    rbx_4 += 1
while ((*var_70_1)[rbx_4] != 0)

int32_t rdx_22

if (rcx_29 == 0)
    rdx_22 = rcx_29 + 2

if (rcx_29 != 0 || (rbx_4 + 1).d == 0)
    rdx_22 = 1

var_2d0 = var_2e8
int32_t rdx_24 = rdx_22 + rbx_4.d + rcx_29
var_2e8 = nullptr
int32_t var_2e0_1
var_2e0_1.q = 0

if (rdx_24 s> rcx_30)
    sub_1405947f0(&var_2d0, rdx_24)

sub_140a2cf70(&var_2d0, var_70_1, rbx_4.d)
int32_t rbx_6

if (var_270 == 0)
    rbx_6 = 0
else
    rbx_6 = var_270 - 1

int32_t rdx_26

if (rcx_29 == 0)
    rdx_26 = rcx_29 + 2

if (rcx_29 != 0 || rbx_6 == 0xffffffff)
    rdx_26 = 1

int16_t* var_268 = var_2d0
int32_t rdx_28 = rdx_26 + rbx_6 + rcx_29
var_2d0 = nullptr
int32_t var_260 = rcx_29
int32_t var_2c8_1
var_2c8_1.q = 0

if (rdx_28 s> rcx_30)
    sub_1405947f0(&var_268, rdx_28)

sub_140a2cf70(&var_268, var_278, rbx_6)
int16_t* rcx_39 = var_2d0

if (rcx_39 != 0)
    sub_140a74f90(rcx_39)

int32_t* rcx_40 = var_2e8

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

int64_t rcx_41 = var_2b8

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

if (var_78_1 != 0)
    sub_140a74f90(var_78_1)

int16_t* rcx_43 = var_278

if (rcx_43 != 0)
    sub_140a74f90(rcx_43)

int64_t rcx_44 = var_1e8

if (rcx_44 != 0)
    sub_140a74f90(rcx_44)

TEB* gsbase

if (data_143f0fb50 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f0fb50)
    
    if (data_143f0fb50 == 0xffffffff)
        sub_140af2b60()
        data_143f0fb4e = sub_140b21a10(&data_143dbb3f0, u"nostablepipelinecache")
        _Init_thread_footer(&data_143f0fb50)

if (data_143f0fb4e == 0)
    sub_140a464c0()
    int16_t* rdx_30 = &data_142d40450
    
    if (rcx_8 != 0)
        rdx_30 = var_220
    
    char const (* r8_8)[0x4] = data_14399ea08
    
    if ((*(r8_8 + 0x48))(&data_14399ea08, rdx_30, r8_8) != 0)
        int16_t* rdi_3 = var_220
        int32_t var_260_1 = rcx_8
        
        if (rcx_8 != 0 || rcx_30 != 0)
            sub_1405a4c70(&var_268, rcx_8, rcx_30)
            memcpy(var_268, rdi_3, rcx_8 * 2)
        else
            int32_t var_25c_1 = 0

int64_t* rax_20 = sub_140b63b70(arg1 + 0x14, &var_2b8)

if (rax_20[1].d != 0)
    *rax_20

int16_t* const r8_12

if (arg2[1].d == 0)
    r8_12 = &data_142d40450
else
    r8_12 = *arg2

sub_140a2e390(&var_2e8, u"%s_%s.upipelinecache", r8_12)
int64_t* rax_21 = sub_140b257f0()
int32_t rbx_9

if (var_2e0_1 == 0)
    rbx_9 = 0
else
    rbx_9 = var_2e0_1 - 1

int32_t rax_23

if (rax_21[1].d == 0)
    rax_23 = 2

if (rax_21[1].d != 0 || rbx_9 == 0xffffffff)
    rax_23 = 1

int16_t* var_290 = nullptr
int32_t rdx_34 = rbx_9 + rax_23
int32_t rdi_4 = rax_21[1].d
int64_t rsi = *rax_21

if (rdi_4 != 0 || rdx_34 != 0)
    sub_1405a4c70(&var_290, rdx_34 + rdi_4, 0)
    memcpy(var_290, rsi, rdi_4 * 2)
else
    int32_t var_284_1 = 0

sub_140a2cf70(&var_290, var_2e8, rbx_9)
int32_t* rcx_55 = var_2e8

if (rcx_55 != 0)
    sub_140a74f90(rcx_55)

int64_t rcx_56 = var_2b8

if (rcx_56 != 0)
    sub_140a74f90(rcx_56)

int64_t* rax_25 = sub_1405d9250(j_sub_140b17d00())
int16_t* const rbx_10

if (rax_25[1].d == 0)
    rbx_10 = &data_142d40450
else
    rbx_10 = *rax_25

sub_140b187d0(j_sub_140b17d00())
sub_140a2e390(&var_2e8, u"%s-CL-%u-", rbx_10)

if (&arg1[0x23] == &var_2e8)
    int32_t* rcx_61 = var_2e8
    
    if (rcx_61 != 0)
        sub_140a74f90(rcx_61)
else
    int32_t* rcx_60 = arg1[0x23]
    
    if (rcx_60 != 0)
        sub_140a74f90(rcx_60)
    
    arg1[0x23] = var_2e8
    arg1[0x24].d = var_2e0_1
    *(arg1 + 0x124) = rcx_30

pguid = 0
int64_t var_228_1 = 0
CoCreateGuid(&pguid)
sub_140b291e0(&pguid, &var_2d0, 0)
int16_t* rbx_11 = &data_142d40450

if (var_2c8_1 != 0)
    rbx_11 = var_2d0

int64_t* rax_31 = sub_140b63b70(arg1 + 0x14, &var_2b8)

if (rax_31[1].d != 0)
    *rax_31

int16_t* const r8_17

if (arg2[1].d == 0)
    r8_17 = &data_142d40450
else
    r8_17 = *arg2

int16_t var_2f8_1
var_2f8_1.q = rbx_11
sub_140a2e390(&var_2e8, u"%s_%s_%s.rec.upipelinecache", r8_17)
int32_t r8_19

if (var_2e0_1 == 0)
    r8_19 = 0
else
    r8_19 = var_2e0_1 - 1

sub_140a20ba0(&arg1[0x23], var_2e8, r8_19)
int32_t* rcx_67 = var_2e8

if (rcx_67 != 0)
    sub_140a74f90(rcx_67)

int64_t rcx_68 = var_2b8

if (rcx_68 != 0)
    sub_140a74f90(rcx_68)

int16_t* rcx_69 = var_2d0

if (rcx_69 != 0)
    sub_140a74f90(rcx_69)

int64_t* rax_32
int32_t rdx_41
int512_t zmm1
rax_32, rdx_41, zmm1 = sub_140b257f0()
bool c_2 = rax_32[1].d != 0
var_2d0 = nullptr
int32_t rbx_12 = rax_32[1].d
int64_t rdi_5 = *rax_32
sub_1405a4c70(&var_2d0, sbb.d(rdx_41, rdx_41, c_2) + 0xf + rbx_12, 0)
memcpy(var_2d0, rdi_5, rbx_12 * 2)
sub_140a2cf70(&var_2d0, u"CollectedPSOs", 0xd)
int32_t rax_33 = arg1[0x24].d
int32_t rbx_13 = rax_33 - 1

if (rax_33 == 0)
    rbx_13 = 0

int32_t rcx_74
int32_t r13_1

if (rbx_12 != 0 || rbx_13 == 0xffffffff)
    r13_1 = 1
    rcx_74 = 1
else
    rcx_74 = rbx_12 + 2
    r13_1 = rbx_12 + 1

int32_t rdx_48 = rbx_12 + rcx_74 + rbx_13
var_2e8 = var_2d0
var_2d0 = nullptr
int32_t var_2c8_2
var_2c8_2.q = 0

if (rdx_48 s> rcx_30)
    sub_1405947f0(&var_2e8, rdx_48)

sub_140a2cf70(&var_2e8, arg1[0x23], rbx_13)

if (&arg1[0x23] == &var_2e8)
    int32_t* rcx_78 = var_2e8
    
    if (rcx_78 != 0)
        zmm1 = sub_140a74f90(rcx_78)
else
    int32_t* rcx_77 = arg1[0x23]
    
    if (rcx_77 != 0)
        zmm1 = sub_140a74f90(rcx_77)
    
    arg1[0x23] = var_2e8
    arg1[0x24].d = rbx_12
    *(arg1 + 0x124) = rcx_30
    int32_t var_2e0_2
    var_2e0_2.q = 0
    var_2e8 = nullptr

int16_t* rcx_79 = var_2d0

if (rcx_79 != 0)
    zmm1 = sub_140a74f90(rcx_79)

int32_t rbx_15
int16_t* rdi_7
int16_t* r13_2

if (rdi_4 s> 1)
    int32_t rax_40 = (data_143f01ef0.q).d
    int32_t rdi_8 = rax_40 - 1
    
    if (rax_40 == 0)
        rdi_8 = 0
    
    int32_t rax_41
    
    if (rdi_4 == 0)
        rax_41 = r13_1
    
    if (rdi_4 != 0 || rdi_8 == 0)
        rax_41 = 0
    
    int16_t* rsi_3 = var_290
    int32_t rcx_82 = rax_41 + rdi_8
    var_2e8 = nullptr
    
    if (rdi_4 != 0 || rcx_82 != 0)
        sub_1405a4c70(&var_2e8, rdi_4 + rcx_82, 0)
        memcpy(var_2e8, rsi_3, rdi_4 * 2)
    else
        int32_t var_2dc_3 = 0
    
    sub_140a20ba0(&var_2e8, data_143f01ee8, rdi_8)
    r13_2 = var_2e8
    rbx_15 = rdi_4
    var_278 = r13_2
    rdi_7 = r13_2
else
    rbx_15 = (data_143f01ef0.q).d
    r13_2 = nullptr
    int64_t rdi_6 = data_143f01ee8
    var_278 = nullptr
    var_2d0 = nullptr
    
    if (rbx_15 != 0)
        sub_1405a4c70(&var_2d0, rbx_15, 0)
        r13_2 = var_2d0
        var_278 = r13_2
        memcpy(r13_2, rdi_6, rbx_15 * 2)
        rdi_7 = r13_2
    else
        rdi_7 = nullptr

sub_140a464c0()
int16_t* rdx_55 = &data_142d40450

if (rbx_15 != 0)
    rdx_55 = rdi_7

char const (* r8_28)[0x4] = data_14399ea08
char rax_42 = (*(r8_28 + 0x48))(&data_14399ea08, rdx_55, r8_28)

if (rax_42 != 0)
    goto label_1419796e8

if (data_143f0fb4c == rax_42)
    data_143f0fb4c = 1
    zmm1 = sub_140af2b60()
    char rax_43 = sub_140b21a10(&data_143dbb3f0, u"deleteuserpsocache")
    char rax_44
    
    if (rax_43 == 0)
        zmm1 = sub_140af2b60()
        rax_44 = sub_140b21a10(&data_143dbb3f0, u"logPSO")
    
    if (rax_43 != 0 || rax_44 != 0)
        data_143f0fb4d = 1
    label_1419796e8:
        sub_140a464c0()
        int16_t* rdx_56 = &data_142d40450
        
        if (rdi_4 != 0)
            rdx_56 = var_290
        
        char const (* r8_29)[0x4] = data_14399ea08
        
        if ((*(r8_29 + 0x48))(&data_14399ea08, rdx_56, r8_29) != 0)
            sub_140a464c0()
            int16_t* rdx_57 = &data_142d40450
            var_2f8_1.b = 0
            
            if (rdi_4 != 0)
                rdx_57 = var_290
            
            (*(data_14399ea08 + 0x30))(&data_14399ea08, rdx_57, 0, 0, var_2f8_1)
        
        if (rax_42 != 0)
            sub_140a464c0()
            var_2f8_1.b = 0
            int16_t* rdx_58 = &data_142d40450
            
            if (rbx_15 != 0)
                rdx_58 = r13_2
            
            (*(data_14399ea08 + 0x30))(&data_14399ea08, rdx_58, 0, 0, var_2f8_1)
    else
        data_143f0fb4d = rax_44
else if (data_143f0fb4d != 0)
    goto label_1419796e8

int32_t* rsi_4 = &arg1[5]
var_2e8 = rsi_4
var_2f8_1.q = rsi_4
char rax_47 = sub_141978ac0(arg1, &var_268, &arg1[0x1d], &arg1[0x21], zmm1, var_2f8_1)

if (rax_47 != 0)
    *var_298 = *(arg1 + 0xe8)
    
    if (data_143f0f1d3 != 0)
        int64_t rdi_10 = data_143f01f90
        int64_t rcx_88
        
        if (data_143de5480 == 0)
            rcx_88 = 0
        else
            rcx_88.b = GetCurrentThreadId() != data_143de5470
        
        char rax_49 = data_143f0f1d2
        
        if (*(rdi_10 + (rcx_88 << 2)) != 0)
            rax_49 = 1
        
        data_143f0f1d2 = rax_49

char var_2d8 = 0
char rax_50
int512_t zmm1_1
rax_50, zmm1_1 = sub_141978390()
int128_t var_258
double zmm2_1[0x2]

if (rax_50 == 0)
    arg1[0x10].d = *rsi_4
    sub_141962c50(&arg1[0x11], &rsi_4[2])
else
    int64_t rdi_11 = data_143f01f78
    int64_t rcx_89
    
    if (data_143de5480 == 0)
        rcx_89 = 0
    else
        rcx_89.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rdi_11 + (rcx_89 << 2)) s<= 0)
        arg1[0x10].d = *rsi_4
        sub_141962c50(&arg1[0x11], &rsi_4[2])
    else
        int64_t var_1d0
        __builtin_memset(&var_1d0, 0, 0x2c)
        int32_t var_19c_1 = 0
        int64_t var_190_1 = 0
        int32_t var_188_1 = 0
        int32_t var_1d8
        var_2f8_1.q = &var_1d8
        var_1d8 = 2
        int32_t var_1a4_1 = 0x80
        int32_t var_1a0_1 = 0xffffffff
        char rax_53 = sub_141978ac0(arg1, &var_290, &arg1[0x1b], &arg1[0x1f], zmm1_1, var_2f8_1)
        var_2d8 = rax_53
        char rdi_12 = rax_53
        
        if (rax_53 != 0)
            int64_t var_1c0
            int64_t* var_2b0_1 = &var_1c0
            int32_t var_2a8_1 = 0xffffffff
            int32_t rcx_91 = 0
            var_2b8.d = 0
            var_2b8:4.d = 1
            int32_t r8_32 = 0
            int64_t var_2a4_1 = 0
            int32_t var_1a8
            
            if (var_1a8 != 0)
                int64_t* r9_11 = &var_1c0
                int64_t* var_1b0
                
                if (var_1b0 != 0)
                    r9_11 = var_1b0
                
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = sx.q(var_1a8 - 1)
                int32_t rdx_64 = *r9_11
                
                if (rdx_64 != 0)
                label_141979968:
                    int32_t rax_62 = neg.d(rdx_64) & rdx_64
                    uint64_t rflags_1
                    int32_t temp0_1
                    temp0_1, rflags_1 = _bit_scan_reverse(rax_62)
                    var_2b8:4.d = rax_62
                    int32_t rax_63
                    
                    if (rax_62 == 0)
                        rax_63 = 0x20
                    else
                        rax_63 = 0x1f - temp0_1
                    
                    int32_t rax_64 = r8_32 - rax_63 + 0x1f
                    
                    if (rax_64 s> var_1a8)
                        rax_64 = var_1a8
                    
                    var_2a4_1.d = rax_64
                else
                    while (true)
                        int64_t rdx_65 = sx.q(rcx_91)
                        r8_32 += 0x20
                        rcx_91 += 1
                        var_2a4_1:4.d = r8_32
                        var_2b8.d = rcx_91
                        
                        if (rdx_65.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                            var_2a4_1.d = var_1a8
                            break
                        
                        rdx_64 = *(r9_11 + (rdx_65 << 2) + 4)
                        var_2a8_1 = 0xffffffff
                        
                        if (rdx_64 != 0)
                            goto label_141979968
            
            zmm2_1 = var_2a8_1.o
            var_2a4_1.d = var_1a8
            int128_t var_208_1 = var_2b8.o
            int16_t* rdx_68 = (0xffffffff << (var_1a8.b & 0x1f)).q u>> 0x20
            double var_1f8_1[0x2] = zmm2_1
            var_2d0 = rdx_68
            zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
            var_258 = (&var_1d0).o
            int128_t var_248_1 = var_208_1
            int64_t var_238_1 = zmm2_1.q
            
            while (true)
                int64_t rax_65 = sx.q(var_248_1:0xc.d)
                int64_t rcx_95 = var_258.q
                
                if (rax_65.d == rdx_68.d && var_248_1.q == &var_1c0 && rcx_95 == &var_1d0)
                    break
                
                int32_t* rdi_14 = rax_65 * 0xb8 + *rcx_95
                sub_141970fb0(&arg1[0x11], &var_298, *rdi_14)
                int64_t rax_66 = sx.q(var_298.d)
                void* const rax_68
                
                if (rax_66.d == 0xffffffff)
                    rax_68 = nullptr
                else
                    rax_68 = rax_66 * 0xb8 + arg1[0x11]
                
                void* rdx_70 = rax_68 + 8
                int32_t r11_1 = rdi_14[7]
                int32_t r8_35 = rdi_14[6]
                int32_t r12_1 = arg1[0x1c].d
                
                if (rax_68 == 0)
                    rdx_70 = nullptr
                
                int32_t r13_3 = *(arg1 + 0xdc)
                int32_t r10_5 = rdi_14[8]
                int32_t r15_1 = *(arg1 + 0xe4)
                int32_t r9_12 = rdi_14[9]
                
                if (((arg1[0x1b].d ^ r8_35) | (r13_3 ^ r11_1) | (r12_1 ^ r10_5) | (r15_1 ^ r9_12))
                        == 0 || ((*(arg1 + 0xec) ^ r11_1) | (arg1[0x1e].d ^ r10_5)
                        | (*(arg1 + 0xf4) ^ r9_12) | (r8_35 ^ arg1[0x1d].d)) == 0)
                    if (rdx_70 == 0)
                        sub_14195c0a0(&arg1[0x11], rdi_14, &rdi_14[2])
                    else
                        int32_t r11_2 = *(rdx_70 + 0x14)
                        int32_t r8_37 = *(rdx_70 + 0x10)
                        int32_t r10_6 = *(rdx_70 + 0x18)
                        int32_t r9_13 = *(rdx_70 + 0x1c)
                        
                        if (((r8_37 ^ arg1[0x1b].d) | (r11_2 ^ r13_3) | (r10_6 ^ r12_1)
                                | (r9_13 ^ r15_1)) != 0 && ((*(arg1 + 0xec) ^ r11_2)
                                | (arg1[0x1e].d ^ r10_6) | (*(arg1 + 0xf4) ^ r9_13)
                                | (r8_37 ^ arg1[0x1d].d)) != 0)
                            sub_14195c0a0(&arg1[0x11], rdi_14, &rdi_14[2])
                
                var_248_1:8.d &= not.d(var_258:0xc.d)
                sub_14059bdd0(&var_258:8)
                rdx_68 = var_2d0
            
            var_2b8:4.d = 1
            var_2b8.d = 0
            int64_t var_2a4_2 = 0
            int32_t var_2a8_3 = 0xffffffff
            int32_t r8_40 = arg1[0xb].d
            void* var_2b0_2 = &arg1[8]
            
            if (r8_40 != 0)
                sub_14059bdd0(&var_2b8)
                r8_40 = arg1[0xb].d
            
            zmm2_1 = var_2a8_3.o
            double var_1f8_2[0x2] = zmm2_1
            int128_t var_208_2 = var_2b8.o
            var_2a4_2.d = r8_40
            zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
            var_258 = (&arg1[6]).o
            int128_t var_248_2 = var_208_2
            int64_t var_238_2 = zmm2_1.q
            
            while (true)
                int64_t rax_91 = sx.q(var_248_2:0xc.d)
                int64_t rcx_122 = var_258.q
                
                if (rax_91.d == ((0xffffffff << (r8_40.b & 0x1f)).q u>> 0x20).d
                        && var_248_2.q == &arg1[8] && rcx_122 == &arg1[6])
                    break
                
                int32_t* rdi_16 = rax_91 * 0xb8 + *rcx_122
                sub_141970fb0(&arg1[0x11], &var_298, *rdi_16)
                int64_t rax_92 = sx.q(var_298.d)
                void* const rdx_75
                
                if (rax_92.d == 0xffffffff)
                    rdx_75 = nullptr
                else
                    rdx_75 = rax_92 * 0xb8 + arg1[0x11]
                
                void* rax_93 = rdx_75 + 8
                
                if (rdx_75 == 0)
                    rax_93 = nullptr
                
                if (rax_93 == 0)
                    sub_14195c0a0(&arg1[0x11], rdi_16, &rdi_16[2])
                else
                    int32_t r10_7 = *(rax_93 + 0x14)
                    int32_t r8_42 = *(rax_93 + 0x1c)
                    int32_t r9_14 = *(rax_93 + 0x18)
                    int32_t rdx_76 = *(rax_93 + 0x10)
                    
                    if (((*(arg1 + 0xdc) ^ r10_7) | (arg1[0x1c].d ^ r9_14)
                            | (*(arg1 + 0xe4) ^ r8_42) | (rdx_76 ^ arg1[0x1b].d)) != 0 && ((*(arg1 + 0xec)
                            ^ r10_7) | (arg1[0x1e].d ^ r9_14) | (*(arg1 + 0xf4) ^ r8_42)
                            | (rdx_76 ^ arg1[0x1d].d)) != 0)
                        sub_14195c0a0(&arg1[0x11], rdi_16, &rdi_16[2])
                
                var_248_2:8.d &= not.d(var_258:0xc.d)
                sub_14059bdd0(&var_258:8)
            
            r13_2 = var_278
            rdi_12 = var_2d8
        else
            sub_140a464c0()
            var_2f8_1.b = rdi_12
            
            if (rdi_4 != 0)
                r15 = var_290
            
            (*(data_14399ea08 + 0x30))(&data_14399ea08, r15, 0, 0, var_2f8_1)
            arg1[4] = 0
        
        sub_141962320(&var_1d0)
        
        if (rdi_12 == 0)
            rsi_4 = var_2e8
            arg1[0x10].d = *rsi_4
            sub_141962c50(&arg1[0x11], &rsi_4[2])

int32_t rdx_80 = arg1[0x16].d
void* var_2b0_3 = &arg1[0x13]
var_2b8.d = 0
var_2b8:4.d = 1
int32_t var_2a8_5 = 0xffffffff
int64_t var_2a4_3 = 0

if (rdx_80 != 0)
    sub_14059bdd0(&var_2b8)
    rdx_80 = arg1[0x16].d

zmm2_1 = var_2a8_5.o
var_2a4_3.d = rdx_80
double var_1f8_3[0x2] = zmm2_1
int128_t var_208_3 = var_2b8.o
zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
var_258 = (&arg1[0x11]).o
int128_t var_248_3 = var_208_3
int64_t var_238_3 = zmm2_1.q

while (true)
    int64_t rax_107 = sx.q(var_248_3:0xc.d)
    int64_t rcx_142 = var_258.q
    int32_t* rbx_16
    
    if (rax_107.d == ((0xffffffff << (rdx_80.b & 0x1f)).q u>> 0x20).d && var_248_3.q == &arg1[0x13]
            && rcx_142 == &arg1[0x11])
        if (rax_47 != 0 || var_2d8 != 0)
            rbx_16.b = 1
        else
            rbx_16.b = 0
        
        if (r13_2 != 0)
            sub_140a74f90(r13_2)
        
        int16_t* rcx_147 = var_290
        
        if (rcx_147 != 0)
            sub_140a74f90(rcx_147)
        
        int16_t* rcx_148 = var_268
        
        if (rcx_148 != 0)
            sub_140a74f90(rcx_148)
        
        int16_t* rcx_149 = var_220
        
        if (rcx_149 != 0)
            sub_140a74f90(rcx_149)
        
        __security_check_cookie(rax_1 ^ &var_318)
        return zx.q(rbx_16.b)
    
    rbx_16 = rax_107 * 0xb8 + *rcx_142
    sub_141838f70(&data_1439c8020, &var_298, *rbx_16)
    int64_t rax_108 = sx.q(var_298.d)
    void* rcx_143
    
    if (rax_108.d != 0xffffffff)
        rcx_143 = data_1439c8020 + rax_108 * 0x18
    
    if (rax_108.d == 0xffffffff || rcx_143 == 0 || *(rcx_143 + 8) == 0)
        int32_t* rax_110 = j_sub_140a82f30(0x28)
        int32_t* rcx_144 = rax_110
        
        if (rax_110 == 0)
            rcx_144 = nullptr
        else
            *rax_110 = -1
            *(rax_110 + 8) = -1
            __builtin_memset(&rax_110[4], 0, 0x14)
        
        rcx_144[8] = *rbx_16
        *(rcx_144 + 0x18) = -1
        var_2e8 = rcx_144
        sub_141000b00(&data_1439c8020, rbx_16, &var_2e8)
    
    var_248_3:8.d &= not.d(var_258:0xc.d)
    sub_14059bdd0(&var_258:8)
