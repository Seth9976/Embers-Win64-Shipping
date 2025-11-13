// 函数: sub_141cab530
// 地址: 0x141cab530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* arg_10 = arg2
void var_128
int64_t var_38 = __security_cookie ^ &var_128
int64_t result
uint64_t* var_108

if (arg2 == 0)
    result.b = 0
else
    int16_t* var_100
    
    if (*sub_140a73990(arg1, &var_108, arg2) != 0xffffffff)
    label_141cab65c:
        uint64_t* rdx_7 = arg_10
        uint64_t var_88
        var_108 = &var_88
        var_88 = 0
        uint64_t** var_f8_1 = &var_108
        int64_t var_80
        __builtin_memset(&var_80, 0, 0x24)
        var_100 = sub_141c99c60
        int32_t var_5c_1 = 0x80
        int32_t var_58_1 = 0xffffffff
        int32_t var_54_1 = 0
        int64_t var_48_1 = 0
        int32_t var_40_1 = 0
        sub_141c9ef70(arg1, rdx_7, &var_100, 1)
        int64_t var_78
        int64_t* var_f8_2 = &var_78
        int32_t rcx_7 = 0
        var_100.d = 0
        int32_t var_f0_1 = 0xffffffff
        int32_t r8_6 = 0
        var_100:4.d = 1
        int64_t var_ec_1 = 0
        int64_t* var_68
        int32_t var_60
        
        if (var_60 != 0)
            int64_t* r9_2 = &var_78
            
            if (var_68 != 0)
                r9_2 = var_68
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(var_60 - 1)
            int32_t rdx_10 = *r9_2
            
            if (rdx_10 != 0)
            label_141cab748:
                int32_t rax_15 = neg.d(rdx_10) & rdx_10
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
                var_100:4.d = rax_15
                int32_t rax_16
                
                if (rax_15 == 0)
                    rax_16 = 0x20
                else
                    rax_16 = 0x1f - temp0_2
                
                int32_t rax_17 = r8_6 - rax_16 + 0x1f
                
                if (rax_17 s> var_60)
                    rax_17 = var_60
                
                var_ec_1.d = rax_17
            else
                while (true)
                    int64_t rdx_11 = sx.q(rcx_7)
                    r8_6 += 0x20
                    rcx_7 += 1
                    var_ec_1:4.d = r8_6
                    var_100.d = rcx_7
                    
                    if (rdx_11.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        var_ec_1.d = var_60
                        break
                    
                    rdx_10 = *(r9_2 + (rdx_11 << 2) + 4)
                    var_f0_1 = 0xffffffff
                    
                    if (rdx_10 != 0)
                        goto label_141cab748
        
        double zmm2_1[0x2] = var_f0_1.o
        double var_a0_1[0x2] = zmm2_1
        int128_t var_b0_1 = var_100.o
        var_ec_1.d = var_60
        double temp0_3[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
        int128_t var_e0 = (&var_88).o
        int128_t var_d0_1 = var_b0_1
        int64_t var_c0_1 = temp0_3.q
        
        while (true)
            int64_t rcx_14 = sx.q(var_d0_1:0xc.d)
            int64_t rax_18 = var_e0.q
            
            if (rcx_14.d == ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d
                    && var_d0_1.q == &var_78 && rax_18 == &var_88)
                break
            
            int64_t* rbx_4 = (rcx_14 << 4) + *rax_18
            sub_141caa170(arg1, *rbx_4)
            sub_141caa060(&arg1[0xa], *rbx_4)
            var_d0_1:8.d &= not.d(var_e0:0xc.d)
            sub_14059bdd0(&var_e0:8)
        
        uint64_t* rbx_5 = arg_10
        *(arg1 + 0x84)
        void* const rcx_21
        
        if (arg1[0xb].d == *(arg1 + 0x84))
        label_141cab8d0:
            rcx_21 = nullptr
        else
            var_108 = rbx_5
            int32_t rax_24 = sub_140b5ead0(rbx_5.d) + var_108:4.d
            void* r8_8 = &arg1[0x11]
            void* rcx_19 = *(r8_8 + 8)
            
            if (rcx_19 != 0)
                r8_8 = rcx_19
            
            int32_t rax_26 = *(r8_8 + (((sx.q(arg1[0x13].d) - 1) & sx.q(rax_24)) << 2))
            
            if (rax_26 == 0xffffffff)
            label_141cab8d0_1:
                rcx_21 = nullptr
            else
                int64_t r8_9 = arg1[0xa]
                
                while (true)
                    int64_t rdx_17 = sx.q(rax_26) * 3
                    rcx_21 = r8_9 + (rdx_17 << 3)
                    
                    if (*(r8_9 + (rdx_17 << 3)) == rbx_5)
                        break
                    
                    rax_26 = *(rcx_21 + 0x10)
                    
                    if (rax_26 == 0xffffffff)
                        goto label_141cab8d0_2
                
                if (rax_26 == 0xffffffff)
                label_141cab8d0_2:
                    rcx_21 = nullptr
        
        void* r8_10 = rcx_21 + 8
        
        if (rcx_21 == 0)
            r8_10 = nullptr
        
        if (r8_10 != 0)
            sub_140a73990(arg1, &var_108, *r8_10)
            int64_t rax_27 = sx.q(var_108.d)
            void* const rcx_25
            
            if (rax_27.d == 0xffffffff)
                rcx_25 = nullptr
            else
                rcx_25 = rax_27 * 0x60 + *arg1
            
            sub_141caa2b0(rcx_25 + 8, arg_10)
        
        sub_141caa170(arg1, arg_10)
        sub_141caa060(&arg1[0xa], arg_10)
        int32_t var_40_2 = 0
        
        if (var_48_1 != 0)
            sub_140a74f90(var_48_1)
        
        var_80.d = 0
        int32_t var_58_2 = 0xffffffff
        int32_t var_54_2 = 0
        sub_14059a8e0(&var_78, 0)
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        uint64_t rcx_33 = var_88
        
        if (rcx_33 != 0)
            sub_140a74f90(rcx_33)
        
        result.b = 1
    else
        sub_140b63b70(&arg_10, &var_100)
        int32_t var_f8
        int32_t rcx_1 = var_f8
        int32_t rax_2 = rcx_1 - 1
        
        if (rcx_1 == 0)
            rax_2 = 0
        
        int16_t* r9_1 = var_100
        
        if (r9_1[sx.q(rax_2) - 1] != 0x2f)
            goto label_141cab761
        
        int32_t r11_1 = rcx_1 - 1
        
        if (rcx_1 == 0)
            r11_1 = 0
        
        int32_t r10_1 = rcx_1 - 1
        
        if (rcx_1 == 0)
            r10_1 = 0
        
        int32_t rdx_3 = r10_1 - (r11_1 - 1)
        int32_t rbx_1 = rdx_3
        
        if (rdx_3 s> 1)
            rbx_1 = 1
        
        if (rbx_1 != 0)
            int32_t rax_4 = rcx_1 - rbx_1
            
            if (rax_4 != r11_1 - 1)
                if (rdx_3 s> 1)
                    r10_1 = r11_1
                
                memmove(&r9_1[sx.q(r11_1 - 1)], &r9_1[sx.q(r10_1)], (rax_4 - (r11_1 - 1)) * 2)
                rcx_1 = var_f8
                r9_1 = var_100
            
            rcx_1 -= rbx_1
            var_f8 = rcx_1
        
        int16_t* const rdx_5 = &data_142d40450
        
        if (rcx_1 != 0)
            rdx_5 = r9_1
        
        sub_140b58260(&var_108, rdx_5, 1)
        uint64_t* r8_4 = var_108
        arg_10 = r8_4
        
        if (*sub_140a73990(arg1, &var_108, r8_4) != 0xffffffff)
            int16_t* rcx_5 = var_100
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            goto label_141cab65c
        
        r9_1 = var_100
    label_141cab761:
        
        if (r9_1 == 0)
            result.b = 0
        else
            sub_140a74f90(r9_1)
            result.b = 0
__security_check_cookie(var_38 ^ &var_128)
return result
