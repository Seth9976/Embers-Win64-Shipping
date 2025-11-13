// 函数: sub_140d3bfe0
// 地址: 0x140d3bfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t rbx_1 = arg5 | 0x10000000
arg5 = rbx_1

if (data_14399ea98() == 0)
    arg5 = rbx_1 | 0x8000000

sub_140d3c660()
bool z

if (0 == data_143e1adfc)
    data_143e1adfc = 0
    z = true
else
    data_143e1adfc
    z = false

bool rcx

if (not(z) && data_143de5480 != 0)
    rcx = GetCurrentThreadId() == data_143de5470

CRITICAL_SECTION* lpCriticalSection_1
CRITICAL_SECTION* lpCriticalSection

if (z || (data_143de5480 != 0 && rcx == 0))
    lpCriticalSection = &data_143e1dad0
    lpCriticalSection_1 = &data_143e1dad0
    EnterCriticalSection(&data_143e1dad0)
else
    lpCriticalSection = nullptr
    lpCriticalSection_1 = nullptr

int64_t* var_58 = nullptr
int32_t var_50 = 0
int32_t var_4c = 1
int64_t* rdi = nullptr
int32_t var_174
sub_1405ba560(&data_143e1db98, &var_174, arg1)
int64_t rax_5 = sx.q(var_174)
int64_t rcx_3

if (rax_5.d == 0xffffffff)
    rcx_3 = 0
else
    rcx_3 = (rax_5 << 5) + data_143e1db98

int64_t result = rcx_3 + 8

if (rcx_3 == 0)
    result = 0

if (result == 0)
label_140d3c5a2:
    
    if (lpCriticalSection != 0)
        result = LeaveCriticalSection(lpCriticalSection)
    
    __security_check_cookie(rax_1 ^ &var_198)
    return result

int32_t rcx_4 = 1
int32_t var_50_1 = 1
int64_t result_2 = result
label_140d3c11a:
int64_t* r9 = &result_2

if (rdi != 0)
    r9 = rdi

int64_t* r13_1 = r9[sx.q(rcx_4 - 1)]

if (0 != 0)
    memmove(&r9[sx.q(rcx_4 - 1)], &r9[sx.q(rcx_4)], 0 << 3)
    rcx_4 = var_50_1

var_50_1 = rcx_4 - 1
sub_140d3e790(&result_2)
int64_t result_3 = r13_1[1]
int64_t* var_108_1 = r13_1
int64_t result_4

if (result_3 == 0 || *r13_1 != 0)
    result_4 = 0
else
    result_4 = result_3

int32_t rcx_9 = 0
int32_t r8_3 = 0
int128_t* rax_22
int32_t var_160
void* var_158
int32_t var_150
int64_t var_14c
int32_t var_138
void* var_130
int32_t var_128
int64_t var_124
int64_t zmm2

if (result_4 == 0)
    int32_t r11_1 = data_1439aadb8
    var_138 = 0
    int32_t var_134_1 = 1
    var_130 = &data_1439aada0
    var_128 = 0xffffffff
    var_124 = 0
    
    if (r11_1 != 0)
        void* rax_23 = data_1439aadb0
        void* r9_2 = &data_1439aada0
        
        if (rax_23 != 0)
            r9_2 = rax_23
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rdx_8 = *r9_2
        
        if (rdx_8 != 0)
        label_140d3c30c:
            int32_t rax_30 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_30)
            int32_t var_134_2 = rax_30
            int32_t rax_31
            
            if (rax_30 == 0)
                rax_31 = 0x20
            else
                rax_31 = 0x1f - temp0_4
            
            var_124.d = r8_3 - rax_31 + 0x1f
            
            if (r8_3 - rax_31 + 0x1f s> r11_1)
                var_124.d = r11_1
        else
            while (true)
                int64_t rdx_9 = sx.q(rcx_9)
                r8_3 += 0x20
                rcx_9 += 1
                var_124:4.d = r8_3
                var_138 = rcx_9
                
                if (rdx_9.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r9_2 + (rdx_9 << 2) + 4)
                var_128 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_140d3c30c
            
            var_124.d = r11_1
    
    var_160.q = &data_1439aad90
    int128_t var_90
    rax_22 = &var_90
    int64_t* var_68_1 = &data_1439aad90
    var_158.o = var_138.o
    var_14c:4.o = 0xffffffff
    zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    var_90 = var_160.o
    int128_t var_80_1 = var_150.o
    int64_t var_70_1 = zmm2
else
    int32_t rdi_1 = *(result_4 + 0x28)
    void* r9_1 = result_4 + 0x10
    var_160 = 0
    int32_t var_15c_1 = 1
    var_158 = r9_1
    var_150 = 0xffffffff
    var_14c = 0
    
    if (rdi_1 != 0)
        void* rax_12 = *(r9_1 + 0x10)
        
        if (rax_12 != 0)
            r9_1 = rax_12
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rdi_1 - 1)
        int32_t rdx_4 = *r9_1
        
        if (rdx_4 != 0)
        label_140d3c21b:
            int32_t rax_19 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_19)
            int32_t var_15c_2 = rax_19
            int32_t rax_20
            
            if (rax_19 == 0)
                rax_20 = 0x20
            else
                rax_20 = 0x1f - temp0_2
            
            var_14c.d = r8_3 - rax_20 + 0x1f
            
            if (r8_3 - rax_20 + 0x1f s> rdi_1)
                var_14c.d = rdi_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_9)
                r8_3 += 0x20
                rcx_9 += 1
                var_14c:4.d = r8_3
                var_160 = rcx_9
                
                if (rdx_5.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                var_150 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_140d3c21b
            
            var_14c.d = rdi_1
    
    var_138.q = result_4
    int128_t var_c0
    rax_22 = &var_c0
    int64_t result_5 = result_4
    var_130.o = var_160.o
    var_124:4.o = 0xffffffff
    zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    var_c0 = var_138.o
    int128_t var_b0_1 = var_128.o
    int64_t var_a0_1 = zmm2
int128_t zmm1 = rax_22[1]
int128_t var_100 = *rax_22
int128_t var_f0_1 = zmm1
int128_t var_e0_1 = rax_22[2]

if (result_3 != 0)
    result = result_3

if (result_3 == 0 || *r13_1 != 0)
    result = nullptr

bool r15_1 = result != 0
bool var_d0_1 = r15_1

if (*r13_1 != 0 || result_3 != 0)
    result.b = 0
else
    result.b = 1

char r14_1 = 0
char result_1 = result.b
char var_ce_1 = nullptr

while (true)
    int32_t r12_1 = var_f0_1:0xc.d
    
    while (true)
        if (r15_1 == 0)
            result.b = result.b == 0
        else
            result.b = r12_1 s< *(var_f0_1.q + 0x18)
        
        if (result.b == 0)
            rcx_4 = var_50_1
            
            if (rcx_4 != 0)
                rdi = var_58
                goto label_140d3c11a
            
            lpCriticalSection = lpCriticalSection_1
            
            if (var_58 != 0)
                result = sub_140a74f90(var_58)
            
            goto label_140d3c5a2
        
        void* rax_35
        
        if (r15_1 == 0)
            uint64_t rax_36 = zx.q(r14_1)
            char temp5_1 = rax_36.b
            rax_36.b = neg.b(rax_36.b)
            rax_35 = (zx.q((sbb.q(rax_36, rax_36, temp5_1 != 0)).d) & 8) + r13_1
        else
            rax_35 = (sx.q(r12_1) << 4) + *var_100.q
        
        void* rdi_2 = *rax_35
        
        if ((*(rdi_2 + 8) & arg4) == 0)
            int32_t rax_39 = *(rdi_2 + 0xc)
            
            if (rax_39 s>= data_143e1d9b4)
                result = 0
            else
                uint32_t rdx_10 = zx.d(rax_39.w)
                
                if (rax_39 s< 0)
                    rax_39 += 0xffff
                    rdx_10 -= 0x10000
                
                result = *(data_143e1d9a0 + (sx.q(rax_39 s>> 0x10) << 3)) + sx.q(rdx_10) * 0x18
            
            if ((*(result + 8) & arg5) == 0)
                void* var_168 = rdi_2
                (*arg2)(*(arg2 + 8), &var_168)
        
        if (arg3 != 0)
            int32_t var_16c
            sub_1405ba560(&data_143e1db98, &var_16c, rdi_2)
            int64_t rax_44 = sx.q(var_16c)
            int64_t rcx_19
            
            if (rax_44.d == 0xffffffff)
                rcx_19 = 0
            else
                rcx_19 = (rax_44 << 5) + data_143e1db98
            
            int64_t rdi_3 = rcx_19 + 8
            
            if (rcx_19 == 0)
                rdi_3 = 0
            
            if (rdi_3 != 0)
                int64_t rsi_1 = sx.q(var_50_1)
                int32_t rax_45 = (rsi_1 + 1).d
                var_50_1 = rax_45
                
                if (rax_45 s> var_4c)
                    sub_140809610(&result_2, rsi_1.d)
                
                int64_t* rcx_21 = &result_2
                
                if (var_58 != 0)
                    rcx_21 = var_58
                
                rcx_21[rsi_1] = rdi_3
        
        if (r15_1 != 0)
            var_f0_1:8.d &= not.d(var_100:0xc.d)
            sub_14059bdd0(&var_100:8)
            result = zx.q(result_1)
            r14_1 = var_ce_1
            r15_1 = var_d0_1
            r13_1 = var_108_1
            break
        
        if (r14_1 == 0 && r13_1[1] != 0)
            result.b = 0
            r14_1 = 1
            result_1 = 0
            var_ce_1 = 1
            continue
        
        result.b = 1
        result_1 = 1
        r14_1 = 1
        var_ce_1 = 1
