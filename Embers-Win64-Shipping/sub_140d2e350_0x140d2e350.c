// 函数: sub_140d2e350
// 地址: 0x140d2e350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_448
int64_t rax_1 = __security_cookie ^ &var_448
void var_f8
sub_140bd5c10(&var_f8, 0)

if (data_143de542d == 0)
    arg1[3].d &= 0xffffffef
    *(arg1 + 0x1c) &= 0xbfffffff

void* rbx = *arg1
int16_t var_e7 = 0x100
int32_t i_12
sub_140865c40(&arg1[7], &i_12, rbx)
int64_t i_15 = sx.q(i_12)
int32_t rsi = 0
void* result
void* result_2

if (i_15.d == 0xffffffff)
label_140d2e400:
    void* rax_3 = sub_140d209c0(rbx)
    int64_t* r10_1 = arg1[6]
    void* r11_1
    
    if (*(rax_3 + 0x10) != r10_1)
        r11_1 = nullptr
    else
        void* rax_4 = sub_140d209c0(*arg1)
        r10_1 = arg1[6]
        r11_1 = rax_4
    
    void* r9_1 = *arg1
    int32_t rax_5 = *(r9_1 + 0xc)
    int64_t rdx_5
    
    if (rax_5 s>= data_143e1d9b4)
        rdx_5 = 0
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_5)
        uint32_t rdx_3 = zx.d(temp0_1)
        int32_t rax_7 = temp1_1 + rdx_3
        rdx_5 = *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3)) + sx.q(zx.d(rax_7.w) - rdx_3) * 0x18
    
    int32_t var_410
    var_410.q = &var_f8
    int32_t var_420
    var_420.q = r11_1
    void* result_1 = sub_140d2dfc0(r10_1, arg1[1], arg1[2], arg1[4].d | (arg1[3].d & *(r9_1 + 8)), 
        *(arg1 + 0x24) | (*(arg1 + 0x1c) & *(rdx_5 + 8)), var_420, 1, var_410, 0)
    result_2 = result_1
    result = result_1
else
    void* rcx_2 = arg1[7] + i_15 * 0x18
    
    if (rcx_2 == 0)
        goto label_140d2e400
    
    result_2 = *(rcx_2 + 8)
    result = result_2
    
    if (result_2 == 0)
        goto label_140d2e400

void var_360
sub_140b4c850(&var_360, 0)
int64_t var_180
__builtin_memset(&var_180, 0, 0x2c)
void** const var_188 = &data_142eb0060
int32_t var_154 = 0x80
int32_t var_150 = 0xffffffff
int32_t var_14c = 0
int64_t var_140 = 0
int32_t var_138 = 0
CRITICAL_SECTION criticalSection
InitializeCriticalSection(&criticalSection)
SetCriticalSectionSpinCount(&criticalSection, 0xfa0)
int32_t rax_16 = arg1[8].d - *(arg1 + 0x6c)
int128_t var_108 = zx.o(0)
int32_t var_3dc
int64_t* var_3d8
int32_t var_3b8
void* var_3b0

if (rax_16 s> 0)
    int32_t r10_2 = arg1[0xc].d
    void* r9_4 = &arg1[9]
    int32_t var_3b4_1 = 1
    int32_t rcx_13 = 0
    var_3b8 = 0
    int32_t r8_3 = 0
    var_3b0 = r9_4
    int32_t var_3a8_1 = 0xffffffff
    int64_t var_3a4_1 = 0
    
    if (r10_2 != 0)
        void* rax_17 = *(r9_4 + 0x10)
        
        if (rax_17 != 0)
            r9_4 = rax_17
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_2 - 1)
        int32_t rdx_11 = *r9_4
        
        if (rdx_11 != 0)
        label_140d2e5c9:
            int32_t rax_24 = ((rdx_11 - 1) & rdx_11) ^ rdx_11
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_24)
            int32_t var_3b4_2 = rax_24
            int32_t rax_25
            
            if (rax_24 == 0)
                rax_25 = 0x20
            else
                rax_25 = 0x1f - temp0_2
            
            var_3a4_1.d = r8_3 - rax_25 + 0x1f
            
            if (r8_3 - rax_25 + 0x1f s> r10_2)
                var_3a4_1.d = r10_2
        else
            while (true)
                int64_t rdx_12 = sx.q(rcx_13)
                r8_3 += 0x20
                rcx_13 += 1
                var_3a4_1:4.d = r8_3
                var_3b8 = rcx_13
                
                if (rdx_12.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r9_4 + (rdx_12 << 2) + 4)
                var_3a8_1 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_140d2e5c9
            
            var_3a4_1.d = r10_2
    
    uint128_t zmm4_1 = var_3a8_1.o
    void* var_320_1 = &arg1[7]
    uint128_t zmm0_1 = var_3b8.o
    uint128_t var_330_1 = zmm4_1
    int16_t var_380_1 = 0
    void* rax_27 = zmm0_1.q
    var_3a8_1.o = zmm0_1
    var_3b8.o = (&arg1[7]).o
    zmm0_1.q = (_mm_unpackhi_pd(zmm4_1, zmm4_1.q)).q
    uint128_t var_398_1 = zmm0_1
    
    if (_mm_bsrli_si128(zmm4_1, 4).d s< *(rax_27 + 0x18))
        int32_t i_5
        int32_t i = i_5
        
        do
            int64_t rbx_1 = *var_3b8.q
            int64_t rcx_16 = sx.q(i) * 3
            int64_t rdi_1 = *(rbx_1 + (rcx_16 << 3))
            int64_t rbx_2 = *(rbx_1 + (rcx_16 << 3) + 8)
            EnterCriticalSection(&criticalSection)
            var_108.q = rdi_1
            var_108:8.q = rbx_2
            
            if (rbx_2 != 0)
                var_3d8 = &var_108
                int32_t var_3d0
                var_3d0.q = &var_108:8
                sub_140bbe6a0(&var_180, &var_3dc, &var_3d8, nullptr)
            else
                EnterCriticalSection(&criticalSection)
                var_108.q = rdi_1
                var_108:8.q = 0
                sub_140868c90(&var_180, rdi_1)
                LeaveCriticalSection(&criticalSection)
            
            LeaveCriticalSection(&criticalSection)
            var_3a4_1:4.d &= not.d(var_3b0:4.d)
            sub_14059bdd0(&var_3b0)
            i = i_5
        while (i s< *(var_3a8_1.q + 0x18))
        
        if (var_380_1.b != 0 && var_380_1:1.b != 0)
            sub_1405b6470(&arg1[7], arg1[8].d - *(arg1 + 0x6c), 1)

void** var_268
sub_140bbfa20(&var_268, &var_188, &var_360, *arg1, result_2, arg1[3].d, arg1[4].d, *(arg1 + 0x1c), 
    *(arg1 + 0x24), &var_f8, arg1[5].d)
bool cond:0 = data_143de542d == 0
int64_t* r14 = nullptr
var_3d8 = nullptr
int32_t i_11 = 0
i_12 = 0
int32_t var_3cc = 0

if (not(cond:0))
    void* const rbx_3 = *arg1
    void* rax_39
    int64_t rax_40
    void* rdx_18
    
    if (rbx_3 != 0)
        rax_39 = sub_140be01c0()
        rdx_18 = *(rbx_3 + 0x10)
        rax_40 = sx.q(*(rax_39 + 0x38))
    
    if (rbx_3 == 0 || rax_40.d s> *(rdx_18 + 0x38)
            || *(*(rdx_18 + 0x30) + (rax_40 << 3)) != rax_39 + 0x30)
        rbx_3 = nullptr
    
    sub_140ba19d0(rbx_3, &var_268)

sub_140d20400(*arg1, result_2, &var_188, &var_268)
sub_140ca7fa0(&var_f8, result_2, nullptr)
int32_t i_6
int32_t i_1 = i_6
int64_t var_1a0

if (i_1 != 0)
    do
        int64_t r10_3 = var_1a0
        int64_t* rdi_2 = *(r10_3 + (sx.q(i_1 - 1) << 3))
        
        if (0 != 0)
            memmove(r10_3 + (sx.q(i_1 - 1) << 3), r10_3 + (sx.q(i_1) << 3), 0 << 3)
            i_1 = i_6
        
        i_6 = i_1 - 1
        sub_1405c53d0(&var_1a0)
        (*(*rdi_2 + 0xa0))(rdi_2, &var_268)
        int64_t i_14 = sx.q(i_11)
        i_11 = (i_14 + 1).d
        
        if (i_11 s> rsi)
            sub_1405a4d70(&var_3d8)
            rsi = var_3cc
            r14 = var_3d8
        
        r14[i_14] = rdi_2
        i_1 = i_6
    while (i_1 != 0)
    
    i_12 = i_11

char var_3e8 = 0
char* var_368 = &var_3e8
void*** (* var_370)() = sub_140884c50
int32_t* rdi_3 = *(sub_140a756e0(&var_370, &data_14397f5f0) + 0x48)

if (rdi_3 != 0)
    *rdi_3 += 1

int64_t var_428_2 = arg1[1]
void** var_318
sub_140bbf990(&var_318, &var_188, &var_360, arg1[5].d)

if (rdi_3 != 0)
    *rdi_3 += 1

int32_t* var_270

if (var_270 != 0)
    int32_t temp5_1 = *var_270
    *var_270 -= 1
    
    if (temp5_1 == 1)
        sub_140d3a300(var_270)
        j_sub_140a74f90(var_270)

int32_t var_3e0

if (i_11 s> 0)
    uint64_t i_8 = zx.q(i_11)
    uint64_t i_2
    
    do
        void* rsi_1 = *r14
        EnterCriticalSection(&criticalSection)
        int64_t* rbx_7
        
        if (rsi_1 == var_108.q)
            rbx_7 = var_108:8.q
        else
            var_108.q = rsi_1
            sub_140865c40(&var_180, &var_3e0, rsi_1)
            int64_t rax_51 = sx.q(var_3e0)
            void* rbx_5
            
            if (rax_51.d != 0xffffffff)
                rbx_5 = var_180 + rax_51 * 0x18
            
            if (rax_51.d == 0xffffffff || rbx_5 == 0 || rbx_5 == -8)
                rbx_7 = nullptr
                var_108:8.q = 0
            else
                rbx_7 = *(rbx_5 + 8)
                var_108:8.q = rbx_7
        
        LeaveCriticalSection(&criticalSection)
        int64_t r15 = *(rdi_3 + 0x80)
        void*** rdx_29 = &var_318
        *(rdi_3 + 0x80) = rbx_7
        
        if (((*(rsi_1 + 8) u>> 4).b & 1) != 0)
            int32_t var_2ec
            int32_t var_2ec_1 = var_2ec + 1
            (*(*rbx_7 + 0xa0))(rbx_7, rdx_29)
            var_2ec = var_2ec_1 - 1
        else
            (*(*rbx_7 + 0xa0))(rbx_7, rdx_29)
        
        r14 = &r14[1]
        *(rdi_3 + 0x80) = r15
        i_2 = i_8
        i_8 -= 1
    while (i_2 != 1)
    i_11 = i_12
    r14 = var_3d8

var_e7.b = 1
uint64_t i_10

if (i_11 s> 0)
    uint64_t i_7 = zx.q(i_11)
    int64_t* r12_1 = r14
    i_10 = i_7
    void* r14_1 = &arg1[7]
    uint64_t i_3
    
    do
        int64_t rbx_8 = *r12_1
        sub_140865c40(r14_1, &var_3e0, rbx_8)
        int64_t rax_57 = sx.q(var_3e0)
        int64_t rax_59
        
        if (rax_57.d != 0xffffffff)
            rax_59 = *r14_1 + rax_57 * 0x18
        
        if (rax_57.d == 0xffffffff || rax_59 == 0 || rax_59 == -8)
            EnterCriticalSection(&criticalSection)
            int64_t* rbx_11
            
            if (rbx_8 == var_108.q)
                rbx_11 = var_108:8.q
            else
                var_108.q = rbx_8
                sub_140865c40(&var_180, &var_3dc, rbx_8)
                int64_t rax_61 = sx.q(var_3dc)
                void* rbx_9
                
                if (rax_61.d != 0xffffffff)
                    rbx_9 = var_180 + rax_61 * 0x18
                
                if (rax_61.d == 0xffffffff || rbx_9 == 0 || rbx_9 == -8)
                    rbx_11 = nullptr
                    var_108:8.q = 0
                else
                    rbx_11 = *(rbx_9 + 8)
                    var_108:8.q = rbx_11
            
            LeaveCriticalSection(&criticalSection)
            sub_140d209c0(rbx_11)
            (*(*rbx_11 + 0xc0))(rbx_11, zx.q(*(arg1 + 0x2c)))
            int64_t* rax_64 = rbx_11
            
            while ((rax_64[1].b & 0x30) == 0)
                rax_64 = rax_64[4]
                
                if (rax_64 == 0)
                    char var_3e7 = rax_64.b
                    var_3b8.q = sub_140884c50
                    var_3b0 = &var_3e7
                    void* rax_65 = sub_140a756e0(&var_3b8, &data_14397f5f0)
                    char rsi_2 = *(rax_65 + 0x20)
                    *(rax_65 + 0x20) = 1
                    sub_140cd85e0(rbx_11)
                    *(rax_65 + 0x20) = rsi_2
                    r14_1 = &arg1[7]
                    i_7 = i_10
                    break
            
            sub_140cd8040(rbx_11, 0)
        
        r12_1 = &r12_1[1]
        i_3 = i_7
        i_7 -= 1
        i_10 = i_7
    while (i_3 != 1)
    i_11 = i_12

int64_t* r12_2 = var_3d8

if (arg1[0x11] != 0 && i_11 s> 0)
    int64_t* rsi_3 = r12_2
    uint64_t i_9 = zx.q(i_11)
    uint64_t i_4
    
    do
        int64_t* rbx_12 = *rsi_3
        var_3d8 = rbx_12
        sub_140865c40(&arg1[7], &var_3dc, rbx_12)
        int64_t rax_66 = sx.q(var_3dc)
        int64_t rax_68
        
        if (rax_66.d != 0xffffffff)
            rax_68 = arg1[7] + rax_66 * 0x18
        
        if (rax_66.d == 0xffffffff || rax_68 == 0 || rax_68 == -8)
            EnterCriticalSection(&criticalSection)
            uint64_t i_13
            
            if (rbx_12 == var_108.q)
                i_13 = var_108:8.q
            else
                var_108.q = rbx_12
                sub_140865c40(&var_180, &var_3e0, rbx_12)
                int64_t rax_70 = sx.q(var_3e0)
                void* rax_72
                
                if (rax_70.d != 0xffffffff)
                    rax_72 = var_180 + rax_70 * 0x18
                
                if (rax_70.d == 0xffffffff || rax_72 == 0 || rax_72 == -8)
                    i_13 = 0
                    var_108:8.q = 0
                else
                    i_13 = *(rax_72 + 8)
                    var_108:8.q = i_13
            
            i_10 = i_13
            LeaveCriticalSection(&criticalSection)
            int64_t* rcx_57 = arg1[0x11]
            var_3b8.q = &var_3d8
            var_3b0 = &i_10
            sub_140bd2cc0(rcx_57, &i_12, &var_3b8, nullptr)
        
        rsi_3 = &rsi_3[1]
        i_4 = i_9
        i_9 -= 1
    while (i_4 != 1)

if (rdi_3 != 0)
    int32_t temp6_1 = *rdi_3
    *rdi_3 -= 1
    
    if (temp6_1 == 1)
        sub_140d3a300(rdi_3)
        j_sub_140a74f90(rdi_3)

sub_140b4cb40(&var_318)

if (rdi_3 != 0)
    int32_t temp7_1 = *rdi_3
    *rdi_3 -= 1
    
    if (temp7_1 == 1)
        sub_140d3a300(rdi_3)
        j_sub_140a74f90(rdi_3)

if (r12_2 != 0)
    sub_140a74f90(r12_2)

int64_t rcx_64 = var_1a0

if (rcx_64 != 0)
    sub_140a74f90(rcx_64)

int32_t* var_1a8

if (var_1a8 != 0)
    int32_t temp14_1 = *var_1a8
    *var_1a8 -= 1
    
    if (temp14_1 == 1)
        sub_140d3a300(var_1a8)
        j_sub_140a74f90(var_1a8)

sub_140b4cb40(&var_268)
var_188 = &data_142eb0060
EnterCriticalSection(&criticalSection)
var_108.q = 0
var_108:8.q = 0
sub_140865470(&var_180, 0)
LeaveCriticalSection(&criticalSection)
DeleteCriticalSection(&criticalSection)
sub_1405ae080(&var_180)
var_188 = &data_142d56fa0
pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_360)
void var_90
sub_1405ae080(&var_90)
void var_e0
sub_1405ae080(&var_e0)
__security_check_cookie(rax_1 ^ &var_448)
return result
