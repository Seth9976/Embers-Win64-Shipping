// 函数: sub_142ba7990
// 地址: 0x142ba7990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t r10 = *(arg1 + 0x98)
int32_t i = 0
int64_t* rdi = *(arg1 + 0xa0)
int32_t rcx = 0
int64_t var_b0 = r10
int32_t var_c8 = 0
int32_t* r15 = *(arg1 + 0x410)
int32_t var_c0 = 0
bool var_c4 = false
uint64_t r13_1

if (r15 != 0)
    r13_1 = zx.q(*r15)
label_142ba7ac9:
    uint32_t i_12 = zx.d(*(arg1 + 0xe))
    uint64_t i_8 = zx.q(i_12)
    uint32_t i_13 = i_12
    uint64_t rax_8 = zx.q(i_12 * r13_1.d)
    void* rdx_4 = ((zx.q(i_12) << 4) + 7) & 0xfffffffffffffff8
    uint64_t i_9 = zx.q(r13_1.d)
    void* r8_9 = ((zx.q(r13_1.d) << 5) + 7) & 0xfffffffffffffff8
    int32_t var_a8_1 = rax_8.d
    void* r9_5 = ((i_9 << 1) + 7) & 0xfffffffffffffff8
    void* r11_2 = ((rax_8 << 2) + 7) & 0xfffffffffffffff8
    
    if (r15 != 0)
    label_142ba7f31:
        
        if (arg2 != 0)
            void* rax_52 = sub_142b99860(var_b0, *(*(arg1 + 0x410) + 0x20), &var_c8)
            rcx = var_c8
            
            if (rcx == 0)
                void* rdx_18 = *(arg1 + 0x410)
                memcpy(rax_52, *(rdx_18 + 0x18), (*(rdx_18 + 0x20)).d)
                int64_t rcx_53 = r9_5 + 0x20 + rax_52
                void* rdx_21 = r8_9 + rcx_53
                *(rax_52 + 0x10) = rcx_53
                *(rax_52 + 0x18) = rdx_21
                void* r8_20 = rdx_21 + rdx_4
                
                if (*(rax_52 + 8) u> 0)
                    do
                        uint64_t i_7 = zx.q(i)
                        i += 1
                        *(*(rax_52 + 0x18) + i_7 * 0x10) = r8_20
                        r8_20 += i_9 << 2
                    while (i u< *(rax_52 + 8))
                
                int64_t* rcx_55 = *(rax_52 + 0x10)
                char* r8_23 = *(rax_52 + 0x18) + r11_2 + rdx_4
                
                if (r13_1.d != 0)
                    uint64_t i_1
                    
                    do
                        int32_t rdx_23 = *(rcx_55 + 0x14)
                        *rcx_55 = r8_23
                        
                        if (rdx_23 == 0x77676874)
                            *rcx_55 = "Weight"
                        else if (rdx_23 == 0x77647468)
                            *rcx_55 = "Width"
                        else if (rdx_23 != 0x6f70737a)
                            char const* const rax_54 = "Slant"
                            
                            if (rdx_23 != 0x736c6e74)
                                rax_54 = r8_23
                            
                            *rcx_55 = rax_54
                        else
                            *rcx_55 = "OpticalSize"
                        
                        r8_23 = &r8_23[5]
                        rcx_55 = &rcx_55[4]
                        i_1 = i_9
                        i_9 -= 1
                    while (i_1 != 1)
                
                rcx = var_c8
                *arg2 = rax_52
    else
        *(*(arg1 + 0x410) + 0x20) =
            zx.q((r13_1 << 2).d + r13_1.d) + r11_2 + rdx_4 + r8_9 + r9_5 + 0x20
        int32_t* rax_11 = sub_142b99860(r10, *(*(arg1 + 0x410) + 0x20), &var_c8)
        rcx = var_c8
        
        if (rcx == 0)
            int16_t* r15_1 = &rax_11[8]
            *(*(arg1 + 0x410) + 0x18) = rax_11
            void* rcx_18 = r9_5 + r15_1
            *rax_11 = r13_1.d
            *(rax_11 + 0x10) = rcx_18
            rax_11[1] = 0xffffffff
            rax_11[2] = i_8.d
            void* rax_13 = r8_9 + rcx_18
            *(rax_11 + 0x18) = rax_13
            void* rdx_6 = rdx_4 + rax_13
            
            if (i_8.d != 0)
                int64_t rcx_19 = 0
                uint64_t i_2
                
                do
                    rcx_19 += 0x10
                    *(rcx_19 + *(rax_11 + 0x18) - 0x10) = rdx_6
                    rdx_6 += i_9 << 2
                    i_2 = i_8
                    i_8 -= 1
                while (i_2 != 1)
            
            void* rcx_22 = *(rax_11 + 0x18) + r11_2 + rdx_4
            
            if (r13_1.d != 0)
                int64_t rdx_7 = 0
                uint64_t i_10 = i_9
                uint64_t i_3
                
                do
                    rdx_7 += 0x20
                    *(rdx_7 + *(rax_11 + 0x10) - 0x20) = rcx_22
                    rcx_22 += 5
                    i_3 = i_10
                    i_10 -= 1
                while (i_3 != 1)
            
            int16_t var_64
            int32_t rax_16 = sub_142b97060(rdi, zx.d(var_64) + var_c0, arg3)
            var_c8 = rax_16
            rcx = rax_16
            
            if (rax_16 == 0)
                int32_t i_4 = 0
                void* rbx_2 = *(rax_11 + 0x10)
                
                if (r13_1.d != 0)
                    do
                        int32_t var_58
                        int32_t rax_17 = sub_142b96aa0(rdi, &data_143683b80, &var_58)
                        var_c8 = rax_17
                        rcx = rax_17
                        
                        if (rax_17 != 0)
                            goto label_142ba8076
                        
                        int32_t rcx_25 = var_58
                        int32_t var_54
                        *(rbx_2 + 8) = var_54
                        int32_t var_50
                        *(rbx_2 + 0xc) = var_50
                        int32_t var_4c
                        *(rbx_2 + 0x10) = var_4c
                        int16_t var_46
                        *(rbx_2 + 0x18) = zx.d(var_46)
                        uint8_t* rax_22 = *rbx_2
                        *(rbx_2 + 0x14) = rcx_25
                        *rax_22 = (rcx_25 u>> 0x18).b
                        *(*rbx_2 + 1) = *(rbx_2 + 0x16)
                        *(*rbx_2 + 2) = *(rbx_2 + 0x15)
                        *(*rbx_2 + 3) = *(rbx_2 + 0x14)
                        *(*rbx_2 + 4) = 0
                        int16_t var_48
                        *r15_1 = var_48
                        int32_t rax_28 = *(rbx_2 + 0xc)
                        
                        if (*(rbx_2 + 8) s> rax_28 || rax_28 s> *(rbx_2 + 0x10))
                            *(rbx_2 + 8) = rax_28
                            *(rbx_2 + 0x10) = rax_28
                        
                        rbx_2 += 0x20
                        r15_1 = &r15_1[1]
                        i_4 += 1
                    while (i_4 u< r13_1.d)
                
                int32_t rsi_1 = 4
                int64_t rax_29
                int512_t zmm0_1
                rax_29, zmm0_1 = sub_142b99a90(var_b0, 4, 0, var_a8_1, 0, &var_c8)
                *(*(arg1 + 0x410) + 0x28) = rax_29
                rcx = var_c8
                
                if (rcx == 0)
                    int16_t var_5e
                    uint32_t rcx_32 = zx.d(var_5e)
                    
                    if (rcx_32.w == 0 || *(*(arg1 + 0x410) + 0x30) != 0)
                        goto label_142ba7d78
                    
                    int32_t rax_31 = sub_1408e52d0(rdi)
                    zmm0_1 = sub_142bb1220(arg1, zmm0_1)
                    int32_t rax_32 = sub_142b97060(rdi, rax_31, arg3)
                    var_c8 = rax_32
                    rcx = rax_32
                    
                    if (rax_32 == 0)
                        rcx_32 = zx.d(var_5e)
                    label_142ba7d78:
                        void* rax_33 = *(arg1 + 0x410)
                        int32_t* rbx_4 = rax_11
                        var_c0 = 0
                        int64_t* r15_2 = *(rbx_4 + 0x18)
                        void* var_a8_2 = *(rax_33 + 0x28)
                        
                        if (0 u>= rcx_32.w)
                            i_9 = zx.q(r13_1.d)
                        else
                            if (var_c4 != 0)
                                rsi_1 = 6
                            
                            int32_t rax_34 = rsi_1 + (r13_1 << 2).d
                            i_9 = zx.q(r13_1.d)
                            int32_t var_a0_1 = rax_34
                            int32_t rdx_15
                            
                            do
                                int32_t rax_35 = sub_142b96500(rdi, rax_34)
                                var_c8 = rax_35
                                rcx = rax_35
                                
                                if (rax_35 != 0)
                                    goto label_142ba8076
                                
                                r15_2[1].d = zx.d(sub_142b967c0(rdi))
                                sub_142b967c0(rdi)
                                int32_t* rbx_5 = *r15_2
                                
                                if (r13_1.d != 0)
                                    uint64_t i_5
                                    
                                    do
                                        *rbx_5 = sub_142b96720(rdi)
                                        rbx_5 = &rbx_5[1]
                                        i_5 = i_9
                                        i_9 -= 1
                                    while (i_5 != 1)
                                
                                if (var_c4 == 0)
                                    *(r15_2 + 0xc) = 0xffff
                                else
                                    *(r15_2 + 0xc) = zx.d(sub_142b967c0(rdi))
                                
                                int32_t* rbx_6 = var_a8_2
                                sub_142bb2650(arg1, r13_1.d, *r15_2, rbx_6)
                                i_9 = zx.q(r13_1.d)
                                var_a8_2 = &rbx_6[i_9]
                                sub_142b96620(rdi)
                                r15_2 = &r15_2[2]
                                rcx_32 = zx.d(var_5e)
                                rdx_15 = var_c0 + 1
                                rax_34 = var_a0_1
                                var_c0 = rdx_15
                            while (rdx_15 u< rcx_32)
                            rbx_4 = rax_11
                        
                        if (i_13 != zx.d(rcx_32.w))
                            int64_t r15_3 = *(arg1 + 0x2d0)
                            int32_t rdi_1 = 0x11
                            uint32_t rax_43 = zx.d((*(r15_3 + 0x128))(arg1, 0x11, &var_c0, &i_13))
                            uint32_t rax_45
                            
                            if (rax_43 == 0)
                                rdi_1 = -1
                                rax_45 = zx.d((*(r15_3 + 0x128))(arg1, 2, &var_c0, &i_13))
                                
                                if (rax_45 != 0)
                                    rdi_1 = 2
                            
                            if ((rax_43 != 0 || rax_45 != 0)
                                    && (*(r15_3 + 0x128))(arg1, 6, &var_c0, &i_13) != 0)
                                int64_t* rax_49 = (zx.q(var_5e) << 4) + *(rbx_4 + 0x18)
                                int32_t* rdx_16 = *rax_49
                                rax_49[1].d = rdi_1
                                *(rax_49 + 0xc) = 6
                                
                                if (r13_1.d != 0)
                                    int32_t* rcx_47 = *(rbx_4 + 0x10) + 0xc
                                    uint64_t i_11 = i_9
                                    uint64_t i_6
                                    
                                    do
                                        int32_t rax_50 = *rcx_47
                                        rcx_47 = &rcx_47[8]
                                        *rdx_16 = rax_50
                                        rdx_16 = &rdx_16[1]
                                        i_6 = i_11
                                        i_11 -= 1
                                    while (i_6 != 1)
                        
                        sub_142bb1f90(arg1, arg3, zmm0_1)
                        rcx = var_c8
                        goto label_142ba7f31
else
    void var_b8
    int32_t rax_2 = (*(arg1 + 0x2a0))(arg1, 0x67766172, rdi, &var_b8)
    var_c8 = rax_2
    int32_t rax_3
    
    if (rax_2 != 0)
        rax_3 = (*(arg1 + 0x2a0))(arg1, 0x43464632, rdi, &var_b8)
        var_c8 = rax_3
        rcx = rax_3
    
    if (rax_2 == 0 || rax_3 == 0)
        int32_t rax_4 = (*(arg1 + 0x2a0))(arg1, 0x66766172, rdi, &var_b8)
        var_c8 = rax_4
        rcx = rax_4
        
        if (rax_4 == 0)
            var_c0 = sub_1408e52d0(rdi)
            void var_68
            int32_t rax_6 = sub_142b96aa0(rdi, &data_143683b58, &var_68)
            var_c8 = rax_6
            rcx = rax_6
            
            if (rax_6 == 0)
                int16_t var_62
                int16_t var_5c
                var_c4 = zx.d(var_5c) == ((zx.q(var_62) << 2) + 6).d
                int32_t* rax_7 = sub_142b99860(var_b0, 0x90, &var_c8)
                rcx = var_c8
                *(arg1 + 0x410) = rax_7
                
                if (rcx == 0)
                    r13_1 = zx.q(var_62)
                    r10 = var_b0
                    *rax_7 = r13_1.d
                    rcx = var_c8
                    goto label_142ba7ac9
label_142ba8076:
__security_check_cookie(rax_1 ^ &var_f8)
return zx.q(rcx)
