// 函数: sub_14098e760
// 地址: 0x14098e760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t rdi = 0
*arg2 = 0
arg2[1] = 0
int64_t rbx = data_143cedbf0
j_sub_140b3db50()
int64_t* rax_2 = j_sub_140b407e0(&data_143de7d78, rbx)
int64_t rdx_1 = *rax_2
int64_t* rax_3 = (*(rdx_1 + 0x48))(rax_2, rdx_1)
int64_t rdx_2 = *rax_3
void* rax_4 = (*(rdx_2 + 0x218))(rax_3, rdx_2)

if (rax_4 != 0)
    int64_t r14_1 = -1
    
    do
        r14_1 += 1
    while (*(&data_142e3c520 + (r14_1 << 1)) != 0)
    
    uint64_t var_88 = 0
    int64_t var_80
    __builtin_memset(&var_80, 0, 0x24)
    int32_t var_5c_1 = 0x80
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    sub_14098dd50(&var_88, rax_4 + 0x140)
    int64_t var_78
    int32_t var_f8_1 = &var_78
    int32_t rcx_3 = 0
    int32_t var_100 = 0
    int32_t var_f0_1 = 0xffffffff
    int32_t r8_1 = 0
    int32_t var_fc_1 = 1
    int64_t var_ec_1 = 0
    int64_t* var_68
    int32_t var_60
    
    if (var_60 != 0)
        int64_t* r9_1 = &var_78
        
        if (var_68 != 0)
            r9_1 = var_68
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_60 - 1)
        int32_t rdx_6 = *r9_1
        
        if (rdx_6 != 0)
        label_14098e8b8:
            int32_t rax_12 = neg.d(rdx_6) & rdx_6
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_fc_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_2
            
            int32_t rax_14 = r8_1 - rax_13 + 0x1f
            
            if (rax_14 s> var_60)
                rax_14 = var_60
            
            var_ec_1.d = rax_14
        else
            while (true)
                int64_t rdx_7 = sx.q(rcx_3)
                r8_1 += 0x20
                rcx_3 += 1
                var_ec_1:4.d = r8_1
                var_100 = rcx_3
                
                if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_ec_1.d = var_60
                    break
                
                rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
                var_f0_1 = 0xffffffff
                
                if (rdx_6 != 0)
                    goto label_14098e8b8
    
    double zmm2_1[0x2] = var_f0_1.o
    double var_98_1[0x2] = zmm2_1
    int128_t var_a8_1 = var_100.o
    var_ec_1.d = var_60
    double temp0_3[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
    int128_t var_d8 = (&var_88).o
    int128_t var_c8_1 = var_a8_1
    int64_t var_b8_1 = temp0_3.q
    
    while (true)
        int64_t rcx_7 = sx.q(var_c8_1:0xc.d)
        int64_t rax_15 = var_d8.q
        
        if (rcx_7.d == ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d && var_c8_1.q == &var_78
                && rax_15 == &var_88)
            break
        
        sub_140b63b70((rcx_7 << 5) + *rax_15, &var_100)
        
        if (sub_140a32ae0(&var_100, &data_142e3c520, 1) != 0)
            int32_t rbx_1 = var_f8_1 - 1
            
            if (var_f8_1 == 0)
                rbx_1 = 0
            
            int32_t rcx_11
            
            if (r14_1.d s>= 0)
                rcx_11 = rbx_1
                
                if (r14_1.d s< rbx_1)
                    rcx_11 = r14_1.d
            else
                rcx_11 = 0
            
            int64_t r9_2 = sx.q(rcx_11)
            
            if (sx.q(r14_1.d) + 0x7fffffff s< r9_2)
                rbx_1 = rcx_11
            else if (sx.q(r14_1.d) + 0x7fffffff s< sx.q(rbx_1))
                rbx_1 = r14_1.d + 0x7fffffff
            
            int16_t* var_110 = nullptr
            int16_t* const rax_18 = &data_142d40450
            int64_t var_108_1 = 0
            
            if (var_f8_1 != 0)
                rax_18 = var_100.q
            
            int16_t* rsi_1 = nullptr
            int32_t rbx_2 = rbx_1 - rcx_11
            void* r15_1 = &rax_18[r9_2]
            int32_t rax_19 = 0
            
            if (r15_1 != 0 && *r15_1 != 0 && rbx_2 s> 0)
                if (rbx_2 + 1 s> 0)
                    sub_1405947f0(&var_110, rbx_2 + 1)
                    rax_19 = var_108_1:4.d
                    rdi = var_108_1.d
                    rsi_1 = var_110
                
                rdi = rdi + 1 + rbx_2
                var_108_1.d = rdi
                
                if (rdi s> rax_19)
                    sub_140594770(&var_110)
                    rdi = var_108_1.d
                    rsi_1 = var_110
                
                UnDecorator::getReferenceType(rsi_1, r15_1, rbx_2 * 2)
                rsi_1[sx.q(rdi) - 1] = 0
            
            int16_t* const rdx_14 = &data_142d40450
            var_110 = nullptr
            int64_t var_108_2 = 0
            
            if (rdi != 0)
                rdx_14 = rsi_1
            
            int64_t var_e0
            sub_140b58260(&var_e0, rdx_14, 1)
            int64_t rbx_3 = sx.q(arg2[1].d)
            int32_t rax_21 = (rbx_3 + 1).d
            arg2[1].d = rax_21
            
            if (rax_21 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rbx_3 << 3)) = var_e0
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)
            
            rdi = 0
        
        int64_t rcx_18 = var_100.q
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        var_c8_1:8.d &= not.d(var_d8:0xc.d)
        sub_14059bdd0(&var_d8:8)
    
    int32_t var_40_2 = 0
    
    if (var_48_1 != 0)
        sub_140a74f90(var_48_1)
    
    sub_1407547c0(&var_88, 0)
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    uint64_t rcx_23 = var_88
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)

char var_118
sub_14098daa0(*arg2, arg2[1].d, var_118)
__security_check_cookie(rax_1 ^ &var_138)
return arg2
