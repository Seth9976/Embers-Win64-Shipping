// 函数: sub_141dbe680
// 地址: 0x141dbe680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int32_t var_2c = 0x18
void* var_38 = nullptr
int32_t var_30 = 0
void* rax_2 = sub_142459c10()
void* const rdi_1

if (rax_2 == 0)
    rdi_1 = nullptr
else
    void* rax_3 = sub_142459c10()
    
    if (rax_3 == 0)
        rdi_1 = nullptr
    else
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s> *(rax_2 + 0x38))
            rdi_1 = nullptr
        else
            rdi_1 = rax_2
            
            if (*(*(rax_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                rdi_1 = nullptr

void var_f8
void* r8 = &var_f8

if (rdi_1 != sub_142459c10())
    sub_1419f71f0(arg1, rax_2, r8)
else
    sub_1419f6fe0(arg1, rax_2, r8)

void* rbx_1 = &var_f8
int64_t var_148 = 0
int32_t rcx_2 = 0
int64_t var_13c = 0

if (var_38 != 0)
    rbx_1 = var_38

int32_t var_140 = 0
int32_t rdx_3 = 0
int64_t rdi_2 = 0
int32_t var_11c = 0x80
int64_t r14 = sx.q(var_30) << 3
int64_t var_134
__builtin_memset(&var_134, 0, 0x18)
uint64_t r14_1 = r14 u>> 3
int32_t var_118 = 0xffffffff
int32_t var_114 = 0

if (rbx_1 u> r14 + rbx_1)
    r14_1 = 0

int64_t var_108 = 0
int32_t var_100 = 0

if (r14_1 != 0)
    do
        void* rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            sub_141dbb460(rcx_3, &var_148)
        
        rbx_1 += 8
        rdi_2 += 1
    while (rdi_2 != r14_1)
    
    rdx_3 = var_114
    rcx_2 = var_140

char var_1f8 = 0
char* var_1d0 = &var_1f8
char** var_1c8 = &var_1d0
char*** var_1c0

if (rcx_2 - rdx_3 s> 0)
    sub_1407e8ed0(&var_148)
    char r8_1 = var_1f8
    int64_t rcx_6 = var_148
    var_1c0 = &var_1c8
    sub_140b2d2f0(rcx_6, var_140 - var_114, r8_1)

sub_1405c0420(&var_148)
void* var_1e8 = &var_13c:4
int32_t rcx_8 = 0
int32_t var_1f0 = 0
int32_t var_1e0 = 0xffffffff
int32_t r8_2 = 0
int32_t var_1ec = 1
int64_t var_1dc = 0
void* var_128
int32_t var_120

if (var_120 != 0)
    void* r10_1 = &var_13c:4
    
    if (var_128 != 0)
        r10_1 = var_128
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_120 - 1)
    int32_t rdx_9 = *r10_1
    
    if (rdx_9 != 0)
    label_141dbe898:
        int32_t rax_17 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_17)
        int32_t var_1ec_1 = rax_17
        int32_t rax_18
        
        if (rax_17 == 0)
            rax_18 = 0x20
        else
            rax_18 = 0x1f - temp0_2
        
        int32_t rax_19 = r8_2 - rax_18 + 0x1f
        
        if (rax_19 s> var_120)
            rax_19 = var_120
        
        var_1dc.d = rax_19
    else
        while (true)
            int64_t rdx_10 = sx.q(rcx_8)
            r8_2 += 0x20
            rcx_8 += 1
            var_1dc:4.d = r8_2
            var_1f0 = rcx_8
            
            if (rdx_10.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_1dc.d = var_120
                break
            
            rdx_9 = *(r10_1 + (rdx_10 << 2) + 4)
            var_1e0 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141dbe898

double zmm2[0x2] = var_1e0.o
double var_158[0x2] = zmm2
int128_t var_168 = var_1f0.o
var_1dc.d = var_120
double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
int128_t var_198 = (&var_148).o
int128_t var_188 = var_168
int64_t var_178 = temp0_3.q

while (true)
    int64_t rax_20 = sx.q(var_188:0xc.d)
    int64_t* rdx_11 = var_198.q
    
    if (rax_20.d == ((0xffffffff << (var_120.b & 0x1f)).q u>> 0x20).d && var_188.q == &var_13c:4
            && rdx_11 == &var_148)
        int32_t var_100_1 = 0
        
        if (var_108 != 0)
            sub_140a74f90(var_108)
        
        int32_t var_140_1 = 0
        
        if (var_13c.d != 0)
            sub_1405a5130(&var_148, 0)
        
        int32_t var_118_1 = 0xffffffff
        int32_t var_114_1 = 0
        void* result = sub_14059a8e0(&var_13c:4, 0)
        
        if (var_128 != 0)
            result = sub_140a74f90(var_128)
        
        int64_t rcx_33 = var_148
        
        if (rcx_33 != 0)
            result = sub_140a74f90(rcx_33)
        
        if (var_38 != 0)
            result = sub_140a74f90(var_38)
        
        __security_check_cookie(rax_1 ^ &var_218)
        return result
    
    int64_t* rdi_3 = *(*rdx_11 + rax_20 * 0x18)
    
    if (rdi_3 != 0)
        if (sub_141ee7380(rdi_3) != 0)
        label_141dbe9b0:
            
            if (rdi_3 == *(arg1 + 0x130))
                *(arg1 + 0x130) = 0
            
            (*(*rdi_3 + 0x3a0))(rdi_3, 0)
            var_1c0 = *(rdi_3[2] + 0x18)
            int16_t* var_1a8
            sub_140b63b70(&var_1c0, &var_1a8)
            int16_t* const r8_4 = &data_142d40450
            int32_t var_1a0
            
            if (var_1a0 != 0)
                r8_4 = var_1a8
            
            int16_t* var_1b8
            sub_140a2e390(&var_1b8, u"TRASH_%s", r8_4)
            int16_t* rdx_15 = &data_142d40450
            int32_t var_1b0
            
            if (var_1b0 != 0)
                rdx_15 = var_1b8
            
            sub_140b58260(&var_1c8, rdx_15, 1)
            int16_t* rcx_22 = var_1b8
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
            
            int16_t* rcx_23 = var_1a8
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
            
            sub_140d25240(&var_1d0, arg1, *(arg1 + 0x10), var_1c8)
            int64_t* rax_30 = sub_140b63b70(&var_1d0, &var_1f0)
            int16_t* const rdx_18
            
            if (rax_30[1].d == 0)
                rdx_18 = &data_142d40450
            else
                rdx_18 = *rax_30
            
            (*(*rdi_3 + 0x138))(rdi_3, rdx_18, arg1, 0x31)
            int64_t rcx_27 = var_1f0.q
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
        else
            void* rax_24 = sub_140d226f0(rdi_3, sub_142459c10())
            void* rbx_2 = rax_24
            
            if (rax_24 != 0)
                while (sub_141ee7380(rbx_2) == 0)
                    void* rax_27 = sub_140d226f0(rbx_2, sub_142459c10())
                    rbx_2 = rax_27
                    
                    if (rax_27 == 0)
                        goto label_141dbeaaa
                
                goto label_141dbe9b0
    
label_141dbeaaa:
    var_188:8.d &= not.d(var_198:0xc.d)
    sub_14059bdd0(&var_198:8)
