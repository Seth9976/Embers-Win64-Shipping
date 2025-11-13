// 函数: sub_142beeaa0
// 地址: 0x142beeaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = arg3
int32_t* arg_28
int32_t* rbx = arg_28
result_1 = 0
char* _Str1 = arg1
void* rsi = *(rbx + 0x28)
int64_t r13 = *(rsi + 0x88)
int32_t rax = strncmp(arg1, "COMMENT", 7)
char rax_1
void* rdx

if (rax == 0)
    rax_1 = _Str1[7]
    rdx = &_Str1[7]

int32_t result_9

if (rax == 0 && rax_1 u<= 0x20 && test_bit(0x100002601, sx.q(rax_1)))
    int32_t r12_1 = arg2 - 7
    
    if (*rdx != 0)
        rdx += 1
        r12_1 -= 1
    
    int32_t result_2 = sub_142bede50(*(rbx + 0x28), rdx, r12_1)
    result_9 = result_2
    result_1 = result_2
    goto label_142bef3d5

if ((*rbx & 0x20) != 0)
    int32_t rax_10 = strncmp(_Str1, "ENDFONT", 7)
    char rax_11
    
    if (rax_10 == 0)
        rax_11 = _Str1[7]
    
    if (rax_10 != 0 || rax_11 u> 0x20 || not(test_bit(0x100002601, sx.q(rax_11))))
        int32_t rax_13 = strncmp(_Str1, "ENDCHAR", 7)
        char rax_14
        
        if (rax_13 == 0)
            rax_14 = _Str1[7]
        
        if (rax_13 == 0 && rax_14 u<= 0x20 && test_bit(0x100002601, sx.q(rax_14)))
            *rbx &= 0xfffff03f
            rbx[8] = 0
            goto label_142bef3d2
        
        if ((*rbx & 0x40) != 0 && rbx[8] == 0xffffffff && *(*(rbx + 0x30) + 4) == 0)
            goto label_142bef3d2
        
        int32_t rax_17 = strncmp(_Str1, "STARTCHAR", 9)
        char rax_18
        
        if (rax_17 == 0)
            rax_18 = _Str1[9]
        
        if (rax_17 == 0 && rax_18 u<= 0x20 && test_bit(0x100002601, sx.q(rax_18)))
            if ((*rbx & 0xfc0) != 0)
                result_9 = 0xb5
                goto label_142bef4b3
            
            sub_142b99980(r13, *(rbx + 0x18))
            *(rbx + 0x18) = 0
            int32_t result_4 = sub_142bee840(&rbx[0xe], " +", _Str1, arg2)
            result_1 = result_4
            result_9 = result_4
            
            if (result_4 != 0)
                goto label_142bef4b6
            
            if (rbx != -0x38)
                int32_t rax_20 = rbx[0x11]
                
                if (rax_20 != 0)
                    if (rax_20 u> result_4 + 1)
                        int32_t i = result_4 + 1
                        
                        do
                            int64_t r9_3 = *(rbx + 0x38)
                            uint64_t rdx_5 = zx.q(i - 1)
                            uint64_t i_2 = zx.q(i)
                            i += 1
                            *(r9_3 + (rdx_5 << 3)) = *(r9_3 + (i_2 << 3))
                        while (i u< rbx[0x11])
                        
                        rbx[0x11] -= 1
                    else
                        rbx[0x11] = result_9
            
            int64_t rax_22 = sub_142bee790(&rbx[0xe], 0x20, &arg_28)
            
            if (rax_22 == 0)
                result_9 = 3
                goto label_142bef4b3
            
            uint32_t count = arg_28.d + 1
            int64_t rax_23 = sub_142b99a90(r13, result_4 + 1, 0, count, 0, &result_1)
            result_9 = result_1
            *(rbx + 0x18) = rax_23
            
            if (result_9 != 0)
                goto label_142bef4b6
            
            memcpy(rax_23, rax_22, count)
            *rbx |= 0x40
            goto label_142bef3d2
        
        int32_t rax_24 = strncmp(_Str1, "ENCODING", 8)
        char rax_25
        
        if (rax_24 == 0)
            rax_25 = _Str1[8]
        
        if (rax_24 == 0 && rax_25 u<= 0x20 && test_bit(0x100002601, sx.q(rax_25)))
            if ((*rbx & 0x40) == 0)
                result_9 = 0xb5
                goto label_142bef4b3
            
            int32_t result_5 = sub_142bee840(&rbx[0xe], " +", _Str1, arg2)
            result_1 = result_5
            result_9 = result_5
            
            if (result_5 != 0)
                goto label_142bef4b6
            
            void* rdi_1 = *(rbx + 0x38)
            int32_t rax_27 = sub_142bee2c0(*(rdi_1 + 8))
            
            if (rax_27 s< 0xffffffff)
                rax_27 = -1
            
            rbx[8] = rax_27
            
            if (rax_27 == 0xffffffff && rbx[0x11] u> 2)
                rbx[8] = sub_142bee2c0(*(rdi_1 + 0x10))
            
            int32_t rcx_18 = rbx[8]
            
            if (rbx[8] + 1 u> 0x110000)
                rcx_18 = -1
            
            rbx[8] = rcx_18
            
            if (rcx_18 s>= 0)
                int32_t r8_6 = *(rsi + 0x34)
                
                if (*(rsi + 0x38) != r8_6)
                    goto label_142beef2f
                
                *(rsi + 0x40) =
                    sub_142b99a90(r13, 0x30, r8_6, r8_6 + 0x40, *(rsi + 0x40), &result_1)
                result_9 = result_1
                
                if (result_9 != 0)
                    goto label_142bef4b6
                
                *(rsi + 0x34) += 0x40
            label_142beef2f:
                uint64_t rax_33 = zx.q(*(rsi + 0x38))
                int64_t* rcx_22 = rax_33 * 0x30 + *(rsi + 0x40)
                *(rsi + 0x38) = rax_33.d + 1
                *rcx_22 = *(rbx + 0x18)
                rcx_22[1].d = rbx[8]
                goto label_142beefd1
            
            if (*(*(rbx + 0x30) + 4) == 0)
                sub_142b99980(r13, *(rbx + 0x18))
            label_142beefc9:
                *(rbx + 0x18) = 0
            label_142beefd1:
                *rbx &= 0x3fffff7f
                *rbx |= 0x80
                *(rbx + 0x18) = 0
                goto label_142bef3d2
            
            int32_t r8_7 = *(rsi + 0x48)
            
            if (*(rsi + 0x4c) != r8_7)
                goto label_142beef9c
            
            *(rsi + 0x50) = sub_142b99a90(r13, 0x30, r8_7, r8_7 + 4, *(rsi + 0x50), &result_1)
            result_9 = result_1
            
            if (result_9 != 0)
                goto label_142bef4b6
            
            *(rsi + 0x48) += 4
        label_142beef9c:
            int64_t* rcx_26 = zx.q(*(rsi + 0x4c)) * 0x30 + *(rsi + 0x50)
            *rcx_26 = *(rbx + 0x18)
            rcx_26[1].d = *(rsi + 0x4c)
            *(rsi + 0x4c) += 1
            goto label_142beefc9
        
        int32_t rcx_28 = *rbx
        
        if (rcx_28.b s>= 0)
            result_9 = 0xb6
            goto label_142bef4b3
        
        void* r14_4
        
        if (rbx[8] != 0xffffffff)
            r14_4 = zx.q(*(rsi + 0x38) - 1) * 0x30 + *(rsi + 0x40)
        else
            r14_4 = zx.q(*(rsi + 0x4c) - 1) * 0x30 + *(rsi + 0x50)
        
        if (test_bit(rcx_28, 0xb))
            int32_t rdx_9 = rbx[2]
            
            if (rdx_9 u< zx.d(*(r14_4 + 0x12)))
                int32_t rax_48 = *(r14_4 + 0x28)
                int32_t i_3 = 0
                uint64_t rdi_2 = zx.q(rax_48 * 2)
                char* r8_9 = zx.q(rax_48 * rdx_9) + *(r14_4 + 0x20)
                
                if (rdi_2.d != 0)
                    char* _Str1_1 = _Str1
                    int32_t i_1
                    
                    do
                        int64_t r10_1 = sx.q(*_Str1_1)
                        
                        if ((*((zx.q(r10_1.b) u>> 3) + 0x143699650) & (1 << (r10_1.b & 7)).b) == 0)
                            if (i_3 u< rdi_2.d)
                                int32_t rax_54 = *rbx
                                
                                if (not(test_bit(rax_54, 0x1e)))
                                    *rbx = rax_54 | 0x40000000
                            
                            break
                        
                        *r8_9 = *(r10_1 + 0x1436995b0) + (*r8_9 << 4)
                        i_1 = i_3 + 1
                        
                        if (i_1 u< rdi_2.d && (1 & i_3.b) != 0)
                            r8_9 = &r8_9[1]
                            *r8_9 = 0
                        
                        _Str1_1 = &_Str1_1[1]
                        i_3 = i_1
                    while (i_1 u< rdi_2.d)
                
                uint32_t rdx_11 = zx.d(*(r14_4 + 0x10))
                
                if (rdx_11.w != 0)
                    *r8_9 &= *((zx.q(zx.d(*(*(rbx + 0x28) + 0x80)) * rdx_11) & 7) + 0x143699558)
                
                if (i_3 == rdi_2.d)
                    uint64_t rdx_12 = zx.q(_Str1[rdi_2])
                    
                    if ((*((rdx_12 u>> 3) + 0x143699650) & (1 << (rdx_12.b & 7)).b) != 0)
                        int32_t rax_58 = *rbx
                        
                        if (not(test_bit(rax_58, 0x1e)))
                            *rbx = rax_58 | 0x40000000
                
                rbx[2] += 1
            else if (rcx_28 s>= 0)
                *rbx = rcx_28 | 0x80000000
            
            goto label_142bef3d2
        
        int32_t rax_60 = strncmp(_Str1, "SWIDTH", 6)
        uint64_t rax_61
        
        if (rax_60 == 0)
            rax_61 = zx.q(_Str1[6])
        
        if (rax_60 == 0 && rax_61.b u<= 0x20 && test_bit(0x100002601, rax_61))
            int32_t result_6 = sub_142bee840(&rbx[0xe], " +", _Str1, arg2)
            result_1 = result_6
            result_9 = result_6
            
            if (result_6 != 0)
                goto label_142bef4b6
            
            *(r14_4 + 0xc) = sub_142bee450(*(*(rbx + 0x38) + 8))
            *rbx |= 0x100
            goto label_142bef3d2
        
        int32_t rax_63 = strncmp(_Str1, "DWIDTH", 6)
        uint64_t rax_64
        
        if (rax_63 == 0)
            rax_64 = zx.q(_Str1[6])
        
        if (rax_63 == 0 && rax_64.b u<= 0x20 && test_bit(0x100002601, rax_64))
            int32_t result_7 = sub_142bee840(&rbx[0xe], " +", _Str1, arg2)
            result_1 = result_7
            result_9 = result_7
            
            if (result_7 != 0)
                goto label_142bef4b6
            
            int16_t rax_65 = sub_142bee450(*(*(rbx + 0x38) + 8))
            *(r14_4 + 0xe) = rax_65
            
            if ((*rbx & 0x100) == 0)
                *(r14_4 + 0xc) = sub_142b93dd0(zx.d(rax_65), 0x11940, *(rsi + 0x18) * *(rsi + 0x14))
            
            *rbx |= 0x200
            goto label_142bef3d2
        
        int32_t rax_67 = strncmp(_Str1, "BBX", 3)
        uint64_t rax_68
        
        if (rax_67 == 0)
            rax_68 = zx.q(_Str1[3])
        
        if (rax_67 == 0 && rax_68.b u<= 0x20 && test_bit(0x100002601, rax_68))
            int32_t result_8 = sub_142bee840(&rbx[0xe], " +", _Str1, arg2)
            result_1 = result_8
            result_9 = result_8
            
            if (result_8 != 0)
                goto label_142bef4b6
            
            *(r14_4 + 0x10) = sub_142bee4e0(*(*(rbx + 0x38) + 8))
            *(r14_4 + 0x12) = sub_142bee4e0(*(*(rbx + 0x38) + 0x10))
            *(r14_4 + 0x14) = sub_142bee370(*(*(rbx + 0x38) + 0x18))
            int16_t rax_72 = sub_142bee370(*(*(rbx + 0x38) + 0x20))
            int16_t rcx_57 = *(r14_4 + 0x12) + rax_72
            *(r14_4 + 0x16) = rax_72
            *(r14_4 + 0x18) = rcx_57
            *(r14_4 + 0x1a) = neg.w(rax_72)
            int16_t rax_73 = *(rbx + 0x12)
            int16_t rax_74
            
            rax_74 = rcx_57 s<= rax_73 ? rax_73 : rcx_57
            
            int16_t rcx_58 = rbx[5].w
            *(rbx + 0x12) = rax_74
            int16_t rax_75 = *(r14_4 + 0x1a)
            int16_t rax_76 = rax_75
            
            if (rax_75 s<= rcx_58)
                rax_76 = rcx_58
            
            int16_t rcx_59 = rbx[4].w
            rbx[5].w = rax_76
            int16_t rax_77 = *(r14_4 + 0x10) + *(r14_4 + 0x14)
            *(rbx + 0x16) = rax_77
            int16_t rcx_60
            
            rcx_60 = rax_77 s<= rcx_59 ? rcx_59 : rax_77
            
            rbx[4].w = rcx_60
            int16_t rax_78 = *(r14_4 + 0x14)
            int16_t rcx_61 = rbx[3].w
            int16_t rax_79 = rax_78
            
            if (rax_78 s>= rcx_61)
                rax_79 = rcx_61
            
            int16_t rcx_62 = *(rbx + 0xe)
            rbx[3].w = rax_79
            int16_t rax_80 = *(r14_4 + 0x14)
            int16_t rax_81 = rax_80
            
            if (rax_80 s<= rcx_62)
                rax_81 = rcx_62
            
            bool cond:5_1 = (*rbx & 0x200) != 0
            *(rbx + 0xe) = rax_81
            
            if (not(cond:5_1))
                *(r14_4 + 0xe) = *(r14_4 + 0x10)
            
            if (**(rbx + 0x30) != 0)
                int16_t rax_84 =
                    sub_142b93dd0(zx.d(*(r14_4 + 0xe)), 0x11940, *(rsi + 0x18) * *(rsi + 0x14))
                
                if (rax_84 != *(r14_4 + 0xc))
                    *(r14_4 + 0xc) = rax_84
                    *rbx |= 0x1000
            
            *rbx |= 0x400
            goto label_142bef3d2
        
        if (strncmp(_Str1, "BITMAP", 6) != 0)
            result_9 = 3
            goto label_142bef4b3
        
        uint64_t rax_86 = zx.q(_Str1[6])
        
        if (rax_86.b u> 0x20 || not(test_bit(0x100002601, rax_86)))
            result_9 = 3
            goto label_142bef4b3
        
        if ((*rbx & 0x400) == 0)
            result_9 = 0xb7
            goto label_142bef4b3
        
        int32_t rcx_68 = (zx.d(*(*(rbx + 0x28) + 0x80)) * zx.d(*(r14_4 + 0x10)) + 7) s>> 3
        int32_t rax_90 = zx.d(*(r14_4 + 0x12)) * rcx_68
        *(r14_4 + 0x28) = rcx_68
        
        if (rcx_68 u> 0xffff || rax_90 u> 0xffff)
            result_9 = 0xb8
            goto label_142bef4b3
        
        *(r14_4 + 0x2c) = rax_90.w
        *(r14_4 + 0x20) = sub_142b99a90(r13, 1, 0, zx.d(rax_90.w), 0, &result_1)
        result_9 = result_1
        
        if (result_9 != 0)
            goto label_142bef4b6
        
        *rbx |= 0x800
        rbx[2] = result_9
    else
        if ((*rbx & 0xfc0) != 0)
            result_9 = 0xba
            goto label_142bef4b3
        
        qsort(*(rsi + 0x40), zx.q(*(rsi + 0x38)), 0x30, sub_142bf0d30)
        *rbx &= 0xfffffffe
        *arg4 = sub_140594890
    label_142bef3d2:
        result_9 = result_1
    label_142bef3d5:
        
        if (result_9 != 0)
            goto label_142bef4b6
else
    int32_t rax_3 = strncmp(_Str1, "CHARS", 5)
    char rax_4
    
    if (rax_3 == 0)
        rax_4 = _Str1[5]
    
    if (rax_3 != 0 || rax_4 u> 0x20 || not(test_bit(0x100002601, sx.q(rax_4))))
        result_9 = 0xb4
    label_142bef4b3:
        result_1 = result_9
    label_142bef4b6:
        
        if ((*rbx & 0x40) != 0)
            sub_142b99980(r13, *(rbx + 0x18))
            uint64_t result = zx.q(result_1)
            *(rbx + 0x18) = 0
            return result
    else
        int32_t result_3 = sub_142bee840(&rbx[0xe], " +", _Str1, arg2)
        result_1 = result_3
        result_9 = result_3
        
        if (result_3 != 0)
            goto label_142bef4b6
        
        int32_t rax_6 = sub_142bee450(*(*(rbx + 0x38) + 8))
        *(rsi + 0x34) = rax_6
        rbx[1] = rax_6
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = mulu.dp.d(0xcccccccd, rbx[0x16])
        uint32_t rdx_2 = temp0_1 u>> 4
        
        if (rax_6 u> rdx_2)
            *(rsi + 0x34) = rdx_2
            rbx[1] = rdx_2
        
        int32_t rax_8 = *(rsi + 0x34)
        
        if (rbx[1] == 0)
            rax_8 = 0x40
        
        *(rsi + 0x34) = rax_8
        
        if (rbx[1] u>= 0x110000)
            result_9 = 6
            goto label_142bef4b3
        
        *(rsi + 0x40) = sub_142b99a90(r13, 0x30, 0, *(rsi + 0x34), 0, &result_1)
        result_9 = result_1
        
        if (result_9 != 0)
            goto label_142bef4b6
        
        *rbx |= 0x20

return zx.q(result_9)
