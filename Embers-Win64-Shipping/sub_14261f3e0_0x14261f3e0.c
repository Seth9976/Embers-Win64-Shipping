// 函数: sub_14261f3e0
// 地址: 0x14261f3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
int32_t rdi = arg4
uint64_t r12 = 0x40
int16_t rbp = 0
int32_t var_358 = 0x40
int16_t var_354 = 0
int32_t* rax_3 = data_143b502a8(0x100, 1)
int32_t i_20 = arg7
int32_t* var_330 = rax_3
int32_t* r10 = rax_3
int32_t var_34c = 0
int32_t i_1 = 0
int32_t r15 = 0

if (i_20 s> 0)
    void* rcx_1 = arg6
    int32_t* rbx_1 = rcx_1 + 0x24
    
    do
        if (rbx_1[2].w == 0xffff)
            *(rbx_1 + 0xa) |= 1
            int32_t i = i_1 + 1
            rbx_1[2].w = rbp
            
            if (i s> r12.d)
                if (r12.d == 0)
                    r12 = zx.q(i)
                    var_358 = i
                else if (r12.d s< i)
                    do
                        r12 = zx.q(r12.d * 2)
                    while (r12.d s< i)
                    
                    var_358 = r12.d
                
                int32_t* rax_4 = data_143b502a8(zx.q((r12 << 2).d), 1)
                int32_t* r14
                
                if (i_1 == 0 || rax_4 == 0)
                    r14 = var_330
                else
                    r14 = var_330
                    memcpy(rax_4, r14, i_1 << 2)
                
                if (r14 != 0)
                    data_143b502b0(r14)
                
                rcx_1 = arg6
                r10 = rax_4
                var_330 = rax_4
            
            i_1 = i
            r10[sx.q(i) - 1] = r15
            
            if (i != 0)
                do
                    int32_t i_14 = i_1
                    void* r9_2 = sx.q(*r10) * 0x30 + rcx_1
                    void* var_318_1 = r9_2
                    
                    if (i_1 s> 1)
                        void* rcx_5 = &r10[1]
                        uint64_t j_7 = zx.q(i_1 - 1)
                        uint64_t j
                        
                        do
                            *(rcx_5 - 4) = *rcx_5
                            rcx_5 += 4
                            j = j_7
                            j_7 -= 1
                        while (j != 1)
                        rcx_1 = arg6
                    
                    int64_t rax_8 = sx.q(*(r9_2 + 0x10))
                    i_1 -= 1
                    
                    if (i_14 s<= 0)
                        i_1 = i_14
                    
                    int64_t var_328_1 = 0
                    int64_t r13 = 0
                    
                    if (rax_8 s> 0)
                        do
                            int64_t rsi_2 = sx.q(*(*(r9_2 + 8) + (r13 << 2)))
                            void* r15_3 = rsi_2 * 0x30 + rcx_1
                            
                            if (*(r15_3 + 0x2c) == 0xffff)
                                int64_t rax_11 = sx.q(rbx_1[-1])
                                int64_t rcx_6 = 0
                                
                                if (rax_11.d s<= 0)
                                label_14261f617:
                                    int16_t rcx_7 = *(r15_3 + 0x2a)
                                    int16_t r9_3 = *(r15_3 + 0x28)
                                    
                                    if (*(rbx_1 + 6) u> rcx_7)
                                        rcx_7 = *(rbx_1 + 6)
                                    
                                    if (rbx_1[1].w u< r9_3)
                                        r9_3 = rbx_1[1].w
                                    
                                    if (zx.d(rcx_7) - zx.d(r9_3) s< 0xff)
                                        int32_t j_1 = i_1 + 1
                                        
                                        if (j_1 s> r12.d)
                                            if (r12.d == 0)
                                                r12 = zx.q(j_1)
                                                var_358 = j_1
                                            else if (r12.d s< j_1)
                                                do
                                                    r12 = zx.q(r12.d * 2)
                                                while (r12.d s< j_1)
                                                
                                                var_358 = r12.d
                                            
                                            int32_t* rax_14 = data_143b502a8(zx.q((r12 << 2).d), 1)
                                            int32_t* r14_1
                                            
                                            if (i_1 == 0 || rax_14 == 0)
                                                r14_1 = var_330
                                            else
                                                r14_1 = var_330
                                                memcpy(rax_14, r14_1, i_1 << 2)
                                            
                                            if (r14_1 != 0)
                                                data_143b502b0(r14_1)
                                            
                                            r10 = rax_14
                                            var_330 = rax_14
                                            rbp = var_354
                                        
                                        int32_t j_2 = 0
                                        i_1 = j_1
                                        int32_t j_5 = 0
                                        r10[sx.q(j_1) - 1] = rsi_2.d
                                        *(r15_3 + 0x2c) = rbp
                                        
                                        if (*(r15_3 + 0x20) s> 0)
                                            int64_t r13_1 = 0
                                            
                                            do
                                                int32_t rcx_11 = 0
                                                int64_t rbp_2 = sx.q(rbx_1[-1])
                                                int32_t k_1 = *(*(r15_3 + 0x18) + r13_1)
                                                
                                                if (rbp_2.d s<= 0)
                                                label_14261f72a:
                                                    uint64_t k_6 = zx.q(*rbx_1)
                                                    int32_t k = (rbp_2 + 1).d
                                                    int64_t rsi_3
                                                    
                                                    if (k s<= k_6.d)
                                                        rsi_3 = *(rbx_1 - 0xc)
                                                    else
                                                        int32_t k_4
                                                        
                                                        if (k_6.d != 0)
                                                            k_4 = k_6.d
                                                        else
                                                            *rbx_1 = k
                                                            k_6 = zx.q(k)
                                                            k_4 = k
                                                        
                                                        if (k_6.d s< k)
                                                            k_6 = zx.q(k_4)
                                                            
                                                            do
                                                                k_6 = zx.q(k_6.d * 2)
                                                            while (k_6.d s< k)
                                                            
                                                            *rbx_1 = k_6.d
                                                        
                                                        rsi_3 =
                                                            data_143b502a8(zx.q((k_6 << 2).d), 1)
                                                        int64_t rax_19 = sx.q(rbx_1[-1])
                                                        
                                                        if (rax_19.d != 0 && rsi_3 != 0)
                                                            memcpy(rsi_3, *(rbx_1 - 0xc), 
                                                                (rax_19 << 2).d)
                                                        
                                                        int64_t rcx_14 = *(rbx_1 - 0xc)
                                                        
                                                        if (rcx_14 != 0)
                                                            data_143b502b0(rcx_14)
                                                        
                                                        j_2 = j_5
                                                        *(rbx_1 - 0xc) = rsi_3
                                                    
                                                    rbx_1[-1] = k
                                                    *(rsi_3 + (rbp_2 << 2)) = k_1
                                                else
                                                    int32_t* rax_17 = *(rbx_1 - 0xc)
                                                    
                                                    while (*rax_17 != k_1)
                                                        rcx_11 += 1
                                                        rax_17 = &rax_17[1]
                                                        
                                                        if (rcx_11 s>= rbp_2.d)
                                                            goto label_14261f72a
                                                
                                                j_2 += 1
                                                r13_1 += 4
                                                j_5 = j_2
                                            while (j_2 s< *(r15_3 + 0x20))
                                            
                                            r12 = zx.q(var_358)
                                            i_1 = j_1
                                            r13 = var_328_1
                                            rbp = var_354
                                            r10 = var_330
                                        
                                        int16_t rcx_15 = *(r15_3 + 0x28)
                                        int16_t rax_21 = *(rbx_1 + 6)
                                        
                                        if (rbx_1[1].w u< rcx_15)
                                            rcx_15 = rbx_1[1].w
                                        
                                        rbx_1[1].w = rcx_15
                                        int16_t rcx_16 = *(r15_3 + 0x2a)
                                        
                                        if (rax_21 u> rcx_16)
                                            rcx_16 = rax_21
                                        
                                        *(rbx_1 + 6) = rcx_16
                                    
                                    r9_2 = var_318_1
                                else
                                    int32_t* rax_12 = *(rbx_1 - 0xc)
                                    
                                    while (*rax_12 != rsi_2.d)
                                        rcx_6 += 1
                                        rax_12 = &rax_12[1]
                                        
                                        if (rcx_6 s>= rax_11)
                                            goto label_14261f617
                                
                                rcx_1 = arg6
                            
                            r13 += 1
                            var_328_1 = r13
                        while (r13 s< rax_8)
                while (i_1 != 0)
                
                r15 = var_34c
                i_20 = arg7
            
            rbp += 1
            var_354 = rbp
        
        r15 += 1
        rbx_1 = &rbx_1[0xc]
        var_34c = r15
    while (r15 s< i_20)
    
    rdi = arg4

void* r15_4 = arg6
rdi.w <<= 2
int64_t i_19 = sx.q(i_20)
int32_t var_350_1 = rdi
int64_t i_18 = i_19

if (i_20 s> 0)
    int64_t rbp_3 = 0
    int64_t var_328_2 = 0
    void* rbx_2 = r15_4 + 0x24
    
    do
        if ((*(rbx_2 + 0xa) & 1) != 0)
            int16_t r14_2 = *(rbx_2 + 8)
            void* rax_22 = r15_4 + 0x28
            var_354 = r14_2
            void* var_2f8_2 = rax_22
        label_14261f8c0:
            int64_t rsi_4 = 0
            void* r11_1 = rax_22
            
            do
                if (rbp_3 != rsi_4 && (*(r11_1 + 6) & 1) != 0)
                    int16_t rcx_17 = *(r11_1 + 2)
                    int16_t r9_4 = *(rbx_2 + 4)
                    
                    if (r9_4 u<= rdi.w + rcx_17)
                        int16_t r8_6 = *(rbx_2 + 6)
                        int16_t rdx_6 = *r11_1
                        
                        if (rdi.w + r8_6 u>= rdx_6)
                            if (r8_6 u> rcx_17)
                                rcx_17 = r8_6
                            
                            if (r9_4 u< rdx_6)
                                rdx_6 = r9_4
                            
                            if (zx.d(rcx_17) - zx.d(rdx_6) s< 0xff)
                                void* r9_5 = r15_4 + 0x2c
                                int32_t i_2 = 0
                                int64_t r10_1 = 0
                                
                                while (true)
                                    if (*r9_5 == *(r11_1 + 4))
                                        int64_t rax_26 = sx.q(*(rbx_2 - 4))
                                        int64_t rcx_20 = 0
                                        
                                        if (rax_26.d s> 0)
                                            int32_t* rax_27 = *(rbx_2 - 0xc)
                                            
                                            while (*rax_27 != i_2)
                                                rcx_20 += 1
                                                rax_27 = &rax_27[1]
                                                
                                                if (rcx_20 s>= rax_26)
                                                    goto label_14261f96f
                                            
                                            rdi = var_350_1
                                            break
                                    
                                label_14261f96f:
                                    i_2 += 1
                                    r10_1 += 1
                                    r9_5 += 0x30
                                    
                                    if (r10_1 s>= i_19)
                                        int16_t rax_28 = *(r11_1 + 4)
                                        var_358.w = rax_28
                                        
                                        if (rax_28 == 0xffff)
                                            goto label_14261fa30
                                        
                                        int64_t i_12 = i_19
                                        void* r15_5 = r15_4 + 0x2e
                                        int64_t i_17 = i_12
                                        int64_t i_3
                                        
                                        do
                                            if (*(r15_5 - 2) == rax_28)
                                                *r15_5 &= 0xfe
                                                int32_t j_3 = 0
                                                bool cond:6_1 = *(r15_5 - 0xe) s<= 0
                                                *(r15_5 - 2) = r14_2
                                                
                                                if (not(cond:6_1))
                                                    int64_t r13_2 = 0
                                                    
                                                    do
                                                        int32_t rcx_21 = 0
                                                        int64_t rsi_5 = sx.q(*(rbx_2 - 4))
                                                        int32_t k_3 = *(*(r15_5 - 0x16) + r13_2)
                                                        
                                                        if (rsi_5.d s<= 0)
                                                        label_14261f9f9:
                                                            uint64_t k_7 = zx.q(*rbx_2)
                                                            int32_t k_2 = (rsi_5 + 1).d
                                                            
                                                            if (k_2 s> k_7.d)
                                                                int32_t k_5
                                                                
                                                                if (k_7.d != 0)
                                                                    k_5 = k_7.d
                                                                else
                                                                    *rbx_2 = k_2
                                                                    k_7 = zx.q(k_2)
                                                                    k_5 = k_2
                                                                
                                                                if (k_7.d s< k_2)
                                                                    k_7 = zx.q(k_5)
                                                                    
                                                                    do
                                                                        k_7 = zx.q(k_7.d * 2)
                                                                    while (k_7.d s< k_2)
                                                                    
                                                                    *rbx_2 = k_7.d
                                                                
                                                                int64_t rax_33 =
                                                                    data_143b502a8(zx.q((k_7 << 2).d), 1)
                                                                int64_t rax_34 = sx.q(*(rbx_2 - 4))
                                                                
                                                                if (rax_34.d != 0 && rax_33 != 0)
                                                                    memcpy(rax_33, *(rbx_2 - 0xc), 
                                                                        (rax_34 << 2).d)
                                                                
                                                                int64_t rcx_27 = *(rbx_2 - 0xc)
                                                                
                                                                if (rcx_27 != 0)
                                                                    data_143b502b0(rcx_27)
                                                                
                                                                *(rbx_2 - 0xc) = rax_33
                                                            
                                                            int64_t rax_35 = *(rbx_2 - 0xc)
                                                            *(rbx_2 - 4) = k_2
                                                            *(rax_35 + (rsi_5 << 2)) = k_3
                                                        else
                                                            int32_t* rax_30 = *(rbx_2 - 0xc)
                                                            
                                                            while (*rax_30 != k_3)
                                                                rcx_21 += 1
                                                                rax_30 = &rax_30[1]
                                                                
                                                                if (rcx_21 s>= rsi_5.d)
                                                                    goto label_14261f9f9
                                                        
                                                        j_3 += 1
                                                        r13_2 += 4
                                                    while (j_3 s< *(r15_5 - 0xe))
                                                    
                                                    i_12 = i_17
                                                    r14_2 = var_354
                                                
                                                int16_t rcx_29 = *(r15_5 - 6)
                                                rax_28 = var_358.w
                                                
                                                if (*(rbx_2 + 4) u< rcx_29)
                                                    rcx_29 = *(rbx_2 + 4)
                                                
                                                *(rbx_2 + 4) = rcx_29
                                                int16_t rcx_30 = *(r15_5 - 4)
                                                
                                                if (*(rbx_2 + 6) u> rcx_30)
                                                    rcx_30 = *(rbx_2 + 6)
                                                
                                                *(rbx_2 + 6) = rcx_30
                                            
                                            r15_5 += 0x30
                                            i_3 = i_12
                                            i_12 -= 1
                                            i_17 = i_12
                                        while (i_3 != 1)
                                        rbp_3 = var_328_2
                                        rax_22 = var_2f8_2
                                        rdi = var_350_1
                                        r15_4 = arg6
                                        i_19 = i_18
                                        goto label_14261f8c0
                
                rsi_4 += 1
                r11_1 += 0x30
            while (rsi_4 s< i_19)
            
        label_14261fa30:
            rdi = var_350_1
        
        rbp_3 += 1
        rbx_2 += 0x30
        var_328_2 = rbp_3
    while (rbp_3 s< i_19)
    
    i_20 = arg7

int128_t zmm6
int128_t var_48 = zmm6
int64_t* count = nullptr
uint128_t zmm7
uint128_t var_58 = zmm7
uint128_t zmm8
uint128_t var_68 = zmm8
int128_t zmm9
int128_t var_78 = zmm9
int128_t zmm10
int128_t var_88 = zmm10
int128_t zmm11
int128_t var_98 = zmm11

if (i_20 s>= 0x100)
    if (i_19 s> 0)
        void* rax_36 = r15_4 + 0x2e
        int64_t i_10 = i_19
        int64_t i_4
        
        do
            *rax_36 |= 2
            rax_36 += 0x30
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
    
    if (i_20 s> 0)
        int64_t r9_6 = 0
        uint64_t i_16 = zx.q(i_20)
        void* rdx_9 = r15_4 + 0x2e
        uint64_t i_5
        
        do
            if ((*rdx_9 & 2) != 0)
                int16_t r8_10 = *(rdx_9 - 2)
                count.w += 1
                
                if (r9_6 s< i_19)
                    void* rax_37 = rdx_9
                    int64_t j_6 = i_19 - r9_6
                    int64_t j_4
                    
                    do
                        if (*(rax_37 - 2) == r8_10)
                            *rax_37 &= 0xfd
                            *(rax_37 - 2) = count.w
                        
                        rax_37 += 0x30
                        j_4 = j_6
                        j_6 -= 1
                    while (j_4 != 1)
            
            r9_6 += 1
            rdx_9 += 0x30
            i_5 = i_16
            i_16 -= 1
        while (i_5 != 1)
        goto label_14261fca5
    
label_142620413:
    
    if (*(arg1 + 9) == 0)
    label_142620424:
        count.b = 1
    else
        (*(*arg1 + 0x28))(arg1, 0x1a)
    label_142620424_1:
        count.b = 1
else
    void var_2a8
    memset(&var_2a8, 0, 0x200)
    
    if (i_19 s> 0)
        void* rcx_23 = r15_4 + 0x2c
        int64_t i_13 = i_19
        int64_t i_6
        
        do
            uint64_t rax_31 = zx.q(*rcx_23)
            rcx_23 += 0x30
            *(&var_2a8 + (rax_31 << 1)) = 1
            i_6 = i_13
            i_13 -= 1
        while (i_6 != 1)
    
    for (int64_t i_7 = 0; i_7 s< 0x100; i_7 += 2)
        if (*(&var_2a8 + (i_7 << 1)) != 0)
            *(&var_2a8 + (i_7 << 1)) = count.w
            count.w += 1
        
        int16_t var_2a6[0xff]
        
        if (var_2a6[i_7] != 0)
            var_2a6[i_7] = count.w
            count.w += 1
    
    if (i_19 s> 0)
        void* rdx_7 = r15_4 + 0x2c
        int64_t i_15 = i_19
        int64_t i_8
        
        do
            uint64_t rax_32 = zx.q(*rdx_7)
            rdx_7 += 0x30
            *(rdx_7 - 0x30) = *(&var_2a8 + (rax_32 << 1))
            i_8 = i_15
            i_15 -= 1
        while (i_8 != 1)
    
label_14261fca5:
    
    if (count.w == 0)
        goto label_142620413
    
    int32_t* rbp_4 = arg2
    int32_t r12_1 = *rbp_4
    int32_t rax_38 = arg3 * 2
    zmm9 = rbp_4[0xa]
    int32_t r14_5 = r12_1 - rax_38
    zmm10 = rbp_4[0xc]
    int32_t r15_7 = rbp_4[1] - rax_38
    zmm6 = rbp_4[8]
    zmm11 = rbp_4[0xb]
    uint32_t rax_39 = zx.d(count.w)
    int32_t var_308_1 = r12_1
    int32_t var_350_2 = r14_5
    int32_t var_30c_1 = r15_7
    uint128_t zmm0
    zmm0.d = _mm_cvtepi32_ps(zx.o(arg3)).d f* rbp_4[0xd]
    zmm9.d = zmm9.d f- zmm0.d
    zmm7.d = zmm0.d f+ rbp_4[7]
    zmm10.d = zmm10.d f- zmm0.d
    zmm8.d = zmm0.d f+ rbp_4[9]
    arg8[1].d = rax_39
    int64_t rax_40 = data_143b502a8(zx.q(rax_39 * 0x58), 0)
    *arg8 = rax_40
    int64_t rax_41 = sx.q(arg8[1].d)
    
    if (rax_40 != 0)
        memset(rax_40, 0, rax_41 * 0x58)
        int32_t r13_3 = 0
        int64_t* rcx_36 = arg8
        int32_t var_348_1 = 0
        
        if (arg8[1].d s<= 0)
        label_142620424_2:
            count.b = 1
        else
            int32_t count_1 = r15_7 * r14_5
            int32_t count_2 = count_1
            count = zx.q(count_1 * 2)
            char* r8_11
            uint64_t count_3
            
            while (true)
                int32_t* rsi_7 = sx.q(r13_3) * 0x58 + *rcx_36
                int32_t* var_318_2 = rsi_7
                memset(rsi_7, 0, 0x58)
                int64_t rax_43 = data_143b502a8(zx.q(count.d), 0)
                *(rsi_7 + 0x40) = rax_43
                
                if (rax_43 == 0)
                    count_3 = zx.q(count.d)
                    r8_11 = "SplitAndStoreLayerRegions: Out of memory 'heights' (%d)."
                    break
                
                memset(rax_43, 0xff, sx.q(count.d))
                int64_t rax_44 = data_143b502a8(zx.q(count_1), 0)
                *(rsi_7 + 0x48) = rax_44
                
                if (rax_44 == 0)
                    count_3 = zx.q(count_1)
                    r8_11 = "SplitAndStoreLayerRegions: Out of memory 'areas' (%d)."
                    break
                
                count = sx.q(count_1)
                memset(rax_44, 0, count)
                int64_t rax_45 = data_143b502a8(zx.q(count_1), 0)
                *(rsi_7 + 0x50) = rax_45
                
                if (rax_45 == 0)
                    count_3 = zx.q(count_1)
                    r8_11 = "SplitAndStoreLayerRegions: Out of memory 'cons' (%d)."
                    break
                
                memset(rax_45, 0, count)
                int64_t i_11 = i_18
                uint32_t var_358_1 = 0
                uint32_t rdi_3 = 0
                uint32_t rdx_10 = 0
                
                if (i_11 s> 0)
                    void* rax_47 = arg6 + 0x2c
                    int64_t i_9
                    
                    do
                        if ((*(rax_47 + 2) & 1) != 0 && *rax_47 == r13_3.w)
                            rdi_3 = zx.d(*(rax_47 - 4))
                            rdx_10 = zx.d(*(rax_47 - 2))
                        
                        rax_47 += 0x30
                        i_9 = i_11
                        i_11 -= 1
                    while (i_9 != 1)
                    var_358_1 = rdi_3
                
                rsi_7[8] = r14_5
                rsi_7[9] = r15_7
                rsi_7[6] = rbp_4[0xd]
                rsi_7[7] = rbp_4[0xe]
                *rsi_7 = zmm7.d
                rsi_7[1] = zmm6.d
                rsi_7[2] = zmm8.d
                rsi_7[3] = zmm9.d
                rsi_7[4] = zmm11.d
                rsi_7[5] = zmm10.d
                int32_t var_34c_1 = 0
                uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rdi_3))
                uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rdx_10))
                zmm0_1.d = zmm0_1.d f* rbp_4[0xe]
                zmm0_1.d = zmm0_1.d f+ zmm6.d
                rsi_7[1] = zmm0_1.d
                zmm1.d = zmm1.d f* rbp_4[0xe]
                zmm1.d = zmm1.d f+ zmm6.d
                rsi_7[4] = zmm1.d
                rsi_7[0xa] = rsi_7[8]
                rsi_7[0xc] = rsi_7[9]
                int32_t rax_52 = 0
                rsi_7[0xe] = rdi_3
                rsi_7[0xf] = rdx_10
                rsi_7[0xb] = 0
                rsi_7[0xd] = 0
                
                if (r15_7 s> 0)
                    do
                        int32_t var_320_2 = 0
                        int32_t r13_4 = 0
                        
                        if (r14_5 s> 0)
                            int32_t rcx_44 = arg3
                            int32_t rbx_3 = rcx_44 + rax_52
                            int32_t var_310_1 = rbx_3
                            int32_t rax_54 = rbx_3 * r12_1
                            int32_t var_2e8_1 = rax_54
                            
                            do
                                int32_t r11_2 = rcx_44 + r13_4
                                var_354.d = r11_2
                                int32_t rdx_11 = *(*(rbp_4 + 0x40) + (sx.q(rax_54 + r11_2) << 2))
                                int32_t rax_58 = rdx_11 & 0xffffff
                                uint64_t r9_7 = zx.q(rax_58)
                                uint64_t rax_59 = zx.q(rax_58 + (rdx_11 u>> 0x18))
                                uint64_t var_2f8_3 = r9_7
                                
                                if (r9_7 u< rax_59)
                                    int64_t r10_2 = arg5
                                    uint64_t rdx_14 = r9_7 * 0xc
                                    uint64_t var_328_3 = rdx_14
                                    
                                    do
                                        int16_t rax_60 = *(r10_2 + (r9_7 << 1))
                                        int64_t r8_16 = *(rbp_4 + 0x48)
                                        int64_t var_2d0_1 = r8_16
                                        
                                        if (rax_60 != 0xffff)
                                            int16_t r15_8 = *(arg6 + zx.q(rax_60) * 0x30 + 0x2c)
                                            
                                            if (r15_8 == var_348_1.w)
                                                int32_t rcx_48 = r13_4
                                                
                                                if (rsi_7[0xa] s< r13_4)
                                                    rcx_48 = rsi_7[0xa]
                                                
                                                bool cond:9_1 = rsi_7[0xb] s> r13_4
                                                rsi_7[0xa] = rcx_48
                                                int32_t rcx_49 = r13_4
                                                
                                                if (cond:9_1)
                                                    rcx_49 = rsi_7[0xb]
                                                
                                                bool cond:10_1 = rsi_7[0xc] s< var_34c_1
                                                rsi_7[0xb] = rcx_49
                                                int32_t rcx_50 = var_34c_1
                                                
                                                if (cond:10_1)
                                                    rcx_50 = rsi_7[0xc]
                                                
                                                bool cond:11_1 = rsi_7[0xd] s> var_34c_1
                                                rsi_7[0xc] = rcx_50
                                                int32_t rcx_51 = var_34c_1
                                                
                                                if (cond:11_1)
                                                    rcx_51 = rsi_7[0xd]
                                                
                                                int32_t r12_2
                                                r12_2.b = 0
                                                rsi_7[0xd] = rcx_51
                                                int32_t rax_64 = var_34c_1 * r14_5
                                                r14_5.b = 0
                                                int64_t r13_5 = sx.q(rax_64 + r13_4)
                                                *(*(rsi_7 + 0x40) + (r13_5 << 1)) =
                                                    *(rdx_14 + r8_16) - rdi_3.w
                                                uint64_t rsi_8 = 0
                                                (*(rsi_7 + 0x48))[r13_5] = *(r9_7 + *(rbp_4 + 0x58))
                                                
                                                do
                                                    int32_t r8_18 = *(rdx_14 + r8_16 + 4)
                                                    char rbp_5 = (rsi_8 << 3).b
                                                    uint32_t r9_8 = zx.d((r8_18 u>> rbp_5).b)
                                                    uint128_t var_2c0
                                                    
                                                    if (r9_8 != 0xff)
                                                        uint64_t rcx_56 = zx.q(rsi_8.d) & 3
                                                        var_2c0 = data_142fc59d0
                                                        int32_t rdi_5 =
                                                            *(&var_2c0 + (rcx_56 << 2)) + r11_2
                                                        var_2c0 = data_14344e350
                                                        int32_t rbx_4 =
                                                            rbx_3 + *(&var_2c0 + (rcx_56 << 2))
                                                        uint64_t rdx_18 = zx.q((*(*(arg2 + 0x40) +
                                                            (sx.q(rbx_4 * var_308_1 + rdi_5) << 2))
                                                            & 0xffffff) + r9_8)
                                                        uint64_t r11_3 = zx.q(rdx_18.d)
                                                        int16_t rax_75 = *(r10_2 + (rdx_18 << 1))
                                                        int16_t r10_3
                                                        
                                                        if (rax_75 == 0xffff)
                                                            r10_3 = -1
                                                        else
                                                            r10_3 =
                                                                *(arg6 + zx.q(rax_75) * 0x30 + 0x2c)
                                                        
                                                        int32_t rax_78 = r8_18
                                                        int64_t r9_9 = *(arg2 + 0x58)
                                                        int64_t rcx_60 = r9_9
                                                        
                                                        if (*(r11_3 + r9_9) != 0 && r15_8 != r10_3)
                                                            r12_2 =
                                                                zx.d(r12_2.b) | 1 << (rsi_8.d u% 0x20)
                                                            uint32_t rdx_20 =
                                                                zx.d(*(*(arg2 + 0x48) + r11_3 * 0xc))
                                                            rax_78 = r8_18
                                                            rcx_60 = r9_9
                                                            
                                                            if (rdx_20 s> var_358_1)
                                                                rdx_20.w -= var_358_1.w
                                                                int64_t rcx_62 = *(var_318_2 + 0x40)
                                                                
                                                                if (*(rcx_62 + (r13_5 << 1))
                                                                        u> rdx_20.w)
                                                                    rdx_20.w = *(rcx_62 + (r13_5 << 1))
                                                                
                                                                *(rcx_62 + (r13_5 << 1)) = rdx_20.w
                                                                rcx_60 = *(arg2 + 0x58)
                                                                rax_78 = *(var_328_3 + var_2d0_1 + 4)
                                                        
                                                        r8_18 = rax_78
                                                        int32_t rbx_5
                                                        
                                                        if (*(r11_3 + rcx_60) != 0
                                                                && r15_8 == r10_3)
                                                            rbx_5 = rbx_4 - arg3
                                                        
                                                        if (*(r11_3 + rcx_60) == 0 || r15_8 != r10_3
                                                                || rdi_5 - arg3 s< 0 || rbx_5 s< 0
                                                                || rdi_5 - arg3 s>= var_350_2)
                                                            rdi_3 = var_358_1
                                                            r11_2 = var_354.d
                                                        else
                                                            rdi_3 = var_358_1
                                                            r11_2 = var_354.d
                                                            
                                                            if (rbx_5 s< var_30c_1)
                                                                r14_5 =
                                                                    zx.d(r14_5.b) | 1 << (rsi_8.d u% 0x20)
                                                    
                                                    rbp_4 = arg2
                                                    uint32_t r9_10 = zx.d((r8_18 u>> (rbp_5 + 8)).b)
                                                    
                                                    if (r9_10 != 0xff)
                                                        uint64_t rcx_65 = zx.q(rsi_8.d + 1) & 3
                                                        var_2c0 = data_142fc59d0
                                                        int32_t rbx_7 =
                                                            *(&var_2c0 + (rcx_65 << 2)) + r11_2
                                                        var_2c0 = data_14344e350
                                                        int32_t r11_5 =
                                                            var_310_1 + *(&var_2c0 + (rcx_65 << 2))
                                                        uint64_t rdx_25 = zx.q((*(*(rbp_4 + 0x40) +
                                                            (sx.q(r11_5 * var_308_1 + rbx_7) << 2))
                                                            & 0xffffff) + r9_10)
                                                        int16_t rax_87 = *(arg5 + (rdx_25 << 1))
                                                        int16_t r9_11
                                                        
                                                        if (rax_87 == 0xffff)
                                                            r9_11 = -1
                                                        else
                                                            r9_11 =
                                                                *(arg6 + zx.q(rax_87) * 0x30 + 0x2c)
                                                        
                                                        int64_t r8_20 = *(rbp_4 + 0x58)
                                                        int64_t rax_90 = r8_20
                                                        
                                                        if (*(rdx_25 + r8_20) != 0
                                                                && r15_8 != r9_11)
                                                            r12_2 = zx.d(r12_2.b)
                                                                | 1 << ((rsi_8 + 1).d u% 0x20)
                                                            uint32_t rdx_26 =
                                                                zx.d(*(*(rbp_4 + 0x48) + rdx_25 * 0xc))
                                                            rax_90 = r8_20
                                                            
                                                            if (rdx_26 s> rdi_3)
                                                                rdx_26.w -= rdi_3.w
                                                                int64_t rcx_70 = *(var_318_2 + 0x40)
                                                                
                                                                if (*(rcx_70 + (r13_5 << 1))
                                                                        u> rdx_26.w)
                                                                    rdx_26.w = *(rcx_70 + (r13_5 << 1))
                                                                
                                                                *(rcx_70 + (r13_5 << 1)) = rdx_26.w
                                                                rax_90 = *(rbp_4 + 0x58)
                                                        
                                                        if (*(zx.q(rdx_25.d) + rax_90) != 0
                                                                && r15_8 == r9_11)
                                                            int32_t r11_6 = r11_5 - arg3
                                                            
                                                            if (rbx_7 - arg3 s>= 0 && r11_6 s>= 0
                                                                    && rbx_7 - arg3 s< var_350_2
                                                                    && r11_6 s< var_30c_1)
                                                                r14_5 = zx.d(r14_5.b)
                                                                    | 1 << ((rsi_8 + 1).d u% 0x20)
                                                    
                                                    rdx_14 = var_328_3
                                                    rsi_8 = zx.q(rsi_8.d + 2)
                                                    r8_16 = var_2d0_1
                                                    r10_2 = arg5
                                                    r11_2 = var_354.d
                                                    rbx_3 = var_310_1
                                                while (rsi_8.d s< 4)
                                                
                                                rsi_7 = var_318_2
                                                r9_7 = var_2f8_3
                                                r12_2.b <<= 4
                                                r12_2.b |= r14_5.b
                                                r14_5 = var_350_2
                                                char* rax_95 = *(rsi_7 + 0x50)
                                                rax_95[r13_5] |= r12_2.b
                                                r13_4 = var_320_2
                                        
                                        r9_7 += 1
                                        rdx_14 += 0xc
                                        var_2f8_3 = r9_7
                                        var_328_3 = rdx_14
                                    while (r9_7 s< rax_59)
                                
                                rax_54 = var_2e8_1
                                r13_4 += 1
                                rcx_44 = arg3
                                var_320_2 = r13_4
                            while (r13_4 s< r14_5)
                            
                            r15_7 = var_30c_1
                            r12_1 = var_308_1
                            rax_52 = var_34c_1
                        
                        rax_52 += 1
                        var_34c_1 = rax_52
                    while (rax_52 s< r15_7)
                    
                    r13_3 = var_348_1
                
                sub_14262b110(rsi_7)
                
                if (rsi_7[0xa] s> rsi_7[0xb])
                    *(rsi_7 + 0x28) = 0
                
                if (rsi_7[0xc] s> rsi_7[0xd])
                    *(rsi_7 + 0x30) = 0
                
                rcx_36 = arg8
                r13_3 += 1
                count_1 = count_2
                var_348_1 = r13_3
                count = zx.q(count_1 * 2)
                
                if (r13_3 s>= rcx_36[1].d)
                    goto label_142620424_2
            
            sub_14262d160(arg1, 3, r8_11, count_3)
            count.b = 0
    else
        sub_14262d160(arg1, 3, "SplitAndStoreLayerRegions: Out of memory 'layers' (%d).", 
            zx.q(rax_41.d))
        count.b = 0

if (var_330 != 0)
    data_143b502b0(var_330)

__security_check_cookie(rax_1 ^ &var_378)
return zx.q(count.b)
