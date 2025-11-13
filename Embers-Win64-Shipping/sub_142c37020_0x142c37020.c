// 函数: sub_142c37020
// 地址: 0x142c37020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0xc) = 2
int64_t var_60 = 0
void* rdi = arg2 + 8
int32_t* rbx = arg1 + 0x3c
int64_t i_4 = 2
int64_t rsi = 0
void var_50
int32_t var_48[0x4]
int64_t i

do
    int32_t rdx = *("BUSGSOPG" - arg1 - 0x3c + rbx)
    *(arg2 - arg1 + rbx - 0x3c) = rbx[-5]
    *rdi = *(arg1 - arg2 + rdi + 0x28)
    sub_142c2ace0(*arg1, rdx, rbx[-2], *rbx, &var_48 + rsi, &var_50 + rsi)
    rsi += 4
    rdi += 1
    rbx = &rbx[1]
    i = i_4
    i_4 -= 1
while (i != 1)
void* r15_1 = arg2
int64_t* r14_2 = arg1
int32_t* r13_2 = arg1 + 0x3c

if (arg1[0xa].d != i_4.d)
    int32_t rax_6 = r14_2[0xa].d
    
    if (rax_6 != 0)
        qsort(r14_2[0xb], zx.q(rax_6), zx.q((i_4 + 0x1c).d), sub_142c36fd0)
    
    int32_t i_1 = 1
    int32_t rcx_3 = 0
    
    if (r14_2[0xa].d u> 1)
        do
            data_14369a5e0.o
            int128_t* r9_2
            
            if (i_1 u< r14_2[0xa].d)
                r9_2 = zx.q(i_1) * 0x1c + r14_2[0xb]
            else
                __builtin_memset(&data_144017550, 0, 0x1c)
                r9_2 = &data_144017550
            
            int128_t* rax_8
            
            if (rcx_3 u< r14_2[0xa].d)
                rax_8 = zx.q(rcx_3) * 0x1c + r14_2[0xb]
            else
                __builtin_memset(&data_144017550, 0, 0x1c)
                rax_8 = &data_144017550
            
            if (*r9_2 == *rax_8)
                int128_t* rax_15
                
                if (i_1 u< r14_2[0xa].d)
                    rax_15 = zx.q(i_1) * 0x1c + r14_2[0xb]
                else
                    __builtin_memset(&data_144017550, 0, 0x1c)
                    rax_15 = &data_144017550
                
                if ((*(rax_15 + 0xc) & 1) == 0)
                    int128_t* rax_28
                    
                    if (rcx_3 u< r14_2[0xa].d)
                        rax_28 = zx.q(rcx_3) * 0x1c + r14_2[0xb]
                    else
                        __builtin_memset(&data_144017550, 0, 0x1c)
                        rax_28 = &data_144017550
                    
                    *(rax_28 + 0xc) &= 0xfffffffe
                    data_14369a5e0.o
                    int128_t* r8_9
                    
                    if (i_1 u< r14_2[0xa].d)
                        r8_9 = zx.q(i_1) * 0x1c + r14_2[0xb]
                    else
                        __builtin_memset(&data_144017550, 0, 0x1c)
                        r8_9 = &data_144017550
                    
                    int128_t* rax_32
                    
                    if (rcx_3 u< r14_2[0xa].d)
                        rax_32 = zx.q(rcx_3) * 0x1c + r14_2[0xb]
                    else
                        __builtin_memset(&data_144017550, 0, 0x1c)
                        rax_32 = &data_144017550
                    
                    int32_t rax_35 = *(rax_32 + 8)
                    int32_t r9_10 = *(r8_9 + 8)
                    
                    if (rax_35 u> r9_10)
                        r9_10 = rax_35
                    
                    int128_t* rax_36
                    
                    if (rcx_3 u< r14_2[0xa].d)
                        rax_36 = zx.q(rcx_3) * 0x1c + r14_2[0xb]
                    else
                        __builtin_memset(&data_144017550, 0, 0x1c)
                        rax_36 = &data_144017550
                    
                    *(rax_36 + 8) = r9_10
                else
                    int128_t* rax_18
                    
                    if (rcx_3 u< r14_2[0xa].d)
                        rax_18 = zx.q(rcx_3) * 0x1c + r14_2[0xb]
                    else
                        __builtin_memset(&data_144017550, 0, 0x1c)
                        rax_18 = &data_144017550
                    
                    *(rax_18 + 0xc) |= 1
                    data_14369a5e0.o
                    int128_t* r9_6
                    
                    if (i_1 u< r14_2[0xa].d)
                        r9_6 = zx.q(i_1) * 0x1c + r14_2[0xb]
                    else
                        __builtin_memset(&data_144017550, 0, 0x1c)
                        r9_6 = &data_144017550
                    
                    int128_t* r8_4
                    
                    if (rcx_3 u< r14_2[0xa].d)
                        r8_4 = zx.q(rcx_3) * 0x1c + r14_2[0xb]
                    else
                        r8_4 = &data_144017550
                        __builtin_memset(&data_144017550, 0, 0x1c)
                    
                    *(r8_4 + 8) = *(r9_6 + 8)
                    data_14369a5e0.o
                    int128_t* r9_8
                    
                    if (i_1 u< r14_2[0xa].d)
                        r9_8 = zx.q(i_1) * 0x1c + r14_2[0xb]
                    else
                        __builtin_memset(&data_144017550, 0, 0x1c)
                        r9_8 = &data_144017550
                    
                    if (rcx_3 u< r14_2[0xa].d)
                        *(zx.q(rcx_3) * 0x1c + r14_2[0xb] + 0x10) = r9_8[1].d
                    else
                        __builtin_memset(&data_144017550, 0, 0x1c)
                        data_144017560.d = r9_8[1].d
                
                data_14369a5e0.o
                int128_t* rax_39
                
                if (i_1 u< r14_2[0xa].d)
                    rax_39 = zx.q(i_1) * 0x1c + r14_2[0xb]
                else
                    __builtin_memset(&data_144017550, 0, 0x1c)
                    rax_39 = &data_144017550
                
                int32_t r8_12 = *(rax_39 + 0xc) & 2
                int128_t* rax_42
                
                if (rcx_3 u< r14_2[0xa].d)
                    rax_42 = zx.q(rcx_3) * 0x1c + r14_2[0xb]
                else
                    __builtin_memset(&data_144017550, 0, 0x1c)
                    rax_42 = &data_144017550
                
                *(rax_42 + 0xc) |= r8_12
                data_14369a5e0.o
                int128_t* r8_13
                
                if (i_1 u< r14_2[0xa].d)
                    r8_13 = zx.q(i_1) * 0x1c + r14_2[0xb]
                else
                    __builtin_memset(&data_144017550, 0, 0x1c)
                    r8_13 = &data_144017550
                
                int128_t* rax_46
                
                if (rcx_3 u< r14_2[0xa].d)
                    rax_46 = zx.q(rcx_3) * 0x1c + r14_2[0xb]
                else
                    __builtin_memset(&data_144017550, 0, 0x1c)
                    rax_46 = &data_144017550
                
                int32_t rax_49 = *(rax_46 + 0x14)
                int32_t r9_11 = *(r8_13 + 0x14)
                
                if (rax_49 u< r9_11)
                    r9_11 = rax_49
                
                int128_t* rax_50
                
                if (rcx_3 u< r14_2[0xa].d)
                    rax_50 = zx.q(rcx_3) * 0x1c + r14_2[0xb]
                else
                    __builtin_memset(&data_144017550, 0, 0x1c)
                    rax_50 = &data_144017550
                
                *(rax_50 + 0x14) = r9_11
                data_14369a5e0.o
                int128_t* r8_15
                
                if (i_1 u< r14_2[0xa].d)
                    r8_15 = zx.q(i_1) * 0x1c + r14_2[0xb]
                else
                    __builtin_memset(&data_144017550, 0, 0x1c)
                    r8_15 = &data_144017550
                
                int128_t* rax_54
                
                if (rcx_3 u< r14_2[0xa].d)
                    rax_54 = zx.q(rcx_3) * 0x1c + r14_2[0xb]
                else
                    __builtin_memset(&data_144017550, 0, 0x1c)
                    rax_54 = &data_144017550
                
                int32_t rax_57 = *(rax_54 + 0x18)
                int32_t r9_12 = *(r8_15 + 0x18)
                
                if (rax_57 u< r9_12)
                    r9_12 = rax_57
                
                int128_t* rax_58
                
                if (rcx_3 u< r14_2[0xa].d)
                    rax_58 = zx.q(rcx_3) * 0x1c + r14_2[0xb]
                else
                    __builtin_memset(&data_144017550, 0, 0x1c)
                    rax_58 = &data_144017550
                
                *(rax_58 + 0x18) = r9_12
            else
                rcx_3 += 1
                int128_t* r9_4
                
                if (i_1 u< r14_2[0xa].d)
                    r9_4 = zx.q(i_1) * 0x1c + r14_2[0xb]
                else
                    __builtin_memset(&data_144017550, 0, 0x1c)
                    r9_4 = &data_144017550
                
                int128_t* r8_2
                
                if (rcx_3 u< r14_2[0xa].d)
                    r8_2 = zx.q(rcx_3) * 0x1c + r14_2[0xb]
                else
                    r8_2 = &data_144017550
                    __builtin_memset(&data_144017550, 0, 0x1c)
                
                *r8_2 = *r9_4
                r8_2[1].q = r9_4[1].q
                *(r8_2 + 0x18) = *(r9_4 + 0x18)
            
            i_1 += 1
        while (i_1 u< r14_2[0xa].d)
    
    int32_t rcx_4 = rcx_3 + 1
    
    if (rcx_3 + 1 s< 0)
        rcx_4 = 0
    
    if (rcx_4 u< r14_2[0xa].d)
        r14_2[0xa].d = rcx_4

int32_t r9_13 = 2
uint64_t rax_61 = 0
int32_t var_98 = 2
int32_t var_94 = 0
void* var_c8_1
void* result_1

if (r14_2[0xa].d u> 0)
    int128_t* rdi_1
    
    if (0 u>= r14_2[0xa].d)
        rdi_1 = &data_144017550
        data_144017550 = data_14369a5d0
        data_144017568 = 0
        data_144017560 = 0
        goto label_142c376ab
    
    do
        rdi_1 = rax_61 * 0x1c + r14_2[0xb]
    label_142c376ab:
        int32_t rcx_5
        
        if ((*(rdi_1 + 0xc) & 1) != 0)
            rcx_5 = *(rdi_1 + 8)
        
        int32_t rax_62
        
        if ((*(rdi_1 + 0xc) & 1) == 0 || rcx_5 != 1)
            rcx_5 = *(rdi_1 + 8)
            
            if (rcx_5 != 0)
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rcx_5)
                rax_62 = temp0_1 + 1
                
                if (rax_62 u> 8)
                    rax_62 = 8
            else
                rax_62 = 0
        else
            rax_62 = 0
        
        if (rcx_5 != 0)
            int32_t rax_64 = rax_62 + r9_13
            
            if (rax_64 u<= 0x20)
            label_142c37720:
                int32_t rcx_6 = *rdi_1
                
                if (*(&var_50 - r14_2 + r13_2 - 0x3c) == rcx_6)
                    *(&var_60 - r14_2 + r13_2 - 0x3c) = *(r13_2 + rdi_1 - r14_2 - 0x28)
                
                var_c8_1.d = rcx_6
                int32_t rsi_1 = sub_142c2ab10(*arg1, *(r13_2 + "BUSGSOPG" - arg1 - 0x3c), 
                    r13_2[-2], *r13_2, var_c8_1.d, &result_1)
                
                if (2 != 1)
                    break
                
                r15_1 = arg2
                
                if (rsi_1 != 0)
                label_142c377dd:
                    int32_t* rax_71 = sub_142c38140(r15_1 + 0x10)
                    *rax_71 = *rdi_1
                    rax_71[1] = result_1.d
                    rax_71[2] = result_1:4.d
                    rax_71[3] = *(rdi_1 + 0x14)
                    rax_71[4] = *(rdi_1 + 0x18)
                    rax_71[8] ^= (not.d(*(rdi_1 + 0xc) u>> 1) ^ rax_71[8]) & 2
                    int32_t rcx_25 = ((not.d(*(rdi_1 + 0xc) u>> 1) ^ rax_71[8]) & 4) ^ rax_71[8]
                    rax_71[8] = rcx_25
                    rax_71[8] = ((*(rdi_1 + 0xc) u>> 2 ^ rcx_25) & 8) ^ rcx_25
                    
                    if ((*(rdi_1 + 0xc) & 1) == 0 || *(rdi_1 + 8) != 1)
                        r9_13 = rax_64
                        rax_71[5] = var_98
                        char rcx_27 = var_98.b
                        var_98 = r9_13
                        int32_t rdx_5 = (1 << r9_13.b) - (1 << rcx_27)
                        rax_71[6] = rdx_5
                        *(r15_1 + 0xc) |= rdi_1[1].d << rcx_27 & rdx_5
                    else
                        r9_13 = var_98
                        rax_71[5] = 1
                        rax_71[6] = 2
                    
                    rax_71[8] &= 0xfffffffe
                    rax_71[7] = 1 << (rax_71[5]).b & rax_71[6]
                    int32_t rax_84
                    rax_84.b = rsi_1 == 0
                    rax_71[8] |= rax_84
                else if ((*(rdi_1 + 0xc) & 0x10) == 0)
                    if ((*(rdi_1 + 0xc) & 2) != 0)
                        goto label_142c377dd
                    
                    r9_13 = var_98
                else
                label_142c377b0:
                    rsi_1 |= zx.d(sub_142c20300(*arg1, *"BUSGSOPG", *rdi_1, &result_1))
                    
                    if (2 != 1)
                        break
                    
                    r15_1 = arg2
                    
                    if (rsi_1 != 0 || (*(rdi_1 + 0xc) & 2) != 0)
                        goto label_142c377dd
                    
                    r9_13 = var_98
                
                r14_2 = arg1
                r13_2 = arg1 + 0x3c
        
        rax_61 = zx.q(var_94 + 1)
        var_94 = rax_61.d
    while (rax_61.d u< r14_2[0xa].d)
    
    if (r14_2[0xa].d u> 0)
        r14_2[0xa].d = 0

int32_t rdi_3 = r14_2[0xc].d
int32_t rcx_29 = *(r14_2 + 0x64)
int32_t rdi_4 = rdi_3 + 1

if (rdi_3 + 1 s< 0)
    rdi_4 = 0

int32_t* rcx_36

if (rcx_29 s< 0)
    rcx_36 = &data_144017550
    data_144017550 = data_14369a5d0
else
    if (rdi_4 u<= rcx_29)
        goto label_142c3794b
    
    int32_t rbx_3 = rcx_29
    
    do
        rbx_3 = rbx_3 + 8 + (rbx_3 u>> 1)
    while (rdi_4 u>= rbx_3)
    
    int64_t rax_88
    
    if (rbx_3 s>= 0 && rbx_3 u>= rcx_29 && rbx_3 u< 0xfffffff)
        rax_88 = sub_140dc0f10(r14_2[0xd], zx.q(rbx_3) << 4)
    
    if (rbx_3 s< 0 || rbx_3 u< rcx_29 || rbx_3 u>= 0xfffffff || rax_88 == 0)
        *(r14_2 + 0x64) = 0xffffffff
        rcx_36 = &data_144017550
        data_144017550 = data_14369a5d0
    else
        *(r14_2 + 0x64) = rbx_3
        r14_2[0xd] = rax_88
    label_142c3794b:
        uint64_t rcx_31 = zx.q(r14_2[0xc].d)
        
        if (rdi_4 u> rcx_31.d)
            memset((rcx_31 << 4) + r14_2[0xd], 0, zx.q(rdi_4 - rcx_31.d) << 4)
        
        r14_2[0xc].d = rdi_4
        rcx_36 = (zx.q(rdi_4 - 1) << 4) + r14_2[0xd]

*rcx_36 = *(r14_2 + 0x44)
*(rcx_36 + 8) = 0
*(r14_2 + 0x44) += 1
int32_t rdi_5 = r14_2[0xe].d
int32_t rcx_37 = *(r14_2 + 0x74)
int32_t rdi_6 = rdi_5 + 1

if (rdi_5 + 1 s< 0)
    rdi_6 = 0

int32_t* rcx_44

if (rcx_37 s< 0)
    rcx_44 = &data_144017550
    data_144017550 = data_14369a5d0
else
    if (rdi_6 u<= rcx_37)
        goto label_142c379fb
    
    int32_t rbx_5 = rcx_37
    
    do
        rbx_5 = rbx_5 + 8 + (rbx_5 u>> 1)
    while (rdi_6 u>= rbx_5)
    
    int64_t rax_92
    
    if (rbx_5 s>= 0 && rbx_5 u>= rcx_37 && rbx_5 u< 0xfffffff)
        rax_92 = sub_140dc0f10(r14_2[0xf], zx.q(rbx_5) << 4)
    
    if (rbx_5 s< 0 || rbx_5 u< rcx_37 || rbx_5 u>= 0xfffffff || rax_92 == 0)
        *(r14_2 + 0x74) = 0xffffffff
        rcx_44 = &data_144017550
        data_144017550 = data_14369a5d0
    else
        *(r14_2 + 0x74) = rbx_5
        r14_2[0xf] = rax_92
    label_142c379fb:
        uint64_t rcx_39 = zx.q(r14_2[0xe].d)
        
        if (rdi_6 u> rcx_39.d)
            memset((rcx_39 << 4) + r14_2[0xf], 0, zx.q(rdi_6 - rcx_39.d) << 4)
        
        r14_2[0xe].d = rdi_6
        rcx_44 = (zx.q(rdi_6 - 1) << 4) + r14_2[0xf]

int32_t i_2 = 0
*rcx_44 = r14_2[9].d
int64_t rbp_2 = 0
*(rcx_44 + 8) = 0
r14_2[9].d += 1
uint128_t zmm1_1 = data_14369a5e0.o
int32_t i_3 = 0
int128_t zmm0_1 = data_14369a5d0
int64_t var_88_1 = 0
void* result

do
    int32_t var_94_1 = 0
    bool cond:2_1 = *(r14_2 + ((rbp_2 + 0x11) << 2)) u<= 0
    result = r14_2 + ((rbp_2 + 0x11) << 2)
    int32_t r13_5 = 0
    result_1 = result
    uint64_t rsi_2 = 0
    int32_t j = 0
    
    if (not(cond:2_1))
        int32_t* rbx_8 = (rbp_2 + 2) << 4
        void* rcx_47 = &r14_2[(rbp_2 + 6) * 2]
        int32_t* var_70_1 = rbx_8
        
        do
            int32_t r9_16 = var_48[rbp_2]
            void* var_c0_1
            
            if (r9_16 != 0xffff && *(&var_60 + (rbp_2 << 2)) == j)
                var_c0_1.d = 2
                var_c8_1.d = *(arg3 + (rbp_2 << 2))
                sub_142c36b90(r14_2, r15_1, i_2, r9_16, var_c8_1.d, 2, 1, 1, 0)
                zmm1_1 = data_14369a5e0.o
                zmm0_1 = data_14369a5d0
            
            int32_t k = 0
            
            if (*(r15_1 + 0x10) u> 0)
                int128_t* rax_97
                
                if (0 u>= *(r15_1 + 0x10))
                    data_144017550 = zmm0_1
                    data_144017570.d = 0
                    rax_97 = &data_144017550
                    data_144017560.o = zmm1_1
                    goto label_142c37b6c
                
                do
                    rax_97 = *(r15_1 + 0x18) + zx.q(k) * 0x24
                label_142c37b6c:
                    
                    if (*(rax_97 + (rbp_2 << 2) + 0xc) == j)
                        int128_t* rbp_3
                        
                        if (k u< *(r15_1 + 0x10))
                            rbp_3 = *(r15_1 + 0x18) + zx.q(k) * 0x24
                        else
                            data_144017550 = zmm0_1
                            data_144017570.d = 0
                            rbp_3 = &data_144017550
                            data_144017560.o = zmm1_1
                        
                        int128_t* r11_1
                        
                        if (k u< *(r15_1 + 0x10))
                            r11_1 = *(r15_1 + 0x18) + zx.q(k) * 0x24
                        else
                            data_144017550 = zmm0_1
                            data_144017570.d = 0
                            r11_1 = &data_144017550
                            data_144017560.o = zmm1_1
                        
                        int128_t* r10_1
                        
                        if (k u< *(r15_1 + 0x10))
                            r10_1 = *(r15_1 + 0x18) + zx.q(k) * 0x24
                        else
                            data_144017550 = zmm0_1
                            data_144017570.d = 0
                            r10_1 = &data_144017550
                            data_144017560.o = zmm1_1
                        
                        int128_t* r9_17
                        
                        if (k u< *(r15_1 + 0x10))
                            r9_17 = *(r15_1 + 0x18) + zx.q(k) * 0x24
                        else
                            data_144017550 = zmm0_1
                            data_144017570.d = 0
                            r9_17 = &data_144017550
                            data_144017560.o = zmm1_1
                        
                        int128_t* r8_26
                        
                        if (k u< *(r15_1 + 0x10))
                            r8_26 = *(r15_1 + 0x18) + zx.q(k) * 0x24
                        else
                            data_144017550 = zmm0_1
                            data_144017570.d = 0
                            r8_26 = &data_144017550
                            data_144017560.o = zmm1_1
                        
                        rbp_2 = var_88_1
                        var_c0_1.d = *(r9_17 + 0x18)
                        var_c8_1.d = *(arg3 + (rbp_2 << 2))
                        sub_142c36b90(r14_2, r15_1, i_3, *(r8_26 + (rbp_2 << 2) + 4), var_c8_1.d, 
                            var_c0_1.d, (r10_1[2].d u>> 1).b & 1, (r11_1[2].d u>> 2).b & 1, 
                            (rbp_3[2].d u>> 3).b & 1)
                        zmm1_1 = data_14369a5e0.o
                        zmm0_1 = data_14369a5d0
                    
                    k += 1
                while (k u< *(r15_1 + 0x10))
                
                rbx_8 = var_70_1
                r13_5 = var_94_1
            
            int32_t rcx_58 = *(rbx_8 + r15_1)
            
            if (rsi_2.d u< rcx_58)
                if (rsi_2.d u< rcx_58)
                    qsort(*(rbx_8 + r15_1 + 8) + (zx.q(rsi_2.d) << 3), zx.q(rcx_58 - rsi_2.d), 8, 
                        sub_142c37000)
                    zmm1_1 = data_14369a5e0.o
                    zmm0_1 = data_14369a5d0
                
                uint64_t r8_29 = zx.q((rsi_2 + 1).d)
                
                if (r8_29.d u< *(rbx_8 + r15_1))
                    do
                        int128_t* r9_19
                        
                        if (r8_29.d u< *(rbx_8 + r15_1))
                            r9_19 = *(rbx_8 + r15_1 + 8) + (r8_29 << 3)
                        else
                            data_144017550.q = 0
                            r9_19 = &data_144017550
                        
                        int128_t* rcx_62
                        
                        if (rsi_2.d u< *(rbx_8 + r15_1))
                            rcx_62 = *(rbx_8 + r15_1 + 8) + (zx.q(rsi_2.d) << 3)
                        else
                            data_144017550.q = 0
                            rcx_62 = &data_144017550
                        
                        if (*r9_19 == *rcx_62)
                            int128_t* rdx_17
                            
                            if (rsi_2.d u< *(rbx_8 + r15_1))
                                rdx_17 = *(rbx_8 + r15_1 + 8) + (zx.q(rsi_2.d) << 3)
                            else
                                data_144017550.q = 0
                                rdx_17 = &data_144017550
                            
                            int128_t* rax_118
                            
                            if (r8_29.d u< *(rbx_8 + r15_1))
                                rax_118 = *(rbx_8 + r15_1 + 8) + (r8_29 << 3)
                            else
                                data_144017550.q = 0
                                rax_118 = &data_144017550
                            
                            *(rdx_17 + 4) |= *(rax_118 + 4)
                            int128_t* rdx_19
                            
                            if (rsi_2.d u< *(rbx_8 + r15_1))
                                rdx_19 = *(rbx_8 + r15_1 + 8) + (zx.q(rsi_2.d) << 3)
                            else
                                data_144017550.q = 0
                                rdx_19 = &data_144017550
                            
                            int128_t* rax_121
                            
                            if (r8_29.d u< *(rbx_8 + r15_1))
                                rax_121 = *(rbx_8 + r15_1 + 8) + (r8_29 << 3)
                            else
                                data_144017550.q = 0
                                rax_121 = &data_144017550
                            
                            *(rdx_19 + 2) &= *(rax_121 + 2) | 0xfffe
                            int128_t* rdx_21
                            
                            if (rsi_2.d u< *(rbx_8 + r15_1))
                                rdx_21 = *(rbx_8 + r15_1 + 8) + (zx.q(rsi_2.d) << 3)
                            else
                                data_144017550.q = 0
                                rdx_21 = &data_144017550
                            
                            int128_t* rax_124
                            
                            if (r8_29.d u< *(rbx_8 + r15_1))
                                rax_124 = *(rbx_8 + r15_1 + 8) + (r8_29 << 3)
                            else
                                data_144017550.q = 0
                                rax_124 = &data_144017550
                            
                            *(rdx_21 + 2) &= *(rax_124 + 2) | 0xfffd
                        else
                            rsi_2 = zx.q(rsi_2.d + 1)
                            int128_t* rdx_16
                            
                            if (r8_29.d u< *(rbx_8 + r15_1))
                                rdx_16 = *(rbx_8 + r15_1 + 8) + (r8_29 << 3)
                            else
                                data_144017550.q = 0
                                rdx_16 = &data_144017550
                            
                            if (rsi_2.d u< *(rbx_8 + r15_1))
                                *(*(rbx_8 + r15_1 + 8) + (rsi_2 << 3)) = *rdx_16
                            else
                                data_144017550.q = 0
                                data_144017550.q = *rdx_16
                        
                        r8_29 = zx.q(r8_29.d + 1)
                    while (r8_29.d u< *(rbx_8 + r15_1))
                    
                    zmm1_1 = data_14369a5e0.o
                    r14_2 = arg1
                    zmm0_1 = data_14369a5d0
                    rbp_2 = var_88_1
                
                int32_t rsi_3 = rsi_2.d + 1
                
                if (rsi_2.d + 1 s< 0)
                    rsi_3 = 0
                
                if (rsi_3 u< *(rbx_8 + r15_1))
                    *(rbx_8 + r15_1) = rsi_3
                    zmm1_1 = data_14369a5e0.o
                    zmm0_1 = data_14369a5d0
            
            void* rdi_7 = rcx_47
            rsi_2 = zx.q(*(rbx_8 + r15_1))
            
            if (r13_5 u< *rdi_7 && *((zx.q(r13_5) << 4) + *(rdi_7 + 8)) == j)
                void* r14_7 = ((rbp_2 + 4) << 4) + r15_1
                int32_t rbp_4 = *r14_7
                int32_t rbp_5 = rbp_4 + 1
                
                if (rbp_4 + 1 s< 0)
                    rbp_5 = 0
                
                int32_t rcx_70 = *(r14_7 + 4)
                int32_t* rcx_77
                
                if (rcx_70 s< 0)
                    data_144017550 = zmm0_1
                    rcx_77 = &data_144017550
                else
                    if (rbp_5 u<= rcx_70)
                        goto label_142c37fa0
                    
                    int32_t rdi_8 = rcx_70
                    
                    do
                        rdi_8 = rdi_8 + 8 + (rdi_8 u>> 1)
                    while (rbp_5 u>= rdi_8)
                    
                    int64_t rax_132
                    
                    if (rdi_8 s>= 0 && rdi_8 u>= rcx_70 && rdi_8 u< 0xfffffff)
                        rax_132 = sub_140dc0f10(*(r14_7 + 8), zx.q(rdi_8) << 4)
                    
                    if (rdi_8 s< 0 || rdi_8 u< rcx_70 || rdi_8 u>= 0xfffffff || rax_132 == 0)
                        rdi_7 = rcx_47
                        *(r14_7 + 4) = 0xffffffff
                        data_144017550 = data_14369a5d0
                        rcx_77 = &data_144017550
                    else
                        *(r14_7 + 4) = rdi_8
                        rdi_7 = rcx_47
                        *(r14_7 + 8) = rax_132
                    label_142c37fa0:
                        uint64_t rcx_72 = zx.q(*r14_7)
                        
                        if (rbp_5 u> rcx_72.d)
                            memset((rcx_72 << 4) + *(r14_7 + 8), 0, zx.q(rbp_5 - rcx_72.d) << 4)
                        
                        *r14_7 = rbp_5
                        rcx_77 = (zx.q(rbp_5 - 1) << 4) + *(r14_7 + 8)
                
                *rcx_77 = rsi_2.d
                int128_t* rax_133
                
                if (r13_5 u< *rdi_7)
                    rax_133 = (zx.q(r13_5) << 4) + *(rdi_7 + 8)
                else
                    rax_133 = &data_144017550
                    data_144017550 = data_14369a5d0
                
                r13_5 += 1
                r14_2 = arg1
                *(rcx_77 + 8) = *(rax_133 + 8)
                zmm1_1 = data_14369a5e0.o
                var_94_1 = r13_5
                zmm0_1 = data_14369a5d0
            
            result = result_1
            j += 1
            i_2 = i_3
            rbp_2 = var_88_1
        while (j u< *result)
    
    i_2 += 1
    rbp_2 += 1
    i_3 = i_2
    var_88_1 = rbp_2
while (i_2 u< 2)

return result
