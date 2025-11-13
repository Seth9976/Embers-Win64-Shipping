// 函数: sub_1418a0140
// 地址: 0x1418a0140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
__builtin_memset(arg1, 0, 0x20)
void* r12 = &arg1[2]
int64_t* rdi = arg2
int64_t rax_2 = *arg2
int64_t var_98 = 0
int32_t var_90 = 0
int32_t var_6c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x1c)
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
(*(rax_2 + 0x48))(rdi, &var_98)
char var_158
char* var_150 = &var_158

if (var_90 - var_64 s> 0)
    sub_140a6c1e0(&var_98)
    char** var_120_1 = &var_150
    sub_14181b5f0(var_98, var_90 - var_64, var_158)

sub_1405a4480(&var_98)
int64_t* var_140 = &var_88
int32_t rcx_4 = 0
int32_t var_148 = 0
int32_t var_138 = 0xffffffff
int32_t r8_2 = 0
int32_t var_144 = 1
int64_t var_134 = 0
int64_t* var_78
int32_t var_70

if (var_70 != 0)
    int64_t* r11_1 = &var_88
    
    if (var_78 != 0)
        r11_1 = var_78
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_70 - 1)
    int32_t rdx_5 = *r11_1
    
    if (rdx_5 != 0)
    label_1418a0298:
        int32_t rax_11 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_144_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        int32_t rax_13 = r8_2 - rax_12 + 0x1f
        
        if (rax_13 s> var_70)
            rax_13 = var_70
        
        var_134.d = rax_13
    else
        while (true)
            int64_t rax_8 = sx.q(rcx_4)
            r8_2 += 0x20
            rcx_4 += 1
            var_134:4.d = r8_2
            var_148 = rcx_4
            
            if (rax_8.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                var_134.d = var_70
                break
            
            rdx_5 = *(r11_1 + (rax_8 << 2) + 4)
            var_138 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_1418a0298
    
    rdi = arg2

double zmm2[0x2] = var_138.o
int128_t var_c8 = var_148.o
var_134.d = var_70
double var_b8[0x2] = zmm2
uint64_t rcx_9 = (0xffffffff << (var_70.b & 0x1f)).q u>> 0x20
uint64_t var_100 = rcx_9
double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
int128_t var_f8 = (&var_98).o
int128_t var_e8 = var_c8
int64_t var_d8 = temp0_3.q

while (true)
    int64_t rax_14 = sx.q(var_e8:0xc.d)
    int64_t* rdx_6 = var_f8.q
    
    if (rax_14.d == rcx_9.d && var_e8.q == &var_88 && rdx_6 == &var_98)
        int32_t var_50_1 = 0
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        sub_14059ad90(&var_98, 0)
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        int64_t rcx_25 = var_98
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        __security_check_cookie(rax_1 ^ &var_188)
        return arg1
    
    char* r14_1 = *rdx_6 + rax_14 * 0x18
    int64_t rax_16 = *rdi
    var_150 = r14_1
    void* rax_17 = (*(rax_16 + 0x68))(rdi, r14_1)
    int64_t r13_1 = 0
    int128_t* r15_1 = *(rax_17 + 0x48)
    void* rax_19 = r15_1 + sx.q(*(rax_17 + 0x50)) * 0x18
    
    if (r15_1 != rax_19)
        do
            int64_t r14_2 = sx.q(arg1[1].d)
            int32_t rax_20 = (r14_2 + 1).d
            arg1[1].d = rax_20
            
            if (rax_20 s> *(arg1 + 0xc))
                sub_1407c3b60(arg1)
            
            void var_a8
            sub_141864060(r14_2 * 0x38 + *arg1, sub_140596d10(&var_a8, r14_1), r15_1, r13_1, 
                zx.q(*(r15_1 + 0x14)), 0)
            uint64_t rax_22 = zx.q(*(r15_1 + 0x14))
            r15_1 += 0x18
            r13_1 += rax_22
        while (r15_1 != rax_19)
        
        r14_1 = var_150
        r12 = &arg1[2]
    
    if (*(rax_17 + 0x50) == 0)
        int64_t rsi_2 = sx.q(*(r12 + 8))
        int64_t var_118 = 0
        int64_t var_110_1 = 0
        int32_t rax_24 = (rsi_2 + 1).d
        *(r12 + 8) = rax_24
        
        if (rax_24 s> *(r12 + 0xc))
            sub_1407c3b60(r12)
        
        sub_141864060(rsi_2 * 0x38 + *r12, sub_140596d10(&var_148, r14_1), &var_118, 0, 0, 0)
    
    var_e8:8.d &= not.d(var_f8:0xc.d)
    sub_14059bdd0(&var_f8:8)
    rcx_9 = var_100
    rdi = arg2
