// 函数: sub_1429b3410
// 地址: 0x1429b3410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_50 = -2
int32_t r15 = arg3
int64_t* r9 = *(arg1 + 8)
int64_t i_11 = ((r9[4] - r9[3]) s>> 3) + ((r9[1] - *r9) s>> 3)
void* var_68
sub_1429b1f60(&var_68, i_11)
int64_t* var_98
sub_1429b1c00(&var_98, i_11)
int64_t* var_118
sub_1429b1e40(&var_118, i_11)
void* var_80
sub_142995aa0(&var_80, i_11)
int64_t i = 0
int64_t* rcx_4 = *(arg1 + 8)
int64_t* rdx_4 = rcx_4
void* r14 = var_80

if ((rcx_4[1] - *rcx_4) s>> 3 != 0)
    do
        *(r14 + (i << 3)) = sub_142988800(*(*rcx_4 + (i << 3)))
        i += 1
        rcx_4 = *(arg1 + 8)
        rdx_4 = rcx_4
    while (i u< (rcx_4[1] - *rcx_4) s>> 3)

int64_t i_1 = 0

if ((rcx_4[4] - rcx_4[3]) s>> 3 != 0)
    void* r8 = &rdx_4[3]
    
    do
        *(r14 + (i << 3) + (i_1 << 3)) = sub_1429bef10(*(*r8 + (i_1 << 3)))
        i_1 += 1
        rcx_4 = *(arg1 + 8)
        rdx_4 = rcx_4
        r8 = &rcx_4[3]
    while (i_1 u< (*(r8 + 8) - *r8) s>> 3)

int64_t rsi = 0
int64_t* r14_1 = var_98

if (i_11 != 0)
    int64_t r15_1 = 0
    int64_t rbx_1 = 0
    
    do
        int32_t var_128_1 = arg3
        sub_1429b3060(*(arg1 + 8), var_68 + r15_1, r14_1 + rbx_1, var_118 + rbx_1, 
            (*(var_80 + (rsi << 3))).d, arg2)
        rsi += 1
        rbx_1 += 0x18
        r15_1 += 0x48
    while (rsi u< i_11)
    
    rcx_4 = *(arg1 + 8)
    rdx_4 = rcx_4
    r15 = arg3

int64_t i_2 = 0

if ((rcx_4[1] - *rcx_4) s>> 3 != 0)
    int64_t rsi_1 = 0
    rcx_4 = rdx_4
    
    do
        sub_1429b6e00(*(*rcx_4 + (i_2 << 3)), var_68 + rsi_1)
        sub_1429b5ff0(*(**(arg1 + 8) + (i_2 << 3)), arg2, r15)
        i_2 += 1
        rsi_1 += 0x48
        rcx_4 = *(arg1 + 8)
        rdx_4 = rcx_4
    while (i_2 u< (rcx_4[1] - *rcx_4) s>> 3)

int64_t i_3 = 0

if ((rcx_4[4] - rcx_4[3]) s>> 3 != 0)
    void* r8_3 = &rdx_4[3]
    int64_t rbx_3 = i_2 * 0x48
    
    do
        sub_1429bef40(*(*r8_3 + (i_3 << 3)), var_68 + rbx_3)
        sub_1429bef20(*(*(*(arg1 + 8) + 0x18) + (i_3 << 3)), arg2, r15)
        i_3 += 1
        rbx_3 += 0x48
        rcx_4 = *(arg1 + 8)
        r8_3 = &rcx_4[3]
    while (i_3 u< (*(r8_3 + 8) - *r8_3) s>> 3)

int32_t rdx_13 = rcx_4[0x10].d
int32_t r8_5 = rcx_4[0xf].d
int32_t rdx_14

if (rdx_13 s< r8_5 || *(rcx_4 + 0x84) s< *(rcx_4 + 0x7c))
    rdx_14 = 0
else
    rdx_14 = rdx_13 - r8_5

int64_t rsi_3 = sx.q(r15 - arg2 + 1) * sx.q(rdx_14 + 1)
void* var_c8
std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >(
    &var_c8, rsi_3)
void* var_b0
std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >(
    &var_b0, rsi_3)
int64_t rbx_4 = 0
int64_t r10_3 = 0

if (rsi_3 != 0)
    void* rcx_19 = var_c8
    
    do
        *(rcx_19 + (r10_3 << 2)) = 0
        *(var_b0 + (r10_3 << 2)) = 0
        
        if (i_11 != 0)
            int64_t* r8_6 = r14_1
            int64_t i_10 = i_11
            int64_t i_4
            
            do
                int32_t* rdx_17 = var_c8 + (r10_3 << 2)
                *rdx_17 += *(*r8_6 + (r10_3 << 2))
                
                if (*(*r8_6 + (r10_3 << 2)) u> 0)
                    void* rax_42 = var_b0
                    *(rax_42 + (r10_3 << 2)) += 1
                
                r8_6 = &r8_6[3]
                i_4 = i_10
                i_10 -= 1
            while (i_4 != 1)
        
        rcx_19 = var_c8
        rbx_4 += zx.q(*(rcx_19 + (r10_3 << 2)))
        r10_3 += 1
    while (r10_3 u< rsi_3)

void* rax_44 = *(arg1 + 8)
int64_t* var_e0
sub_1429b1d20(&var_e0, (*(rax_44 + 0x98) - *(rax_44 + 0x90)) s>> 5)
int64_t i_5 = 0
void* rcx_22 = *(arg1 + 8)
int64_t* r15_2 = var_e0

if ((*(rcx_22 + 0x98) - *(rcx_22 + 0x90)) s>> 5 != 0)
    do
        if (i_5 != 1 || *(rcx_22 + 0x40) != 0)
            sub_1429a0100(&r15_2[i_5 * 3], rbx_4)
            rcx_22 = *(arg1 + 8)
        
        i_5 += 1
    while (i_5 u< (*(rcx_22 + 0x98) - *(rcx_22 + 0x90)) s>> 5)

int64_t i_6 = 0
int64_t var_d8
int64_t rax_52
int64_t rdx_22
rdx_22:rax_52 = muls.dp.q(0x2aaaaaaaaaaaaaab, var_d8 - r15_2)
struct IlmThread_2_3::Task::Imf_2_3::x8aa275c6::LineCompositeTask::operator[]::LineCompositeTask::VTable
    ** rax_54 = rdx_22 s>> 2

if (rax_54 != neg.q(rax_54 u>> 0x3f))
    do
        if (i_6 != 1 || *(*(arg1 + 8) + 0x40) != 0)
            int64_t* rsi_5 = &var_e0[i_6 * 3]
            sub_1429a0100(rsi_5, rbx_4)
            int64_t rax_58 = 0
            int64_t r11_1 = 0
            int64_t rcx_27 = rsi_3
            
            if (rcx_27 != 0)
                do
                    int64_t r10_4 = 0
                    
                    if (i_11 != 0)
                        int64_t** r9_3 = nullptr
                        
                        while (rax_58 u< rbx_4)
                            *((*(r9_3 + var_118))[i_6 * 3] + (r11_1 << 3)) = *rsi_5 + (rax_58 << 2)
                            rax_58 += zx.q(*(*(r14_1 + r9_3) + (r11_1 << 2)))
                            r10_4 += 1
                            r9_3 = &r9_3[3]
                            
                            if (r10_4 u>= i_11)
                                break
                        
                        rcx_27 = rsi_3
                    
                    r11_1 += 1
                while (r11_1 u< rcx_27)
        
        i_6 += 1
    while (i_6 u< (var_d8 - r15_2) s/ 0x18)
    
    r15_2 = var_e0

int64_t i_7 = 0
int64_t* rcx_32 = *(arg1 + 8)
int64_t* rdx_26 = rcx_32

if ((rcx_32[1] - *rcx_32) s>> 3 != 0)
    do
        sub_1429b62c0(*(*rcx_32 + (i_7 << 3)), arg2, arg3)
        i_7 += 1
        rcx_32 = *(arg1 + 8)
        rdx_26 = rcx_32
    while (i_7 u< (rcx_32[1] - *rcx_32) s>> 3)

int64_t i_8 = 0

if ((rcx_32[4] - rcx_32[3]) s>> 3 != 0)
    void* rdx_28 = &rdx_26[3]
    
    do
        sub_1429bef30(*(*rdx_28 + (i_8 << 3)), arg2, arg3)
        i_8 += 1
        rcx_32 = *(arg1 + 8)
        rdx_28 = &rcx_32[3]
    while (i_8 u< (*(rdx_28 + 8) - *rdx_28) s>> 3)

int64_t* var_100
sub_142995aa0(&var_100, (rcx_32[0x13] - rcx_32[0x12]) s>> 5)
int64_t i_9 = 0
int64_t* r8_12 = var_100
int64_t var_f8

if ((var_f8 - r8_12) s>> 3 != 0)
    int64_t r9_4 = 0
    
    do
        void** rcx_39 = *(*(arg1 + 8) + 0x90) + r9_4
        
        if (rcx_39[3] u>= 0x10)
            rcx_39 = *rcx_39
        
        r8_12[i_9] = rcx_39
        i_9 += 1
        r9_4 += 0x20
        r8_12 = var_100
    while (i_9 u< (var_f8 - r8_12) s>> 3)

if (*(*(arg1 + 8) + 0x40) == 0)
    r8_12[1] = *r8_12

void var_e8
sub_1429c2260(&var_e8)
int32_t rsi_6 = arg2

if (arg2 s<= arg3)
    do
        struct IlmThread_2_3::Task::Imf_2_3::x8aa275c6::LineCompositeTask::operator[]::LineCompositeTask::VTable
            ** rax_80 = j_sub_140a82f30(0x40)
        struct IlmThread_2_3::Task::Imf_2_3::x8aa275c6::LineCompositeTask::operator[]::LineCompositeTask::VTable
            ** rdi_4 = rax_80
        struct IlmThread_2_3::Task::Imf_2_3::x8aa275c6::LineCompositeTask::operator[]::LineCompositeTask::VTable
            ** arg_8 = rax_80
        
        if (rax_80 == 0)
            rdi_4 = nullptr
        else
            int64_t rbx_5 = *(arg1 + 8)
            sub_1429c2220(rax_80, &var_e8)
            *rdi_4 = &Imf_2_3::x8aa275c6::LineCompositeTask::operator[]::LineCompositeTask::`vftable'{for `IlmThread_2_3::Task'}
            rdi_4[2] = rbx_5
            rdi_4[3].d = rsi_6
            *(rdi_4 + 0x1c) = arg2
            rdi_4[4] = &var_100
            rdi_4[5] = &var_118
            rdi_4[6] = &var_c8
            rdi_4[7] = &var_b0
        
        sub_1429c26b0(rdi_4)
        rsi_6 += 1
    while (rsi_6 s<= arg3)
    
    r14_1 = var_98
    r15_2 = var_e0

sub_1429c23e0(&var_e8)
int64_t* rcx_44 = var_100

if (rcx_44 != 0)
    int64_t* rax_84 = rcx_44
    int64_t var_f0
    
    if ((var_f0 - rcx_44) s>> 3 << 3 u>= 0x1000)
        rcx_44 = rcx_44[-1]
        
        if (rax_84 - rcx_44 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_44)
    __builtin_memset(&var_100, 0, 0x18)

if (r15_2 != 0)
    sub_1429b1160(r15_2, var_d8)
    int64_t* rax_90 = r15_2
    int64_t var_d0
    
    if ((var_d0 - r15_2) s/ 0x18 * 0x18 u>= 0x1000)
        r15_2 = r15_2[-1]
        
        if (rax_90 - r15_2 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(r15_2)

void* rcx_49 = var_b0

if (rcx_49 != 0)
    void* rax_96 = rcx_49
    int64_t var_a0
    
    if ((var_a0 - rcx_49) s>> 2 << 2 u>= 0x1000)
        rcx_49 = *(rcx_49 - 8)
        
        if (rax_96 - rcx_49 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_49)
    __builtin_memset(&var_b0, 0, 0x18)

void* rcx_50 = var_c8

if (rcx_50 != 0)
    void* rax_102 = rcx_50
    int64_t var_b8
    
    if ((var_b8 - rcx_50) s>> 2 << 2 u>= 0x1000)
        rcx_50 = *(rcx_50 - 8)
        
        if (rax_102 - rcx_50 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_50)
    __builtin_memset(&var_c8, 0, 0x18)

void* rcx_51 = var_80

if (rcx_51 != 0)
    void* rax_108 = rcx_51
    int64_t var_70
    
    if ((var_70 - rcx_51) s>> 3 << 3 u>= 0x1000)
        rcx_51 = *(rcx_51 - 8)
        
        if (rax_108 - rcx_51 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_51)

int64_t* rcx_52 = var_118

if (rcx_52 != 0)
    int64_t var_110
    sub_1429b11f0(rcx_52, var_110)
    int64_t* r8_13 = var_118
    int64_t* rax_114 = r8_13
    int64_t var_108
    
    if ((var_108 - r8_13) s/ 0x18 * 0x18 u>= 0x1000)
        r8_13 = r8_13[-1]
        
        if (rax_114 - r8_13 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(r8_13)
    __builtin_memset(&var_118, 0, 0x18)

if (r14_1 != 0)
    int64_t var_90
    sub_1429b1160(r14_1, var_90)
    int64_t* rax_120 = r14_1
    int64_t var_88
    
    if ((var_88 - r14_1) s/ 0x18 * 0x18 u>= 0x1000)
        r14_1 = r14_1[-1]
        
        if (rax_120 - r14_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(r14_1)

return sub_1429b2720(&var_68)
