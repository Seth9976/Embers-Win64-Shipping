// 函数: sub_1418833b0
// 地址: 0x1418833b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t* rsi = *arg2
int32_t r13 = 0
int64_t rax_2 = sx.q(arg2[1].d)
void* r14 = arg1
int64_t* r12 = arg3
int64_t var_108
__builtin_memset(&var_108, 0, 0x2c)
void* rax_3 = &rsi[rax_2 * 9]
int32_t var_dc = 0x80
int32_t var_d8 = 0xffffffff
int32_t var_d4 = 0
int64_t var_c8 = 0
int32_t var_c0 = 0
int64_t* var_180 = rsi
void* var_140 = rax_3
int32_t var_1c8
int32_t var_1b8
int64_t* var_1b0
int32_t i_6
int32_t var_1a4
int128_t var_170
int64_t var_58

if (rsi != rax_3)
    void* rbx_1 = r14 + 0x28
    
    do
        sub_140926d10(rbx_1, &var_1b8, rsi)
        int64_t rax_4 = sx.q(var_1b8)
        int64_t rdx_1
        void* rdx_2
        
        if (rax_4.d != 0xffffffff)
            rdx_1 = rax_4 * 0x70
            rdx_2 = rdx_1 + *rbx_1
        
        int16_t var_b8
        char var_b6_1
        int64_t var_b0
        int32_t var_a8_1
        int64_t var_a0
        int32_t var_7c_1
        int64_t var_70_1
        
        if (rax_4.d == 0xffffffff || rdx_1 == neg.q(*rbx_1))
            var_b8 = 0
            var_b6_1 = 0
            var_b0 = 0
            var_a8_1 = 0
            int32_t var_84_2 = 0x80
            __builtin_memset(&var_a0, 0, 0x1c)
            int32_t var_80_2 = 0xffffffff
            var_7c_1 = 0
            var_70_1 = 0
            int32_t var_68_2 = 0
        else
            var_b8.b = *(rdx_2 + 0x10)
            var_b8:1.b = *(rdx_2 + 0x11)
            var_b6_1 = *(rdx_2 + 0x12)
            var_b0 = 0
            var_a8_1 = 0
            int32_t var_84_1 = 0x80
            __builtin_memset(&var_a0, 0, 0x1c)
            int32_t var_80_1 = 0xffffffff
            var_7c_1 = 0
            var_70_1 = 0
            int32_t var_68_1 = 0
            sub_1418235f0(&var_b0, rdx_2 + 0x18)
        
        void* rbx_2 = *(r14 + 0x18)
        int64_t rdi_1 = sx.q(*(rbx_2 + 0x100))
        int32_t rax_8 = (rdi_1 + 1).d
        *(rbx_2 + 0x100) = rax_8
        
        if (rax_8 s> *(rbx_2 + 0x104))
            sub_14090a6a0(rbx_2 + 0xf8)
        
        sub_141820930(rdi_1 * 0x60 + *(rbx_2 + 0xf8))
        void* rax_9 = *(r14 + 0x18)
        int64_t* r14_3 = *(rax_9 + 0xf8) - 0x60 + sx.q(*(rax_9 + 0x100)) * 0x60
        
        if (r14_3 != rsi)
            int32_t rbx_3 = rsi[1].d
            int64_t rdi_2 = *rsi
            int32_t r8_1 = *(r14_3 + 0xc)
            r14_3[1].d = rbx_3
            
            if (rbx_3 != 0 || r8_1 != 0)
                sub_1405a4c70(r14_3, rbx_3, r8_1)
                memcpy(*r14_3, rdi_2, rbx_3 * 2)
            else
                *(r14_3 + 0xc) = 0
        
        int128_t zmm0 = *(rsi + 0x20)
        int32_t i_4 = 0
        var_1b0 = nullptr
        int64_t* r12_1 = nullptr
        i_6 = 0
        *(r14_3 + 0x20) = zmm0
        r14_3[6].d = rsi[6].d
        int32_t rdx_8 = var_a8_1 - var_7c_1
        var_1a4 = 0
        
        if (rdx_8 s> 0)
            sub_14061cd70(&var_1b0, rdx_8)
            r13 = var_1a4
            i_4 = i_6
            r12_1 = var_1b0
        
        int32_t rcx_12 = 0
        int32_t var_19c_1 = 1
        int32_t r8_4 = 0
        int32_t var_1a0_1 = 0
        int64_t* var_198_1 = &var_a0
        int32_t var_190_1 = 0xffffffff
        int64_t var_18c_1 = 0
        int64_t* var_90
        int32_t var_88
        
        if (var_88 != 0)
            int64_t* r9_1 = &var_a0
            
            if (var_90 != 0)
                r9_1 = var_90
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(var_88 - 1)
            int32_t rdx_11 = *r9_1
            
            if (rdx_11 != 0)
            label_141883689:
                int32_t rax_19 = ((rdx_11 - 1) & rdx_11) ^ rdx_11
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_19)
                int32_t var_19c_2 = rax_19
                int32_t rax_20
                
                if (rax_19 == 0)
                    rax_20 = 0x20
                else
                    rax_20 = 0x1f - temp0_2
                
                int32_t rax_21 = r8_4 - rax_20 + 0x1f
                
                if (rax_21 s> var_88)
                    rax_21 = var_88
                
                var_18c_1.d = rax_21
            else
                while (true)
                    int64_t rdx_12 = sx.q(rcx_12)
                    r8_4 += 0x20
                    rcx_12 += 1
                    var_18c_1:4.d = r8_4
                    var_1a0_1 = rcx_12
                    
                    if (rdx_12.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        var_18c_1.d = var_88
                        break
                    
                    rdx_11 = *(r9_1 + (rdx_12 << 2) + 4)
                    int32_t var_190_2 = 0xffffffff
                    
                    if (rdx_11 != 0)
                        goto label_141883689
        
        int128_t var_128_1 = var_1a0_1.o
        int128_t var_118_1 = 0xffffffff
        var_170 = (&var_b0).o
        int64_t var_150_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        int128_t var_160_1 = var_128_1
        
        if (0 s< var_88)
            int32_t i = var_160_1:0xc.d
            
            do
                int64_t i_7 = sx.q(i_4)
                int64_t rsi_1 = *var_170.q
                i_4 = (i_7 + 1).d
                i_6 = i_4
                
                if (i_4 s> r13)
                    sub_1405a4f90(&var_1b0)
                    r13 = var_1a4
                    i_4 = i_6
                    r12_1 = var_1b0
                
                sub_140596d10(&r12_1[i_7 * 2], rsi_1 + sx.q(i) * 0x18)
                var_160_1:8.d &= not.d(var_170:0xc.d)
                sub_14059bdd0(&var_170:8)
                i = var_160_1:0xc.d
            while (i s< *(var_160_1.q + 0x18))
        
        if (&r14_3[7] == &var_1b0)
            r13 = 0
        else
            int32_t i_5 = r14_3[8].d
            int64_t* rdi_3 = r14_3[7]
            
            if (i_5 != 0)
                int32_t i_1
                
                do
                    int64_t rcx_19 = *rdi_3
                    
                    if (rcx_19 != 0)
                        sub_140a74f90(rcx_19)
                    
                    rdi_3 = &rdi_3[2]
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_3 = r14_3[7]
            
            if (rdi_3 != 0)
                sub_140a74f90(rdi_3)
            
            r14_3[7] = r12_1
            r12_1 = nullptr
            *(r14_3 + 0x44) = r13
            r13 = 0
            r14_3[8].d = i_4
            i_4 = 0
            var_1a4 = 0
        
        int64_t* rdi_4 = r12_1
        
        if (i_4 != 0)
            int32_t i_2
            
            do
                int64_t rcx_21 = *rdi_4
                
                if (rcx_21 != 0)
                    sub_140a74f90(rcx_21)
                
                rdi_4 = &rdi_4[2]
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        int64_t* rsi_2 = var_180
        
        if (&r14_3[2] != &rsi_2[7])
            int32_t rdi_5 = rsi_2[8].d
            int64_t rsi_3 = rsi_2[7]
            int32_t r8_6 = *(r14_3 + 0x1c)
            r14_3[3].d = rdi_5
            
            if (rdi_5 != 0 || r8_6 != 0)
                sub_1405a4c70(&r14_3[2], rdi_5, r8_6)
                memcpy(r14_3[2], rsi_3, rdi_5 * 2)
            else
                *(r14_3 + 0x1c) = 0
            
            rsi_2 = var_180
        
        if (var_b8.b != 0)
            *(r14_3 + 0x34) |= 1
        
        if (var_b8:1.b != 0)
            *(r14_3 + 0x34) |= 2
        
        if (var_b6_1 != 0 || *(rsi_2 + 0x34) != 0)
            *(r14_3 + 0x34) |= 4
        
        var_1c8.q = &var_108
        int64_t* rax_28 = sub_141885df0(arg1, &var_58, rsi_2[3], rsi_2[2], var_1c8)
        
        if (&r14_3[9] != rax_28)
            int64_t rcx_26 = r14_3[9]
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            r14_3[9] = *rax_28
            *rax_28 = 0
            r14_3[0xa].d = rax_28[1].d
            *(r14_3 + 0x54) = *(rax_28 + 0xc)
            rax_28[1] = 0
        
        int64_t rcx_28 = var_58
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        int32_t var_68_3 = 0
        
        if (var_70_1 != 0)
            sub_140a74f90(var_70_1)
        
        arg2 = sub_14059ad90(&var_b0, 0)
        
        if (var_90 != 0)
            arg2 = sub_140a74f90(var_90)
        
        int64_t rcx_32 = var_b0
        
        if (rcx_32 != 0)
            arg2 = sub_140a74f90(rcx_32)
        
        r14 = arg1
        rsi = &rsi_2[9]
        var_180 = rsi
        rbx_1 = r14 + 0x28
    while (rsi != var_140)
    
    r12 = arg3

int64_t* rbx_7 = *(r14 + 0x18) + 0xe8

if (rbx_7 != r12)
    int64_t rcx_33 = *rbx_7
    
    if (rcx_33 != 0)
        arg2 = sub_140a74f90(rcx_33)
    
    *rbx_7 = *r12
    *r12 = 0
    rbx_7[1].d = r12[1].d
    *(rbx_7 + 0xc) = *(r12 + 0xc)
    r12[1] = 0

void* r15_2 = *(r14 + 0x18)
int32_t i_3 = *(r15_2 + 0xf0)

if (i_3 != 0)
    int32_t r12_2 = 0
    rbx_7 = nullptr
    int32_t* rax_34
    rax_34, arg2 = sub_140b162a0(&var_108, &var_1b8, *(r15_2 + 0xe8))
    r14.b = *rax_34 != 0xffffffff
    
    do
        int64_t r13_1 = sx.q(rbx_7.d)
        rbx_7 = zx.q(rbx_7.d + 1)
        
        while (rbx_7.d s< i_3)
            int32_t* rax_35
            rax_35, arg2 = sub_140b162a0(&var_108, &var_1b8, (sx.q(rbx_7.d) << 6) + *(r15_2 + 0xe8))
            int32_t rcx_36
            rcx_36.b = *rax_35 != 0xffffffff
            
            if (zx.d(r14.b) != rcx_36)
                break
            
            rbx_7 = zx.q(rbx_7.d + 1)
        
        int32_t rsi_6 = rbx_7.d - r13_1.d
        
        if (r14.b != 0)
            if (r12_2 != r13_1.d)
                int64_t rax_36 = *(r15_2 + 0xe8)
                arg2 = memmove((sx.q(r12_2) << 6) + rax_36, (r13_1 << 6) + rax_36, rsi_6 << 6)
            
            r12_2 += rsi_6
        
        r14.b ^= 1
    while (rbx_7.d s< i_3)
    
    r14 = arg1
    *(r15_2 + 0xf0) = r12_2
    r12 = arg3
    r15_2 = *(r14 + 0x18)

sub_141845210(r15_2 + 0xf8, arg2.b)
sub_141840c70(*(r14 + 0x18))
int32_t var_19c_3 = 1
int64_t var_f8
int64_t* var_198_2 = &var_f8
int32_t rcx_42 = 0
int32_t var_1a0_2 = 0
int32_t var_190_3 = 0xffffffff
rbx_7.b = 1
int64_t var_18c_2 = 0
int32_t r8_16 = 0
int64_t* var_e8
int32_t var_e0

if (var_e0 != 0)
    int64_t* r9_3 = &var_f8
    
    if (var_e8 != 0)
        r9_3 = var_e8
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(var_e0 - 1)
    int32_t rdx_26 = *r9_3
    
    if (rdx_26 != 0)
    label_141883ae8:
        int32_t rax_44 = ((rdx_26 - 1) & rdx_26) ^ rdx_26
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_44)
        int32_t var_19c_4 = rax_44
        int32_t rax_45
        
        if (rax_44 == 0)
            rax_45 = 0x20
        else
            rax_45 = 0x1f - temp0_4
        
        int32_t rax_46 = r8_16 - rax_45 + 0x1f
        
        if (rax_46 s> var_e0)
            rax_46 = var_e0
        
        var_18c_2.d = rax_46
    else
        while (true)
            int64_t rdx_27 = sx.q(rcx_42)
            r8_16 += 0x20
            rcx_42 += 1
            var_18c_2:4.d = r8_16
            var_1a0_2 = rcx_42
            
            if (rdx_27.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                var_18c_2.d = var_e0
                break
            
            rdx_26 = *(r9_3 + (rdx_27 << 2) + 4)
            int32_t var_190_4 = 0xffffffff
            
            if (rdx_26 != 0)
                goto label_141883ae8

var_18c_2.d = var_e0
int128_t var_128_2 = var_1a0_2.o
int128_t var_118_2 = 0xffffffff
int64_t temp0_5 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_170 = (&var_108).o
int128_t var_160_2 = var_128_2
int64_t var_150_2 = temp0_5

while (true)
    int64_t r8_18 = sx.q(var_160_2:0xc.d)
    char rax_48
    
    if (r8_18.d != ((0xffffffff << (var_e0.b & 0x1f)).q u>> 0x20).d || var_160_2.q != &var_f8)
        rax_48 = 0
    else
        rax_48 = 1
    
    int64_t* rdx_28 = var_170.q
    
    if (rax_48 == 0 || rdx_28 != &var_108)
        rax_48 = 1
    else
        rax_48 = 0
    
    if (rax_48 == 0)
        break
    
    int64_t* rcx_45 = *(r14 + 0x18)
    int64_t r9_4 = *rcx_45
    rbx_7 = zx.q(rbx_7.b)
    
    if ((*(r9_4 + 0x1d8))(rcx_45, *rdx_28 + r8_18 * 0x18, &var_140, r9_4, var_1c8) == 0)
        rbx_7 = nullptr
    
    var_160_2:8.d &= not.d(var_170:0xc.d)
    sub_14059bdd0(&var_170:8)

void* result
int64_t var_100

if (rbx_7.b == 0)
label_141883d2d:
    int32_t var_c0_1 = 0
    
    if (var_c8 != 0)
        sub_140a74f90(var_c8)
    
    var_100.d = 0
    int32_t var_d8_1 = 0xffffffff
    int32_t var_d4_1 = 0
    sub_14059a8e0(&var_f8, 0)
    
    if (var_e8 != 0)
        sub_140a74f90(var_e8)
    
    int64_t rcx_63 = var_108
    
    if (rcx_63 != 0)
        sub_140a74f90(rcx_63)
    
    int64_t rcx_64 = *r12
    
    if (rcx_64 != 0)
        sub_140a74f90(rcx_64)
    
    result.b = 0
else
    int64_t* rcx_47 = *(r14 + 0x18)
    
    if (rcx_47[0xc].d == *(rcx_47 + 0x8c) && rcx_47[0x18].d s> 1)
        __builtin_memset(&var_58, 0, 0x14)
        (*(*rcx_47 + 0x1f0))(rcx_47, &rcx_47[0x17], &var_58)
        sub_141829dd0(&var_1b0, &var_58, 0x14)
        void* rdi_10 = *(r14 + 0x18)
        sub_140598750(rdi_10 + 0x58, &var_140)
        int64_t* var_138
        *var_138 = var_1b0
        var_138[1].d = i_6
        *(var_138 + 0xc) = var_1a4
        var_138[2].d = 0xffffffff
        int32_t rax_58 = var_138[1].d
        int16_t* rdx_34
        
        if (rax_58 == 0)
            rdx_34 = &data_142d40450
        else
            rdx_34 = *var_138
        
        int32_t rcx_50 = rax_58 - 1
        
        if (rax_58 == 0)
            rcx_50 = 0
        
        sub_14059a6d0(rdi_10 + 0x58, &var_1b8, sub_1405969c0(rcx_50, rdx_34), var_138, var_140.d, 
            nullptr)
    
    int64_t rdi_11
    
    if (sub_14183e350(r14 + 0x78) != 0)
        rdi_11 = sub_1405948a0(sub_14183e350(r14 + 0x78))
    else
        rdi_11 = 0
    
    int64_t rax_63
    
    if (sub_14183e350(r14 + 0x78) != 0)
        rax_63.b = sub_14082fb80(sub_14183e350(r14 + 0x78)) == 0
    else
        rax_63.b = 1
    
    if ((rdi_11 == 0 && *(r14 + 0x10) == 0) || rax_63.b == 0)
        goto label_141883d2d
    
    int64_t* rcx_58 = *(r14 + 0x18)
    
    if (rdi_11 != (*(*rcx_58 + 0x78))(rcx_58))
        goto label_141883d2d
    
    *(r14 + 0xd8) = 1
    int32_t var_c0_2 = 0
    
    if (var_c8 != 0)
        sub_140a74f90(var_c8)
    
    var_100.d = 0
    int32_t var_d8_2 = 0xffffffff
    int32_t var_d4_2 = 0
    sub_14059a8e0(&var_f8, 0)
    
    if (var_e8 != 0)
        sub_140a74f90(var_e8)
    
    int64_t rcx_69 = var_108
    
    if (rcx_69 != 0)
        sub_140a74f90(rcx_69)
    
    int64_t rcx_70 = *r12
    
    if (rcx_70 != 0)
        sub_140a74f90(rcx_70)
    
    result.b = 1
__security_check_cookie(rax_1 ^ &var_1e8)
return result
