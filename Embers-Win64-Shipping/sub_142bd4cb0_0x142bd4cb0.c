// 函数: sub_142bd4cb0
// 地址: 0x142bd4cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x6480)
void var_6498
int64_t rax_1 = __security_cookie ^ &var_6498
void* rsi = arg1[0x1e]
int64_t rbx = *arg1
int32_t rax_3 = arg1[7].d
int32_t var_6430 = 0
int32_t rax_6 = *(*(rsi + 0x328) + 0x224) << 0x10
int32_t i_36 = 0
char var_6408 = 0
char var_643b = 0
int32_t i_37 = 0
int32_t var_63dc = 0x1312d00
int32_t var_a8[0x20]
memset(&var_a8, 0, 0x80)
int64_t var_b8 = 0
int32_t var_b0 = 0
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x18)
void* var_6350 = &arg1[1]
void* var_6390 = &arg1[1]
void* var_62d8 = &arg1[1]
int64_t var_6300 = 0
int64_t var_62f0
__builtin_memset(&var_62f0, 0, 0x18)
int64_t var_6340 = 0
int64_t var_6330_1
__builtin_memset(&var_6330_1, 0, 0x18)
int64_t var_6380 = 0
int64_t var_6370_1
__builtin_memset(&var_6370_1, 0, 0x18)
char var_62d0 = 0
int64_t var_62c8
__builtin_memset(&var_62c8, 0, 0x20)
int64_t var_6318 = rbx
int64_t var_6308 = 0x20
int64_t var_62f8 = 0xa
int64_t var_6358 = rbx
int32_t arg_38
int32_t rax_9 = arg_38
int32_t var_6440 = rax_9
void** var_6468 = &var_62d8
int64_t var_6398
int64_t* var_6470 = &var_6398
int64_t* var_6478 = &var_6358
int64_t var_6348 = 0x14
int64_t var_6338 = 0xa
var_6398 = rbx
int64_t var_6388 = 0x14
int64_t var_6378 = 0xa
void var_4a48
sub_142bd3630(&var_4a48, arg1, arg3, rax_3, var_6478, var_6470, var_6468, rax_9, &arg1[0x27], arg4)
int32_t rcx_5 = *(*(rsi + 0x328) + 0x220)
bool var_643c = *(arg1 + 0xd) != 0
*arg7 = rcx_5 << 0x10
int32_t rax_13

if (*(arg1 + 0xd) == 0)
    rax_13 = 0x30
else
    rax_13 = *(*(rsi + 0x320) + 0x698)

int64_t* rax_14 = sub_142bd7cd0(rbx, &arg1[1], rax_13)
int64_t* rsi_1 = rax_14
int64_t* var_62e0
int64_t var_1c0
int32_t rax_15

if (rax_14 != 0)
    char rax_16
    int512_t zmm0_1
    rax_16, zmm0_1 = sub_142bd1560(&var_6318, 0x11)
    void* r8_2 = &arg1[1]
    int64_t rcx_9 = var_62f0
    
    if (rax_16 != 0)
        rcx_9 = 0x11
    
    int64_t* var_6420_1 = var_62e0
    int64_t* rbx_1 = var_62e0
    
    if (*r8_2 != 0)
    label_142bd5d9e:
        rax_15 = var_6430
    else
        zmm0_1.o = *arg2
        int32_t i_27
        int32_t i_21 = i_27
        int32_t r10_1 = var_6440
        int32_t i_3 = 0
        *var_62e0 = zmm0_1.o
        int32_t i_8 = 0
        int128_t zmm1 = arg2[1]
        int32_t i_26 = i_21
        *(var_62e0 + 0x10) = zmm1
        
        while (true)
            char* rax_18 = rbx_1[3]
            int32_t i_7
            int32_t i_19
            
            if (rax_18 u< rbx_1[2])
                char i_30 = *rax_18
                rbx_1[3] = &rax_18[1]
                i_19 = zx.d(i_30)
                i_7 = i_19
                
                if (i_30 == 0xb || i_30 == 0xe)
                    i_19 = zx.d(i_19.b)
                    
                    if (*(arg1 + 0xd) != 0)
                        i_19 = 0
                    
                    i_7 = i_19
                
                i_3 = i_8
            else
                i_19 = 0xb
                
                if (i_3 == 0)
                    i_19 = 0xe
                
                i_7 = i_19
            
            char rdx_4 = *(arg1 + 0xc)
            
            if (rdx_4 != 0)
                if (var_643b == 0 && i_19.b u<= 0x1f)
                    r8_2 = &arg1[1]
                    
                    if (test_bit(0xffff83f5, i_19))
                        rsi_1[3] = rsi_1[2]
                        continue
                
                if (i_37 s> 0 && (i_19.b u<= 9 || i_19.b - 0xd u<= 0x12))
                    i_37 = 0
                
                if (var_6408 != 0 && (i_19.b & 0xe0) == 0)
                    uint32_t rax_25 = zx.d(var_6408)
                    
                    if (i_19.b != 0xc)
                        rax_25 = 0
                    
                    var_6408.d = rax_25
            
            if (*r8_2 != 0)
                goto label_142bd5d9e
            
            int32_t temp0_1 = var_63dc
            var_63dc -= 1
            
            if (temp0_1 != 1)
                uint64_t r8_3 = zx.q(i_19.b)
                int32_t var_6460
                int32_t i_4
                int64_t var_d0
                int64_t var_c8
                int32_t rax_32
                void* rdi_3
                int32_t rdi_5
                int32_t rdi_6
                int64_t* r8_7
                void* r8_8
                int32_t rdx_49
                int32_t rdx_85
                
                if (r8_3.d u> 0x1f)
                    if (i_19.b u<= 0xf6)
                        rdx_49 = (r8_3 - 0x8b).d
                    label_142bd7599:
                        sub_142bd7e70(rsi_1, rdx_49)
                        i_21 = i_26
                    label_142bd75a3:
                        i_3 = i_8
                        r8_2 = &arg1[1]
                        continue
                    
                    int32_t rax_371 = sub_142bd1cf0(rbx_1)
                    
                    if (i_19.b u<= 0xfa)
                        rdx_49 = (r8_3.d << 8) - 0xf694 + rax_371
                        goto label_142bd7599
                    
                    if (i_19.b u<= 0xfe)
                        rdx_49 = 0xfa94 - (r8_3.d << 8) - rax_371
                        goto label_142bd7599
                    
                    int32_t rax_372 = sub_142bd1cf0(rbx_1)
                    int32_t rax_373 = sub_142bd1cf0(rbx_1)
                    rdx_85 = sub_142bd1cf0(rbx_1) | ((rax_371 << 8 | rax_372) << 8 | rax_373) << 8
                    
                    if (*(arg1 + 0xc) == 0)
                        goto label_142bd68fd
                    
                    if (rdx_85 + 0x7d00 u> 0xfa00)
                        char rax_377 = var_6408
                        
                        if (var_6408 == 0)
                            rax_377 = 1
                        
                        var_6408 = rax_377
                    
                    sub_142bd7e70(rsi_1, rdx_85)
                    i_21 = i_26
                    r8_2 = &arg1[1]
                    r10_1 = var_6440
                    i_3 = i_8
                    continue
                else
                    switch (r8_3)
                        case 0, 2, 0x11
                            goto label_142bd51d0
                        case 1, 0x12
                            if (rdx_4 != 0)
                                rdi_3 = rsi
                                rax_32 = *(*(rdi_3 + 0x40) + 4)
                            else
                                if (var_62d0 != rdx_4)
                                    goto label_142bd51d0
                                
                                rdi_3 = rsi
                                rax_32 = 0
                            
                            r8_7 = &var_6358
                            goto label_142bd51a0
                        case 3, 0x17
                            if (rdx_4 == 0)
                                if (var_62d0 != rdx_4)
                                    goto label_142bd51d0
                                
                                rdi_3 = rsi
                                r8_7 = &var_6398
                                rax_32 = 0
                                goto label_142bd51a0
                            
                            rdi_3 = rsi
                            r8_7 = &var_6398
                            rax_32 = **(rdi_3 + 0x40)
                        label_142bd51a0:
                            var_6470.d = rax_32
                            var_6478 = &var_643c
                            zmm0_1 = sub_142bd2700(arg1, rsi_1, r8_7, arg7, var_6478, var_6470.d)
                            
                            if (*(rdi_3 + 0x340) != 0)
                                goto label_142bd5d9e
                            
                            goto label_142bd51c0
                        case 4
                            int32_t* rcx_19 = rsi_1[2]
                            int32_t rax_38 = ((rsi_1[3] - rcx_19) s>> 3).d
                            
                            if (rax_38 u> 1 && var_643c == 0)
                                int32_t rax_40
                                
                                if (rax_38 != 0)
                                    int32_t rdx_9 = rcx_19[1]
                                    
                                    if (rdx_9 == 1)
                                        int32_t rdx_11 = *rcx_19
                                        
                                        if (rdx_11 s>= 0)
                                            rax_40 = (rdx_11 + 0x2000) s>> 0xe
                                        else
                                            rax_40 = neg.d((0x2000 - rdx_11) s>> 0xe)
                                    else
                                        rax_40 = *rcx_19
                                        
                                        if (rdx_9 == 2)
                                            rax_40 <<= 0x10
                                else
                                    int32_t* rax_39 = rsi_1[1]
                                    
                                    if (rax_39 != 0 && *rax_39 == 0)
                                        *rax_39 = 0x82
                                    
                                    rax_40 = 0
                                
                                *arg7 = rax_40 + rax_6
                            
                            r8_8 = rsi
                            var_643c = true
                            
                            if (*(r8_8 + 0x340) != 0)
                                goto label_142bd5d9e
                            
                            rdi_5 = var_6440 + sub_142bd7d80(rsi_1)
                            var_6440 = rdi_5
                            arg_38 = rdi_5
                        label_142bd52b1:
                            
                            if (*(r8_8 + 0x2e0) != 0)
                                r10_1 = var_6440
                                goto label_142bd51d0
                            
                            zmm0_1, zmm1 = sub_142bd39e0(&var_4a48, i_21, rdi_5, zmm0_1, zmm1, arg5)
                            goto label_142bd51c0
                        case 5
                            int32_t rbx_2 = 0
                            int32_t rax_48 = ((rsi_1[3] - rsi_1[2]) s>> 3).d
                            
                            if (rax_48 == 0)
                                goto label_142bd54be
                            
                            rdi_6 = var_6440
                            
                            do
                                int64_t rcx_23 = rsi_1[2]
                                int32_t rax_53
                                
                                if (rbx_2 u< ((rsi_1[3] - rcx_23) s>> 3).d)
                                    uint64_t rax_54 = zx.q(rbx_2)
                                    int32_t rdx_13 = *(rcx_23 + (rax_54 << 3) + 4)
                                    int32_t* rcx_24 = rcx_23 + (rax_54 << 3)
                                    
                                    if (rdx_13 == 1)
                                        int32_t rdx_15 = *rcx_24
                                        
                                        if (rdx_15 s>= 0)
                                            rax_53 = (rdx_15 + 0x2000) s>> 0xe
                                        else
                                            rax_53 = neg.d((0x2000 - rdx_15) s>> 0xe)
                                    else
                                        rax_53 = *rcx_24
                                        
                                        if (rdx_13 == 2)
                                            rax_53 <<= 0x10
                                else
                                    int32_t* rax_52 = rsi_1[1]
                                    
                                    if (rax_52 != 0 && *rax_52 == 0)
                                        *rax_52 = 0x82
                                    
                                    rax_53 = 0
                                
                                int32_t i_40 = i_21 + rax_53
                                i_26 = i_40
                                i_27 = i_40
                                rdi_6 += sub_142bd7c60(rsi_1, rbx_2 + 1)
                                arg_38 = rdi_6
                                zmm0_1, zmm1 =
                                    sub_142bd3840(&var_4a48, i_40, rdi_6, zmm0_1, zmm1, arg5)
                                i_21 = i_26
                                rbx_2 += 2
                            while (rbx_2 u< rax_48)
                            
                        label_142bd54b1:
                            i_21 = i_26
                            var_6440 = rdi_6
                        label_142bd54be:
                            rbx_1 = var_6420_1
                            r10_1 = var_6440
                            i_3 = i_8
                            r8_2 = &arg1[1]
                            rsi_1[3] = rsi_1[2]
                            continue
                        case 6, 7
                            int32_t rax_61 = ((rsi_1[3] - rsi_1[2]) s>> 3).d
                            r8_3.b = i_19.b == 6
                            int32_t rbx_3 = 0
                            
                            if (rax_61 == 0)
                                goto label_142bd54be
                            
                            rdi_6 = var_6440
                            int64_t r10_2 = 0
                            i_4.q = 0
                            
                            do
                                int32_t* rdx_18 = rsi_1[2]
                                int32_t rax_66
                                
                                if (rbx_3 u< ((rsi_1[3] - rdx_18) s>> 3).d)
                                    int32_t rcx_27 = *(rdx_18 + r10_2 + 4)
                                    
                                    if (rcx_27 == 1)
                                        int32_t rcx_29 = *(rdx_18 + r10_2)
                                        
                                        if (rcx_29 s>= 0)
                                            rax_66 = (rcx_29 + 0x2000) s>> 0xe
                                        else
                                            rax_66 = neg.d((0x2000 - rcx_29) s>> 0xe)
                                    else
                                        rax_66 = *(rdx_18 + r10_2)
                                        
                                        if (rcx_27 == 2)
                                            rax_66 <<= 0x10
                                else
                                    int32_t* rax_65 = rsi_1[1]
                                    
                                    if (rax_65 != 0 && *rax_65 == 0)
                                        *rax_65 = 0x82
                                    
                                    rax_66 = 0
                                
                                if (r8_3.b == 0)
                                    rdi_6 += rax_66
                                    arg_38 = rdi_6
                                else
                                    i_21 += rax_66
                                    i_26 = i_21
                                    i_27 = i_21
                                
                                r8_3.b ^= 1
                                char var_63f4_1 = r8_3.b
                                zmm0_1, zmm1 =
                                    sub_142bd3840(&var_4a48, i_21, rdi_6, zmm0_1, zmm1, arg5)
                                rbx_3 += 1
                                i_21 = i_26
                                r10_2 = i_4.q + 8
                                r8_3 = zx.q(var_63f4_1)
                                i_4.q = r10_2
                            while (rbx_3 u< rax_61)
                            
                            goto label_142bd54b1
                        case 8, 0x18
                            int32_t i_25 = 0
                            int32_t i = ((rsi_1[3] - rsi_1[2]) s>> 3).d
                            i_4 = 0
                            
                            if (i u>= 6)
                                do
                                    int64_t rcx_31 = rsi_1[2]
                                    int32_t rax_77
                                    
                                    if (i_25 u< ((rsi_1[3] - rcx_31) s>> 3).d)
                                        uint64_t i_28 = zx.q(i_25)
                                        int32_t rdx_20 = *(rcx_31 + (i_28 << 3) + 4)
                                        int32_t* rcx_32 = rcx_31 + (i_28 << 3)
                                        
                                        if (rdx_20 == 1)
                                            int32_t rdx_22 = *rcx_32
                                            
                                            if (rdx_22 s>= 0)
                                                rax_77 = (rdx_22 + 0x2000) s>> 0xe
                                            else
                                                rax_77 = neg.d((0x2000 - rdx_22) s>> 0xe)
                                        else
                                            rax_77 = *rcx_32
                                            
                                            if (rdx_20 == 2)
                                                rax_77 <<= 0x10
                                    else
                                        int32_t* rax_76 = rsi_1[1]
                                        
                                        if (rax_76 != 0 && *rax_76 == 0)
                                            *rax_76 = 0x82
                                        
                                        rax_77 = 0
                                    
                                    int32_t rdi_7 = rax_77 + i_21
                                    int32_t rbx_4 = r10_1 + sub_142bd7c60(rsi_1, i_25 + 1)
                                    int32_t r10_4 = rdi_7 + sub_142bd7c60(rsi_1, i_25 + 2)
                                    int32_t r9_4 = rbx_4 + sub_142bd7c60(rsi_1, i_25 + 3)
                                    i_26 = sub_142bd7c60(rsi_1, i_25 + 4) + r10_4
                                    int32_t rax_87 = sub_142bd7c60(rsi_1, i_25 + 5) + r9_4
                                    var_6468.d = rax_87
                                    var_6440 = rax_87
                                    var_6470.d = i_26
                                    var_6478.d = r9_4
                                    zmm0_1, zmm1 = sub_142bd3350(&var_4a48, rdi_7, rbx_4, r10_4, 
                                        zmm0_1, zmm1, arg5, var_6478.d, var_6470.d, var_6468.d)
                                    i_21 = i_26
                                    i_25 = i_4 + 6
                                    r10_1 = var_6440
                                    i_27 = i_21
                                    arg_38 = r10_1
                                    i_4 = i_25
                                while (i_25 + 6 u<= i)
                                
                                i_19 = i_7
                                rbx_1 = var_6420_1
                            
                            if (i_19.b == 0x18)
                                int32_t i_41 = i_21 + sub_142bd7c60(rsi_1, i_25)
                                i_26 = i_41
                                i_27 = i_41
                                int32_t r10_5 = r10_1 + sub_142bd7c60(rsi_1, i_25 + 1)
                                var_6440 = r10_5
                                arg_38 = r10_5
                                zmm0_1, zmm1 =
                                    sub_142bd3840(&var_4a48, i_41, r10_5, zmm0_1, zmm1, arg5)
                            
                            r10_1 = var_6440
                            i_21 = i_26
                            i_3 = i_8
                            r8_2 = &arg1[1]
                            rsi_1[3] = rsi_1[2]
                            continue
                        case 9
                            if (rdx_4 == 0)
                                goto label_142bd51d0
                            
                            zmm0_1, zmm1 = sub_142bd2f50(&var_4a48, zmm1, arg5, zmm0_1)
                            var_643c = true
                        label_142bd51c0:
                            i_21 = i_26
                            r10_1 = var_6440
                        label_142bd51d0:
                            i_3 = i_8
                        label_142bd51da:
                            r8_2 = &arg1[1]
                            rsi_1[3] = rsi_1[2]
                            continue
                        case 0xa, 0x1d
                            if (i_8 s<= 0x10)
                                int64_t rbx_6 = sx.q(i_8) + 1
                                
                                if (rbx_6 u>= rcx_9)
                                    if (arg1 != -8 && arg1[1].d == 0)
                                        arg1[1].d = 0x82
                                    
                                    rbx_6 = 0
                                
                                rbx_1 = rbx_6 * var_6308 + var_62e0
                                var_6420_1 = rbx_1
                                void* r9_6 = rsi
                                int32_t rcx_44 = sub_142bd7de0(rsi_1)
                                
                                if (*(arg1 + 0xc) != 0)
                                    void* rdx_32 = *(r9_6 + 0x3a8)
                                    
                                    if (rdx_32 != 0)
                                        int32_t* rax_97 = sub_142b992a0(rcx_44, rdx_32)
                                        r9_6 = rsi
                                        
                                        if (rax_97 == 0)
                                            rcx_44 = -1
                                        else
                                            rcx_44 = *rax_97
                                
                                if (i_19.b == 0x1d)
                                    __builtin_memset(rbx_1, 0, 0x20)
                                    uint64_t r8_16 = zx.q(*(r9_6 + 0x354) + rcx_44)
                                    
                                    if (r8_16.d u< *(r9_6 + 0x34c))
                                        int64_t rdx_40 = *(*(r9_6 + 0x360) + (r8_16 << 3))
                                        rbx_1[3] = rdx_40
                                        rbx_1[1] = rdx_40
                                        rbx_1[2] = *(*(r9_6 + 0x360) + (zx.q((r8_16 + 1).d) << 3))
                                    label_142bd5886:
                                        r10_1 = var_6440
                                        i_3 = i_8 + 1
                                        i_21 = i_26
                                        r8_2 = &arg1[1]
                                        i_8 = i_3
                                        continue
                                else if (sub_142bd4c10(r9_6, rcx_44, rbx_1) == 0)
                                    goto label_142bd5886
                        case 0xb
                            if (i_8 s>= 1)
                                i_3 = i_8 - 1
                                uint64_t i_10 = zx.q(i_3)
                                i_8 = i_3
                                
                                if (i_10 u>= rcx_9)
                                    if (arg1 != -8 && arg1[1].d == 0)
                                        arg1[1].d = 0x82
                                    
                                    i_10 = 0
                                
                                r8_2 = &arg1[1]
                                rbx_1 = var_6308 * i_10 + var_62e0
                                var_6420_1 = rbx_1
                                continue
                        case 0xc
                            char rax_102 = sub_142bd1cf0(rbx_1)
                            uint64_t rax_103 = zx.q(rax_102)
                            int32_t rcx_59 = (rax_103 - 8).d
                            
                            if (rcx_59 u> 0x1d)
                            label_142bd5a99:
                                
                                if (*(arg1 + 0xd) != 0 || rax_102 u>= 0x26)
                                    goto label_142bd51d0
                                
                                char rdx_47 = *(arg1 + 0xc)
                                
                                if (rdx_47 != 0 && i_37 s> 0 && rax_102 != 0x11)
                                    i_3 = i_8
                                    r8_2 = &arg1[1]
                                    i_37 = 0
                                    rsi_1[3] = rsi_1[2]
                                    continue
                                
                                if (rax_103.d u> 0x21)
                                    goto label_142bd51d0
                                
                                switch (rax_103)
                                    case 0, 8, 0xd, 0x13, 0x19, 0x1f, 0x20
                                        goto label_142bd51d0
                                    case 1, 2
                                        if (rdx_47 == 0)
                                            goto label_142bd51d0
                                        
                                        int32_t rax_105 = sub_142bd7c60(rsi_1, 0)
                                        int32_t rax_106 = sub_142bd7c60(rsi_1, 2)
                                        int32_t rax_107 = sub_142bd7c60(rsi_1, 4)
                                        sub_142bd7fb0(rsi_1, 2, 
                                            rax_106 - rax_105 - sub_142bd7c60(rsi_1, 1))
                                        sub_142bd7fb0(rsi_1, 4, 
                                            rax_107 - rax_106 - sub_142bd7c60(rsi_1, 3))
                                        int32_t* rax_111 = *(rsi + 0x40)
                                        int32_t rcx_76
                                        
                                        if (rax_102 != 1)
                                            rcx_76 = rax_111[1]
                                        else
                                            rcx_76 = *rax_111
                                        
                                        var_6470.d = rcx_76
                                        int64_t* r8_25 = &var_6398
                                        
                                        if (rax_102 != 1)
                                            r8_25 = &var_6358
                                        
                                        var_6478 = &var_643c
                                        zmm0_1 = sub_142bd2700(arg1, rsi_1, r8_25, arg7, var_6478, 
                                            var_6470.d)
                                        
                                        if (*(rsi + 0x340) != 0)
                                            goto label_142bd5d9e
                                        
                                        rbx_1 = var_6420_1
                                        goto label_142bd51c0
                                    case 3
                                        int32_t rax_113 = sub_142bd7d80(rsi_1)
                                        
                                        if (sub_142bd7d80(rsi_1) == 0 || rax_113 == 0)
                                            rdx_49 = 0
                                            goto label_142bd7599
                                        
                                        rdx_49 = 1
                                        goto label_142bd7599
                                    case 4
                                        int32_t rax_115 = sub_142bd7d80(rsi_1)
                                        
                                        if (sub_142bd7d80(rsi_1) != 0 || rax_115 != 0)
                                            rdx_49 = 1
                                            goto label_142bd7599
                                        
                                        rdx_49 = 0
                                        goto label_142bd7599
                                    case 5
                                        rdx_49.b = sub_142bd7d80(rsi_1) == 0
                                        goto label_142bd7599
                                    case 6
                                        if (rdx_47 == 0)
                                            goto label_142bd51d0
                                        
                                        void* r10_6 = rsi
                                        void* r9_13 = *(r10_6 + 8)
                                        int32_t rax_118 = sub_142bd7de0(rsi_1)
                                        int32_t r8_28 = rax_118
                                        var_6408.d = rax_118
                                        int32_t rax_119 = sub_142bd7de0(rsi_1)
                                        int32_t rbx_13 = rax_119
                                        int32_t var_63f0_1 = rax_119
                                        int32_t rax_120 = sub_142bd7d80(rsi_1)
                                        int32_t rax_121 = sub_142bd7d80(rsi_1)
                                        i_4 = sub_142bd7d80(rsi_1)
                                        
                                        if (arg6 == 0 && *(r10_6 + 0x5b) == 0 && (
                                                *(r10_6 + 0x368) != 0
                                                || *(*(r9_13 + 0xd0) + 0x50) != 0))
                                            int32_t rdi_10 = rax_121 + **(r10_6 + 0x40)
                                            
                                            if (*(*(r9_13 + 0xd0) + 0x50) == 0)
                                                int32_t rax_126 = sub_142bd86c0(r10_6, rbx_13)
                                                rbx_13 = rax_126
                                                var_63f0_1 = rax_126
                                                int32_t rax_127 = sub_142bd86c0(rsi, var_6408.d)
                                                r10_6 = rsi
                                                r8_28 = rax_127
                                                var_6408.d = rax_127
                                            
                                            if (rbx_13 s>= 0 && r8_28 s>= 0)
                                                if (*(r10_6 + 0x5a) != 0)
                                                    void* rax_128 = *(r10_6 + 0x10)
                                                    int64_t* rbx_14 = **(rax_128 + 0xf0)
                                                    rax_15 = sub_142b929a0(rbx_14, 2)
                                                    
                                                    if (rax_15 != 0)
                                                        break
                                                    
                                                    int32_t* rbx_15 = rbx_14[0x14]
                                                    int32_t rdi_11 = rdi_10 - i_4
                                                    *rbx_15 = var_63f0_1
                                                    rbx_15[1].w = 0x202
                                                    *(rbx_15 + 8) = 0
                                                    rbx_15[8] = var_6408.d
                                                    rbx_15[9].w = 2
                                                    rbx_15[0xa] = sub_142b96160(rdi_11) s>> 0x10
                                                    rbx_15[0xb] = sub_142b96160(rax_120) s>> 0x10
                                                    *(rax_128 + 0xc0) = 2
                                                    *(rax_128 + 0xc8) = rbx_14[0xb]
                                                    __builtin_strncpy(rax_128 + 0x60, "pmoc", 4)
                                                    rbx_14[0x13].d = 2
                                                    goto label_142bd5d9e
                                                
                                                sub_142b92bd0(*(r10_6 + 0x18))
                                                int32_t r8_73 = 0
                                                void* r9_30 = *(rsi + 8)
                                                int64_t* rcx_275 = *(*(r9_30 + 0xd0) + 0x50)
                                                int32_t rax_381
                                                int64_t rdx_164
                                                
                                                if (rcx_275 == 0)
                                                    uint64_t rcx_277 = zx.q(rbx_13)
                                                    rdx_164 = *(*(r9_30 + 0x250) + (rcx_277 << 3))
                                                    var_b8 = rdx_164
                                                    rax_381 = *(*(r9_30 + 0x258) + (rcx_277 << 2))
                                                label_142bd76e1:
                                                    int64_t var_c0_1 = rdx_164
                                                    var_d8 = 0
                                                    var_d0 = rdx_164
                                                    
                                                    if (r8_73 == 0)
                                                        var_6460.q = &i_7
                                                        var_6468.d = 0
                                                        var_6470.d = 0
                                                        var_6478.b = 1
                                                        sub_142bd4cb0(arg1, &var_d8, arg3, arg4, 
                                                            var_6478, var_6470, var_6468, var_6460)
                                                        int64_t rcx_279 = var_d0
                                                        void* rdx_166 = *(rsi + 8)
                                                        var_b8 = rcx_279
                                                        int64_t* rcx_280 =
                                                            *(*(rdx_166 + 0xd0) + 0x50)
                                                        
                                                        if (rcx_280 != 0)
                                                            (*(*rcx_280 + 8))(rcx_280[1], &var_b8)
                                                        
                                                        int64_t* rax_389 = *(rsi + 0x40)
                                                        r8_73 = 0
                                                        int64_t rbx_33 = *rax_389
                                                        int64_t rdi_33 = **(rsi + 0x48)
                                                        *rax_389 = 0
                                                        *(*(rsi + 0x40) + 4) = 0
                                                        void* r10_21 = *(rsi + 8)
                                                        int64_t* r9_32 = *(*(r10_21 + 0xd0) + 0x50)
                                                        int32_t rax_394
                                                        int64_t rdx_169
                                                        
                                                        if (r9_32 == 0)
                                                            uint64_t rcx_284 = zx.q(var_6408.d)
                                                            rdx_169 =
                                                                *(*(r10_21 + 0x250) + (rcx_284 << 3))
                                                            var_b8 = rdx_169
                                                            rax_394 =
                                                                *(*(r10_21 + 0x258) + (rcx_284 << 2))
                                                        label_142bd77fd:
                                                            int64_t var_c0_2 = rdx_169
                                                            var_d8 = 0
                                                            var_d0 = rdx_169
                                                            
                                                            if (r8_73 == 0)
                                                                var_6460.q = &i_7
                                                                var_6468.d = rax_120
                                                                var_6470.d = rdi_10 - i_4
                                                                var_6478.b = 1
                                                                sub_142bd4cb0(arg1, &var_d8, arg3, 
                                                                    arg4, var_6478, var_6470, var_6468, 
                                                                    var_6460)
                                                                int64_t rcx_287 = var_d0
                                                                var_b8 = rcx_287
                                                                int32_t var_b0_2 =
                                                                    rax_394 + rdx_169.d - rcx_287.d
                                                                int64_t* rcx_288 =
                                                                    *(*(*(rsi + 8) + 0xd0) + 0x50)
                                                                
                                                                if (rcx_288 != 0)
                                                                    (*(*rcx_288 + 8))(rcx_288[1], &var_b8)
                                                                
                                                                **(rsi + 0x40) = rbx_33
                                                                **(rsi + 0x48) = rdi_33
                                                                rax_15 = var_6430
                                                            else
                                                                rax_15 = r8_73
                                                        else
                                                            int32_t rax_393 = (**r9_32)(r9_32[1], 
                                                                zx.q(var_6408.d), &var_b8)
                                                            r8_73 = rax_393
                                                            
                                                            if (rax_393 == 0)
                                                                rax_394 =
                                                                    rax_381 + rdx_164.d - rcx_279.d
                                                                rdx_169 = var_b8
                                                                goto label_142bd77fd
                                                            
                                                            rax_15 = r8_73
                                                    else
                                                        rax_15 = r8_73
                                                else
                                                    int32_t rax_380 = (**rcx_275)(rcx_275[1], 
                                                        zx.q(rbx_13), &var_b8)
                                                    r8_73 = rax_380
                                                    
                                                    if (rax_380 == 0)
                                                        rax_381 = var_b0
                                                        rdx_164 = var_b8
                                                        goto label_142bd76e1
                                                    
                                                    rax_15 = r8_73
                                                break
                                    case 7
                                        if (rdx_47 == 0)
                                            goto label_142bd51d0
                                        
                                        *(*(rsi + 0x48) + 4) = sub_142bd7d80(rsi_1)
                                        **(rsi + 0x48) = sub_142bd7d80(rsi_1)
                                        int32_t rax_137 = sub_142bd7d80(rsi_1)
                                        int32_t rax_138 = sub_142bd7d80(rsi_1)
                                        int32_t* rcx_100 = *(rsi + 0x40)
                                        var_643c = true
                                        *rcx_100 += rax_138
                                        void* rcx_101 = *(rsi + 0x40)
                                        *(rcx_101 + 4) += rax_137
                                        
                                        if (*(rsi + 0x5b) != 0)
                                            goto label_142bd5d9e
                                        
                                        i_3 = i_8
                                        
                                        if (var_643b == 0)
                                            goto label_142bd6f50
                                        
                                        i_21 += rax_138
                                        r10_1 += rax_137
                                        r8_2 = &arg1[1]
                                        rsi_1[3] = rsi_1[2]
                                        i_26 = i_21
                                        i_27 = i_21
                                        var_6440 = r10_1
                                        arg_38 = r10_1
                                        continue
                                    case 9
                                        int32_t rax_140 = sub_142bd7d80(rsi_1)
                                        
                                        if (rax_140 s>= 0x80000001)
                                            int32_t temp12_1
                                            int32_t temp13_1
                                            temp12_1:temp13_1 = sx.q(rax_140)
                                            sub_142bd7e30(rsi_1, (temp13_1 ^ temp12_1) - temp12_1)
                                            i_21 = i_26
                                            r8_2 = &arg1[1]
                                            i_3 = i_8
                                            continue
                                        else
                                            sub_142bd7e30(rsi_1, 0x7fffffff)
                                            i_21 = i_26
                                            r8_2 = &arg1[1]
                                            i_3 = i_8
                                            continue
                                    case 0xa
                                        int32_t rax_144 = sub_142bd7d80(rsi_1)
                                        sub_142bd7e30(rsi_1, sub_142bd7d80(rsi_1) + rax_144)
                                        i_21 = i_26
                                        r8_2 = &arg1[1]
                                        i_3 = i_8
                                        continue
                                    case 0xb
                                        int32_t rax_146 = sub_142bd7d80(rsi_1)
                                        sub_142bd7e30(rsi_1, sub_142bd7d80(rsi_1) - rax_146)
                                        i_21 = i_26
                                        r8_2 = &arg1[1]
                                        i_3 = i_8
                                        continue
                                    case 0xc
                                        int32_t rax_150
                                        int32_t r8_32
                                        
                                        if (rdx_47 == 0 || var_6408 == 0)
                                            r8_32 = sub_142bd7d80(rsi_1)
                                            rax_150 = sub_142bd7d80(rsi_1)
                                        else
                                            r8_32 = sub_142bd7de0(rsi_1)
                                            rax_150 = sub_142bd7de0(rsi_1)
                                            var_6408 = 0
                                        
                                        sub_142bd7e30(rsi_1, sub_142b91790(rax_150, r8_32))
                                        i_21 = i_26
                                        r8_2 = &arg1[1]
                                        r10_1 = var_6440
                                        i_3 = i_8
                                        continue
                                    case 0xe
                                        int32_t rax_153 = sub_142bd7d80(rsi_1)
                                        
                                        if (rax_153 s>= 0x80000001)
                                            sub_142bd7e30(rsi_1, neg.d(rax_153))
                                            i_21 = i_26
                                            r8_2 = &arg1[1]
                                            i_3 = i_8
                                            continue
                                        else
                                            sub_142bd7e30(rsi_1, 0x7fffffff)
                                            i_21 = i_26
                                            r8_2 = &arg1[1]
                                            i_3 = i_8
                                            continue
                                    case 0xf
                                        int32_t rax_155 = sub_142bd7d80(rsi_1)
                                        rdx_49.b = sub_142bd7d80(rsi_1) == rax_155
                                        goto label_142bd7599
                                    case 0x10
                                        if (rdx_47 == 0)
                                            goto label_142bd75a3
                                        
                                        int64_t rdx_60 = sx.q(sub_142bd7de0(rsi_1))
                                        int32_t i_11 = sub_142bd7de0(rsi_1)
                                        int64_t r8_34 = rsi_1[2]
                                        int32_t i_17 = i_11
                                        int64_t r11_6 = rsi_1[3] - r8_34
                                        i_7 = i_11
                                        uint64_t r11_8 = zx.q((r11_6 s>> 3).d - i_11)
                                        uint64_t var_63b0_1 = r11_8
                                        i_36 = 0
                                        i_37 = 0
                                        int32_t rdx_74
                                        
                                        if (rdx_60.d u> 0x1c)
                                        label_142bd668d:
                                            
                                            if (i_17 s>= 0 && rdx_60.d s>= 0)
                                                int32_t i_34 = i_17
                                                
                                                if (i_17 s> 3)
                                                    i_34 = 3
                                                
                                                int64_t i_22 = sx.q(i_34)
                                                i_37 = i_34
                                                
                                                if (i_22 s< 1)
                                                    goto label_142bd5150
                                                
                                                void* r8_46 = &var_6398 + (i_22 << 2) + 0x62dc
                                                int64_t i_1
                                                
                                                do
                                                    *r8_46 = sub_142bd7d80(rsi_1)
                                                    r8_46 -= 4
                                                    i_1 = i_22
                                                    i_22 -= 1
                                                while (i_1 != 1)
                                                i_21 = i_26
                                                rbx_1 = var_6420_1
                                                i_3 = i_8
                                                r8_2 = &arg1[1]
                                                continue
                                        else
                                            switch (rdx_60)
                                                case 0
                                                    if (i_17 == 3)
                                                        if (var_643b == 0)
                                                        label_142bd605a:
                                                            sub_142bd7e30(rsi_1, i_21)
                                                            sub_142bd7e30(rsi_1, r10_1)
                                                            i_21 = i_26
                                                            r8_2 = &arg1[1]
                                                            rbx_1 = var_6420_1
                                                            i_3 = i_8
                                                            i_36 = 2
                                                            continue
                                                        else if (*(rsi + 0x2e0) != 0
                                                                && *(rsi + 0x2e4) == 7)
                                                            goto label_142bd605a
                                                case 1
                                                    if (i_17 == 0)
                                                        if (var_643b == 0)
                                                            goto label_142bd627e
                                                        
                                                        int64_t* r10_7 = *(rsi + 0x18)
                                                        
                                                        if (sx.d(*(r10_7 + 0x62)) + 6
                                                                + sx.d(*(r10_7 + 0x1a)) u> r10_7[1].d)
                                                            int32_t rax_160
                                                            rax_160, zmm0_1, zmm1 =
                                                                sub_142b92690(r10_7, i_17 + 6, 0)
                                                            
                                                            if (rax_160 != 0)
                                                                goto label_142bd5d9e
                                                            
                                                            i_21 = i_26
                                                        
                                                        rbx_1 = var_6420_1
                                                        r10_1 = var_6440
                                                        i_3 = i_8
                                                        r8_2 = &arg1[1]
                                                        *(rsi + 0x2e0) = 1
                                                        continue
                                                case 2
                                                    if (i_17 == 0)
                                                        if (var_643b == 0)
                                                            goto label_142bd627e
                                                        
                                                        if (*(rsi + 0x2e0) != 0)
                                                            int32_t rbx_16 = *(rsi + 0x2e4)
                                                            *(rsi + 0x2e4) = rbx_16 + 1
                                                            
                                                            if (rbx_16 - 1 u> 5)
                                                                goto label_142bd627e
                                                            
                                                            int64_t* r10_8 = *(rsi + 0x18)
                                                            
                                                            if (sx.d(*(r10_8 + 0x62)) + 1
                                                                    + sx.d(*(r10_8 + 0x1a)) u<= r10_8[1].d)
                                                                goto label_142bd6176
                                                            
                                                            int32_t rax_164
                                                            rax_164, zmm0_1, zmm1 =
                                                                sub_142b92690(r10_8, 1, 0)
                                                            
                                                            if (rax_164 == 0)
                                                                i_21 = i_26
                                                            label_142bd6176:
                                                                int32_t rdx_64 = rbx_16 - 3
                                                                
                                                                if (rbx_16 s<= 3)
                                                                    rdx_64 = rbx_16
                                                                
                                                                r10_1 = var_6440
                                                                int32_t rdx_65 = rdx_64 * 2
                                                                *(&var_d8 + (sx.q(rdx_65 - 2) << 2)) =
                                                                    i_21
                                                                *(&var_d8 + (sx.q(rdx_65 - 1) << 2)) =
                                                                    r10_1
                                                                
                                                                if (rbx_16 != 3 && rbx_16 != 6)
                                                                    goto label_142bd627e
                                                                
                                                                var_6468.d = var_c8:4.d
                                                                var_6470.d = var_c8.d
                                                                var_6478.d = var_d0:4.d
                                                                zmm0_1, zmm1 = sub_142bd3350(&var_4a48, 
                                                                    var_d8.d, var_d8:4.d, var_d0.d, zmm0_1, 
                                                                    zmm1, arg5, var_6478.d, var_6470.d, 
                                                                    var_6468.d)
                                                                r10_1 = var_6440
                                                                i_21 = i_26
                                                                i_3 = i_8
                                                                r8_2 = &arg1[1]
                                                                rbx_1 = var_6420_1
                                                                continue
                                                case 3
                                                    if (i_17 == 1)
                                                        r8_2 = &arg1[1]
                                                        
                                                        if (var_643b != 0)
                                                            var_62d0 = 0
                                                            var_62d0 = 0
                                                            var_6370_1 = 0
                                                            var_6330_1 = 0
                                                            int64_t var_62c8_1
                                                            __builtin_memset(&var_62c8_1, 0, 0x20)
                                                            var_62d8 = r8_2
                                                        
                                                        rbx_1 = var_6420_1
                                                        i_3 = i_8
                                                        i_36 = 1
                                                        continue
                                                case 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0x1a
                                                    goto label_142bd668d
                                                case 0xc, 0xd
                                                    rsi_1[3] = r8_34
                                                label_142bd627e:
                                                    rbx_1 = var_6420_1
                                                    i_3 = i_8
                                                    r8_2 = &arg1[1]
                                                    continue
                                                case 0xe, 0xf, 0x10, 0x11, 0x12
                                                    int32_t* r9_15 = *(rsi + 0x3c8)
                                                    int32_t* var_63e8_5 = r9_15
                                                    
                                                    if (r9_15 != 0)
                                                        int32_t rax_171
                                                        rax_171.b = rdx_60.d == 0x12
                                                        int32_t i_31 = rdx_60.d + rax_171 - 0xd
                                                        i_36 = i_31
                                                        
                                                        if (i_17 == *r9_15 * i_31)
                                                            int32_t rdi_15 = i_31 + r11_8.d
                                                            
                                                            if (i_31 != 0)
                                                                uint64_t i_9 = zx.q(i_31)
                                                                uint64_t i_2
                                                                
                                                                do
                                                                    int32_t i_12 =
                                                                        sub_142bd7c60(rsi_1, r11_8.d)
                                                                    int32_t j = 1
                                                                    i_4 = i_12
                                                                    int32_t i_16 = i_12
                                                                    
                                                                    if (*r9_15 u> 1)
                                                                        do
                                                                            int32_t rax_177 = sub_142b93e80(
                                                                                sub_142bd7c60(rsi_1, rdi_15), 
                                                                                *(*(r9_15 + 0x108) + (zx.q(j) << 2)))
                                                                            rdi_15 += 1
                                                                            r9_15 = var_63e8_5
                                                                            i_16 = i_4 + rax_177
                                                                            j += 1
                                                                            i_4 = i_16
                                                                        while (j u< *r9_15)
                                                                        
                                                                        r11_8 = var_63b0_1
                                                                    
                                                                    sub_142bd7fb0(rsi_1, r11_8.d, i_16)
                                                                    r9_15 = var_63e8_5
                                                                    r11_8 = zx.q(r11_8.d + 1)
                                                                    i_2 = i_9
                                                                    i_9 -= 1
                                                                    var_63b0_1 = r11_8
                                                                while (i_2 != 1)
                                                                i_17 = i_7
                                                                i_31 = i_36
                                                            
                                                            int64_t rcx_140 = rsi_1[3]
                                                            int32_t rbx_17 = i_17 - i_31
                                                            
                                                            if (rbx_17
                                                                    u<= ((rcx_140 - rsi_1[2]) s>> 3).d)
                                                                rsi_1[3] = rcx_140 - (zx.q(rbx_17) << 3)
                                                            else
                                                                int32_t* rax_181 = rsi_1[1]
                                                                
                                                                if (rax_181 != 0 && *rax_181 == 0)
                                                                    r10_1 = var_6440
                                                                    rbx_1 = var_6420_1
                                                                    i_21 = i_26
                                                                    i_3 = i_8
                                                                    r8_2 = &arg1[1]
                                                                    *rax_181 = 0xa1
                                                                    continue
                                                            
                                                            r10_1 = var_6440
                                                            rbx_1 = var_6420_1
                                                            i_21 = i_26
                                                            i_3 = i_8
                                                            r8_2 = &arg1[1]
                                                            continue
                                                case 0x13
                                                    int32_t* rdx_72 = *(rsi + 0x3c8)
                                                    
                                                    if (i_17 == 1 && rdx_72 != 0)
                                                        int32_t rax_184 = sub_142bd7de0(rsi_1)
                                                        
                                                        if (rax_184 s>= 0)
                                                            uint64_t r8_37 = zx.q(*rdx_72)
                                                            
                                                            if (rax_184 + r8_37.d
                                                                    u<= *(rsi + 0x3d8))
                                                                zmm0_1 = memcpy(
                                                                    *(rsi + 0x3d0) + (sx.q(rax_184) << 2), 
                                                                    *(rdx_72 + 0x108), (r8_37 << 2).d)
                                                                r10_1 = var_6440
                                                                i_21 = i_26
                                                                i_3 = i_8
                                                                r8_2 = &arg1[1]
                                                                rbx_1 = var_6420_1
                                                                continue
                                                case 0x14
                                                    if (i_17 == 2)
                                                        int32_t rax_186 = sub_142bd7d80(rsi_1)
                                                        rdx_74 = sub_142bd7d80(rsi_1) + rax_186
                                                    label_142bd6483:
                                                        sub_142bd7e30(rsi_1, rdx_74)
                                                        goto label_142bd6488
                                                case 0x15
                                                    if (i_17 == 2)
                                                        int32_t rax_188 = sub_142bd7d80(rsi_1)
                                                        rdx_74 = sub_142bd7d80(rsi_1) - rax_188
                                                        goto label_142bd6483
                                                case 0x16
                                                    if (i_17 == 2)
                                                        int32_t rax_191 = sub_142bd7d80(rsi_1)
                                                        sub_142bd7e30(rsi_1, 
                                                            sub_142b93e80(sub_142bd7d80(rsi_1), 
                                                                rax_191))
                                                        r10_1 = var_6440
                                                    label_142bd6488:
                                                        rbx_1 = var_6420_1
                                                        i_21 = i_26
                                                        i_3 = i_8
                                                        r8_2 = &arg1[1]
                                                        i_36 = 1
                                                        continue
                                                case 0x17
                                                    if (i_17 == 2)
                                                        int32_t rax_194 = sub_142bd7d80(rsi_1)
                                                        int32_t rax_195 = sub_142bd7d80(rsi_1)
                                                        
                                                        if (rax_194 != 0)
                                                            sub_142bd7e30(rsi_1, 
                                                                sub_142b91790(rax_195, rax_194))
                                                            r10_1 = var_6440
                                                            goto label_142bd6488
                                                case 0x18
                                                    if (i_17 == 2 && *(rsi + 0x3c8) != 0)
                                                        int32_t rax_197 = sub_142bd7de0(rsi_1)
                                                        int64_t r8_43 = sx.q(rax_197)
                                                        
                                                        if (rax_197 s>= 0
                                                                && r8_43.d u< *(rsi + 0x3d8))
                                                            rbx_1 = var_6420_1
                                                            *(*(rsi + 0x3d0) + (r8_43 << 2)) =
                                                                sub_142bd7d80(rsi_1)
                                                            i_3 = i_8
                                                            r8_2 = &arg1[1]
                                                            continue
                                                case 0x19
                                                    if (i_17 == 1 && *(rsi + 0x3c8) != 0)
                                                        int32_t rax_199 = sub_142bd7de0(rsi_1)
                                                        
                                                        if (rax_199 s>= 0
                                                                && rax_199 u< *(rsi + 0x3d8))
                                                            rdx_74 =
                                                                *(*(rsi + 0x3d0) + (sx.q(rax_199) << 2))
                                                            goto label_142bd6483
                                                case 0x1b
                                                    if (i_17 == 4)
                                                        int32_t rax_201 = sub_142bd7d80(rsi_1)
                                                        int32_t rax_202 = sub_142bd7d80(rsi_1)
                                                        int32_t r8_44 = sub_142bd7d80(rsi_1)
                                                        int32_t rax_204 = sub_142bd7d80(rsi_1)
                                                        
                                                        if (rax_202 s<= rax_201)
                                                            r8_44 = rax_204
                                                        
                                                        sub_142bd7e30(rsi_1, r8_44)
                                                        r10_1 = var_6440
                                                        goto label_142bd6488
                                                case 0x1c
                                                    if (i_17 == 0)
                                                        void* r8_45 = *(rsi + 0x328)
                                                        int32_t rcx_168 = *(r8_45 + 0x2c8)
                                                        int32_t rcx_169 = rcx_168 ^ rcx_168 << 0xd
                                                        rdx_74 = zx.d(rcx_168.w) + 1
                                                        int32_t rcx_170 = rcx_169 ^ rcx_169 u>> 0x11
                                                        *(r8_45 + 0x2c8) = rcx_170 << 5 ^ rcx_170
                                                        goto label_142bd6483
                                    case 0x11
                                        if (rdx_47 == 0)
                                            goto label_142bd75a3
                                        
                                        if (i_36 s> 0)
                                            i_3 = i_8
                                            r8_2 = &arg1[1]
                                            i_36 -= 1
                                            continue
                                        else if (i_37 != 0)
                                            int64_t rax_214 = sx.q(i_37 - 1)
                                            i_37 -= 1
                                            sub_142bd7e30(rsi_1, *(&var_b8 + (rax_214 << 2)))
                                            i_21 = i_26
                                            r8_2 = &arg1[1]
                                            i_3 = i_8
                                            continue
                                    case 0x12
                                        sub_142bd7d80(rsi_1)
                                        i_3 = i_8
                                        r8_2 = &arg1[1]
                                        continue
                                    case 0x14
                                        int64_t r8_47 = sx.q(sub_142bd7de0(rsi_1))
                                        int32_t rax_216 = sub_142bd7d80(rsi_1)
                                        
                                        if (r8_47.d u> 0x1f)
                                            goto label_142bd75a3
                                        
                                        i_3 = i_8
                                        var_a8[r8_47] = rax_216
                                        r8_2 = &arg1[1]
                                        continue
                                    case 0x15
                                        int32_t rax_217 = sub_142bd7de0(rsi_1)
                                        
                                        if (rax_217 u> 0x1f)
                                            goto label_142bd75a3
                                        
                                        sub_142bd7e30(rsi_1, var_a8[sx.q(rax_217)])
                                        i_21 = i_26
                                        r8_2 = &arg1[1]
                                        i_3 = i_8
                                        continue
                                    case 0x16
                                        int32_t rax_219 = sub_142bd7d80(rsi_1)
                                        int32_t rax_220 = sub_142bd7d80(rsi_1)
                                        int32_t r8_48 = sub_142bd7d80(rsi_1)
                                        int32_t rax_222 = sub_142bd7d80(rsi_1)
                                        
                                        if (rax_220 s<= rax_219)
                                            r8_48 = rax_222
                                        
                                        rdx_85 = r8_48
                                    label_142bd68fd:
                                        sub_142bd7e30(rsi_1, rdx_85)
                                        i_21 = i_26
                                        r8_2 = &arg1[1]
                                        r10_1 = var_6440
                                        i_3 = i_8
                                        continue
                                    case 0x17
                                        void* r8_49 = *(rsi + 0x328)
                                        int32_t rcx_180 = *(r8_49 + 0x2c8)
                                        int32_t rcx_181 = rcx_180 ^ rcx_180 << 0xd
                                        int32_t rcx_182 = rcx_181 ^ rcx_181 u>> 0x11
                                        *(r8_49 + 0x2c8) = rcx_182 << 5 ^ rcx_182
                                        sub_142bd7e30(rsi_1, zx.d(rcx_180.w) + 1)
                                        i_21 = i_26
                                        r8_2 = &arg1[1]
                                        i_3 = i_8
                                        continue
                                    case 0x18
                                        int32_t rax_231 = sub_142bd7d80(rsi_1)
                                        sub_142bd7e30(rsi_1, 
                                            sub_142b93e80(sub_142bd7d80(rsi_1), rax_231))
                                        i_21 = i_26
                                        r8_2 = &arg1[1]
                                        r10_1 = var_6440
                                        i_3 = i_8
                                        continue
                                    case 0x1a
                                        int32_t i_13 = sub_142bd7d80(rsi_1)
                                        i_4 = i_13
                                        int32_t rdi_23
                                        
                                        if (i_13 s<= 0)
                                            rdi_23 = 0
                                        else
                                            int32_t i_32 = i_13
                                            
                                            if (i_13 s>= 0xa)
                                                i_32 s>>= 1
                                            
                                            rdi_23 = (i_32 + 1 + sub_142b91790(i_13, i_32)) s>> 1
                                            
                                            if (rdi_23 != i_32)
                                                int32_t i_18 = i_4
                                                int32_t rbx_18
                                                
                                                do
                                                    rbx_18 = rdi_23
                                                    rdi_23 = (rdi_23 + 1
                                                        + sub_142b91790(i_18, rdi_23)) s>> 1
                                                while (rdi_23 != rbx_18)
                                                rsi_1 = rax_14
                                            
                                            rbx_1 = var_6420_1
                                        
                                        rdx_85 = rdi_23
                                        goto label_142bd68fd
                                    case 0x1b
                                        int32_t rax_236 = sub_142bd7d80(rsi_1)
                                        sub_142bd7e30(rsi_1, rax_236)
                                        sub_142bd7e30(rsi_1, rax_236)
                                        i_21 = i_26
                                        r8_2 = &arg1[1]
                                        i_3 = i_8
                                        continue
                                    case 0x1c
                                        int32_t rax_237 = sub_142bd7d80(rsi_1)
                                        int32_t rax_238 = sub_142bd7d80(rsi_1)
                                        sub_142bd7e30(rsi_1, rax_237)
                                        sub_142bd7e30(rsi_1, rax_238)
                                        i_21 = i_26
                                        r8_2 = &arg1[1]
                                        r10_1 = var_6440
                                        i_3 = i_8
                                        continue
                                    case 0x1d
                                        int32_t rax_239 = sub_142bd7de0(rsi_1)
                                        int64_t r8_52 = rsi_1[2]
                                        int32_t rcx_200 = ((rsi_1[3] - r8_52) s>> 3).d
                                        
                                        if (rcx_200 != 0)
                                            uint64_t rax_240
                                            
                                            if (rax_239 s< 0)
                                                rax_240 = zx.q(rcx_200 - 1)
                                            else if (rax_239 u< rcx_200)
                                                rax_240 = zx.q(rcx_200 - rax_239 - 1)
                                            else
                                                rax_240 = 0
                                            
                                            if (rax_240.d u< rcx_200)
                                                int32_t rdx_96 = *(r8_52 + (rax_240 << 3) + 4)
                                                int32_t* rcx_202 = r8_52 + (rax_240 << 3)
                                                int32_t rdx_98
                                                
                                                if (rdx_96 == 1)
                                                    int32_t rax_244 = *rcx_202
                                                    
                                                    if (rax_244 s>= 0)
                                                        rdx_98 = (rax_244 + 0x2000) s>> 0xe
                                                    else
                                                        sub_142bd7e30(rsi_1, 
                                                            neg.d((0x2000 - rax_244) s>> 0xe))
                                                        i_21 = i_26
                                                        r8_2 = &arg1[1]
                                                        i_3 = i_8
                                                        continue
                                                else
                                                    rdx_98 = *rcx_202
                                                    
                                                    if (rdx_96 == 2)
                                                        sub_142bd7e30(rsi_1, rdx_98 << 0x10)
                                                        i_21 = i_26
                                                        r8_2 = &arg1[1]
                                                        i_3 = i_8
                                                        continue
                                                
                                                sub_142bd7e30(rsi_1, rdx_98)
                                                i_21 = i_26
                                                r8_2 = &arg1[1]
                                                i_3 = i_8
                                                continue
                                            else
                                                int32_t* rax_243 = rsi_1[1]
                                                
                                                if (rax_243 != 0 && *rax_243 == 0)
                                                    *rax_243 = 0x82
                                                
                                                sub_142bd7e30(rsi_1, 0)
                                                i_21 = i_26
                                                r8_2 = &arg1[1]
                                                i_3 = i_8
                                                continue
                                        
                                        goto label_142bd75a3
                                    case 0x1e
                                        int32_t rax_245 = sub_142bd7de0(rsi_1)
                                        sub_142bd7eb0(rsi_1, sub_142bd7de0(rsi_1), rax_245)
                                        r10_1 = var_6440
                                        i_21 = i_26
                                        i_3 = i_8
                                        r8_2 = &arg1[1]
                                        continue
                                    case 0x21
                                        if (rdx_47 == 0 || var_643b == 0)
                                            goto label_142bd51d0
                                        
                                        int32_t rax_247 = sub_142bd7d80(rsi_1)
                                        var_6440 = rax_247
                                        r10_1 = rax_247
                                        arg_38 = rax_247
                                        int32_t i_29 = sub_142bd7d80(rsi_1)
                                        i_3 = i_8
                                        i_21 = i_29
                                        r8_2 = &arg1[1]
                                        i_26 = i_29
                                        i_27 = i_29
                                        *(rsi + 0x2e0) = 0
                                        rsi_1[3] = rsi_1[2]
                                        continue
                            else
                                switch (rcx_59)
                                    case 0, 5, 0xb, 0x11, 0x17, 0x18
                                        goto label_142bd51d0
                                    case 1, 2, 3, 4, 6, 7, 8, 9, 0xa, 0xc, 0xd, 0xe, 0xf, 0x10, 
                                            0x12, 0x13, 0x14, 0x15, 0x16, 0x19
                                        goto label_142bd5a99
                                    case 0x1a
                                        var_6470.b = 0
                                        var_6478 = &data_143688900
                                        zmm0_1, zmm1 = sub_142bd2390(rsi_1, &i_27, &arg_38, 
                                            &var_4a48, zmm0_1, zmm1, arg5, var_6478, var_6470.b)
                                        r10_1 = arg_38
                                        i_21 = i_27
                                        i_3 = i_8
                                        r8_2 = &arg1[1]
                                        var_6440 = r10_1
                                        i_26 = i_21
                                        continue
                                    case 0x1b
                                        var_6470.b = 0
                                        var_6478 = &data_143688910
                                        zmm0_1, zmm1 = sub_142bd2390(rsi_1, &i_27, &arg_38, 
                                            &var_4a48, zmm0_1, zmm1, arg5, var_6478, var_6470.b)
                                        r10_1 = arg_38
                                        i_21 = i_27
                                        var_6440 = r10_1
                                        i_26 = i_21
                                        goto label_142bd51d0
                                    case 0x1c
                                        var_6470.b = 0
                                        var_6478 = &data_143688920
                                        zmm0_1, zmm1 = sub_142bd2390(rsi_1, &i_27, &arg_38, 
                                            &var_4a48, zmm0_1, zmm1, arg5, var_6478, var_6470.b)
                                        r10_1 = arg_38
                                        i_21 = i_27
                                        i_3 = i_8
                                        r8_2 = &arg1[1]
                                        var_6440 = r10_1
                                        i_26 = i_21
                                        continue
                                    case 0x1d
                                        var_6470.b = 1
                                        var_6478 = &data_143688930
                                        zmm0_1, zmm1 = sub_142bd2390(rsi_1, &i_27, &arg_38, 
                                            &var_4a48, zmm0_1, zmm1, arg5, var_6478, var_6470.b)
                                        r10_1 = arg_38
                                        i_21 = i_27
                                        i_3 = i_8
                                        r8_2 = &arg1[1]
                                        var_6440 = r10_1
                                        i_26 = i_21
                                        continue
                        case 0xd
                            if (rdx_4 == 0)
                                goto label_142bd51d0
                            
                            **(rsi + 0x48) = sub_142bd7d80(rsi_1)
                            *(*(rsi + 0x48) + 4) = 0
                            int32_t rax_252 = sub_142bd7d80(rsi_1)
                            int32_t* rcx_212 = *(rsi + 0x40)
                            var_643c = true
                            *rcx_212 += rax_252
                            
                            if (*(rsi + 0x5b) != 0)
                                rax_15 = var_6430
                                break
                            
                            i_3 = i_8
                            
                            if (var_643b == 0)
                                goto label_142bd6f50
                            
                            r8_2 = &arg1[1]
                            i_21 += rax_252
                            rsi_1[3] = rsi_1[2]
                            i_26 = i_21
                            i_27 = i_21
                            continue
                        case 0xe
                            if (rdx_4 != 0 && var_643b == 0)
                                zmm0_1, zmm1 =
                                    sub_142bd39e0(&var_4a48, i_21, r10_1, zmm0_1, zmm1, arg5)
                                var_62d8 = &arg1[1]
                                i_3 = i_8
                                var_62d0 = 0
                                var_643b = 1
                                var_6370_1 = 0
                                var_6330_1 = 0
                                int64_t var_62c8_2
                                __builtin_memset(&var_62c8_2, 0, 0x20)
                                var_62d0 = 0
                                
                                if (i_3 s> 0)
                                    do
                                        i_3 -= 1
                                        uint64_t i_14 = zx.q(i_3)
                                        
                                        if (i_14 u>= rcx_9)
                                            if (arg1 != -8 && arg1[1].d == 0)
                                                arg1[1].d = 0x82
                                            
                                            i_14 = 0
                                        
                                        var_6420_1 = var_6308 * i_14 + var_62e0
                                    while (i_3 s> 0)
                                    
                                    rsi_1 = rax_14
                                    rbx_1 = var_6420_1
                                    i_8 = i_3
                                
                                r10_1 = var_6440
                                i_21 = i_26
                                r8_2 = &arg1[1]
                                rbx_1[3] = rbx_1[1]
                                rsi_1[3] = rsi_1[2]
                                continue
                            
                            int32_t* rcx_291 = rsi_1[2]
                            int32_t rdx_175 = ((rsi_1[3] - rcx_291) s>> 3).d
                            
                            if (((rdx_175 - 1) & 0xfffffffb) == 0 && var_643c == 0)
                                int32_t r11_12
                                
                                if (rdx_175 != 0)
                                    int32_t rdx_176 = rcx_291[1]
                                    
                                    if (rdx_176 == 1)
                                        int32_t rax_409 = *rcx_291
                                        
                                        if (rax_409 s>= 0)
                                            r11_12 = (rax_409 + 0x2000) s>> 0xe
                                        else
                                            r11_12 = neg.d((0x2000 - rax_409) s>> 0xe)
                                    else
                                        r11_12 = *rcx_291
                                        
                                        if (rdx_176 == 2)
                                            r11_12 <<= 0x10
                                else
                                    int32_t* rax_408 = rsi_1[1]
                                    
                                    if (rax_408 != 0 && *rax_408 == rdx_175)
                                        *rax_408 = 0x82
                                    
                                    r11_12 = 0
                                
                                *arg7 = rax_6 + r11_12
                            
                            if (*(rsi + 0x340) != 0)
                                goto label_142bd5d9e
                            
                            sub_142bd2f50(&var_4a48, zmm1, arg5, zmm0_1)
                            
                            if (*(arg1 + 0xd) != 0)
                                goto label_142bd5d9e
                            
                            if (*(arg1 + 0xc) != 0)
                                goto label_142bd5d9e
                            
                            if (((rsi_1[3] - rsi_1[2]) s>> 3).d u<= 1)
                                goto label_142bd5d9e
                            
                            if (arg6 == 0)
                                int32_t rax_417 = sub_142bd7de0(rsi_1)
                                int32_t rax_418 = sub_142bd7de0(rsi_1)
                                int32_t rax_419 = sub_142bd7d80(rsi_1)
                                int32_t rax_420 = sub_142bd7d80(rsi_1)
                                rax_15 = sub_142bd2e70(rsi, rax_417, &var_d8)
                                
                                if (rax_15 == 0)
                                    var_6460.q = &i_4
                                    var_6468.d = rax_419
                                    var_6470.d = rax_420
                                    var_6478.b = 1
                                    sub_142bd4cb0(arg1, &var_d8, arg3, arg4, var_6478, var_6470, 
                                        var_6468, var_6460)
                                    (*(rsi + 0x388))(*(rsi + 8), &var_d0, zx.q(var_c8.d - var_d0.d))
                                    rax_15 = sub_142bd2e70(rsi, rax_418, &var_d8)
                                    
                                    if (rax_15 == 0)
                                        var_6460.q = &i_4
                                        var_6468.d = 0
                                        var_6470.d = 0
                                        var_6478.b = 1
                                        sub_142bd4cb0(arg1, &var_d8, arg3, arg4, var_6478, 
                                            var_6470, var_6468, var_6460)
                                        (*(rsi + 0x388))(*(rsi + 8), &var_d0, 
                                            zx.q(var_c8.d - var_d0.d))
                                        rax_15 = var_6430
                                
                                break
                        case 0xf
                            if (*(arg1 + 0xd) == 0)
                                goto label_142bd51d0
                            
                            if (*(arg1 + 0x61) == 0)
                                int32_t rax_26 = sub_142bd7de0(rsi_1)
                                i_3 = i_8
                                
                                if (rax_26 s< 0)
                                    goto label_142bd51da
                                
                                r8_2 = &arg1[1]
                                arg1[0x12].d = rax_26
                                rsi_1[3] = rsi_1[2]
                                continue
                        case 0x10
                            if (*(arg1 + 0xd) == 0)
                                goto label_142bd51d0
                            
                            if (arg1[0xd] != 0)
                                if ((*(arg1[0x51] + 0x18))(&arg1[0xc], zx.q(arg1[0x12].d), 
                                        zx.q(*(arg1 + 0x94)), arg1[0x13], var_6478, var_6470, 
                                        var_6468) != 0)
                                    rax_15 = (*(arg1[0x51] + 0x20))(&arg1[0xc], zx.q(arg1[0x12].d), 
                                        zx.q(*(arg1 + 0x94)), arg1[0x13])
                                    var_6430 = rax_15
                                    
                                    if (rax_15 != 0)
                                        break
                                
                                int32_t rax_31 = sub_142bd7de0(rsi_1)
                                
                                if (rax_31 u<= rax_13)
                                    sub_142bd2170(&arg1[0xc], rsi_1, rax_31)
                                    r10_1 = var_6440
                                    *(arg1 + 0x61) = 1
                                label_142bd5150:
                                    rbx_1 = var_6420_1
                                    i_21 = i_26
                                    i_3 = i_8
                                    r8_2 = &arg1[1]
                                    continue
                        case 0x13, 0x14
                            if (((rsi_1[3] - rsi_1[2]) s>> 3).d u> 1 && var_62d0 != 0)
                                i_3 = i_8
                            label_142bd6f50:
                                r8_2 = &arg1[1]
                                rsi_1[3] = rsi_1[2]
                                continue
                            
                            var_6470.d = 0
                            var_6478 = &var_643c
                            zmm0_1 =
                                sub_142bd2700(arg1, rsi_1, &var_6398, arg7, var_6478, var_6470.d)
                            
                            if (*(rsi + 0x340) != 0)
                                goto label_142bd5d9e
                            
                            if (i_19.b != 0x13)
                                int64_t* var_6278
                                memset(&var_6278, 0, 0x1828)
                                int64_t r8_61 = var_6370_1 + var_6330_1
                                var_6278 = arg1
                                char var_625f_1 = arg1[0x20].b
                                int32_t var_625c_1 = rax_3
                                void var_19e8
                                void* var_6270_1 = &var_19e8
                                int64_t* var_6268_1 = &var_1c0
                                void* var_62a8 = &arg1[1]
                                int64_t var_62a0
                                __builtin_memset(&var_62a0, 0, 0x28)
                                sub_142bd4b10(&var_62a8, rbx_1, r8_61)
                                var_6470.b = 0
                                var_6478.d = 0
                                zmm0_1, zmm1 = sub_142bd4180(&var_6278, &var_6358, &var_6398, 
                                    &var_62a8, zmm1, arg5, var_6478.d, var_6470.b)
                            else
                                sub_142bd4b10(&var_62d8, rbx_1, var_6370_1 + var_6330_1)
                            
                            goto label_142bd51c0
                        case 0x15
                            int32_t* rcx_222 = rsi_1[2]
                            int32_t rax_265 = ((rsi_1[3] - rcx_222) s>> 3).d
                            
                            if (rax_265 u> 2 && var_643c == 0)
                                int32_t rax_267
                                
                                if (rax_265 != 0)
                                    int32_t rdx_111 = rcx_222[1]
                                    
                                    if (rdx_111 == 1)
                                        int32_t rdx_113 = *rcx_222
                                        
                                        if (rdx_113 s>= 0)
                                            rax_267 = (rdx_113 + 0x2000) s>> 0xe
                                        else
                                            rax_267 = neg.d((0x2000 - rdx_113) s>> 0xe)
                                    else
                                        rax_267 = *rcx_222
                                        
                                        if (rdx_111 == 2)
                                            rax_267 <<= 0x10
                                else
                                    int32_t* rax_266 = rsi_1[1]
                                    
                                    if (rax_266 != 0 && *rax_266 == 0)
                                        *rax_266 = 0x82
                                    
                                    rax_267 = 0
                                
                                *arg7 = rax_267 + rax_6
                            
                            r8_8 = rsi
                            var_643c = true
                            
                            if (*(r8_8 + 0x340) != 0)
                                goto label_142bd5d9e
                            
                            rdi_5 = var_6440 + sub_142bd7d80(rsi_1)
                            var_6440 = rdi_5
                            arg_38 = rdi_5
                            i_21 += sub_142bd7d80(rsi_1)
                            i_26 = i_21
                            i_27 = i_21
                            goto label_142bd52b1
                        case 0x16
                            int32_t* rcx_226 = rsi_1[2]
                            int32_t rax_276 = ((rsi_1[3] - rcx_226) s>> 3).d
                            
                            if (rax_276 u> 1 && var_643c == 0)
                                int32_t rax_278
                                
                                if (rax_276 != 0)
                                    int32_t rdx_114 = rcx_226[1]
                                    
                                    if (rdx_114 == 1)
                                        int32_t rdx_116 = *rcx_226
                                        
                                        if (rdx_116 s>= 0)
                                            rax_278 = (rdx_116 + 0x2000) s>> 0xe
                                        else
                                            rax_278 = neg.d((0x2000 - rdx_116) s>> 0xe)
                                    else
                                        rax_278 = *rcx_226
                                        
                                        if (rdx_114 == 2)
                                            rax_278 <<= 0x10
                                else
                                    int32_t* rax_277 = rsi_1[1]
                                    
                                    if (rax_277 != 0 && *rax_277 == 0)
                                        *rax_277 = 0x82
                                    
                                    rax_278 = 0
                                
                                *arg7 = rax_278 + rax_6
                            
                            var_643c = true
                            
                            if (*(rsi + 0x340) != 0)
                                goto label_142bd5d9e
                            
                            i_21 += sub_142bd7d80(rsi_1)
                            bool cond:7_1 = *(rsi + 0x2e0) != 0
                            i_26 = i_21
                            i_27 = i_21
                            
                            if (cond:7_1)
                                goto label_142bd51d0
                            
                            zmm0_1, zmm1 = sub_142bd39e0(&var_4a48, i_21, r10_1, zmm0_1, zmm1, arg5)
                            goto label_142bd51c0
                        case 0x19
                            int32_t rbx_19 = 0
                            int32_t rdi_28 = var_6440
                            int64_t rax_287 = (rsi_1[3] - rsi_1[2]) s>> 3
                            i_4.q = rax_287
                            
                            if (rax_287.d u> 6)
                                do
                                    int64_t rcx_230 = rsi_1[2]
                                    int32_t rax_292
                                    
                                    if (rbx_19 u< ((rsi_1[3] - rcx_230) s>> 3).d)
                                        uint64_t rax_293 = zx.q(rbx_19)
                                        int32_t rdx_118 = *(rcx_230 + (rax_293 << 3) + 4)
                                        int32_t* rcx_231 = rcx_230 + (rax_293 << 3)
                                        
                                        if (rdx_118 == 1)
                                            int32_t rdx_120 = *rcx_231
                                            
                                            if (rdx_120 s>= 0)
                                                rax_292 = (rdx_120 + 0x2000) s>> 0xe
                                            else
                                                rax_292 = neg.d((0x2000 - rdx_120) s>> 0xe)
                                        else
                                            rax_292 = *rcx_231
                                            
                                            if (rdx_118 == 2)
                                                rax_292 <<= 0x10
                                    else
                                        int32_t* rax_291 = rsi_1[1]
                                        
                                        if (rax_291 != 0 && *rax_291 == 0)
                                            *rax_291 = 0x82
                                        
                                        rax_292 = 0
                                    
                                    int32_t i_42 = i_21 + rax_292
                                    i_26 = i_42
                                    i_27 = i_42
                                    rdi_28 += sub_142bd7c60(rsi_1, rbx_19 + 1)
                                    arg_38 = rdi_28
                                    zmm0_1, zmm1 =
                                        sub_142bd3840(&var_4a48, i_42, rdi_28, zmm0_1, zmm1, arg5)
                                    i_21 = i_26
                                    rbx_19 += 2
                                while (rbx_19 + 6 u< i_4)
                                
                                rax_287 = i_4.q
                                var_6440 = rdi_28
                            
                            if (rbx_19 u< rax_287.d)
                                int32_t i_23 = rbx_19 + 2
                                i_7 = i_23
                                
                                do
                                    int32_t rbx_21 = sub_142bd7c60(rsi_1, i_23 - 2) + i_26
                                    int32_t r11_9 = rdi_28 + sub_142bd7c60(rsi_1, i_23 - 1)
                                    int32_t r10_12 = rbx_21 + sub_142bd7c60(rsi_1, i_23)
                                    int32_t rax_302 = sub_142bd7c60(rsi_1, i_23 + 1)
                                    int32_t i_20 = i_7
                                    int32_t r9_20 = r11_9 + rax_302
                                    i_26 = sub_142bd7c60(rsi_1, i_20 + 2) + r10_12
                                    rdi_28 = r9_20 + sub_142bd7c60(rsi_1, i_20 + 3)
                                    var_6468.d = rdi_28
                                    var_6470.d = i_26
                                    var_6478.d = r9_20
                                    zmm0_1, zmm1 = sub_142bd3350(&var_4a48, rbx_21, r11_9, r10_12, 
                                        zmm0_1, zmm1, arg5, var_6478.d, var_6470.d, var_6468.d)
                                    i_23 = i_7 + 6
                                    i_27 = i_26
                                    arg_38 = rdi_28
                                    i_7 = i_23
                                while (i_23 - 2 u< i_4)
                                
                                var_6440 = rdi_28
                            
                            i_21 = i_26
                            r10_1 = var_6440
                            goto label_142bd7561
                        case 0x1a
                            int32_t rbx_24 = ((rsi_1[3] - rsi_1[2]) s>> 3).d
                            int32_t i_5 = rbx_24 & 0xfffffffd
                            uint64_t rbx_25 = zx.q(rbx_24 - i_5)
                            i_4 = i_5
                            
                            if (rbx_25.d u>= i_5)
                            label_142bd7388:
                                r10_1 = var_6440
                            label_142bd7561:
                                rbx_1 = var_6420_1
                                i_3 = i_8
                                r8_2 = &arg1[1]
                                rsi_1[3] = rsi_1[2]
                                continue
                            
                            int32_t rdi_29 = var_6440
                            
                            do
                                int32_t i_35
                                
                                if (((i_5.b - rbx_25.b) & 1) == 0)
                                    i_35 = i_21
                                else
                                    int64_t rcx_241 = rsi_1[2]
                                    
                                    if (rbx_25.d u< ((rsi_1[3] - rcx_241) s>> 3).d)
                                        int32_t rdx_130 = *(rcx_241 + (rbx_25 << 3) + 4)
                                        int32_t* rcx_242 = rcx_241 + (rbx_25 << 3)
                                        
                                        if (rdx_130 == 1)
                                            int32_t rdx_132 = *rcx_242
                                            
                                            if (rdx_132 s>= 0)
                                                i_35 = ((rdx_132 + 0x2000) s>> 0xe) + i_21
                                                rbx_25 = zx.q(rbx_25.d + 1)
                                            else
                                                rbx_25 = zx.q(rbx_25.d + 1)
                                                i_35 = neg.d((0x2000 - rdx_132) s>> 0xe) + i_21
                                        else
                                            int32_t rax_315 = *rcx_242
                                            
                                            if (rdx_130 != 2)
                                                i_35 = rax_315 + i_21
                                                rbx_25 = zx.q(rbx_25.d + 1)
                                            else
                                                rbx_25 = zx.q(rbx_25.d + 1)
                                                i_35 = (rax_315 << 0x10) + i_21
                                    else
                                        int32_t* rax_314 = rsi_1[1]
                                        
                                        if (rax_314 != 0 && *rax_314 == 0)
                                            *rax_314 = 0x82
                                        
                                        rbx_25 = zx.q(rbx_25.d + 1)
                                        i_35 = i_21
                                
                                int32_t r10_13 = rdi_29 + sub_142bd7c60(rsi_1, rbx_25.d)
                                i_26 = sub_142bd7c60(rsi_1, (rbx_25 + 1).d) + i_35
                                int32_t r9_23 = r10_13 + sub_142bd7c60(rsi_1, (rbx_25 + 2).d)
                                rdi_29 = r9_23 + sub_142bd7c60(rsi_1, (rbx_25 + 3).d)
                                var_6468.d = rdi_29
                                var_6470.d = i_26
                                var_6478.d = r9_23
                                zmm0_1, zmm1 = sub_142bd3350(&var_4a48, i_35, r10_13, i_26, zmm0_1, 
                                    zmm1, arg5, var_6478.d, var_6470.d, var_6468.d)
                                i_5 = i_4
                                rbx_25 = zx.q(rbx_25.d + 4)
                                i_21 = i_26
                                i_27 = i_21
                                arg_38 = rdi_29
                            while (rbx_25.d u< i_5)
                            
                            var_6440 = rdi_29
                            r10_1 = rdi_29
                            goto label_142bd7561
                        case 0x1b
                            int32_t rbx_28 = ((rsi_1[3] - rsi_1[2]) s>> 3).d
                            int32_t i_6 = rbx_28 & 0xfffffffd
                            uint64_t rbx_29 = zx.q(rbx_28 - i_6)
                            i_4 = i_6
                            
                            if (rbx_29.d u< i_6)
                                int32_t rdi_30 = var_6440
                                
                                do
                                    int32_t r11_10
                                    
                                    if (((i_6.b - rbx_29.b) & 1) == 0)
                                        r11_10 = rdi_30
                                    else
                                        int64_t rcx_248 = rsi_1[2]
                                        
                                        if (rbx_29.d u< ((rsi_1[3] - rcx_248) s>> 3).d)
                                            int32_t rdx_138 = *(rcx_248 + (rbx_29 << 3) + 4)
                                            int32_t* rcx_249 = rcx_248 + (rbx_29 << 3)
                                            
                                            if (rdx_138 == 1)
                                                int32_t rdx_140 = *rcx_249
                                                
                                                if (rdx_140 s>= 0)
                                                    r11_10 = ((rdx_140 + 0x2000) s>> 0xe) + rdi_30
                                                    rbx_29 = zx.q(rbx_29.d + 1)
                                                else
                                                    rbx_29 = zx.q(rbx_29.d + 1)
                                                    r11_10 =
                                                        neg.d((0x2000 - rdx_140) s>> 0xe) + rdi_30
                                            else
                                                int32_t rax_333 = *rcx_249
                                                
                                                if (rdx_138 != 2)
                                                    r11_10 = rax_333 + rdi_30
                                                    rbx_29 = zx.q(rbx_29.d + 1)
                                                else
                                                    rbx_29 = zx.q(rbx_29.d + 1)
                                                    r11_10 = (rax_333 << 0x10) + rdi_30
                                        else
                                            int32_t* rax_332 = rsi_1[1]
                                            
                                            if (rax_332 != 0 && *rax_332 == 0)
                                                *rax_332 = 0x82
                                            
                                            rbx_29 = zx.q(rbx_29.d + 1)
                                            r11_10 = rdi_30
                                    
                                    int32_t r10_14 = i_21 + sub_142bd7c60(rsi_1, rbx_29.d)
                                    int32_t r9_25 = r10_14 + sub_142bd7c60(rsi_1, (rbx_29 + 1).d)
                                    rdi_30 = r11_10 + sub_142bd7c60(rsi_1, (rbx_29 + 2).d)
                                    int32_t i_38 = sub_142bd7c60(rsi_1, (rbx_29 + 3).d) + r9_25
                                    var_6468.d = rdi_30
                                    var_6470.d = i_38
                                    var_6478.d = rdi_30
                                    i_26 = i_38
                                    zmm0_1, zmm1 = sub_142bd3350(&var_4a48, r10_14, r11_10, r9_25, 
                                        zmm0_1, zmm1, arg5, var_6478.d, var_6470.d, var_6468.d)
                                    i_6 = i_4
                                    rbx_29 = zx.q(rbx_29.d + 4)
                                    i_21 = i_26
                                    i_27 = i_21
                                    arg_38 = rdi_30
                                while (rbx_29.d u< i_6)
                                
                                var_6440 = rdi_30
                            
                            goto label_142bd7388
                        case 0x1c
                            int16_t rax_368 = sub_142bd1cf0(rbx_1)
                            rdx_49 = sx.d(sub_142bd1cf0(rbx_1)) | sx.d(rax_368 << 8)
                            goto label_142bd7599
                        case 0x1e, 0x1f
                            int32_t rbx_32 = ((rsi_1[3] - rsi_1[2]) s>> 3).d
                            i_19.b = i_19.b == 0x1f
                            int32_t i_15 = rbx_32 & 0xfffffffd
                            uint64_t i_33 = zx.q(rbx_32 - i_15)
                            i_7 = i_15
                            
                            if (i_33.d u< i_15)
                                do
                                    int32_t rax_357
                                    int32_t r9_27
                                    int32_t i_43
                                    int32_t r11_11
                                    
                                    if (i_19.b == 0)
                                        i_4 = i_21
                                        i_19 = (i_33 + 1).d
                                        r11_11 = r10_1 + sub_142bd7c60(rsi_1, i_33.d)
                                        i_43 = i_21 + sub_142bd7c60(rsi_1, i_19)
                                        r9_27 = r11_11 + sub_142bd7c60(rsi_1, (i_33 + 2).d)
                                        i_26 = sub_142bd7c60(rsi_1, (i_33 + 3).d) + i_43
                                        
                                        if (i_7 - i_33.d != 5)
                                            rax_357 = r9_27
                                            var_6440 = rax_357
                                        else
                                            rax_357 = sub_142bd7c60(rsi_1, (i_33 + 4).d) + r9_27
                                            i_33 = zx.q(i_19)
                                            var_6440 = rax_357
                                        
                                        i_19.b = 1
                                    else
                                        int64_t rcx_255 = rsi_1[2]
                                        int32_t rax_348
                                        
                                        if (i_33.d u< ((rsi_1[3] - rcx_255) s>> 3).d)
                                            int32_t rdx_146 = *(rcx_255 + (i_33 << 3) + 4)
                                            int32_t* rcx_256 = rcx_255 + (i_33 << 3)
                                            
                                            if (rdx_146 == 1)
                                                int32_t rdx_148 = *rcx_256
                                                
                                                if (rdx_148 s>= 0)
                                                    rax_348 = (rdx_148 + 0x2000) s>> 0xe
                                                else
                                                    rax_348 = neg.d((0x2000 - rdx_148) s>> 0xe)
                                            else
                                                rax_348 = *rcx_256
                                                
                                                if (rdx_146 == 2)
                                                    rax_348 <<= 0x10
                                        else
                                            int32_t* rax_347 = rsi_1[1]
                                            
                                            if (rax_347 != 0 && *rax_347 == 0)
                                                *rax_347 = 0x82
                                            
                                            rax_348 = 0
                                        
                                        int32_t i_24 = i_21 + rax_348
                                        i_19 = (i_33 + 1).d
                                        i_4 = i_24
                                        r11_11 = r10_1
                                        i_43 = i_24 + sub_142bd7c60(rsi_1, i_19)
                                        r9_27 = sub_142bd7c60(rsi_1, (i_33 + 2).d) + var_6440
                                        var_6440 = sub_142bd7c60(rsi_1, (i_33 + 3).d) + r9_27
                                        
                                        if (i_7 - i_33.d != 5)
                                            rax_357 = var_6440
                                            i_19.b = 0
                                            i_26 = i_43
                                        else
                                            int32_t i_39 = sub_142bd7c60(rsi_1, (i_33 + 4).d) + i_43
                                            i_33 = zx.q(i_19)
                                            i_26 = i_39
                                            i_19.b = 0
                                            rax_357 = var_6440
                                    
                                    var_6468.d = rax_357
                                    var_6470.d = i_26
                                    var_6478.d = r9_27
                                    zmm0_1, zmm1 = sub_142bd3350(&var_4a48, i_4, r11_11, i_43, 
                                        zmm0_1, zmm1, arg5, var_6478.d, var_6470.d, var_6468.d)
                                    i_21 = i_26
                                    i_33 = zx.q(i_33.d + 4)
                                    r10_1 = var_6440
                                    i_27 = i_21
                                    arg_38 = r10_1
                                while (i_33.d u< i_7)
                            
                            goto label_142bd7561
            
            rax_15 = 0x12
            break
else
    rax_15 = (&rsi_1[8]).d

if (arg1 != -8 && arg1[1].d == 0)
    arg1[1].d = rax_15

int64_t var_1a8 = 0
int64_t var_198 = 0
int64_t var_190 = 0
int64_t var_188
sub_142b99980(var_1c0, var_188)
int64_t var_188_1 = 0
int64_t var_6380_1 = 0
int64_t var_6370_2 = 0
int64_t var_6368 = 0
int64_t var_6360
sub_142b99980(var_6398, var_6360)
int64_t var_6360_1 = 0
int64_t var_6340_1 = 0
int64_t var_6330_2 = 0
int64_t var_6328 = 0
int64_t var_6320
sub_142b99980(var_6358, var_6320)
int64_t var_6320_1 = 0
int64_t result = sub_142b99980(var_6318, var_62e0)

if (rsi_1 != 0)
    int64_t rbx_9 = *rsi_1
    sub_142b99980(rbx_9, rsi_1[2])
    rsi_1[2] = 0
    result = sub_142b99980(rbx_9, rsi_1)

__security_check_cookie(rax_1 ^ &var_6498)
return result
