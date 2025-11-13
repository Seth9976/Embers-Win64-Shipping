// 函数: sub_14211c830
// 地址: 0x14211c830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx
int64_t arg_10 = rdx
int64_t r8
int64_t arg_18 = r8
int64_t r9
int64_t arg_20 = r9
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* rbx_1 = *(*arg1 + 8)

if (rbx_1 != 0)
    EnterCriticalSection(&data_143f4ab20)
    *(rbx_1 + 0x74) += 1
    LeaveCriticalSection(&data_143f4ab20)
    void* rax_3 = sub_142126240(*(rbx_1 + 0x28), *arg1[1] + 0x20)
    
    if (rax_3 != 0)
        sub_1419cec70(rax_3, *arg1[2] + 0x28, *arg1[3])

int64_t* rcx_3 = *arg1
int32_t rdi = (*U"1111")[sx.q(*(rcx_3 + 0x1c))]
(*(*rcx_3 + 8))(arg2, zx.q(rdi), *arg1[2], *arg1[1])
int64_t* var_e0
sub_142119000(&var_e0, *arg1)
sub_142155d00(*arg1[1], rdi, &var_e0)
sub_142119000(&var_e0, *arg1)
int32_t var_138 = *arg1[3]
sub_142155c10(*arg1[2], rdi, &var_e0, (*arg1[1]).d)
int64_t* rcx_10 = *arg1
int64_t var_b0
int64_t r9_5 = (*(*rcx_10 + 0x360))(rcx_10, &var_b0)
void* rcx_11 = *arg1[4]

if (rcx_11 != 0)
    void* rdx_11 = *arg1
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    sub_1419cf010(rcx_11, *(rdx_11 + 0x10), &var_98)
    int64_t var_88
    int64_t* var_120_1 = &var_88
    int32_t rcx_12 = 0
    int32_t var_128 = 0
    int32_t var_118_1 = 0xffffffff
    int32_t r8_8 = 0
    int32_t var_124_1 = 1
    int64_t var_114_1 = 0
    int64_t* var_78
    int32_t var_70
    
    if (var_70 != 0)
        int64_t* r10_1 = &var_88
        
        if (var_78 != 0)
            r10_1 = var_78
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_70 - 1)
        int32_t rdx_15 = *r10_1
        
        if (rdx_15 != 0)
        label_14211ca38:
            int32_t rax_17 = neg.d(rdx_15) & rdx_15
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_17)
            int32_t var_124_2 = rax_17
            int32_t rax_18
            
            if (rax_17 == 0)
                rax_18 = 0x20
            else
                rax_18 = 0x1f - temp0_2
            
            int32_t rax_19 = r8_8 - rax_18 + 0x1f
            
            if (rax_19 s> var_70)
                rax_19 = var_70
            
            var_114_1.d = rax_19
        else
            while (true)
                int64_t rdx_16 = sx.q(rcx_12)
                r8_8 += 0x20
                rcx_12 += 1
                var_114_1:4.d = r8_8
                var_128 = rcx_12
                
                if (rdx_16.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_114_1.d = var_70
                    break
                
                rdx_15 = *(r10_1 + (rdx_16 << 2) + 4)
                var_118_1 = 0xffffffff
                
                if (rdx_15 != 0)
                    goto label_14211ca38
    
    double zmm2[0x2] = var_118_1.o
    int128_t zmm0 = var_128.o
    var_e0 = &var_98
    double var_c8_1[0x2] = zmm2
    int128_t var_d8_1 = zmm0
    zmm0 = var_e0.o
    var_114_1.d = var_70
    double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
    int128_t var_108 = zmm0
    int128_t var_f8_1 = var_d8_1
    int64_t var_e8_1 = temp0_3.q
    
    while (true)
        int64_t rcx_16 = sx.q(var_f8_1:0xc.d)
        int64_t* rax_20 = var_108.q
        
        if (rcx_16.d == ((0xffffffff << (var_70.b & 0x1f)).q u>> 0x20).d && var_f8_1.q == &var_88
                && rax_20 == &var_98)
            break
        
        void* r8_12 = (rcx_16 << 5) + *rax_20
        void* rax_22 = *(r8_12 + 8)
        void* rsi_1
        
        if ((*(rax_22 + 0xf8) & 1) == 0)
            rsi_1 = *(rax_22 + 0xf8)
        else
            rsi_1 = *(*(*(*(r8_12 + 0x10) + 0x20) + 0x28) + (sx.q((*(rax_22 + 0xf8) u>> 1).d) << 3))
        
        int16_t* rsi_2 = *(rsi_1 + 0x18)
        int32_t rdx_18 = 0
        var_128.q = 0
        int32_t rcx_18 = 0
        var_120_1.d = 0
        int64_t r14_1 = 0
        var_120_1:4.d = 0
        
        if (rsi_2 != 0 && *rsi_2 != 0)
            int64_t rdi_1 = -1
            
            do
                rdi_1 += 1
            while (rsi_2[rdi_1] != 0)
            
            if (rdi_1.d + 1 s> 0)
                sub_1405947f0(&var_128, rdi_1.d + 1)
                rcx_18 = var_120_1:4.d
                rdx_18 = var_120_1.d
                r14_1 = var_128.q
            
            int32_t rax_27 = rdi_1.d + 1 + rdx_18
            var_120_1.d = rax_27
            
            if (rax_27 s> rcx_18)
                sub_140594770(&var_128)
                r14_1 = var_128.q
            
            UnDecorator::getReferenceType(r14_1, rsi_2, (rdi_1.d + 1) * 2)
            
            if (r14_1 != 0)
                sub_140a74f90(r14_1)
        
        var_f8_1:8.d &= not.d(var_108:0xc.d)
        sub_14059bdd0(&var_108:8)
    
    int32_t var_50_2 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    int64_t var_90
    var_90.d = 0
    int32_t var_68_2 = 0xffffffff
    int32_t var_64_2 = 0
    r9_5 = sub_14059a8e0(&var_88, 0)
    
    if (var_78 != 0)
        r9_5 = sub_140a74f90(var_78)
    
    int64_t rcx_28 = var_98
    
    if (rcx_28 != 0)
        r9_5 = sub_140a74f90(rcx_28)

sub_140af98a0("Unknown", 0x802, u"Fatal Error Material not found", r9_5)
int64_t result = sub_140afbb40()
int64_t rcx_29 = var_b0

if (rcx_29 != 0)
    result = sub_140a74f90(rcx_29)

if (rbx_1 != 0)
    result = sub_14212fcb0(rbx_1)

__security_check_cookie(rax_1 ^ &var_158)
return result
