// 函数: sub_140e5afe0
// 地址: 0x140e5afe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
int64_t arg_20 = rsi
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
bool result

if (sub_140e6ae00(data_143e29f28, arg5) != 0)
label_140e5b4a8:
    int64_t* rbx_6 = arg2[2]
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp1_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)
    
    result = false
else
    char rcx_1 = arg3 | 2
    int64_t* rbx_1 = arg2[2]
    
    if (arg4 == 0)
        rcx_1 = arg3
    
    char rcx_2 = rcx_1 | 4
    
    if (arg6 == 0)
        rcx_2 = rcx_1
    
    int64_t rcx_3 = arg2[1]
    char r8 = rcx_2 | 8
    
    if (arg7 == 0)
        r8 = rcx_2
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t var_138 = *arg2
    int64_t var_130_1 = rcx_3
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    uint32_t rcx_4 = zx.d(r8)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (sub_140d6df00(&var_138) == 0)
    label_140e5b481:
        
        if (rbx_1 == 0)
            goto label_140e5b4a8
        
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
        
        goto label_140e5b4a8
    
    if (sub_140d6dea0(&var_138) != 0)
        goto label_140e5b481
    
    int32_t var_ac_1 = 0x80
    int64_t var_d8
    __builtin_memset(&var_d8, 0, 0x2c)
    int32_t var_a4_1 = 0
    int64_t var_98_1 = 0
    int32_t var_90_1 = 0
    int64_t* var_88
    __builtin_memset(&var_88, 0, 0x2c)
    int32_t var_54_1 = 0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    int32_t var_a8_1 = 0xffffffff
    int32_t var_5c_1 = 0x80
    int32_t var_58_1 = 0xffffffff
    sub_140e64780(arg1, &var_d8, &var_88)
    int32_t var_40_2 = 0
    
    if (var_48_1 != 0)
        sub_140a74f90(var_48_1)
    
    sub_140a720d0(&var_88, 0)
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    int64_t* rcx_14 = var_88
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    int64_t var_c8
    int64_t* var_150_1 = &var_c8
    int32_t rcx_15 = 0
    int32_t var_158 = 0
    int32_t r8_2 = 0
    int32_t var_154_1 = 1
    int32_t var_148_1 = 0xffffffff
    int40_t var_144_1 = 0
    int64_t* var_b8
    int32_t var_b0
    
    if (var_b0 != 0)
        int64_t* r9 = &var_c8
        
        if (var_b8 != 0)
            r9 = var_b8
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(var_b0 - 1)
        int32_t rdx_11 = *r9
        
        if (rdx_11 != 0)
        label_140e5b23b:
            int32_t rax_21 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_21)
            int32_t var_154_2 = rax_21
            int32_t rax_22
            
            if (rax_21 == 0)
                rax_22 = 0x20
            else
                rax_22 = 0x1f - temp0_1
            
            int32_t rax_23 = r8_2 - rax_22 + 0x1f
            
            if (rax_23 s> var_b0)
                rax_23 = var_b0
            
            var_144_1.d = rax_23
        else
            while (true)
                int64_t rdx_12 = sx.q(rcx_15)
                r8_2 += 0x20
                rcx_15 += 1
                var_144_1:4.d = r8_2
                var_158 = rcx_15
                
                if (rdx_12.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    var_144_1.d = var_b0
                    break
                
                rdx_11 = *(r9 + (rdx_12 << 2) + 4)
                var_148_1 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_140e5b23b
    
    double zmm2_1[0x2] = var_148_1.o
    double zmm0_1[0x2] = var_158.o
    var_88 = &var_d8
    int64_t var_80
    var_80.o = zmm0_1
    uint32_t rax_25 = (zmm2_1[0] u>> 0x20).d
    int64_t var_70
    var_70.o = zmm2_1
    double var_118[0x2] = var_88.o
    int64_t var_f8_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
    int64_t var_78
    int128_t var_108_1 = var_78.o
    int64_t var_d0
    
    if (rax_25 s>= var_b0)
    label_140e5b427:
        int32_t var_90_2 = 0
        
        if (var_98_1 != 0)
            sub_140a74f90(var_98_1)
        
        var_d0.d = 0
        int32_t var_a8_2 = 0xffffffff
        int32_t var_a4_2 = 0
        sub_14059a8e0(&var_c8, 0)
        
        if (var_b8 != 0)
            sub_140a74f90(var_b8)
        
        int64_t rcx_35 = var_d8
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
        
        goto label_140e5b481
    
    int32_t rcx_17 = var_108_1:0xc.d
    int64_t* var_e0
    int64_t* rax_44
    
    while (true)
        int64_t* var_e8
        sub_140e63020(sub_140e64ad0(), &var_e8, *(*var_118[0] + sx.q(rcx_17) * 0x10), &var_138, 0)
        int64_t* rdx_14 = var_e8
        
        if (rdx_14 != 0)
            int64_t r8_5 = var_138
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            int64_t* r9_2 = *rdx_14
            int64_t* rax_28 = *r9_2
            char var_120
            char rcx_24 = (((((rcx_4 u>> 2).b & 1) | ((rcx_4.b & 3) * 2) | (var_120 & 0xf0)
                | (rcx_4.b & 8)) ^ var_144_1:4.b) & 0xf) ^ var_144_1:4.b
            char rdx_15
            
            if (*rax_28 == r8_5)
                rdx_15 = (rax_28[3].d).b
            
            int64_t* rax_35
            char rdx_17
            
            if (*rax_28 != r8_5 || ((rcx_24 ^ rdx_15) & 1) != 0 || ((rdx_15 ^ rcx_24) & 2) != 0
                    || ((rdx_15 ^ rcx_24) & 4) != 0 || ((rdx_15 ^ rcx_24) & 8) != 0)
                rax_35 = r9_2[2]
                
                if (*rax_35 == r8_5)
                    rdx_17 = (rax_35[3].d).b
            
            if ((*rax_28 != r8_5 || ((rcx_24 ^ rdx_15) & 1) != 0 || ((rdx_15 ^ rcx_24) & 2) != 0
                    || ((rdx_15 ^ rcx_24) & 4) != 0 || ((rdx_15 ^ rcx_24) & 8) != 0) && (*rax_35 != r8_5
                    || ((rdx_17 ^ rcx_24) & 1) != 0 || ((rdx_17 ^ rcx_24) & 2) != 0
                    || ((rdx_17 ^ rcx_24) & 4) != 0 || ((rdx_17 ^ rcx_24) & 8) != 0))
                rsi.b = 0
            else
                rsi.b = 1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp11_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (rsi.b != 0)
                var_158.o = var_e8.o
                
                if (var_e0 != 0)
                    var_e0[1].d += 1
                
                rax_44 = sub_140e64c30(arg1, &var_158)
                
                if (rax_44 != 0)
                    break
        
        if (var_e0 != 0)
            var_e0[1].d -= 1
            
            if (var_e0[1].d == 1)
                (**var_e0)(var_e0)
                int32_t temp9_1 = *(var_e0 + 0xc)
                *(var_e0 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*var_e0 + 8))(var_e0, 1)
        
        var_108_1:8.d &= not.d(var_118[1]:4.d)
        sub_14059bdd0(&var_118[1])
        rcx_17 = var_108_1:0xc.d
        
        if (rcx_17 s>= *(var_108_1.q + 0x18))
            goto label_140e5b427
    
    if (sub_140e5a490(rax_44) == 0 || (arg8 != 0 && rax_44[8].d != 1))
        if (var_e0 != 0)
            var_e0[1].d -= 1
            
            if (var_e0[1].d == 1)
                (**var_e0)(var_e0)
                int32_t temp13_1 = *(var_e0 + 0xc)
                *(var_e0 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*var_e0 + 8))(var_e0, 1)
        
        int32_t var_90_4 = 0
        
        if (var_98_1 != 0)
            sub_140a74f90(var_98_1)
        
        var_d0.d = 0
        int32_t var_a8_4 = 0xffffffff
        int32_t var_a4_4 = 0
        sub_14059a8e0(&var_c8, 0)
        
        if (var_b8 != 0)
            sub_140a74f90(var_b8)
        
        int64_t rcx_60 = var_d8
        
        if (rcx_60 != 0)
            sub_140a74f90(rcx_60)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp17_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp17_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        sub_140d430a0(arg2)
        result = false
    else
        sub_140e62950(rax_44)
        
        if (var_e0 != 0)
            var_e0[1].d -= 1
            
            if (var_e0[1].d == 1)
                (**var_e0)(var_e0)
                int32_t temp15_1 = *(var_e0 + 0xc)
                *(var_e0 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    (*(*var_e0 + 8))(var_e0, 1)
        
        int32_t var_90_3 = 0
        
        if (var_98_1 != 0)
            sub_140a74f90(var_98_1)
        
        var_d0.d = 0
        int32_t var_a8_3 = 0xffffffff
        int32_t var_a4_3 = 0
        sub_14059a8e0(&var_c8, 0)
        
        if (var_b8 != 0)
            sub_140a74f90(var_b8)
        
        int64_t rcx_50 = var_d8
        
        if (rcx_50 != 0)
            sub_140a74f90(rcx_50)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp19_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp19_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        sub_140d430a0(arg2)
        result = true

__security_check_cookie(rax_1 ^ &var_188)
return result
