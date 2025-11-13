// 函数: sub_142bafd10
// 地址: 0x142bafd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r12 = *(arg1 + 0xa0)
int64_t r15 = 0
int32_t* r14 = *(arg1 + 0x410)
uint64_t i_18 = zx.q(arg4)
int32_t* var_78 = r12
int64_t rsi = *(r12 + 0x30)
int64_t var_d8 = rsi
int64_t* var_d0_1
__builtin_memset(&var_d0_1, 0, 0x14)
int64_t var_98 = 0
int64_t var_90 = 0
int32_t* var_58 = r14
int16_t* var_e0 = nullptr
int16_t* var_70 = nullptr
int32_t* var_b0 = nullptr

if (*(arg1 + 0x409) == 0 || r14 == 0)
    return 6

if (arg2 u< r14[0x1e])
    int64_t rcx = *(r14 + 0x80)
    uint64_t rbx_1 = zx.q(arg2 + 1) << 2
    uint64_t rdi_1 = zx.q(arg2) << 2
    
    if (*(rdi_1 + rcx) != *(rcx + rbx_1))
        int32_t var_f8
        void* rax_4 = sub_142b99a90(rsi, 8, 0, i_18.d, 0, &var_f8)
        char* var_c8_1
        
        if (var_f8 == 0)
            var_d0_1 = sub_142b99a90(rsi, 8, 0, i_18.d, 0, &var_f8)
            
            if (var_f8 == 0)
                var_c8_1 = sub_142b99a90(rsi, 1, 0, i_18.d, 0, &var_f8)
                
                if (var_f8 == 0)
                    int64_t rcx_4 = *(r14 + 0x80)
                    int32_t rdx = *(rcx_4 + rdi_1)
                    int32_t rbx_3 = *(rcx_4 + rbx_1) - rdx
                    int32_t rax_7 = sub_142b97060(r12, rdx, arg5)
                    var_f8 = rax_7
                    
                    if (rax_7 == 0)
                        int32_t rax_8 = sub_142b96500(r12, rbx_3)
                        var_f8 = rax_8
                        
                        if (rax_8 == 0)
                            int32_t rdi_3 = r12[0xe] - *r12
                            int64_t rax_9 = sub_142b99a90(rsi, 4, 0, *r14, 0, &var_f8)
                            
                            if (var_f8 != 0)
                                sub_142b99980(rsi, nullptr)
                            else
                                var_98 = sub_142b99a90(rsi, 4, 0, *r14, 0, &var_f8)
                                
                                if (var_f8 != 0)
                                    sub_142b99980(rsi, nullptr)
                                else
                                    var_90 = sub_142b99a90(rsi, 4, 0, *r14, 0, &var_f8)
                                    
                                    if (var_f8 != 0)
                                        sub_142b99980(rsi, nullptr)
                                    else
                                        uint32_t rsi_1 = zx.d(sub_142b967c0(r12))
                                        uint32_t rdx_2 = zx.d(sub_142b967c0(r12))
                                        int32_t var_b4_1
                                        uint64_t rax_15
                                        
                                        if (rdx_2 u<= rbx_3)
                                            rax_15 = zx.q(rsi_1) & 0xfff
                                            var_b4_1 = rax_15.d
                                        
                                        if (rdx_2 u> rbx_3 || (rax_15 << 2).d u> rbx_3)
                                            rsi = var_d8
                                            var_f8 = 8
                                            sub_142b99980(rsi, nullptr)
                                        else
                                            int32_t rdx_3 = rdx_2 + rdi_3
                                            int32_t var_f4_1 = rdx_3
                                            int32_t i_16
                                            
                                            if (test_bit(rsi_1, 0xf))
                                                int32_t rbx_5 = r12[0xe] - *r12
                                                int64_t rax_20
                                                
                                                if (rdx_3 u>= r12[0x10] - *r12)
                                                    rax_20 = *(r12 + 0x40)
                                                else
                                                    rax_20 = zx.q(rdx_3) + *r12
                                                
                                                *(r12 + 0x38) = rax_20
                                                int16_t* rax_21 =
                                                    sub_142bb2350(r12, r14[0x22], &i_16)
                                                var_f4_1 = r12[0xe] - *r12
                                                var_e0 = rax_21
                                                int64_t rcx_18
                                                
                                                if (rbx_5 u>= r12[0x10] - *r12)
                                                    rcx_18 = *(r12 + 0x40)
                                                else
                                                    rcx_18 = zx.q(rbx_5) + *r12
                                                
                                                *(r12 + 0x38) = rcx_18
                                            
                                            rsi = var_d8
                                            int32_t* rax_22 =
                                                sub_142b99a90(rsi, 4, 0, i_18.d, 0, &var_f8)
                                            int32_t* rbx_6 = rax_22
                                            
                                            if (var_f8 == 0)
                                                int32_t* rax_23 =
                                                    sub_142b99a90(rsi, 4, 0, i_18.d, 0, &var_f8)
                                                int32_t* r11_1 = rax_23
                                                var_b0 = rax_23
                                                
                                                if (var_f8 == 0)
                                                    if (i_18.d != 0)
                                                        int64_t rdx_5 = 0
                                                        uint64_t i_12 = i_18
                                                        uint64_t i
                                                        
                                                        do
                                                            rdx_5 += 8
                                                            *(rdx_5 + rax_4 - 8) =
                                                                *(rdx_5 + *(arg3 + 8) - 8) << 0x10
                                                            *(rdx_5 + rax_4 - 4) =
                                                                *(rdx_5 + *(arg3 + 8) - 4) << 0x10
                                                            i = i_12
                                                            i_12 -= 1
                                                        while (i != 1)
                                                    
                                                    int32_t var_b8_1 = 0
                                                    
                                                    if (var_b4_1 u> 0)
                                                        int32_t rbx_13
                                                        
                                                        do
                                                            uint32_t rax_28 =
                                                                zx.d(sub_142b967c0(r12))
                                                            uint32_t rdi_4 =
                                                                zx.d(sub_142b967c0(r12))
                                                            
                                                            if (not(test_bit(rdi_4, 0xf)))
                                                                int32_t rcx_30 = rdi_4 & 0xfff
                                                                
                                                                if (rcx_30 u>= r14[0x1a])
                                                                    rbx_6 = rax_22
                                                                    var_f8 = 8
                                                                    goto label_142bb05bf
                                                                
                                                                int32_t rax_31 = *r14
                                                                memcpy(rax_9, 
                                                                    *(r14 + 0x70)
                                                                        + (zx.q(rcx_30 * rax_31) << 2), 
                                                                    rax_31 << 2)
                                                            else
                                                                int32_t i_1 = 0
                                                                
                                                                if (*r14 u> 0)
                                                                    do
                                                                        uint64_t i_9 = zx.q(i_1)
                                                                        i_1 += 1
                                                                        *(rax_9 + (i_9 << 2)) =
                                                                            sx.d(sub_142b967c0(r12)) << 2
                                                                    while (i_1 u< *r14)
                                                                    
                                                                    rsi = var_d8
                                                            
                                                            if (test_bit(rdi_4, 0xe))
                                                                int32_t i_2 = 0
                                                                
                                                                if (*r14 u> 0)
                                                                    do
                                                                        uint64_t i_10 = zx.q(i_2)
                                                                        i_2 += 1
                                                                        *(var_98 + (i_10 << 2)) =
                                                                            sx.d(sub_142b967c0(r12)) << 2
                                                                    while (i_2 u< *r14)
                                                                    
                                                                    rsi = var_d8
                                                                
                                                                int32_t i_3 = 0
                                                                
                                                                if (*r14 u> 0)
                                                                    do
                                                                        uint64_t i_11 = zx.q(i_3)
                                                                        i_3 += 1
                                                                        *(var_90 + (i_11 << 2)) =
                                                                            sx.d(sub_142b967c0(r12)) << 2
                                                                    while (i_3 u< *r14)
                                                            
                                                            int32_t rax_36 = sub_142bb0b20(r14, 
                                                                rdi_4.w, rax_9, var_98, var_90)
                                                            int32_t r15_2 = rax_36
                                                            
                                                            if (rax_36 != 0)
                                                                int32_t rax_38 = r12[0xe] - *r12
                                                                int64_t rcx_43
                                                                
                                                                if (var_f4_1 u>= r12[0x10] - *r12)
                                                                    rcx_43 = *(r12 + 0x40)
                                                                else
                                                                    rcx_43 = zx.q(var_f4_1) + *r12
                                                                
                                                                *(r12 + 0x38) = rcx_43
                                                                int16_t* rdi_5
                                                                uint64_t i_15
                                                                int32_t i_17
                                                                
                                                                if (not(test_bit(rdi_4, 0xd)))
                                                                    i_15 = zx.q(i_16)
                                                                    rdi_5 = var_e0
                                                                    i_17 = i_15.d
                                                                else
                                                                    int16_t* rax_40 =
                                                                        sub_142bb2350(r12, r14[0x22], &i_17)
                                                                    i_15 = zx.q(i_17)
                                                                    rdi_5 = rax_40
                                                                    var_70 = rax_40
                                                                int32_t rbx_7 = i_15.d
                                                                
                                                                if (i_15.d == 0)
                                                                    rbx_7 = i_18.d
                                                                
                                                                int64_t rax_41 =
                                                                    sub_142bb2210(r12, var_58[0x22], rbx_7)
                                                                int32_t* rax_42 =
                                                                    sub_142bb2210(r12, var_58[0x22], rbx_7)
                                                                int32_t* rcx_47 = rax_42
                                                                
                                                                if (rdi_5 != 0 && rax_42 != 0)
                                                                    int64_t rdx_11 = rax_41
                                                                    
                                                                    if (rdx_11 != 0)
                                                                        if (rdi_5 != -1)
                                                                            char* r11_2 = var_c8_1
                                                                            int64_t* r10_2 = var_d0_1
                                                                            
                                                                            if (i_18.d != 0)
                                                                                char* rdx_17 = r11_2
                                                                                int64_t* rcx_53 = r10_2
                                                                                uint64_t i_13 = i_18
                                                                                uint64_t i_4
                                                                                
                                                                                do
                                                                                    *rdx_17 = 0
                                                                                    rdx_17 = &rdx_17[1]
                                                                                    *rcx_53 = *(rax_4 - r10_2 + rcx_53)
                                                                                    rcx_53 = &rcx_53[1]
                                                                                    i_4 = i_13
                                                                                    i_13 -= 1
                                                                                while (i_4 != 1)
                                                                                rcx_47 = rax_42
                                                                                rdx_11 = rax_41
                                                                            
                                                                            if (i_15.d != 0)
                                                                                int32_t* rsi_6 = rcx_47
                                                                                uint64_t i_5
                                                                                
                                                                                do
                                                                                    uint32_t rcx_54 = zx.d(*rdi_5)
                                                                                    
                                                                                    if (rcx_54 u< i_18.d)
                                                                                        uint64_t rax_56 = zx.q(rcx_54.w)
                                                                                        r11_2[rax_56] = 1
                                                                                        void* rbx_9 = &r10_2[rax_56]
                                                                                        int32_t rax_57 = sub_142b93e80(
                                                                                            *(rsi_6 + rdx_11 - rcx_47), rax_36)
                                                                                        *rbx_9 += rax_57
                                                                                        int32_t rax_58 =
                                                                                            sub_142b93e80(*rsi_6, rax_36)
                                                                                        *(rbx_9 + 4) += rax_58
                                                                                    
                                                                                    r10_2 = var_d0_1
                                                                                    rdi_5 = &rdi_5[1]
                                                                                    r11_2 = var_c8_1
                                                                                    rsi_6 = &rsi_6[1]
                                                                                    i_5 = i_15
                                                                                    i_15 -= 1
                                                                                while (i_5 != 1)
                                                                                r12 = var_78
                                                                            
                                                                            int64_t* rsi_7 = var_d0_1
                                                                            sub_142bb4a10(arg3, rsi_7, rax_4, 
                                                                                var_c8_1)
                                                                            int32_t i_6 = 0
                                                                            
                                                                            if (i_18.d != 0)
                                                                                int32_t* r8_9 = var_b0
                                                                                void* rbx_10 = rax_4 + 4
                                                                                int32_t rdi_6 = (i_18 - 4).d
                                                                                void* rsi_8 = rsi_7 - rax_4
                                                                                void* r14_4 = rax_22 - r8_9
                                                                                
                                                                                do
                                                                                    int32_t rdx_22 =
                                                                                        *(rsi_8 + rbx_10 - 4) - *(rbx_10 - 4)
                                                                                    int32_t r10_4 =
                                                                                        *(rsi_8 + rbx_10) - *rbx_10
                                                                                    int32_t r9_13 = *(r14_4 + r8_9)
                                                                                    int32_t r11_3 = *r8_9
                                                                                    
                                                                                    if (i_6 u< rdi_6)
                                                                                        *(r14_4 + r8_9) = rdx_22 + r9_13
                                                                                        *r8_9 = r10_4 + r11_3
                                                                                    else if (i_6 == rdi_6
                                                                                            && (*(arg1 + 0x418) & 4) == 0)
                                                                                        *(r14_4 + r8_9) = rdx_22 + r9_13
                                                                                    else if (i_6 == (i_18 - 3).d
                                                                                            && (*(arg1 + 0x418) & 2) == 0)
                                                                                        *(r14_4 + r8_9) = rdx_22 + r9_13
                                                                                    else if (i_6 == (i_18 - 2).d
                                                                                            && (*(arg1 + 0x418) & 0x20) == 0)
                                                                                        *r8_9 = r10_4 + r11_3
                                                                                    else if (i_6 == (i_18 - 1).d
                                                                                            && (*(arg1 + 0x418) & 0x10) == 0)
                                                                                        *r8_9 = r10_4 + r11_3
                                                                                    
                                                                                    i_6 += 1
                                                                                    rbx_10 += 8
                                                                                    r8_9 = &r8_9[1]
                                                                                while (i_6 u< i_18.d)
                                                                                
                                                                                r12 = var_78
                                                                        else
                                                                            int32_t i_7 = 0
                                                                            
                                                                            if (i_18.d != 0)
                                                                                void* rax_44 = rdx_11 - rcx_47
                                                                                void* rcx_48 = rcx_47 - rax_22
                                                                                void* var_50_1 = rax_44
                                                                                int32_t* rdx_13 = var_b0 - rax_22
                                                                                void* var_48_1 = rcx_48
                                                                                int32_t* var_e8_1 = rdx_13
                                                                                int32_t* rsi_5 = rax_22
                                                                                
                                                                                do
                                                                                    int32_t r12_1 = *(rdx_13 + rsi_5)
                                                                                    int32_t* rbx_8 = rcx_48 + rsi_5
                                                                                    int32_t r14_1 = *rsi_5
                                                                                    int32_t rax_45 =
                                                                                        sub_142b93e80(*(rbx_8 + rax_44), r15_2)
                                                                                    int32_t rax_46 =
                                                                                        sub_142b93e80(*rbx_8, rax_36)
                                                                                    int32_t rax_47 = (i_18 - 4).d
                                                                                    
                                                                                    if (i_7 u< rax_47)
                                                                                        rdx_13 = var_e8_1
                                                                                        *rsi_5 = rax_45 + r14_1
                                                                                        *(rdx_13 + rsi_5) = rax_46 + r12_1
                                                                                    else if ((i_7 == rax_47
                                                                                            && (*(arg1 + 0x418) & 4) == 0) || (
                                                                                            i_7 == (i_18 - 3).d
                                                                                            && (*(arg1 + 0x418) & 2) == 0))
                                                                                        *rsi_5 = rax_45 + r14_1
                                                                                        rdx_13 = var_e8_1
                                                                                    else if (i_7 == (i_18 - 2).d
                                                                                            && (*(arg1 + 0x418) & 0x20) == 0)
                                                                                        rdx_13 = var_e8_1
                                                                                        *(rdx_13 + rsi_5) = rax_46 + r12_1
                                                                                    else if (i_7 != (i_18 - 1).d
                                                                                            || (*(arg1 + 0x418) & 0x10) != 0)
                                                                                        rdx_13 = var_e8_1
                                                                                    else
                                                                                        rdx_13 = var_e8_1
                                                                                        *(rdx_13 + rsi_5) = rax_46 + r12_1
                                                                                    
                                                                                    rax_44 = var_50_1
                                                                                    i_7 += 1
                                                                                    rcx_48 = var_48_1
                                                                                    rsi_5 = &rsi_5[1]
                                                                                    r15_2 = rax_36
                                                                                while (i_7 u< i_18.d)
                                                                                
                                                                                r12 = var_78
                                                                
                                                                rsi = var_d8
                                                                
                                                                if (var_70 != -1)
                                                                    sub_142b99980(rsi, var_70)
                                                                    var_70 = nullptr
                                                                
                                                                sub_142b99980(rsi, rax_41)
                                                                sub_142b99980(rsi, rax_42)
                                                                int64_t rax_69
                                                                
                                                                if (rax_38 u>= r12[0x10] - *r12)
                                                                    rax_69 = *(r12 + 0x40)
                                                                else
                                                                    rax_69 = zx.q(rax_38) + *r12
                                                                
                                                                r14 = var_58
                                                                *(r12 + 0x38) = rax_69
                                                            
                                                            r15 = 0
                                                            rbx_13 = var_b8_1 + 1
                                                            var_f4_1 += rax_28
                                                            var_b8_1 = rbx_13
                                                        while (rbx_13 u< var_b4_1)
                                                        rbx_6 = rax_22
                                                        r11_1 = var_b0
                                                    
                                                    if (i_18.d != 0)
                                                        int32_t* rdx_26 = r11_1
                                                        uint64_t i_14 = i_18
                                                        uint64_t i_8
                                                        
                                                        do
                                                            int32_t rax_71 =
                                                                *(rdx_26 + rbx_6 - r11_1)
                                                            rdx_26 = &rdx_26[1]
                                                            int64_t rcx_62 = *(arg3 + 8)
                                                            r15 += 8
                                                            *(rcx_62 + r15 - 8) +=
                                                                sx.d(((rax_71 + 0x8000) u>> 0x10).w)
                                                            int64_t rcx_63 = *(arg3 + 8)
                                                            *(rcx_63 + r15 - 4) +=
                                                                sx.d(((rdx_26[-1] + 0x8000) u>> 0x10).w)
                                                            i_8 = i_14
                                                            i_14 -= 1
                                                        while (i_8 != 1)
                                            
                                        label_142bb05bf:
                                            sub_142b99980(rsi, rbx_6)
                                            sub_142b99980(rsi, var_b0)
                                            
                                            if (var_e0 != -1)
                                                sub_142b99980(rsi, var_e0)
                            
                            sub_142b99980(rsi, rax_9)
                            sub_142b99980(rsi, var_98)
                            sub_142b99980(rsi, var_90)
                            sub_142b96620(r12)
        
        sub_142b99980(rsi, rax_4)
        sub_142b99980(rsi, var_d0_1)
        sub_142b99980(rsi, var_c8_1)
        return zx.q(var_f8)

return 0
