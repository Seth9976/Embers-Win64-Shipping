// 函数: sub_140897be0
// 地址: 0x140897be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *arg1
int64_t* r14 = arg2
int64_t rax
int64_t rdx
rdx:rax = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - r8)
int128_t var_f8
__builtin_memset(&var_f8, 0, 0x18)
int64_t rdx_1 = rdx s>> 2
uint64_t rax_2 = rdx_1 u>> 0x3f
int32_t rcx_4

if (rdx_1 == neg.q(rax_2))
    rcx_4 = 0
else
    rcx_4 = ((r8[1] - *r8) s>> 2).d

int32_t r12 = arg1[8].d
int32_t rbx = arg1[5].d
int32_t rsi = 0x12
int64_t i_15 = 4
int64_t var_c8 = 0xf
int64_t var_d0 = 4
int32_t temp1
int32_t temp2
temp1:temp2 = sx.q(r12 * (rdx_1.d + rax_2.d))
int32_t var_e0
__builtin_strncpy(&var_e0, "RIFF", 5)
int32_t rdi_2 = (((temp1 & 7) + temp2) s>> 3) * rcx_4

if (r12 != 0x20)
    rsi = 0x10

sub_140897870(arg1, &var_f8, &var_e0)
int32_t rcx_7 = rsi + 0x14 + rdi_2
int32_t var_b8 = rcx_7

if (rbx s> 0)
    rcx_7 = rcx_7 + 8 + rbx
    var_b8 = rcx_7

char var_104 = rcx_7.b
char* rbx_1 = &var_104
char var_101 = (rcx_7 s>> 0x18).b
int64_t i_9 = 4
char var_102 = (rcx_7 s>> 0x10).b
char var_103 = (rcx_7 s>> 8).b
int64_t i

do
    sub_14058a400(&var_f8, rbx_1)
    rbx_1 = &rbx_1[1]
    i = i_9
    i_9 -= 1
while (i != 1)
int64_t var_c8_1 = 0xf
int64_t var_d0_1 = 4
__builtin_strncpy(&var_e0, "WAVE", 4)
char var_dc = i_9.b
sub_140897870(arg1, &var_f8, &var_e0)
int64_t var_c8_2 = 0xf
int64_t var_d0_2 = 4
__builtin_strncpy(&var_e0, "fmt ", 4)
char var_dc_1 = i_9.b
sub_140897870(arg1, &var_f8, &var_e0)
var_102.w = i_9.w
char* rbx_2 = &var_104
var_103 = i_9.b
int64_t i_10 = 4
var_104 = rsi.b
int64_t i_1

do
    sub_14058a400(&var_f8, rbx_2)
    rbx_2 = &rbx_2[1]
    i_1 = i_10
    i_10 -= 1
while (i_1 != 1)
char rax_12 = 1
char var_107 = i_10.b

if (r12 == 0x20)
    rax_12 = 3

char var_108 = rax_12
sub_14058a400(&var_f8, &var_108)
sub_14058a400(&var_f8, &var_107)
int64_t rax_13
int64_t rdx_12
rdx_12:rax_13 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - *arg1)
int64_t rdx_13 = rdx_12 s>> 2
int16_t rdx_14 = rdx_13.w + (rdx_13 u>> 0x3f).w
var_108 = rdx_14.b
var_107 = (rdx_14 s>> 8).b
sub_14058a400(&var_f8, &var_108)
sub_14058a400(&var_f8, &var_107)
int32_t rcx_19 = *(arg1 + 0x3c)
char* rbx_3 = &var_104
var_104 = rcx_19.b
int64_t i_11 = 4
char var_101_1 = (rcx_19 s>> 0x18).b
var_102 = (rcx_19 s>> 0x10).b
var_103 = (rcx_19 s>> 8).b
int64_t i_2

do
    sub_14058a400(&var_f8, rbx_3)
    rbx_3 = &rbx_3[1]
    i_2 = i_11
    i_11 -= 1
while (i_2 != 1)
char* rbx_4 = &var_104
int64_t rax_23
int64_t rdx_18
rdx_18:rax_23 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - *arg1)
int64_t i_12 = 4
int64_t rdx_19 = rdx_18 s>> 2
uint32_t rdx_23 = ((rdx_19.d + (rdx_19 u>> 0x3f).d) * *(arg1 + 0x3c) * arg1[8].d) u>> 3
var_104 = rdx_23.b
char var_101_2 = (rdx_23 s>> 0x18).b
var_102 = (rdx_23 s>> 0x10).b
var_103 = (rdx_23 s>> 8).b
int64_t i_3

do
    sub_14058a400(&var_f8, rbx_4)
    rbx_4 = &rbx_4[1]
    i_3 = i_12
    i_12 -= 1
while (i_3 != 1)
int64_t rax_32
int64_t rdx_25
rdx_25:rax_32 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - *arg1)
int32_t temp7
int32_t temp8
temp7:temp8 = sx.q(arg1[8].d)
int64_t r8_5 = rdx_25 s>> 2
int16_t rdx_29 = (r8_5.w + (r8_5 u>> 0x3f).w) * ((temp8 + (temp7 & 7)) s>> 3).w
var_108 = rdx_29.b
var_107 = (rdx_29 s>> 8).b
sub_14058a400(&var_f8, &var_108)
sub_14058a400(&var_f8, &var_107)
int16_t rcx_31 = arg1[8].w
var_108 = rcx_31.b
var_107 = (rcx_31 s>> 8).b
sub_14058a400(&var_f8, &var_108)
sub_14058a400(&var_f8, &var_107)

if (r12 == 0x20)
    var_108.w = i_12.w
    sub_14058a400(&var_f8, &var_108)
    sub_14058a400(&var_f8, &var_107)

int64_t var_c8_3 = 0xf
int64_t var_d0_3 = 4
__builtin_strncpy(&var_e0, "data", 5)
sub_140897870(arg1, &var_f8, &var_e0)
int32_t r12_1 = rdi_2
char* rbx_5 = &var_104
var_104 = r12_1.b
int64_t i_13 = 4
char var_101_3 = (r12_1 s>> 0x18).b
var_102 = (r12_1 s>> 0x10).b
var_103 = (r12_1 s>> 8).b
int64_t i_4

do
    sub_14058a400(&var_f8, rbx_5)
    rbx_5 = &rbx_5[1]
    i_4 = i_13
    i_13 -= 1
while (i_4 != 1)
int128_t zmm6
int128_t var_48 = zmm6
int32_t rbx_6 = 0
int128_t zmm7
int128_t var_58 = zmm7
int128_t zmm8
int128_t var_68 = zmm8
int128_t zmm9
int128_t var_78 = zmm9
int128_t zmm10
int128_t var_88 = zmm10
int128_t zmm11
int128_t var_98 = zmm11
int32_t var_c0 = 0
char var_100
int64_t var_e8
uint32_t result
void* rcx_68

if (sub_140897990(arg1) s> 0)
    int64_t r14_1 = 0
    
    while (true)
        int64_t* r8_8 = *arg1
        int32_t r12_2 = 0
        int64_t rax_46
        int64_t rdx_38
        rdx_38:rax_46 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - r8_8)
        int64_t rdx_39 = rdx_38 s>> 2
        
        if (rdx_39.d + (rdx_39 u>> 0x3f).d s> 0)
            int64_t rsi_1 = 0
            
            while (true)
                result = arg1[8].d
                int128_t zmm0_1
                
                if (result == 8)
                    zmm0_1.d = _mm_max_ss(_mm_min_ss((*(*(r8_8 + rsi_1) + r14_1)).d, 0x3f800000).d, 
                        0xbf800000).d f+ 1f
                    zmm0_1.d = zmm0_1.d f* 127.5f
                    var_108 = (int.d(zmm0_1.d)).b
                    sub_14058a400(&var_f8, &var_108)
                else if (result == 0x10)
                    zmm0_1.d = _mm_max_ss(_mm_min_ss((*(*(r8_8 + rsi_1) + r14_1)).d, 0x3f800000).d, 
                        0xbf800000).d f* 32767f
                    int16_t rcx_42 = (int.d(zmm0_1.d)).w
                    char var_fc = rcx_42.b
                    char var_fb = (rcx_42 s>> 8).b
                    sub_14058a400(&var_f8, &var_fc)
                    sub_14058a400(&var_f8, &var_fb)
                else if (result != 0x18)
                    if (result != 0x20)
                        break
                    
                    int32_t* rax_58 = *(r8_8 + rsi_1)
                    int32_t rcx_49
                    
                    if (r12 != 0x20)
                        zmm0_1.d = (*(rax_58 + r14_1)).d f* 2.14748365e+09f
                        rcx_49 = int.d(zmm0_1.d)
                    else
                        rcx_49 = *(rax_58 + r14_1)
                    
                    var_100 = rcx_49.b
                    char* rbx_7 = &var_100
                    char var_fd_1 = (rcx_49 s>> 0x18).b
                    int64_t i_14 = 4
                    char var_fe_1 = (rcx_49 s>> 0x10).b
                    char var_ff_1 = (rcx_49 s>> 8).b
                    int64_t i_5
                    
                    do
                        sub_14058a400(&var_f8, rbx_7)
                        rbx_7 = &rbx_7[1]
                        i_5 = i_14
                        i_14 -= 1
                    while (i_5 != 1)
                else
                    zmm0_1.d = (*(*(r8_8 + rsi_1) + r14_1)).d f* 8388608f
                    int32_t rcx_45 = int.d(zmm0_1.d)
                    var_104 = rcx_45.b
                    var_102 = (rcx_45 s>> 0x10).b
                    var_103 = (rcx_45 s>> 8).b
                    sub_14058a400(&var_f8, &var_104)
                    sub_14058a400(&var_f8, &var_103)
                    sub_14058a400(&var_f8, &var_102)
                r8_8 = *arg1
                r12_2 += 1
                rsi_1 += 0x18
                int64_t rax_65
                int64_t rdx_48
                rdx_48:rax_65 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - r8_8)
                int64_t rdx_49 = rdx_48 s>> 2
                
                if (r12_2 s>= rdx_49.d + (rdx_49 u>> 0x3f).d)
                    rbx_6 = var_c0
                    goto label_140898248
            
            rcx_68 = var_f8.q
            
            if (rcx_68 == 0)
                goto label_140898645
            
            void* rax_83 = rcx_68
            
            if (var_e8 - rcx_68 u< 0x1000)
                goto label_14089863c
            
            rcx_68 = *(rcx_68 - 8)
            
            if (rax_83 - rcx_68 - 8 u<= 0x1f)
                goto label_14089863c
            
            goto label_140898417
        
    label_140898248:
        rbx_6 += 1
        var_c0 = rbx_6
        r14_1 += 4
        
        if (rbx_6 s>= sub_140897990(arg1))
            r14 = arg2
            r12_1 = rdi_2
            break

if (rbx s> 0)
    int64_t var_c8_4 = 0xf
    int64_t i_6 = 0
    var_d0_3 = 4
    __builtin_strncpy(&var_e0, "iXML", 5)
    
    do
        var_108 = *(&var_e0 + i_6)
        sub_14058a400(&var_f8, &var_108)
        i_6 += 1
    while (i_6 u< 4)
    
    var_100 = rbx.b
    char* rbx_8 = &var_100
    char var_fd_2 = (rbx s>> 0x18).b
    char var_fe_2 = (rbx s>> 0x10).b
    char var_ff_2 = (rbx s>> 8).b
    int64_t i_7
    
    do
        sub_14058a400(&var_f8, rbx_8)
        rbx_8 = &rbx_8[1]
        i_7 = i_15
        i_15 -= 1
    while (i_7 != 1)
    int64_t* rax_76 = sub_140592d30(&var_e0, &arg1[3])
    char* i_8 = nullptr
    
    if (rax_76[2] u> 0)
        do
            int64_t* rax_77 = rax_76
            
            if (rax_76[3] u>= 0x10)
                rax_77 = *rax_76
            
            var_108 = *(i_8 + rax_77)
            sub_14058a400(&var_f8, &var_108)
            i_8 = &i_8[1]
        while (i_8 u< rax_76[2])
    
    int64_t rdx_55 = rax_76[3]
    
    if (rdx_55 u>= 0x10)
        void* rcx_58 = *rax_76
        
        if (rdx_55 + 1 u>= 0x1000)
            void* r8_9 = *(rcx_58 - 8)
            
            if (rcx_58 - r8_9 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_58 = r8_9
        
        j_sub_140a74f90(rcx_58)
    
    rax_76[2] = 0
    rax_76[3] = 0xf
    *rax_76 = 0

void* rsi_2 = var_f8.q
uint64_t rax_82
int32_t rcx_67
int64_t r8_11
int32_t temp11_1
int32_t temp12_1

if (var_b8 == var_f8:8.d - rsi_2.d - 8)
    int64_t* r9_1 = *arg1
    int64_t rax_80
    int64_t rdx_57
    rdx_57:rax_80 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - r9_1)
    r8_11 = rdx_57 s>> 2
    rax_82 = r8_11 u>> 0x3f
    
    if (r8_11 == neg.q(rax_82))
        rcx_67 = 0
    else
        rcx_67 = ((r9_1[1] - *r9_1) s>> 2).d
    
    temp11_1:temp12_1 = sx.q(arg1[8].d)

if (var_b8 != var_f8:8.d - rsi_2.d - 8
        || r12_1 != ((temp12_1 + (temp11_1 & 7)) s>> 3) * (r8_11.d + rax_82.d) * rcx_67)
    int64_t r13 = r14[2]
    
    if (0x7fffffffffffffff - r13 u< 0x1d)
        sub_1405871e0()
        noreturn
    
    int64_t* r12_3 = r14
    
    if (r14[3] u>= 0x10)
        r12_3 = *r14
    
    int64_t rbx_11 = 0xf
    int32_t* rdi_4 = &var_e0
    var_d0_3.o = zx.o(0)
    
    if (r13 + 0x1d u> 0xf)
        rbx_11 = (r13 + 0x1d) | 0xf
        int64_t rax_98
        
        if (rbx_11 u<= 0x7fffffffffffffff)
            if (rbx_11 u< 0x16)
                rbx_11 = 0x16
            
            if (rbx_11 + 1 u>= 0x1000)
                rax_98 = rbx_11 + 0x28
                
                if (rax_98 u> rbx_11 + 1)
                    goto label_140898557
                
                stdext::threads::_Throw_lock_error()
                noreturn
            
            if (rbx_11 == -1)
                rdi_4 = nullptr
            else
                rdi_4 = j_sub_140a82f30(rbx_11 + 1)
        else
            rbx_11 = 0x7fffffffffffffff
            rax_98 = -0x7fffffffffffffd9
        label_140898557:
            int64_t rax_99 = j_sub_140a82f30(rax_98)
            
            if (rax_99 == 0)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rdi_4 = (rax_99 + 0x27) & 0xffffffffffffffe0
            *(rdi_4 - 8) = rax_99
        var_e0.q = rdi_4
    
    int64_t var_d0_4 = r13 + 0x1d
    int64_t var_c8_5 = rbx_11
    __builtin_strncpy(rdi_4, "ERROR: couldn\'t save file to ", 0x1d)
    memcpy(rdi_4 + 0x1d, r12_3, r13.d)
    *(rdi_4 + r13 + 0x1d) = 0
    sub_1408979d0(arg1, &var_e0)
    
    if (rsi_2 == 0)
        goto label_140898645
    
    void* rax_101 = rsi_2
    
    if (var_e8 - rsi_2 u>= 0x1000)
        rsi_2 = *(rsi_2 - 8)
        
        if (rax_101 - rsi_2 - 8 u> 0x1f)
            goto label_140898417
        
        goto label_140898639
    
label_140898639:
    rcx_68 = rsi_2
label_14089863c:
    j_sub_140a74f90(rcx_68)
label_140898645:
    int64_t rdx_72 = arg2[3]
    
    if (rdx_72 u< 0x10)
        goto label_14089867f
    
    void* rcx_78 = *arg2
    
    if (rdx_72 + 1 u< 0x1000)
        goto label_14089867a
    
    void* r8_16 = *(rcx_78 - 8)
    
    if (rcx_78 - r8_16 - 8 u> 0x1f)
    label_140898417:
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rcx_78 = r8_16
label_14089867a:
    j_sub_140a74f90(rcx_78)
label_14089867f:
    result.b = 0
    arg2[3] = 0xf
    *arg2 = 0
    arg2[2] = 0
else
    char result_1 = sub_1408988f0(arg1, &var_f8, sub_140592d30(&var_e0, r14))
    void* rcx_71 = var_f8.q
    
    if (rcx_71 != 0)
        void* rax_93 = rcx_71
        
        if (var_e8 - rcx_71 u>= 0x1000)
            rcx_71 = *(rcx_71 - 8)
            
            if (rax_93 - rcx_71 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_71)
    
    int64_t rdx_66 = r14[3]
    
    if (rdx_66 u>= 0x10)
        void* rcx_72 = *r14
        
        if (rdx_66 + 1 u>= 0x1000)
            void* r8_14 = *(rcx_72 - 8)
            
            if (rcx_72 - r8_14 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_72 = r8_14
        
        j_sub_140a74f90(rcx_72)
    
    r14[2] = 0
    result = zx.d(result_1)
    r14[3] = 0xf
    *r14 = 0

return result
