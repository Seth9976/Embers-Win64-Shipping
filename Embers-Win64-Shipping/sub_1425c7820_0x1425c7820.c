// 函数: sub_1425c7820
// 地址: 0x1425c7820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x18)

if (rdx == 4)
    char rbx_9 = *(*(arg1 + 0x20) + 0x68)
    void* rax_64
    
    if (arg2 == 0 || ((zx.q(*(arg2[1] + 0x10)) u>> 0x11).b & 1) == 0)
        sub_140af2bc0()
    else
        rax_64 = sub_1425c6360(arg2, arg3, arg4, arg5)
        
        if (rax_64 != 0)
            void* rcx_71 = zx.q(*(arg2 + 0x79)) + rax_64
            
            if (rbx_9 == 0)
                *rcx_71 &= not.b(*(arg2 + 0x7b))
                return 1
            
            *rcx_71 = (not.b(*(arg2 + 0x7b)) & *rcx_71) | *(arg2 + 0x7a)
            return 1
    
    rax_64.b = 0
    return rax_64

uint128_t zmm6
uint128_t var_38 = zmm6
void* const* rax

if (rdx != 5)
    if (rdx == 6)
        zmm6 = zx.o((*(arg1 + 0x20))[0xb])
        
        if (arg2 == 0)
            rax.b = 0
            return rax
        
        int64_t rcx_1 = *(arg2[1] + 0x10)
        
        if ((rcx_1.b u>> 6 & 1) == 0)
            if (((rcx_1 u>> 0x20).b & 1) != 0)
                rax = sub_1425c6360(arg2, arg3, arg4, arg5)
                
                if (rax == 0)
                    rax.b = 0
                    return rax
                
                *rax = zmm6.q
                rax.b = 1
                return rax
            
            if (((rcx_1 u>> 8).b & 1) != 0)
                rax = sub_1425c6360(arg2, arg3, arg4, arg5)
                
                if (rax == 0)
                    rax.b = 0
                    return rax
                
                *rax = _mm_cvtpd_ps(zmm6)
                rax.b = 1
                return rax
            
            int32_t rcx_5
            
            if ((rcx_1.b u>> 7 & 1) != 0)
                rax = sub_1425c6360(arg2, arg3, arg4, arg5)
                
                if (rax == 0)
                    rax.b = 0
                    return rax
                
                rcx_5 = int.d(zmm6.q)
            label_1425c793c:
                *rax = rcx_5
                rax.b = 1
                return rax
            
            if (((rcx_1 u>> 0xb).b & 1) != 0)
                rax = sub_1425c6360(arg2, arg3, arg4, arg5)
                
                if (rax == 0)
                    rax.b = 0
                    return rax
                
                rcx_5 = (int.q(zmm6.q)).d
                goto label_1425c793c
            
            if (((rcx_1 u>> 0x1f).b & 1) != 0 || ((rcx_1 u>> 0x12).b & 1) != 0)
                rax = sub_1425c6360(arg2, arg3, arg4, arg5)
                
                if (rax == 0)
                    rax.b = 0
                    return rax
                
                *rax = (int.d(zmm6.q)).w
                rax.b = 1
                return rax
            
            if (((rcx_1 u>> 0x16).b & 1) != 0)
                rax = sub_1425c6360(arg2, arg3, arg4, arg5)
                
                if (rax == 0)
                    rax.b = 0
                    return rax
                
                *rax = int.q(zmm6.q)
                rax.b = 1
                return rax
            
            if (((rcx_1 u>> 9).b & 1) != 0)
                rax = sub_1425c6360(arg2, arg3, arg4, arg5)
                
                if (rax == 0)
                    rax.b = 0
                    return rax
                
                int64_t zmm0_2 = 0x43e0000000000000
                int64_t rcx_12 = 0
                
                if (not(zmm6.q f< zmm0_2))
                    zmm6.q = zmm6.q f- zmm0_2
                    
                    if (not(zmm6.q f>= zmm0_2))
                        rcx_12 = -0x8000000000000000
                
                *rax = int.q(zmm6.q) + rcx_12
                rax.b = 1
                return rax
            
            rcx_1.b u>>= 1
            
            if ((rcx_1.b & 1) == 0)
                rax.b = 0
                return rax
        
        rax = sub_1425c6360(arg2, arg3, arg4, arg5)
        
        if (rax == 0)
            rax.b = 0
            return rax
        
        *rax = (int.d(zmm6.q)).b
        rax.b = 1
        return rax
    
    if (rdx == 7)
        return sub_1425c52d0(arg2, arg3, arg4, arg5)
    
    rax.b = 1
    return rax

int64_t* rcx_15 = *(arg1 + 0x20)
int16_t** rbx_1 = (*(*rcx_15 + 0x10))(rcx_15, rdx - 5)

if (arg2 == 0)
    rax.b = 0
    return rax

int64_t rdx_14 = *(arg2[1] + 0x10)

if (((rdx_14 u>> 0xe).b & 1) != 0)
    rax = sub_1425c6360(arg2, arg3, arg4, arg5)
    
    if (rax == 0)
        rax.b = 0
        return rax
    
    sub_140597df0(rax, rbx_1)
    rax.b = 1
    return rax

if (((rdx_14 u>> 0xd).b & 1) != 0)
    int16_t* rax_21
    
    if (rbx_1[1].d == 0)
        rax_21 = &data_142d40450
    else
        rax_21 = *rbx_1
    
    void var_a8
    int64_t* rax_22 = sub_140b58260(&var_a8, rax_21, 1)
    rax = sub_1425c6360(arg2, arg3, arg4, arg5)
    
    if (rax == 0)
        rax.b = 0
        return rax
    
    *rax = *rax_22
    rax.b = 1
    return rax

if (((rdx_14 u>> 0x1e).b & 1) != 0)
    int64_t var_108
    sub_140a96170(&var_108)
    int16_t* rax_25
    
    if (rbx_1[1].d == 0)
        rax_25 = &data_142d40450
    else
        rax_25 = *rbx_1
    
    int64_t* var_100
    
    if (sub_140abc1e0(rax_25, &var_108, 0, 0, 0) == 0)
        void var_78
        int64_t* rax_27 = sub_140aae420(&var_78, rbx_1)
        int64_t rdx_21 = var_108
        var_108 = *rax_27
        *rax_27 = rdx_21
        int64_t* rdx_22 = var_100
        var_100 = rax_27[1]
        rax_27[1] = rdx_22
        int32_t var_f8_1 = rax_27[2].d
        int64_t* var_70
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                (**var_70)(var_70)
                int32_t rax_31 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (rax_31 == 1)
                    (*(*var_70 + 8))(var_70, 1)
    
    void* rax_33 = sub_1425c6360(arg2, arg3, arg4, arg5)
    int64_t* rdi
    
    if (rax_33 == 0)
        rdi.b = 0
    else
        sub_14065da90(rax_33, &var_108)
        rdi.b = 1
    
    if (var_100 != 0)
        var_100[1].d -= 1
        
        if (var_100[1].d == 1)
            int64_t rdx_25 = *var_100
            (*rdx_25)(var_100, rdx_25)
            int32_t r12_1 = *(var_100 + 0xc)
            *(var_100 + 0xc) -= 1
            
            if (r12_1 == 1)
                int64_t r8_12 = *var_100
                (*(r8_12 + 8))(var_100, zx.q(r12_1), r8_12)
    
    return zx.q(rdi.b)

rax.b = rdx_14.b u>> 6

if ((rax.b & 1) != 0)
    if (arg2[0xf] == 0)
        rax.b = 0
        return rax
    
    int16_t* rax_36
    
    if (rbx_1[1].d == 0)
        rax_36 = &data_142d40450
    else
        rax_36 = *rbx_1
    
    void var_a0
    int64_t* rax_37 = sub_140b58260(&var_a0, rax_36, 1)
    rax = sub_140be0d00(arg2[0xf], *rax_37, 0)
    char rbx_5 = rax.b
    
    if (rax.d == 0xffffffff)
        rax.b = 0
        return rax
    
    rax = sub_1425c6360(arg2, arg3, arg4, arg5)
    
    if (rax == 0)
        rax.b = 0
        return rax
    
    *rax = rbx_5
    rax.b = 1
    return rax

if (((rdx_14 u>> 0x30).b & 1) != 0)
    int16_t* rax_40
    
    if (rbx_1[1].d == 0)
        rax_40 = &data_142d40450
    else
        rax_40 = *rbx_1
    
    void var_98
    rax = sub_140be0d00(arg2[0x10], *sub_140b58260(&var_98, rax_40, 1), 0)
    void* const* rbx_7 = rax
    
    if (rax == -1)
        rax.b = 0
        return rax
    
    rax = sub_1425c6360(arg2, arg3, arg4, arg5)
    
    if (rax == 0)
        rax.b = 0
        return rax
    
    int64_t* rcx_41 = arg2[0xf]
    int64_t r9_14 = *rcx_41
    (*(r9_14 + 0x148))(rcx_41, rax, rbx_7, r9_14)
    rax.b = 1
    return rax

void* rax_45

if (((rdx_14 u>> 0xa).b & 1) == 0)
    int64_t rcx_52
    
    if (((rdx_14 u>> 0x21).b & 1) != 0)
        int16_t* rax_48
        
        if (rbx_1[1].d == 0)
            rax_48 = &data_142d40450
        else
            rax_48 = *rbx_1
        
        int16_t** rax_49 = sub_1425c3cc0(0, rax_48, 0, 2, 0)
        int64_t var_128
        __builtin_memset(&var_128, 0, 0x18)
        int32_t var_138 = 0xffffffff
        int64_t var_134_1 = 0
        int64_t arg_8 = 0
        
        if (rax_49 == 0)
            int64_t var_110_1 = 0
            var_128 = 0
        else
            void var_60
            sub_140b97b00(&var_128, sub_140d21d60(&var_60, rax_49))
            int64_t var_58
            
            if (var_58 != 0)
                sub_140a74f90(var_58)
            
            sub_140d3a3a0(&var_138, rax_49)
            int32_t rax_51 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_51 = data_1439aaa30
            
            var_134_1:4.d = rax_51
        
        void* rax_52 = sub_1425c6360(arg2, arg3, arg4, arg5)
        int64_t var_120
        
        if (rax_52 == 0)
            rcx_52 = var_120
            rbx_1.b = 0
        else
            *rax_52 = var_138.q
            *(rax_52 + 8) = var_134_1:4.d
            *(rax_52 + 0x10) = var_128
            sub_140597df0(rax_52 + 0x18, &var_120)
            rcx_52 = var_120
            rbx_1.b = 1
        goto label_1425c8044
    
    if (((rdx_14 u>> 0x10).b & 1) == 0)
        if (((rdx_14 u>> 0x1b).b & 1) != 0)
            int16_t* rax_57
            
            if (rbx_1[1].d == 0)
                rax_57 = &data_142d40450
            else
                rax_57 = *rbx_1
            
            void* var_d8
            sub_140d3a3a0(&var_d8, sub_140d2ee50(arg2[0xf], nullptr, rax_57, 0))
            rax = sub_1425c6360(arg2, arg3, arg4, arg5)
            
            if (rax == 0)
                rax.b = 0
                return rax
            
            *rax = var_d8
            rax.b = 1
            return rax
        
        if (((rdx_14 u>> 0x1d).b & 1) == 0)
            rax.b = 0
            return rax
        
        int64_t var_f0
        __builtin_memset(&var_f0, 0, 0x18)
        void var_48
        int128_t var_88 = *sub_140a1dfc0(rbx_1, &var_48)
        sub_140d2c760(&var_f0, &var_88)
        int64_t rax_60 = var_f0
        int32_t var_d0_1 = 0xffffffff
        int64_t var_cc_1 = 0
        int64_t var_e8
        int64_t var_b8
        sub_140596d10(&var_b8, &var_e8)
        void* rax_61 = sub_1425c6360(arg2, arg3, arg4, arg5)
        
        if (rax_61 == 0)
            rbx_1.b = 0
        else
            *rax_61 = var_d0_1.q
            *(rax_61 + 8) = var_cc_1:4.d
            *(rax_61 + 0x10) = rax_60
            sub_140597df0(rax_61 + 0x18, &var_b8)
            rbx_1.b = 1
        
        int64_t rcx_66 = var_b8
        
        if (rcx_66 != 0)
            sub_140a74f90(rcx_66)
        
        rcx_52 = var_e8
    label_1425c8044:
        
        if (rcx_52 != 0)
            sub_140a74f90(rcx_52)
        
        return zx.q(rbx_1.b)
    
    int16_t* rax_55
    
    if (rbx_1[1].d == 0)
        rax_55 = &data_142d40450
    else
        rax_55 = *rbx_1
    
    rax_45 = sub_140d2ee50(arg2[0xf], nullptr, rax_55, 0)
else
    int16_t* rax_44
    
    if (rbx_1[1].d == 0)
        rax_44 = &data_142d40450
    else
        rax_44 = *rbx_1
    
    rax_45 = sub_1425c3cc0(0, rax_44, 0, 2, 0)

rax = sub_1425c6360(arg2, arg3, arg4, arg5)

if (rax == 0)
    rax.b = 0
    return rax

*rax = rax_45
rax.b = 1
return rax
