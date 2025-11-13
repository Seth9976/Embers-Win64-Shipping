// 函数: sub_14100b980
// 地址: 0x14100b980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_568
int64_t rax_1 = __security_cookie ^ &var_568
uint64_t* r12 = &arg1[7]
uint64_t* r13 = &arg1[0xb]
uint64_t* var_460 = r13
*arg1 = &data_142d3ff08
int64_t i_6 = 4
arg1[1].d = 0
*arg1 = &data_142effdb8
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
__builtin_memset(&arg1[3], 0, 0x80)
void* r8 = &arg1[0x13]
void* rax_2 = r8 + 0x54
void*** r14 = arg1
int64_t i

do
    *r8 = 0
    void* rdx = rax_2 + 0x34
    __builtin_memset(rax_2 - 0x50, 0, 0x3c)
    r8 += 0x1b8
    *(rax_2 - 0xc) = 0
    *(rax_2 - 4) = 0
    *(rax_2 - 0x14) = &data_142effd48
    *(rax_2 + 4) = 0
    *(rax_2 + 0xc) = 1
    __builtin_memset(rax_2 + 0x14, 0, 0x20)
    *(rax_2 + 0x44) = 0
    *(rax_2 + 0x4c) = 0
    *(rax_2 + 0x50) = 0x80
    void* rcx = *(rax_2 + 0x44)
    
    if (rcx != 0)
        rdx = rcx
    
    *rdx = 0
    *(rdx + 8) = 0
    void* rdx_1 = rax_2 + 0xd4
    *(rax_2 + 0x54) = 0xffffffff
    *(rax_2 + 0x58) = 0
    *(rax_2 + 0x64) = 0
    *(rax_2 + 0x6c) = 0
    *(rax_2 + 0x74) = 0
    __builtin_memset(rax_2 + 0x7c, 0, 0x1d)
    *(rax_2 + 0x9c) = 0
    __builtin_memset(rax_2 + 0xa4, 0, 0x30)
    *(rax_2 + 0xe4) = 0
    *(rax_2 + 0xec) = 0
    *(rax_2 + 0xf0) = 0x80
    void* rcx_1 = *(rax_2 + 0xe4)
    
    if (rcx_1 != 0)
        rdx_1 = rcx_1
    
    *rdx_1 = 0
    *(rdx_1 + 8) = 0
    void* rdx_2 = rax_2 + 0x124
    *(rax_2 + 0xf4) = 0xffffffff
    *(rax_2 + 0xf8) = 0
    *(rax_2 + 0x104) = 0
    *(rax_2 + 0x10c) = 0
    *(rax_2 + 0x114) = 0
    *(rax_2 + 0x11c) = 0
    *(rax_2 + 0x134) = 0
    *(rax_2 + 0x13c) = 0
    *(rax_2 + 0x140) = 0x80
    void* rcx_2 = *(rax_2 + 0x134)
    rax_2 += 0x1b8
    
    if (rcx_2 != 0)
        rdx_2 = rcx_2
    
    *rdx_2 = 0
    *(rdx_2 + 8) = 0
    *(rax_2 - 0x74) = 0xffffffff
    *(rax_2 - 0x70) = 0
    *(rax_2 - 0x64) = 0
    *(rax_2 - 0x5c) = 0
    i = i_6
    i_6 -= 1
while (i != 1)
__builtin_memset(&r14[0xef], 0, 0x18)
r14[0xf2].b = 1
*(r14 + 0x794) = 0
int64_t var_4b8 = 0
int32_t var_4f0 = 0
int64_t performanceCount_11
QueryPerformanceCounter(&performanceCount_11)
int64_t* rax_4 = *(*(arg2 + 0x20) + 0x38)
void* var_300
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[3]), &var_300, &data_143f10130, 0)
void* rcx_6 = var_300
int64_t rax_6 = 0

if (rcx_6 != 0)
    int64_t rdx_4 = sx.q(*(rcx_6 + 0x10c))
    void* var_2f8
    int64_t* rbx_1 = *(var_2f8 + 0x10)
    int64_t r14_1 = rdx_4 << 3
    int64_t rax_8 = rbx_1[3]
    
    if (*(r14_1 + rax_8) == 0)
        sub_1419ccf30(rbx_1, rdx_4.d)
        rax_8 = rbx_1[3]
    
    rax_6 = *(r14_1 + rax_8)
    r14 = arg1

bool cond:0 = arg3[0xc] == 0
int64_t var_308 = rax_6
int64_t* var_4c8
int32_t rbx_2

if (cond:0)
    rbx_2 = 1
    var_4c8 = &var_308
else
    uint128_t zmm0_1 = *(arg3 + 0x28)
    uint128_t var_218_1 = zmm0_1
    var_4c8 = zmm0_1.q
    rbx_2 = _mm_bsrli_si128(zmm0_1, 8).d

void* rax_9 = sub_141001d70()
bool cond:1 = arg3[8] == 0
void* var_3d8 = rax_9
void** var_4d8
int32_t rax_10
uint128_t zmm0_2

if (cond:1)
    var_4d8 = &var_3d8
    rax_10 = 1
else
    zmm0_2 = *(arg3 + 0x18)
    uint128_t var_208_1 = zmm0_2
    var_4d8 = zmm0_2.q
    rax_10 = _mm_bsrli_si128(zmm0_2, 8).d

uint128_t zmm2 = *(arg3 + 8)
uint128_t zmm1 = *(arg3 + 0x38)
int32_t r15_1 = _mm_bsrli_si128(zmm2, 8).d
int96_t var_408 = zmm1.12
int32_t rbx_3 = _mm_bsrli_si128(zmm1, 8).d
int64_t* rax_11 = zmm2.q
int64_t* var_4d0 = rax_11
int32_t r8_3 = r15_1 + rbx_2 + rax_10 + rbx_3
int32_t var_4f4 = r8_3
uint128_t var_1f8 = zmm2
r14[0xef] = *(*(*rax_11 + 0x110) + 8)
int64_t var_1c8
__builtin_memset(&var_1c8, 0, 0x2c)
int32_t var_19c = 0x80
int32_t var_198 = 0xffffffff
int32_t var_194 = 0
int64_t var_188 = 0
int32_t var_180 = 0

if (r8_3 s> 0)
    sub_1410339f0(&var_1c8, r8_3)
    r8_3 = var_4f4
    int32_t rdx_7
    
    if (r8_3 u< 4)
        rdx_7 = 1
    else
        uint32_t rax_15 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_5
        temp0_5, rflags_1 = _bit_scan_reverse(rax_15 + 8)
        int32_t var_340_1 = temp0_5
        int32_t rcx_10
        
        if (rax_15 == 0xfffffff8)
            rcx_10 = 0x20
        else
            rcx_10 = 0x1f - temp0_5
        
        uint64_t rflags_2
        int32_t temp0_6
        temp0_6, rflags_2 = _bit_scan_reverse(rax_15 + 7)
        int32_t var_33c_1 = temp0_6
        char rdx_6
        
        if (rax_15 == 0xfffffff9)
            rdx_6 = 0x20
        else
            rdx_6 = 0x1f - temp0_6.b
        
        r8_3 = var_4f4
        rdx_7 = 1 << ((not.d(rcx_10 << 0x1a s>> 0x1f)).b & (0x20 - rdx_6))
    
    if (var_180 == 0 || var_180 s< rdx_7)
        int32_t var_180_1 = rdx_7
        sub_140807fa0(&var_1c8)
        r8_3 = var_4f4

int64_t* var_4e8 = nullptr
int64_t var_4e0 = 0

if (r8_3 s> 0)
    sub_1405c5570(&var_4e8, r8_3)
    r8_3 = var_4f4

int64_t var_d8 = 0
int32_t var_d0 = 0
int32_t var_cc = 4
void var_f8

if (r8_3 s> 4)
    sub_14085a940(&var_f8, r8_3)

int64_t rax_20 = r14[0xef]
CRITICAL_SECTION* rax_21 = *(arg2 + 0xae8)
char rax_23

if (arg3[0xc] == 0)
    rax_23 = 0
else
    rax_23 = arg3[1].b

r14[0xf2].b = rax_23
uint64_t i_9 = 0
int32_t i_12 = 0
int64_t* var_4b0 = nullptr
int32_t var_4a4 = 0

if (r15_1 s> *(arg1 + 0x24))
    sub_1405c5570(&arg1[3], r15_1)

if (r15_1 s> *(arg1 + 0x34))
    sub_1405a51b0(&arg1[5], r15_1)

if (r15_1 s> 0)
    sub_1405c5570(&var_4b0, r15_1)
    i_9 = zx.q(i_12)

void* rdx_13 = var_4d0
void* rcx_22 = rdx_13 + (sx.q(r15_1) << 3)
uint64_t rax_28 = (rcx_22 - rdx_13 + 7) u>> 3

if (rdx_13 u> rcx_22)
    rax_28 = 0

if (rax_28 != 0)
    int64_t rsi_1 = 0
    
    while (true)
        void* r15_2 = *rdx_13
        char var_508 = 0
        zmm0_2 = *(r15_2 + 0x18)
        int32_t var_88_1 = *(r15_2 + 0x28)
        uint64_t var_3c0 = zmm0_2.q
        uint128_t var_98_1 = zmm0_2
        void var_338
        sub_1407d1070(&var_1c8, &var_338, &var_3c0, &var_508)
        char var_507 = 0
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        int64_t rbx_5 = var_4b8 - performanceCount
        void* rax_33 = sub_141023690(rax_21, rax_4, r15_2, rax_20, *arg3, 0, &var_f8, &var_507)
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        var_4b8 = performanceCount_1 + rbx_5
        
        if (var_508 == 0)
            int64_t rbx_6 = sx.q(var_4e0.d)
            int32_t rax_34 = (rbx_6 + 1).d
            var_4e0.d = rax_34
            
            if (rax_34 s> var_4e0:4.d)
                sub_1405a4d70(&var_4e8)
            
            bool cond:6_1 = var_507 == 0
            var_4e8[rbx_6] = rax_33
            
            if (not(cond:6_1))
                var_4f0 += 1
        
        int16_t* const rbx_7
        
        if (*(rax_33 + 0x20) == 0)
            rbx_7 = &data_142d40450
        else
            rbx_7 = *(rax_33 + 0x18)
        
        int32_t i_16 = (i_9 + 1).d
        i_12 = i_16
        
        if (i_16 s> var_4a4)
            sub_1405a4d70(&var_4b0)
        
        var_4b0[sx.q(i_9.d)] = rbx_7
        *(r15_2 + 8) += 1
        int64_t rbx_8 = sx.q(arg1[4].d)
        int32_t rax_37 = (rbx_8 + 1).d
        arg1[4].d = rax_37
        
        if (rax_37 s> *(arg1 + 0x24))
            sub_1405a4d70(&arg1[3])
        
        rsi_1 += 1
        rdx_13 = &var_4d0[1]
        var_4d0 = rdx_13
        arg1[3][rbx_8] = r15_2
        
        if (rsi_1 == rax_28)
            break
        
        i_9 = zx.q(i_12)
    
    rbx_3 = var_408:8.d
    i_9 = zx.q(i_12)
    r13 = var_460

uint64_t i_10 = 0
int64_t* var_4a0 = nullptr
*(arg1 + 0x794) = 0
var_4d0.d = 0
int32_t i_13 = 0
int32_t var_494 = 0

if (rax_10 s> *(r12 + 0xc))
    sub_1405c5570(r12, rax_10)

if (rax_10 s> *(r12 + 0x1c))
    sub_1405a51b0(&r12[2], rax_10)

if (rax_10 s> 0)
    sub_1405c5570(&var_4a0, rax_10)
    i_10 = zx.q(i_13)
    var_4d0.d = i_10.d

void* rdx_23 = var_4d8
int64_t rcx_36 = sx.q(rax_10) << 3
uint64_t rcx_37 = rcx_36 u>> 3

if (rdx_23 u> rcx_36 + rdx_23)
    rcx_37 = 0

if (rcx_37 != 0)
    int64_t r13_2 = 0
    
    while (true)
        void* r14_2 = *rdx_23
        char var_506 = 0
        uint32_t rcx_39 = zx.d(*(r14_2 + 0x10c)) + zx.d(*(r14_2 + 0x10a))
        uint32_t rax_43 = arg1[0xf3].d
        
        if (rax_43 u>= rcx_39)
            rcx_39 = rax_43
        
        arg1[0xf3].d = rcx_39
        uint32_t rax_45 = *(arg1 + 0x794)
        uint32_t rcx_41 = zx.d(*(*(r14_2 + 0x110) + 0xa8)) << 2
        
        if (rax_45 u>= rcx_41)
            rcx_41 = rax_45
        
        *(arg1 + 0x794) = rcx_41
        zmm0_2 = *(r14_2 + 0x18)
        int32_t var_74_1 = *(r14_2 + 0x28)
        uint64_t var_3a0 = zmm0_2.q
        uint128_t var_84_1 = zmm0_2
        void var_334
        sub_1407d1070(&var_1c8, &var_334, &var_3a0, &var_506)
        char var_505 = 0
        int64_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
        int64_t rbx_10 = var_4b8 - performanceCount_2
        void* rax_50 = sub_141023690(rax_21, rax_4, r14_2, rax_20, *arg3, 1, &var_f8, &var_505)
        int64_t performanceCount_3
        QueryPerformanceCounter(&performanceCount_3)
        var_4b8 = performanceCount_3 + rbx_10
        
        if (var_506 == 0)
            int64_t rbx_11 = sx.q(var_4e0.d)
            int32_t rax_51 = (rbx_11 + 1).d
            var_4e0.d = rax_51
            
            if (rax_51 s> var_4e0:4.d)
                sub_1405a4d70(&var_4e8)
            
            bool cond:8_1 = var_505 == 0
            var_4e8[rbx_11] = rax_50
            
            if (not(cond:8_1))
                var_4f0 += 1
        
        int16_t* const rbx_12
        
        if (*(rax_50 + 0x20) == 0)
            rbx_12 = &data_142d40450
        else
            rbx_12 = *(rax_50 + 0x18)
        
        int32_t i_17 = (i_10 + 1).d
        i_13 = i_17
        
        if (i_17 s> var_494)
            sub_1405a4d70(&var_4a0)
        
        var_4a0[sx.q(i_10.d)] = rbx_12
        *(r14_2 + 8) += 1
        int64_t rbx_13 = sx.q(r12[1].d)
        int32_t rax_54 = (rbx_13 + 1).d
        r12[1].d = rax_54
        
        if (rax_54 s> *(r12 + 0xc))
            sub_1405a4d70(r12)
        
        r13_2 += 1
        rdx_23 = &var_4d8[1]
        var_4d8 = rdx_23
        *(*r12 + (rbx_13 << 3)) = r14_2
        
        if (r13_2 == rcx_37)
            break
        
        i_10 = zx.q(i_13)
    
    i_10 = zx.q(i_13)
    rbx_3 = var_408:8.d
    i_9 = zx.q(i_12)
    r13 = var_460
    var_4d0.d = i_10.d

int64_t* var_450 = nullptr
int64_t var_448 = 0

if (rbx_2 s> *(r13 + 0xc))
    sub_1405c5570(r13, rbx_2)

if (rbx_2 s> *(r13 + 0x1c))
    sub_1405a51b0(&r13[2], rbx_2)

if (rbx_2 s> 0)
    sub_1405c5570(&var_450, rbx_2)

int64_t* rdx_34 = var_4c8
int64_t r12_2 = 0
uint64_t rcx_56 = sx.q(rbx_2) << 3 u>> 3

if (rdx_34 u> &rdx_34[sx.q(rbx_2)])
    rcx_56 = 0

if (rcx_56 != 0)
    do
        void* r14_3 = *rdx_34
        char var_504 = 0
        uint32_t rcx_58 = zx.d(*(r14_3 + 0x10c)) + zx.d(*(r14_3 + 0x10a))
        uint32_t rax_59 = arg1[0xf3].d
        
        if (rax_59 u>= rcx_58)
            rcx_58 = rax_59
        
        arg1[0xf3].d = rcx_58
        uint32_t rax_61 = *(arg1 + 0x794)
        uint32_t rcx_60 = zx.d(*(*(r14_3 + 0x110) + 0xa8)) << 2
        
        if (rax_61 u>= rcx_60)
            rcx_60 = rax_61
        
        *(arg1 + 0x794) = rcx_60
        zmm0_2 = *(r14_3 + 0x18)
        int32_t var_60_1 = *(r14_3 + 0x28)
        uint64_t var_380 = zmm0_2.q
        uint128_t var_70_1 = zmm0_2
        void var_330
        sub_1407d1070(&var_1c8, &var_330, &var_380, &var_504)
        char var_503 = 0
        int64_t performanceCount_4
        QueryPerformanceCounter(&performanceCount_4)
        int64_t rbx_15 = var_4b8 - performanceCount_4
        void* rax_66 = sub_141023690(rax_21, rax_4, r14_3, rax_20, *arg3, 2, &var_f8, &var_503)
        int64_t performanceCount_5
        QueryPerformanceCounter(&performanceCount_5)
        var_4b8 = performanceCount_5 + rbx_15
        
        if (var_504 == 0)
            int64_t rbx_16 = sx.q(var_4e0.d)
            int32_t rax_67 = (rbx_16 + 1).d
            var_4e0.d = rax_67
            
            if (rax_67 s> var_4e0:4.d)
                sub_1405a4d70(&var_4e8)
            
            bool cond:10_1 = var_503 == 0
            var_4e8[rbx_16] = rax_66
            
            if (not(cond:10_1))
                var_4f0 += 1
        
        int16_t* const rdi_5
        
        if (*(rax_66 + 0x20) == 0)
            rdi_5 = &data_142d40450
        else
            rdi_5 = *(rax_66 + 0x18)
        
        int64_t rbx_17 = sx.q(var_448.d)
        int32_t rax_69 = (rbx_17 + 1).d
        var_448.d = rax_69
        
        if (rax_69 s> var_448:4.d)
            sub_1405a4d70(&var_450)
        
        var_450[rbx_17] = rdi_5
        *(r14_3 + 8) += 1
        int64_t rbx_18 = sx.q(r13[1].d)
        int32_t rax_71 = (rbx_18 + 1).d
        r13[1].d = rax_71
        
        if (rax_71 s> *(r13 + 0xc))
            sub_1405a4d70(r13)
        
        r12_2 += 1
        rdx_34 = &var_4c8[1]
        var_4c8 = rdx_34
        *(*r13 + (rbx_18 << 3)) = r14_3
    while (r12_2 != rcx_56)
    
    i_10 = zx.q(i_13)
    rbx_3 = var_408:8.d
    i_9 = zx.q(i_12)
    var_4d0.d = i_10.d

uint64_t i_7 = 0
int64_t* var_490 = nullptr
var_4c8.d = 0
int32_t i_14 = 0
int32_t var_484 = 0

if (rbx_3 s> *(arg1 + 0x84))
    sub_1405c5570(&arg1[0xf], rbx_3)

if (rbx_3 s> *(arg1 + 0x94))
    sub_1405a51b0(&arg1[0x11], rbx_3)

if (rbx_3 s> 0)
    sub_1405c5570(&var_490, rbx_3)
    i_7 = zx.q(i_14)
    var_4c8.d = i_7.d

void** rdx_44 = var_408.q
int64_t r12_3 = 0
void* rcx_73 = &rdx_44[sx.q(rbx_3)]
uint64_t rax_77 = (rcx_73 - rdx_44 + 7) u>> 3

if (rdx_44 u> rcx_73)
    rax_77 = 0

if (rax_77 != 0)
    void** rsi_4 = rdx_44
    void*** rdx_45 = arg1
    
    while (true)
        void* rdi_7 = *rsi_4
        char var_502 = 0
        uint32_t rcx_75 = zx.d(*(rdi_7 + 0x10c)) + zx.d(*(rdi_7 + 0x10a))
        uint32_t rax_79 = rdx_45[0xf3].d
        
        if (rax_79 u>= rcx_75)
            rcx_75 = rax_79
        
        rdx_45[0xf3].d = rcx_75
        uint32_t rax_81 = *(rdx_45 + 0x794)
        uint32_t rcx_77 = zx.d(*(*(rdi_7 + 0x110) + 0xa8)) << 2
        
        if (rax_81 u>= rcx_77)
            rcx_77 = rax_81
        
        *(rdx_45 + 0x794) = rcx_77
        zmm0_2 = *(rdi_7 + 0x18)
        int32_t var_4c_1 = *(rdi_7 + 0x28)
        uint64_t var_360 = zmm0_2.q
        uint128_t var_5c_1 = zmm0_2
        void var_32c
        sub_1407d1070(&var_1c8, &var_32c, &var_360, &var_502)
        char var_4f8 = 0
        int64_t performanceCount_6
        QueryPerformanceCounter(&performanceCount_6)
        int64_t rbx_20 = var_4b8 - performanceCount_6
        void* rax_86 = sub_141023690(rax_21, rax_4, rdi_7, rax_20, *arg3, 3, &var_f8, &var_4f8)
        int64_t performanceCount_7
        QueryPerformanceCounter(&performanceCount_7)
        var_4b8 = performanceCount_7 + rbx_20
        
        if (var_502 == 0)
            int64_t rbx_21 = sx.q(var_4e0.d)
            int32_t rax_87 = (rbx_21 + 1).d
            var_4e0.d = rax_87
            
            if (rax_87 s> var_4e0:4.d)
                sub_1405a4d70(&var_4e8)
            
            var_4e8[rbx_21] = rax_86
        
        int16_t* const rbx_22
        
        if (*(rax_86 + 0x20) == 0)
            rbx_22 = &data_142d40450
        else
            rbx_22 = *(rax_86 + 0x18)
        
        int32_t i_18 = (i_7 + 1).d
        i_14 = i_18
        
        if (i_18 s> var_484)
            sub_1405a4d70(&var_490)
        
        var_490[sx.q(i_7.d)] = rbx_22
        *(rdi_7 + 8) += 1
        rdx_45 = arg1
        void* r14_5 = &rdx_45[0xf]
        int64_t rbx_23 = sx.q(*(r14_5 + 8))
        int32_t rax_90 = (rbx_23 + 1).d
        *(r14_5 + 8) = rax_90
        
        if (rax_90 s> *(r14_5 + 0xc))
            sub_1405a4d70(r14_5)
            rdx_45 = arg1
        
        rsi_4 = &rsi_4[1]
        r12_3 += 1
        *(*r14_5 + (rbx_23 << 3)) = rdi_7
        
        if (r12_3 == rax_77)
            break
        
        i_7 = zx.q(i_14)
    
    i_10 = zx.q(i_13)
    i_7 = zx.q(i_14)
    i_9 = zx.q(i_12)
    var_4d0.d = i_10.d
    var_4c8.d = i_7.d

int64_t performanceCount_12
QueryPerformanceCounter(&performanceCount_12)
void*** var_278 = nullptr
void** const var_268 = &data_142e52180
int64_t (* var_288)() = sub_140594850
void var_1e8
int64_t* rax_92 = sub_140958c20(&var_1e8, &var_f8, 0xff)
void* rdx_52 = *rax_92
*(rdx_52 + 0x10) = var_288
*(rdx_52 + 0x20) = var_278
*(rdx_52 + 0x30) = var_268.o
int128_t var_258
*(rdx_52 + 0x40) = var_258
int64_t (* rcx_90)() = var_288

if (*(rdx_52 + 0x10) != 0)
    rcx_90 = nullptr

*(rdx_52 + 0x50) = 0x6ff
void* rcx_91 = *rax_92
int64_t* rbx_24 = *(rcx_91 + 0x68)
int64_t* var_4d8_1 = rbx_24
int64_t* rdi_8 = rbx_24

if (rbx_24 != 0)
    rbx_24[9].d += 1
    i_10 = zx.q(i_13)
    i_7 = zx.q(i_14)
    rdi_8 = rbx_24
    i_9 = zx.q(i_12)
    var_4d0.d = i_10.d
    var_4c8.d = i_7.d
    var_4d8_1 = rdi_8

sub_1409787e0(rcx_91, rax_92[1], rax_92[2].d, 1)

if (rcx_90 != 0)
    void** const* rcx_92 = &var_268
    
    if (var_278 != 0)
        rcx_92 = var_278
    
    (*rcx_92)[2](rcx_92)

int64_t* rax_98 = sub_140a242a0()
int32_t var_9c = 4
int32_t var_a0 = 1
int64_t var_a8 = 0
int64_t* var_c8 = rbx_24

if (rbx_24 != 0)
    rbx_24[9].d += 1
    i_10 = zx.q(i_13)
    i_7 = zx.q(i_14)
    rdi_8 = rbx_24
    i_9 = zx.q(i_12)
    var_4d0.d = i_10.d
    var_4c8.d = i_7.d
    var_4d8_1 = rdi_8

(*(*rax_98 + 0x48))(rax_98, &var_c8, 0xff)
sub_1408466d0(&var_c8)
int64_t performanceCount_13
QueryPerformanceCounter(&performanceCount_13)
int64_t var_478 = 0
int32_t rbx_25 = 0
int32_t var_470 = 0
int64_t r8_16 = 0
int32_t var_46c = 0

if (var_4f4 s> 0)
    sub_1405a5130(&var_478, var_4f4)
    r8_16 = var_478
    rbx_25 = var_470

int64_t* r12_4 = var_4e8
int64_t rdx_56 = 0
int64_t var_460_1 = 0
void* rcx_97 = &r12_4[sx.q(var_4e0.d)]
uint64_t rax_104 = (rcx_97 - r12_4 + 7) u>> 3

if (r12_4 u> rcx_97)
    rax_104 = 0

if (rax_104 != 0)
    do
        void* rcx_98 = *r12_4
        int32_t var_4f4_1 = rbx_25
        int32_t var_314_1 = 0
        int64_t rax_105 = *(rcx_98 + 8)
        int32_t var_318_1 = *(rcx_98 + 0xc0)
        int32_t rax_108 = rbx_25
        rbx_25 += 1
        
        if (rbx_25 s> var_46c)
            sub_1405a4df0(&var_478)
            rax_108 = var_4f4_1
            rdx_56 = var_460_1
            r8_16 = var_478
        
        rdx_56 += 1
        r12_4 = &r12_4[1]
        var_460_1 = rdx_56
        int64_t rcx_100 = sx.q(rax_108) * 3
        *(r8_16 + (rcx_100 << 3)) = rax_105.o
        *(r8_16 + (rcx_100 << 3) + 0x10) = rcx_98 + 0x60
    while (rdx_56 != rax_104)
    
    rdi_8 = var_4d8_1

int64_t performanceCount_8
QueryPerformanceCounter(&performanceCount_8)
void*** r12_5 = arg1
int64_t var_2f0 = var_478
int64_t var_2e0 = 0
int32_t var_2d8 = 0
int64_t var_2d0 = 0
int32_t var_2c8 = 0
int64_t var_2c0 = 0
int32_t var_2b8 = 0
int64_t var_2b0 = 0
int32_t var_2a8 = 0
int64_t var_2a0 = 0
int32_t var_298 = 0
int32_t var_518 = 3
int32_t var_540
var_540.q = &var_2c0
int32_t var_2e8 = rbx_25
int64_t* var_348
int64_t* rax_114 = sub_14101a620(&var_348, rax_4, &var_2a0, &var_2b0, *arg3, var_540, r12_5[0xef], 
    &var_2d0, &var_2e0, &var_2f0)

if (&r12_5[0xf0] != rax_114)
    int64_t* rcx_103 = r12_5[0xf0]
    r12_5[0xf0] = *rax_114
    *rax_114 = 0
    
    if (rcx_103 != 0)
        (*(*rcx_103 + 0x10))(rcx_103)

int64_t* rcx_104 = var_348

if (rcx_104 != 0)
    (*(*rcx_104 + 0x10))(rcx_104)

int64_t performanceCount_9
QueryPerformanceCounter(&performanceCount_9)
int64_t* rcx_106 = r12_5[0xf1]
int64_t* rbx_27 = r12_5[0xf0]
r12_5[0xf1] = 0

if (rcx_106 != 0)
    (*(*rcx_106 + 0x10))(rcx_106, 0)

(**rbx_27)(rbx_27, &data_142effdc0, &r12_5[0xf1])
int32_t r8_19 = r12_5[0xe].d
int64_t* rbx_28 = r12_5[0xf1]

if (rbx_2 s> r8_19)
    r12_5[0xe].d = rbx_2
    
    if (rbx_2 s> *(r12_5 + 0x74))
        sub_1405c4e40(&r12_5[0xd])
else if (rbx_2 s< r8_19)
    sub_140b52540(&r12_5[0xd], rbx_2, r8_19 - rbx_2, 1)

int32_t i_15 = var_448.d
int128_t zmm0_5
int128_t zmm1_3

if (i_15 s> 0)
    int64_t* r12_6 = var_450
    int64_t rdi_10 = 0
    uint64_t i_8 = zx.q(i_15)
    uint64_t i_1
    
    do
        int64_t rax_120 = *rbx_28
        int64_t rdx_62 = *r12_6
        int64_t var_178_1
        __builtin_memset(&var_178_1, 0xff, 0x20)
        int128_t* rax_121 = (*(rax_120 + 0x18))(rbx_28, rdx_62)
        int64_t var_168_1
        
        if (rax_121 == 0)
            zmm1_3 = var_168_1.o
            zmm0_5 = var_178_1.o
        else
            zmm0_5 = *rax_121
            zmm1_3 = rax_121[1]
            var_178_1.o = zmm0_5
            var_168_1.o = zmm1_3
        int128_t* rax_122 = arg1[0xd]
        r12_6 = &r12_6[1]
        *(rax_122 + rdi_10) = zmm0_5
        *(rax_122 + rdi_10 + 0x10) = zmm1_3
        rdi_10 += 0x20
        i_1 = i_8
        i_8 -= 1
    while (i_1 != 1)
    rdi_8 = var_4d8_1
    i_10 = zx.q(var_4d0.d)
    i_7 = zx.q(var_4c8.d)
    r12_5 = arg1

int32_t r8_21 = r12_5[6].d

if (i_9.d s> r8_21)
    r12_5[6].d = i_9.d
    
    if (i_9.d s> *(r12_5 + 0x34))
        sub_1405c4e40(&r12_5[5])
else if (i_9.d s< r8_21)
    sub_140b52540(&r12_5[5], i_9.d, r8_21 - i_9.d, 1)

if (i_9.d s> 0)
    int64_t* r12_7 = var_4b0
    int64_t rdi_11 = 0
    uint64_t i_2
    
    do
        int64_t rax_123 = *rbx_28
        int64_t rdx_65 = *r12_7
        int64_t var_158_1
        __builtin_memset(&var_158_1, 0xff, 0x20)
        int128_t* rax_124 = (*(rax_123 + 0x18))(rbx_28, rdx_65)
        int64_t var_148_1
        
        if (rax_124 == 0)
            zmm1_3 = var_148_1.o
            zmm0_5 = var_158_1.o
        else
            zmm0_5 = *rax_124
            zmm1_3 = rax_124[1]
            var_158_1.o = zmm0_5
            var_148_1.o = zmm1_3
        int128_t* rax_125 = arg1[5]
        r12_7 = &r12_7[1]
        *(rax_125 + rdi_11) = zmm0_5
        *(rax_125 + rdi_11 + 0x10) = zmm1_3
        rdi_11 += 0x20
        i_2 = i_9
        i_9 -= 1
    while (i_2 != 1)
    rdi_8 = var_4d8_1
    i_7 = zx.q(var_4c8.d)
    r12_5 = arg1

int32_t r8_23 = r12_5[0xa].d

if (i_10.d s> r8_23)
    r12_5[0xa].d = i_10.d
    
    if (i_10.d s> *(r12_5 + 0x54))
        sub_1405c4e40(&r12_5[9])
else if (i_10.d s< r8_23)
    sub_140b52540(&r12_5[9], i_10.d, r8_23 - i_10.d, 1)

if (i_10.d s> 0)
    int64_t* r14_6 = var_4a0
    int128_t* r12_8 = nullptr
    uint64_t i_3
    
    do
        int64_t rax_126 = *rbx_28
        int64_t rdx_68 = *r14_6
        int64_t var_138_1
        __builtin_memset(&var_138_1, 0xff, 0x20)
        int128_t* rax_127 = (*(rax_126 + 0x18))(rbx_28, rdx_68)
        int64_t var_128_1
        
        if (rax_127 == 0)
            zmm1_3 = var_128_1.o
            zmm0_5 = var_138_1.o
        else
            zmm0_5 = *rax_127
            zmm1_3 = rax_127[1]
            var_138_1.o = zmm0_5
            var_128_1.o = zmm1_3
        int64_t rax_128 = arg1[9]
        r14_6 = &r14_6[1]
        *(r12_8 + rax_128) = zmm0_5
        *(r12_8 + rax_128 + 0x10) = zmm1_3
        r12_8 = &r12_8[2]
        i_3 = i_10
        i_10 -= 1
    while (i_3 != 1)
    rdi_8 = var_4d8_1
    r12_5 = arg1

int32_t r8_25 = r12_5[0x12].d

if (i_7.d s> r8_25)
    r12_5[0x12].d = i_7.d
    
    if (i_7.d s> *(r12_5 + 0x94))
        sub_1405c4e40(&r12_5[0x11])
else if (i_7.d s< r8_25)
    sub_140b52540(&r12_5[0x11], i_7.d, r8_25 - i_7.d, 1)

if (i_7.d s> 0)
    int64_t* r14_7 = var_490
    int128_t* r15_6 = nullptr
    uint64_t i_4
    
    do
        int64_t rax_129 = *rbx_28
        int64_t rdx_71 = *r14_7
        int64_t var_118_1
        __builtin_memset(&var_118_1, 0xff, 0x20)
        int128_t* rax_130 = (*(rax_129 + 0x18))(rbx_28, rdx_71)
        int64_t var_108_1
        
        if (rax_130 == 0)
            zmm1_3 = var_108_1.o
            zmm0_5 = var_118_1.o
        else
            zmm0_5 = *rax_130
            zmm1_3 = rax_130[1]
            var_118_1.o = zmm0_5
            var_108_1.o = zmm1_3
        int64_t rax_131 = r12_5[0x11]
        r14_7 = &r14_7[1]
        *(r15_6 + rax_131) = zmm0_5
        *(r15_6 + rax_131 + 0x10) = zmm1_3
        r15_6 = &r15_6[2]
        i_4 = i_7
        i_7 -= 1
    while (i_4 != 1)

int32_t r15_7 = 1 << (data_1439c7a34).b
int64_t var_3e4 = 0
int32_t var_3f8 = arg1[6].d
int32_t var_3f4 = arg1[0xa].d
int64_t var_3ec = 0
int32_t var_3f0 = 1
int64_t r12_10 = *(arg2 + 0x20)
int32_t i_11 = r15_7 - 1

if (r15_7 != 1)
    uint64_t rflags_3
    int32_t temp0_7
    temp0_7, rflags_3 = _bit_scan_forward(i_11)
    int32_t r14_8 = temp0_7
    int32_t var_328_1 = r14_8
    int32_t i_5
    
    do
        uint64_t r8_27 = zx.q(r14_8)
        void* rbx_30 = r8_27 * 0x1b8 + arg1
        sub_141025310(rbx_30 + 0x98, &var_3f8, *(r12_10 + (r8_27 << 3) + 0x9d8))
        int32_t r10_1 = arg1[6].d
        int32_t r8_29 = 0
        int64_t r11_1 = arg1[5]
        
        if (r10_1 s> 0)
            do
                void* rdx_74 = *(rbx_30 + 0xe0)
                uint64_t rax_137 = zx.q((r8_29 << 6) + *(rbx_30 + 0xb0))
                
                if ((rdx_74.b & 1) != 0)
                    rdx_74 = (rdx_74 s>> 1) + rbx_30 + 0xe0
                
                int64_t rcx_123 = sx.q(r8_29)
                r8_29 += 1
                int64_t rcx_124 = rcx_123 << 5
                *(rax_137 + rdx_74) = *(rcx_124 + r11_1)
                *(rax_137 + rdx_74 + 0x10) = *(rcx_124 + r11_1 + 0x10)
                *(rbx_30 + 0xf8) = 1
            while (r8_29 s< r10_1)
        
        int32_t j = 0
        int128_t* r9_12 = arg1[9]
        
        if (*(rbx_30 + 0xa8) u> 0)
            do
                void* rcx_126 = *(rbx_30 + 0xe0)
                uint64_t rax_140 = zx.q(j * *(rbx_30 + 0xd4) + *(rbx_30 + 0xb4))
                
                if ((rcx_126.b & 1) != 0)
                    rcx_126 = (rcx_126 s>> 1) + rbx_30 + 0xe0
                
                j += 1
                *(rax_140 + rcx_126) = *r9_12
                *(rax_140 + rcx_126 + 0x10) = r9_12[1]
                *(rbx_30 + 0xf8) = 1
            while (j u< *(rbx_30 + 0xa8))
        
        int128_t* rdx_75 = arg1[0xd]
        void* rcx_127 = *(rbx_30 + 0xe0)
        
        if ((rcx_127.b & 1) != 0)
            rcx_127 = (rcx_127 s>> 1) + rbx_30 + 0xe0
        
        uint64_t rax_142 = zx.q(*(rbx_30 + 0xb8))
        *(rax_142 + rcx_127) = *rdx_75
        *(rax_142 + rcx_127 + 0x10) = rdx_75[1]
        *(rbx_30 + 0xf8) = 1
        i_5 = not.d(1 << r14_8.b) & i_11
        i_11 = i_5
        
        if (i_5 != 0)
            uint64_t rflags_4
            int32_t temp0_8
            temp0_8, rflags_4 = _bit_scan_forward(i_5)
            r14_8 = temp0_8
            int32_t var_420_1 = r14_8
        else
            r14_8 = 0x20
    while (i_5 != 0)
    rdi_8 = var_4d8_1

int64_t performanceCount_10
QueryPerformanceCounter(&performanceCount_10)
int64_t rax_145 = var_478

if (rax_145 != 0)
    sub_140a74f90(rax_145)

if (rdi_8 != 0)
    rdi_8[9].d -= 1
    
    if (rdi_8[9].d == 1)
        sub_140a2f6e0(rbx_24)

int64_t* rcx_133 = var_490

if (rcx_133 != 0)
    sub_140a74f90(rcx_133)

int64_t* rcx_134 = var_450

if (rcx_134 != 0)
    sub_140a74f90(rcx_134)

int64_t* rcx_135 = var_4a0

if (rcx_135 != 0)
    sub_140a74f90(rcx_135)

int64_t* rcx_136 = var_4b0

if (rcx_136 != 0)
    sub_140a74f90(rcx_136)

sub_1408466d0(&var_f8)
int64_t* r12_11 = var_4e8

if (r12_11 != 0)
    sub_140a74f90(r12_11)

int32_t var_180_2 = 0

if (var_188 != 0)
    sub_140a74f90(var_188)

sub_14100e680(&var_1c8)
__security_check_cookie(rax_1 ^ &var_568)
return arg1
