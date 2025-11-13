// 函数: sub_142bb3f50
// 地址: 0x142bb3f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r13 = *(arg1 + 0x410)
int32_t i_5 = 0
int64_t rbx = *(arg2 + 0x30)
int32_t* rsi = arg2
void* r15 = arg1
int64_t r12 = 0
int64_t r14 = 0
int32_t* var_58 = r13
int32_t i_13 = 0
int16_t* var_98 = nullptr
int16_t* var_80_1
__builtin_memset(&var_80_1, 0, 0x18)
int64_t var_78_1
int64_t var_70_1
int32_t arg_18

if (r13 != 0 && *(arg1 + 0x3d8) != 0)
    int32_t arg_20
    int32_t rax_1 = (*(arg1 + 0x2a0))(arg3, 0x63766172, rsi, &arg_20)
    arg_18 = rax_1
    
    if (rax_1 != 0)
        goto label_142bb3fab
    
    int32_t rax_2 = sub_142b96500(rsi, arg_20)
    arg_18 = rax_2
    
    if (rax_2 != 0)
        goto label_142bb3fab
    
    int32_t rbx_2 = rsi[0xe] - *rsi
    
    if (sub_142b96720(rsi) == 0x10000)
        int64_t rax_4 = sub_142b99a90(rbx, 4, 0, *r13, 0, &arg_18)
        r12 = rax_4
        
        if (arg_18 == 0)
            var_78_1 = sub_142b99a90(rbx, 4, 0, *r13, 0, &arg_18)
            
            if (arg_18 == 0)
                var_70_1 = sub_142b99a90(rbx, 4, 0, *r13, 0, &arg_18)
                
                if (arg_18 == 0)
                    uint32_t r14_1 = zx.d(sub_142b967c0(rsi))
                    uint16_t rax_8 = sub_142b967c0(rsi)
                    int32_t rdx_2 = arg_20
                    uint32_t r12_1 = zx.d(rax_8)
                    uint64_t rax_10 = zx.q(r14_1) & 0xfff
                    int32_t var_84_1 = rax_10.d
                    
                    if (r12_1 + (rax_10 << 2).d u<= rdx_2)
                        int32_t r12_2 = r12_1 + rbx_2
                        int32_t var_b8_1 = r12_2
                        
                        if (test_bit(r14_1, 0xf))
                            int32_t rbx_4 = rsi[0xe] - *rsi
                            int64_t rax_14
                            
                            if (r12_2 u>= rsi[0x10] - *rsi)
                                rax_14 = *(rsi + 0x40)
                            else
                                rax_14 = zx.q(r12_2) + *rsi
                            
                            *(rsi + 0x38) = rax_14
                            int16_t* rax_15 = sub_142bb2350(rsi, rdx_2, &i_13)
                            var_b8_1 = rsi[0xe] - *rsi
                            var_98 = rax_15
                            int64_t rcx_14
                            
                            if (rbx_4 u>= rsi[0x10] - *rsi)
                                rcx_14 = *(rsi + 0x40)
                            else
                                rcx_14 = zx.q(rbx_4) + *rsi
                            
                            *(rsi + 0x38) = rcx_14
                        
                        int64_t rax_16 = sub_142b99a90(rbx, 4, 0, *(r15 + 0x3d0), 0, &arg_18)
                        r14 = rax_16
                        
                        if (arg_18 == 0)
                            int32_t var_88_1 = 0
                            
                            if (var_84_1 u> 0)
                                int32_t rbx_9
                                
                                do
                                    uint32_t rax_18 = zx.d(sub_142b967c0(rsi))
                                    uint32_t r14_2 = zx.d(sub_142b967c0(rsi))
                                    
                                    if (not(test_bit(r14_2, 0xf)))
                                        int32_t rcx_22 = r14_2 & 0xfff
                                        
                                        if (rcx_22 u>= r13[0x1a])
                                            r14 = rax_16
                                            arg_18 = 8
                                            goto label_142bb4467
                                        
                                        int64_t rdx_3 = *(r13 + 0x70)
                                        r12 = rax_4
                                        
                                        if (rdx_3 == 0)
                                            r14 = rax_16
                                            arg_18 = 8
                                            goto label_142bb446e
                                        
                                        int32_t rax_21 = *r13
                                        memcpy(r12, rdx_3 + (zx.q(rax_21 * rcx_22) << 2), 
                                            rax_21 << 2)
                                    else
                                        int32_t i = 0
                                        r12 = rax_4
                                        
                                        if (*r13 u> 0)
                                            do
                                                uint64_t i_6 = zx.q(i)
                                                i += 1
                                                *(r12 + (i_6 << 2)) = sx.d(sub_142b967c0(rsi)) << 2
                                            while (i u< *r13)
                                    
                                    if (test_bit(r14_2, 0xe))
                                        int32_t i_1 = 0
                                        
                                        if (*r13 u> 0)
                                            do
                                                uint64_t i_7 = zx.q(i_1)
                                                i_1 += 1
                                                *(var_78_1 + (i_7 << 2)) =
                                                    sx.d(sub_142b967c0(rsi)) << 2
                                            while (i_1 u< *r13)
                                            
                                            r15 = arg1
                                        
                                        int32_t i_2 = 0
                                        
                                        if (*r13 u> 0)
                                            do
                                                uint64_t i_8 = zx.q(i_2)
                                                i_2 += 1
                                                *(var_70_1 + (i_8 << 2)) =
                                                    sx.d(sub_142b967c0(rsi)) << 2
                                            while (i_2 u< *r13)
                                            
                                            r15 = arg1
                                    
                                    int32_t rax_26 =
                                        sub_142bb0b20(r13, r14_2.w, r12, var_78_1, var_70_1)
                                    
                                    if (rax_26 != 0)
                                        int32_t rax_28 = rsi[0xe] - *rsi
                                        int64_t rcx_34
                                        
                                        if (var_b8_1 u>= rsi[0x10] - *rsi)
                                            rcx_34 = *(rsi + 0x40)
                                        else
                                            rcx_34 = zx.q(var_b8_1) + *rsi
                                        
                                        *(rsi + 0x38) = rcx_34
                                        int32_t i_12
                                        int16_t* r14_3
                                        int32_t i_14
                                        
                                        if (not(test_bit(r14_2, 0xd)))
                                            i_12 = i_13
                                            r14_3 = var_98
                                            i_14 = i_12
                                        else
                                            int16_t* rax_30 = sub_142bb2350(rsi, arg_20, &i_14)
                                            i_12 = i_14
                                            r14_3 = rax_30
                                            var_80_1 = rax_30
                                        int32_t i_15
                                        
                                        if (i_12 != 0)
                                            i_15 = i_12
                                        else
                                            i_15 = *(r15 + 0x3d0)
                                        
                                        int32_t* rax_31 = sub_142bb2210(rsi, arg_20, i_15)
                                        int32_t* r15_3 = rax_31
                                        
                                        if (r14_3 == 0 || rax_31 == 0)
                                        label_142bb43c4:
                                            int16_t* rbx_7 = var_80_1
                                            
                                            if (rbx_7 != -1)
                                                sub_142b99980(rbx, rbx_7)
                                                var_80_1 = nullptr
                                        else
                                            if (var_80_1 != -1)
                                                if (i_12 != 0)
                                                    void* rcx_39 = arg1
                                                    uint64_t i_11 = zx.q(i_12)
                                                    uint64_t i_3
                                                    
                                                    do
                                                        uint64_t rax_35 = zx.q(*r14_3)
                                                        
                                                        if (rax_35.d u< *(rcx_39 + 0x3d0))
                                                            rcx_39 = arg1
                                                            *(rax_16 + (zx.q(rax_35.d) << 2)) =
                                                                sub_142b93e80(*r15_3, rax_26)
                                                                + *(rax_16 + (rax_35 << 2))
                                                        
                                                        r14_3 = &r14_3[1]
                                                        r15_3 = &r15_3[1]
                                                        i_3 = i_11
                                                        i_11 -= 1
                                                    while (i_3 != 1)
                                                    rsi = arg2
                                                    r13 = var_58
                                                    r15_3 = rax_31
                                                
                                                goto label_142bb43c4
                                            
                                            int32_t rcx_37 = *(arg1 + 0x3d0)
                                            
                                            if (i_12 == rcx_37)
                                                int32_t i_4 = 0
                                                
                                                if (rcx_37 != 0)
                                                    do
                                                        uint64_t i_9 = zx.q(i_4)
                                                        i_4 += 1
                                                        *(rax_16 + (i_9 << 2)) +=
                                                            sub_142b93e80(r15_3[i_9], rax_26)
                                                    while (i_4 u< *(arg1 + 0x3d0))
                                                    
                                                    rsi = arg2
                                                    r13 = var_58
                                        
                                        sub_142b99980(rbx, r15_3)
                                        int64_t rax_41
                                        
                                        if (rax_28 u>= rsi[0x10] - *rsi)
                                            rax_41 = *(rsi + 0x40)
                                        else
                                            rax_41 = zx.q(rax_28) + *rsi
                                        
                                        r15 = arg1
                                        i_5 = 0
                                        *(rsi + 0x38) = rax_41
                                    
                                    rbx_9 = var_88_1 + 1
                                    var_88_1 = rbx_9
                                    var_b8_1 += rax_18
                                while (rbx_9 u< var_84_1)
                                r14 = rax_16
                            
                            if (*(r15 + 0x3d0) u> 0)
                                do
                                    uint64_t i_10 = zx.q(i_5)
                                    i_5 += 1
                                    int16_t* rdx_12 = *(r15 + 0x3d8) + (i_10 << 1)
                                    *rdx_12 += ((*(r14 + (i_10 << 2)) + 0x8000) u>> 0x10).w
                                while (i_5 u< *(r15 + 0x3d0))
                    else
                        arg_18 = 8
                        r14 = 0
                    
                label_142bb4467:
                    r12 = rax_4
    else
        arg_18 = 0
    
label_142bb446e:
    sub_142b96620(rsi)
    
    if (var_98 != -1)
        sub_142b99980(rbx, var_98)
else
label_142bb3fab:
    arg_18 = 0
    sub_142b99980(rbx, nullptr)

sub_142b99980(rbx, r12)
sub_142b99980(rbx, var_78_1)
sub_142b99980(rbx, var_70_1)
sub_142b99980(rbx, r14)
return zx.q(arg_18)
