// 函数: sub_14268dcf0
// 地址: 0x14268dcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* rdi = arg3
int64_t var_d0 = arg6
int64_t var_88 = arg10
uint8_t result = (arg2 u>> 0x1e).b
int64_t* var_68 = arg4
int64_t* var_78 = arg1
float* var_e0 = arg8

if ((result & 1) != 0)
    int64_t r15_1 = sx.q(arg12[1].d)
    int16_t var_e8
    
    if (r15_1.d s> 1)
        void* rax_6 = *arg1
        
        if (rax_6 != 0 && (*(rax_6 + 0x474) & 0x200) == 0)
            void* rcx = arg1[1]
            var_e8 = 0
            sub_142610290(rcx, *((r15_1 << 5) + *arg12 - 0x20), &var_e8)
            
            if ((var_e8 & data_143f717a0) != 0)
                r15_1 = zx.q((r15_1 - 1).d)
    
    int32_t rax_10 = *(rdi + 0x118) + r15_1.d
    *(rdi + 0x118) = rax_10
    
    if (rax_10 s> *(rdi + 0x11c))
        sub_1406105e0(rdi + 0x110)
    
    int64_t i_4 = sx.q(r15_1.d)
    
    if (r15_1.d != 1)
        int64_t i = 0
        
        if (i_4 s>= 4)
            int64_t r8_2 = 0
            
            do
                r8_2 += 0x80
                *(*(rdi + 0x110) + (i << 2)) = *(*arg12 + r8_2 - 0x78)
                *(*(rdi + 0x110) + (i << 2) + 4) = *(*arg12 + r8_2 - 0x58)
                *(*(rdi + 0x110) + (i << 2) + 8) = *(*arg12 + r8_2 - 0x38)
                *(*(rdi + 0x110) + (i << 2) + 0xc) = *(*arg12 + r8_2 - 0x18)
                i += 4
            while (i s< i_4 - 3)
        
        if (i s< i_4)
            int64_t r8_4 = i << 5
            
            do
                r8_4 += 0x20
                *(*(rdi + 0x110) + (i << 2)) = *(*arg12 + r8_4 - 0x18)
                i += 1
            while (i s< i_4)
    else
        **(rdi + 0x110) = sub_142676b20(var_78, var_d0, arg5, arg9, arg8).d
    
    int32_t rax_21 = *(rdi + 0x108) + r15_1.d
    *(rdi + 0x108) = rax_21
    
    if (rax_21 s> *(rdi + 0x10c))
        sub_1405a4d70(rdi + 0x100)
    
    void* r8_5 = *(rdi + 0x100)
    
    if (r15_1.d s> 0)
        int64_t rdx_5 = 0
        int64_t i_1
        
        do
            r8_5 += 8
            rdx_5 += 0x20
            *(r8_5 - 8) = *(rdx_5 + *arg12 - 0x20)
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    *(rdi + 0x140) &= 0xfffffffe
    int64_t* rdx_6
    float* rsi_1
    int64_t r15_2
    
    if (*(arg5 + 0x214) == 0)
        r15_2 = arg7
        rsi_1 = var_e0
        rdx_6 = arg11
    else
        sub_14265d0f0(rdi)
        rsi_1 = var_e0
        r15_2 = var_d0
        var_d0 = arg7
        
        if (rsi_1 != arg9)
            int64_t zmm1_1 = *rsi_1
            int32_t rcx_11 = rsi_1[2]
            int32_t rax_25 = arg9[1].d
            *rsi_1 = *arg9
            *arg9 = zmm1_1
            rsi_1[2] = rax_25
            arg9[1].d = rcx_11
        
        rdx_6 = arg11
        int64_t* rcx_12 = var_88
        
        if (rcx_12 != rdx_6)
            int32_t rax_26 = rcx_12[1].d
            *rdx_6 = *rcx_12
            rdx_6[1].d = rax_26
    
    int128_t zmm6 = 0x80000000
    int32_t var_80
    
    if (((*(rdi + 0x140) u>> 3).b & 1) == 0)
        int64_t r14_1 = sx.q(*(rdi + 0x30))
        int32_t rax_36 = (r14_1 + 1).d
        *(rdi + 0x30) = rax_36
        
        if (rax_36 s> *(rdi + 0x34))
            sub_1405c4e40(rdi + 0x28)
        
        int64_t rcx_18 = r14_1 << 5
        int64_t* rcx_19 = rcx_18 + *(rdi + 0x28)
        
        if (rcx_18 != neg.q(*(rdi + 0x28)))
            *rcx_19 = *rsi_1
            rcx_19[1].d = rsi_1[2]
            rcx_19[2] = var_d0
            rcx_19[3] = 0
        
        int64_t rsi_2 = sx.q(*(rdi + 0x30))
        int32_t rax_39 = (rsi_2 + 1).d
        *(rdi + 0x30) = rax_39
        
        if (rax_39 s> *(rdi + 0x34))
            sub_1405c4e40(rdi + 0x28)
        
        int64_t rcx_22 = rsi_2 << 5
        int64_t* rcx_23 = rcx_22 + *(rdi + 0x28)
        int64_t* r15_3
        
        if (rcx_22 == neg.q(*(rdi + 0x28)))
            r15_3 = nullptr
        else
            int64_t zmm0 = *arg9
            int32_t rax_40 = arg9[1].d
            rcx_23[2] = r15_2
            r15_3 = nullptr
            *rcx_23 = zmm0
            rcx_23[1].d = rax_40
            rcx_23[3] = 0
        
        int32_t i_2 = 0
        
        if (*(rdi + 0x108) s> 0)
            do
                void* rax_42 = sub_14260fdc0(var_78[1], *(r15_3 + *(rdi + 0x100)))
                
                if (rax_42 != 0)
                    int64_t rsi_3 = sx.q(*(rdi + 0x128))
                    int32_t rcx_25 = (rsi_3 + 1).d
                    *(rdi + 0x128) = rcx_25
                    
                    if (rcx_25 s> *(rdi + 0x12c))
                        sub_1405a4cf0(rdi + 0x120)
                    
                    *(*(rdi + 0x120) + (rsi_3 << 2)) = *(rax_42 + 0x20)
                
                i_2 += 1
                r15_3 = &r15_3[1]
            while (i_2 s< *(rdi + 0x108))
    else
        var_80 = arg9[1].d
        var_88 = *arg9
        
        if (((arg2 u>> 6).b & 1) != 0)
            int32_t rax_33
            int128_t zmm6_1
            rax_33, zmm6_1 = sub_1426049e0(var_68, 
                *(*(rdi + 0x100) + (sx.q(*(rdi + 0x108)) << 3) - 8), rdx_6, &var_78)
            
            if (((rax_33 u>> 0x1e).b & 1) != 0)
                int32_t zmm0_1 = var_78:4.d
                int32_t var_70
                var_88 = (_mm_unpacklo_ps(var_78.d ^ zmm6_1, (var_70 ^ zmm6_1).q)).q
                var_80 = zmm0_1
        
        zmm6 = sub_142661860(rdi, rsi_1, &var_88)
    
    result = (*(rdi + 0x140) u>> 4).b
    
    if ((result & 1) != 0)
        int32_t rsi_4 = *(rdi + 0x108)
        float* rbx_4 = nullptr
        var_e0 = nullptr
        int32_t r14_2 = 0
        int64_t var_d8_1 = 0
        
        if (rsi_4 != 1)
            sub_1405a51b0(&var_e0, rsi_4 - 1)
            r14_2 = var_d8_1.d
            rbx_4 = var_e0
        
        if (rsi_4 - 1 s> 0)
            int64_t* rdi_1 = var_68
            int64_t i_3 = 0
            
            do
                int64_t rdx_15 = *(rdi + 0x100)
                var_e8.b = 0
                var_68 = 0
                var_88.d = 0
                var_88 = 0
                uint8_t var_e4
                uint8_t* var_f8_1 = &var_e4
                uint8_t* var_100_1 = &var_e8
                var_e4 = 0
                var_68.d = 0
                sub_142610700(rdi_1, *(rdx_15 + (i_3 << 3)), *(rdx_15 + (i_3 << 3) + 8), &var_68, 
                    &var_88, var_100_1, var_f8_1)
                float zmm4_1[0x4] = var_88.d ^ zmm6
                float var_a0_1 = var_68:4.d[0]
                float var_94_1 = var_88:4.d[0]
                int64_t rax_47 = *(rdi + 0x100)
                int64_t r15_4 = sx.q(r14_2)
                int32_t var_60
                float zmm1_3[0x4] = _mm_unpacklo_ps(var_68.d ^ zmm6, (var_60 ^ zmm6).q)
                float zmm0_2[0x4] = _mm_unpacklo_ps(zmm4_1, (var_80 ^ zmm6).q)
                r14_2 = (r15_4 + 1).d
                int64_t var_90_1 = *(rax_47 + (i_3 << 3) + 8)
                int64_t var_a8_1 = zmm1_3.q
                int64_t var_9c_1 = zmm0_2.q
                var_d8_1.d = r14_2
                
                if (r14_2 s> var_d8_1:4.d)
                    sub_1405c4e40(&var_e0)
                    r14_2 = var_d8_1.d
                    rbx_4 = var_e0
                
                i_3 += 1
                int128_t* rax_49 = r15_4 << 5
                *(rax_49 + rbx_4) = var_a8_1.o
                *(rax_49 + rbx_4 + 0x10) = var_9c_1:4.o
            while (i_3 s< sx.q(rsi_4 - 1))
            
            rdi = arg3
        
        result = &var_e0
        
        if (rdi + 0x130 != &var_e0)
            int32_t r8_9 = *(rdi + 0x13c)
            *(rdi + 0x138) = r14_2
            
            if (r14_2 != 0 || r8_9 != 0)
                sub_14083a1f0(rdi + 0x130, r14_2, r8_9)
                result = memcpy(*(rdi + 0x130), rbx_4, r14_2 << 5)
            else
                *(rdi + 0x13c) = 0
        
        *(rdi + 0x140) |= 1
        
        if (rbx_4 != 0)
            result = sub_140a74f90(rbx_4)

__security_check_cookie(rax_1 ^ &var_128)
return result
