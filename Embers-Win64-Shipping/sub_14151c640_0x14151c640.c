// 函数: sub_14151c640
// 地址: 0x14151c640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5b8
int64_t var_58 = __security_cookie ^ &var_5b8
void** rsi = nullptr
int32_t var_560 = 0
int32_t var_580 = 0
sub_140b33630("VirtualTextureSystem_Update")

if (arg1[0x52].b != 0)
    int32_t i = 0
    
    if (arg1[0x24] s> 0)
        do
            void* rbx_1 = *(rsi + *(arg1 + 0x88))
            
            if (rbx_1 != 0)
                sub_141509820(rbx_1 + 0x20, arg1, &arg1[0xa4])
                sub_141505d00(rbx_1 + 0x20, arg1)
            
            i += 1
            rsi = &rsi[1]
        while (i s< arg1[0x24])
    
    arg1[0x52].b = 0

sub_141504b40(arg1)

if (arg1[0x40] != arg1[0x4b])
    int32_t var_598
    
    if (arg4 != 0 && data_143ec4fac u> 0)
        void* rcx_6 = *(zx.q(data_143ec4fa8) * 0x50 + 0x143ec4e98)
        
        if (*(rcx_6 + 0xc) == 0)
            int32_t rax_4 = 0
            
            if (0 == *(rcx_6 + 8))
                *(rcx_6 + 8) = 0
            else
                rax_4 = *(rcx_6 + 8)
            
            if (rax_4 s> 0)
                int64_t* rcx_7 = data_143f0f180
                var_598 = 0xffffffff
                void var_488
                
                if ((*(*rcx_7 + 0x328))(rcx_7, 
                        *(data_143ec4f90 + (sx.q(data_143ec4fa8) + 1) * 0x10), &var_488, 0, var_598) != 0)
                    sub_1413e8430(arg4)
    
    char var_588 = 0
    char* var_490_1 = &var_588
    void*** (* var_498)() = j_sub_140597fc0
    void* rax_7 = sub_140a756e0(&var_498, &data_143958018)
    int64_t* r13_1 = rax_7 + 0x10
    int64_t* var_528 = r13_1
    int64_t rcx_10 = *r13_1
    int64_t rcx_11 = r13_1[2]
    char var_510_1 = 0
    int64_t rcx_12 = r13_1[3]
    r13_1[3] = &var_528
    int64_t* rcx_13 = var_528
    int64_t* var_548_1 = r13_1
    rcx_13[4].d += 1
    char* rax_8 = sub_14081d830(0xa00c, r13_1, 1, 0)
    char* var_540_1 = rax_8
    char* rbx_2 = rax_8
    
    if (rax_8 == 0)
        rbx_2 = nullptr
        var_540_1 = nullptr
    else
        *rax_8 = 0
        *(rax_8 + 4) = 0
    
    if (*rbx_2 == 0)
        memset(&rbx_2[0xc], 0xff, 0x4000)
        *rbx_2 = 1
    
    int64_t rax_9 = *r13_1
    int64_t rax_10 = r13_1[2]
    int64_t rax_11 = r13_1[3]
    int64_t* var_500
    r13_1[3] = &var_500
    var_500 = r13_1
    char var_4e8_1 = 0
    r13_1[4].d += 1
    void var_18c
    void* rcx_16 = &var_18c
    int32_t i_2 = 0
    int32_t rsi_1 = 0
    int64_t i_13 = 4
    int64_t i_1
    
    do
        *(rcx_16 - 0x2c) = 0
        *(rcx_16 - 0x24) = 0
        __builtin_memset(rcx_16 - 0x14, 0, 0x18)
        __builtin_memset(rcx_16 + 4, 0, 0x28)
        rcx_16 += 0x58
        i_1 = i_13
        i_13 -= 1
    while (i_1 != 1)
    
    if (*(data_143eefa18 + 4) != 0)
        void var_1a4
        void* rdi_1 = &var_1a4
        
        do
            void var_1b8
            
            if (sub_14150b7e0(0x143ec4e40, arg2, &var_1b8 + zx.q(i_2) * 0x58) == 0)
                break
            
            rsi_1 += *rdi_1
            i_2 += 1
            rdi_1 += 0x58
        while (i_2 u< 1)
    
    void* rax_15 = data_143eefa48
    int32_t rdi_2 = 0
    int32_t var_570_1 = 0
    int128_t var_438
    __builtin_memset(&var_438, 0, 0x24)
    int32_t rcx_18 = *(rax_15 + 4)
    int64_t var_410
    __builtin_memset(&var_410, 0, 0x24)
    int128_t var_3e8
    __builtin_memset(&var_3e8, 0, 0x24)
    int64_t var_3c0
    __builtin_memset(&var_3c0, 0, 0x24)
    int128_t var_398
    __builtin_memset(&var_398, 0, 0x24)
    int64_t var_370
    __builtin_memset(&var_370, 0, 0x24)
    int128_t var_348
    __builtin_memset(&var_348, 0, 0x24)
    int64_t var_320
    __builtin_memset(&var_320, 0, 0x24)
    int128_t var_2f8
    __builtin_memset(&var_2f8, 0, 0x24)
    int64_t var_2d0
    __builtin_memset(&var_2d0, 0, 0x24)
    int128_t var_2a8
    __builtin_memset(&var_2a8, 0, 0x24)
    int64_t var_280
    __builtin_memset(&var_280, 0, 0x24)
    int128_t var_258
    __builtin_memset(&var_258, 0, 0x24)
    int64_t var_230
    __builtin_memset(&var_230, 0, 0x24)
    int128_t var_208
    __builtin_memset(&var_208, 0, 0x24)
    int64_t var_1e0
    __builtin_memset(&var_1e0, 0, 0x24)
    int32_t rax_16
    
    if (rcx_18 u>= 1)
        rax_16 = 0x10
        
        if (rcx_18 u< 0x10)
            rax_16 = rcx_18
    else
        rax_16 = 1
    
    int32_t rcx_19 = 1
    uint32_t r8_3 = 1
    
    if (rsi_1 u>= 1)
        rcx_19 = rsi_1
    
    uint32_t temp0_1 = divu.dp.d(0:rax_16, rcx_19)
    
    if (temp0_1 u>= 1)
        r8_3 = temp0_1
    
    uint32_t var_56c_1 = r8_3
    uint64_t j_4
    
    if (i_2 != 0)
        void var_1a8
        void* r10_2 = &var_1a8
        uint64_t rax_18 = zx.q(i_2)
        void* var_550_1 = &var_1a8
        j_4 = rax_18
        uint64_t i_3
        
        do
            int64_t j_6 = sx.q(*(r10_2 + 4))
            var_580.q = j_6
            
            if (j_6 s> 0)
                void* r14_1 = r10_2 + 0xc
                int64_t j
                
                do
                    int32_t r15_2 = *(r14_1 + 8) - *r14_1
                    int32_t rsi_2 = 0
                    uint32_t temp0_2 = divu.dp.d(0:(r8_3 - 1 + r15_2), r8_3)
                    
                    if (r15_2 != 0)
                        do
                            uint32_t rbx_4 = r15_2 - rsi_2
                            
                            if (temp0_2 u<= rbx_4)
                                rbx_4 = temp0_2
                            
                            if (rbx_4 != 0)
                                uint64_t rcx_20 = zx.q(rdi_2)
                                var_570_1 = rdi_2 + 1
                                uint64_t rdi_4 = rcx_20 * 5
                                *(&var_438 + (rdi_4 << 3)) = arg1
                                char* rax_23
                                
                                if (rcx_20.d != 0)
                                    rax_23 = (*r13_1 + 0xf) & 0xfffffffffffffff0
                                    void* rcx_21 = &rax_23[0xa00c]
                                    
                                    if (rcx_21 u> *(rax_7 + 0x18))
                                        sub_140b0e3d0(r13_1, 0xa01c)
                                        r10_2 = var_550_1
                                        rax_23 = (*r13_1 + 0xf) & 0xfffffffffffffff0
                                        rcx_21 = &rax_23[0xa00c]
                                    
                                    *r13_1 = rcx_21
                                    
                                    if (rax_23 == 0)
                                        rax_23 = nullptr
                                    else
                                        *rax_23 = 0
                                        *(rax_23 + 4) = 0
                                else
                                    rax_23 = var_540_1
                                
                                int64_t var_428
                                (&var_428)[rdi_4] = rax_23
                                int32_t r9 = *r10_2
                                int64_t r8_4 = sx.q(*(r14_1 - 4))
                                int32_t rdx_14 = *r14_1 + rsi_2
                                int64_t rax_28 = *(r10_2 - 0x10)
                                rsi_2 += rbx_4
                                int32_t var_418
                                (&var_418)[rdi_4 * 2] = r9
                                int64_t var_420
                                *(&var_420:4 + (rdi_4 << 3)) = rbx_4
                                int32_t rax_30 = *(r14_1 + 4) - r8_4.d
                                *(&var_438:8 + (rdi_4 << 3)) =
                                    rax_28 + ((zx.q(rdx_14 * r9) + r8_4) << 2)
                                (&var_420)[rdi_4].d = rax_30
                                rdi_2 = var_570_1
                        while (rsi_2 u< r15_2)
                        
                        j_6 = var_580.q
                        r8_3 = var_56c_1
                    
                    r14_1 += 0x10
                    j = j_6
                    j_6 -= 1
                    var_580.q = j_6
                while (j != 1)
                rax_18 = j_4
            
            r10_2 += 0x58
            i_3 = rax_18
            rax_18 -= 1
            var_550_1 = r10_2
            j_4 = rax_18
        while (i_3 != 1)
    
    uint64_t r12_2 = zx.q(rdi_2)
    void* var_448_1 = nullptr
    
    if (*(data_143eefa30 + 4) != 0)
        r12_2 = 1
    
    int32_t i_18 = 0
    int32_t i_20 = rdi_2 - r12_2.d
    int32_t var_580_1 = r12_2.d
    int32_t i_21 = i_20
    int32_t var_43c_1 = 4
    void var_468
    
    if (i_20 s> 0)
        if (i_20 s> 4)
            sub_14085a940(&var_468, i_20)
            i_20 = i_21
        
        if (r12_2.d u< rdi_2)
            int32_t r13_2 = var_560
            int64_t i_16 = sx.q(i_20)
            void* r14_2 = &var_438 + r12_2 * 0x28
            int64_t i_4
            
            do
                int64_t* lpTlsValue_1 = TlsGetValue(data_143cf0950)
                int64_t* lpTlsValue = lpTlsValue_1
                
                if (lpTlsValue_1 == 0)
                    int64_t* lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
                    lpTlsValue = lpTlsValue_2
                    
                    if (lpTlsValue_2 == 0)
                        lpTlsValue = lpTlsValue_2
                    else
                        __builtin_memset(lpTlsValue, 0, 0x14)
                    
                    TlsSetValue(data_143cf0950, lpTlsValue)
                
                void*** rdi_5 = lpTlsValue[1]
                int32_t rcx_30
                
                if (rdi_5 != 0)
                    rcx_30 = lpTlsValue[2].d
                else
                    int64_t rax_32 = *lpTlsValue
                    
                    if (rax_32 == 0)
                        int64_t rax_33 = sub_14059e7c0(&data_143cf0958)
                        lpTlsValue[1] = rax_33
                        
                        if (rax_33 == 0)
                            int64_t* rax_34 = sub_140a82f70(0x2000, 0)
                            lpTlsValue[1] = rax_34
                            int64_t j_7 = 0x1f
                            int64_t* rcx_29
                            int64_t j_1
                            
                            do
                                rcx_29 = &rax_34[0x20]
                                *rax_34 = rcx_29
                                rax_34 = rcx_29
                                j_1 = j_7
                                j_7 -= 1
                            while (j_1 != 1)
                            *rcx_29 = 0
                    else
                        lpTlsValue[1] = rax_32
                        *lpTlsValue = 0
                    
                    rdi_5 = lpTlsValue[1]
                    rcx_30 = 0x20
                    lpTlsValue[2].d = 0x20
                
                lpTlsValue[1] = *rdi_5
                lpTlsValue[2].d = rcx_30 - 1
                int64_t* var_4b0
                int64_t** rax_37 = sub_140a228d0(&var_4b0)
                r13_2 = (r13_2 | 2) & 0xfffffffd
                int64_t* rcx_32 = *rax_37
                *rax_37 = nullptr
                *rdi_5 = &data_142d40498
                int64_t* var_480_1 = rcx_32
                rdi_5[1].d = 0xff
                *(rdi_5 + 0xc) = 1
                *rdi_5 = &data_142fbbb38
                rdi_5[7].b = 0
                rdi_5[8] = rcx_32
                int64_t* rcx_33 = var_4b0
                
                if (rcx_33 != 0)
                    rcx_33[9].d -= 1
                    
                    if (rcx_33[9].d == 1)
                        sub_140a2f6e0(rcx_33)
                
                if ((1 & r13_2.b) != 0)
                    r13_2 &= 0xfffffffe
                    int64_t* var_4a8
                    
                    if (var_4a8 != 0)
                        var_4a8[9].d -= 1
                        
                        if (var_4a8[9].d == 1)
                            sub_140a2f6e0(var_4a8)
                
                int128_t zmm1_1 = *(r14_2 + 0x10)
                *(rdi_5 + 0x10) = *r14_2
                uint128_t zmm0_1 = zx.o(*(r14_2 + 0x20))
                *(rdi_5 + 0x20) = zmm1_1
                rdi_5[6] = zmm0_1.q
                void* rbx_5 = rdi_5[8]
                
                if (rbx_5 != 0)
                    *(rbx_5 + 0x48) += 1
                
                sub_141513310(rdi_5, nullptr, 0xff, 1)
                int64_t i_23 = sx.q(i_18)
                int32_t i_22 = (i_23 + 1).d
                i_18 = i_22
                
                if (i_22 s> var_43c_1)
                    sub_14083a490(&var_468, i_23.d)
                
                void* rcx_38 = &var_468
                
                if (var_448_1 != 0)
                    rcx_38 = var_448_1
                
                r14_2 += 0x28
                *(rcx_38 + (i_23 << 3)) = rbx_5
                i_4 = i_16
                i_16 -= 1
            while (i_4 != 1)
            r13_1 = var_548_1
            rdi_2 = var_570_1
            r12_2 = zx.q(var_580_1)
    
    if (rdi_2 != 0)
        int64_t i_12 = sx.q(r12_2.d)
        var_580_1.q = i_12
        
        if (r12_2.d s> 0)
            void* r13_4 = &var_438:8
            int64_t i_5
            
            do
                char* r14_3 = *(r13_4 + 8)
                
                if (*r14_3 == 0)
                    memset(&r14_3[0xc], 0xff, 0x4000)
                    i_12 = var_580_1.q
                    *r14_3 = 1
                
                int32_t rdx_20 = -1
                int64_t rcx_40 = *r13_4
                int32_t r8_5 = 0
                int32_t k_2 = *(r13_4 + 0x10)
                int32_t j_2 = 0
                
                if (*(r13_4 + 0x14) u> 0)
                    do
                        int32_t* rbx_6 = rcx_40 + (zx.q(j_2 * *(r13_4 + 0x18)) << 2)
                        
                        if (k_2 != 0)
                            uint64_t k_1 = zx.q(k_2)
                            uint64_t k
                            
                            do
                                int32_t rdi_6 = *rbx_6
                                
                                if (rdi_6 != rdx_20)
                                    if (rdx_20 != 0xffffffff)
                                        sub_1414fd540(r14_3, rdx_20, r8_5)
                                    
                                    rdx_20 = rdi_6
                                    r8_5 = 1
                                else
                                    r8_5 += 1
                                
                                rbx_6 = &rbx_6[1]
                                k = k_1
                                k_1 -= 1
                            while (k != 1)
                            k_2 = *(r13_4 + 0x10)
                            rcx_40 = *r13_4
                        
                        j_2 += 1
                    while (j_2 u< *(r13_4 + 0x14))
                    
                    if (rdx_20 != 0xffffffff)
                        sub_1414fd540(r14_3, rdx_20, r8_5)
                    
                    i_12 = var_580_1.q
                
                r13_4 += 0x28
                i_5 = i_12
                i_12 -= 1
                var_580_1.q = i_12
            while (i_5 != 1)
            r13_1 = var_548_1
            rdi_2 = var_570_1
        
        if (i_21 s> 0)
            int64_t* rax_43 = sub_140a242a0()
            int64_t r9_1 = *rax_43
            (*(r9_1 + 0x48))(rax_43, &var_468, zx.q(data_14399e5e0), r9_1, var_598)
    
    void* rsi_3
    
    if (rdi_2 u> 1)
        int128_t var_408
        rsi_3 = &var_408:8
        uint64_t i_15 = zx.q(rdi_2 - 1)
        uint64_t i_6
        
        do
            void* rdi_7 = *rsi_3
            int32_t j_3 = 0
            
            if (*(rdi_7 + 4) u> 0)
                do
                    uint64_t j_5 = zx.q(j_3)
                    sub_1414fd540(var_540_1, *(rdi_7 + (j_5 << 2) + 0x400c), 
                        zx.d(*(rdi_7 + (j_5 << 1) + 0x800c)))
                    j_3 += 1
                while (j_3 u< *(rdi_7 + 4))
            
            rsi_3 += 0x28
            i_6 = i_15
            i_15 -= 1
        while (i_6 != 1)
        r13_1 = var_548_1
    
    void* rbx_7 = &var_468
    int32_t i_14 = i_18
    
    if (var_448_1 != 0)
        rbx_7 = var_448_1
    
    if (i_14 != 0)
        int32_t i_7
        
        do
            int64_t* rcx_46 = *rbx_7
            
            if (rcx_46 != 0)
                rcx_46[9].d -= 1
                
                if (rcx_46[9].d == 1)
                    sub_140a2f6e0(rcx_46)
            
            rbx_7 += 8
            i_7 = i_14
            i_14 -= 1
        while (i_7 != 1)
    
    if (var_448_1 != 0)
        sub_140a74f90(var_448_1)
    
    int64_t* rbx_8 = &var_58
    int64_t i_8
    
    for (i_8 = 4; i_8 != 0; )
        int64_t rcx_48 = rbx_8[-0xb]
        rbx_8 = &rbx_8[-0xb]
        i_8 -= 1
        
        if (rcx_48 != 0)
            sub_140a74f90(rcx_48)
    
    if (var_4e8_1 == i_8.b)
        int64_t* rax_45 = var_500
        char var_4e8_2 = 1
        rax_45[4].d -= 1
        int64_t* rcx_49 = var_500
        
        if (rax_10 != rcx_49[2])
            sub_140b16b40(rcx_49, rax_10)
            rcx_49 = var_500
        
        *rcx_49 = rax_9
        var_500[3] = rax_11
    
    void* rax_48 = sub_14081d830(0xb038, r13_1, 1, 0)
    int32_t i_9
    void* r15_3
    
    if (rax_48 == 0)
        i_9 = 0
        r15_3 = nullptr
    else
        r15_3 = sub_1414fa970(rax_48, rax_7)
        i_9 = 0
    
    void* var_550_2 = r15_3
    memset(r15_3, 0xff, 0x800)
    memset(r15_3 + 0x2800, 0xff, 0x800)
    memset(r15_3 + 0x6e00, 0xff, 0x400)
    int32_t* rbx_9 = arg1
    void* rcx_55 = &rbx_9[0x6e]
    int32_t* r12_3 = *rcx_55
    void* rax_51 = &r12_3[sx.q(*(rcx_55 + 8)) * 2]
    var_580_1.q = rax_51
    
    if (r12_3 != rax_51)
        void* r13_6 = rax_51
        
        do
            int32_t rax_52 = *r12_3
            uint64_t rcx_57 = zx.q(rax_52) & 0x3fffff
            void* const r14_6
            
            if (rcx_57.d u< rbx_9[0x28])
                r14_6 = rcx_57 * 0x60 + *(rbx_9 + 0x98)
            
            if (rcx_57.d u>= rbx_9[0x28] || *(r14_6 + 0x5c) != (rax_52 u>> 0x16).w)
                r14_6 = nullptr
            
            if (r14_6 != 0)
                rsi_3.b = 0
                
                if (*(r14_6 + 0x26) u> 0)
                    j_4.d = rax_52
                    
                    do
                        uint64_t rcx_60 = zx.q(*(zx.q(i_9) + r14_6 + 0x30))
                        void* r10_3 = *(*(r14_6 + 0x38) + (rcx_60 << 3))
                        j_4:4.d = rcx_60.d << 0x1c | (r12_3[1] & 0xfffffff)
                        int64_t rcx_66 = (j_4 u>> 0x21 ^ j_4) * -0xae502812aa7333
                        int64_t r8_11 = (rcx_66 u>> 0x21 ^ rcx_66) * -0x3b314601e57a13ad
                        int32_t r8_12 = *(*(r10_3 + 0x80)
                            + (((r8_11 u>> 0x21 ^ r8_11) & zx.q(*(r10_3 + 0x74))) << 2))
                        
                        if (r8_12 == 0xffffffff)
                        label_14151d331:
                            rsi_3 = zx.q(rsi_3.b) | zx.q(1 << (i_9 u% 0x20))
                        else
                            while (*(*(r10_3 + 0x90) + (sx.q(r8_12) << 3)) != j_4)
                                r8_12 = *(*(r10_3 + 0x88) + (zx.q(r8_12) << 2))
                                
                                if (r8_12 == 0xffffffff)
                                    goto label_14151d331_1
                            
                            if (r8_12 == 0xffffffff)
                            label_14151d331_1:
                                rsi_3 = zx.q(rsi_3.b) | zx.q(1 << (i_9 u% 0x20))
                            else
                                uint64_t rbx_10 = zx.q(r8_12.w)
                                int16_t r11_1 = *(*(r10_3 + 0x68) + (rbx_10 << 1))
                                
                                if (r11_1 != 0xffff)
                                    int64_t rcx_71 = *(r10_3 + 0x58)
                                    uint64_t r8_13 = zx.q(r11_1)
                                    int32_t r9_3 = *(*(r10_3 + 0x60) + (rbx_10 << 2))
                                    *(r10_3 + 0x48) -= 1
                                    *(rcx_71 + (r8_13 << 1)) =
                                        *(rcx_71 + (zx.q(*(r10_3 + 0x48)) << 1))
                                    *(*(r10_3 + 0x68)
                                        + (zx.q(*(*(r10_3 + 0x58) + (r8_13 << 1))) << 1)) = r11_1
                                    *(*(r10_3 + 0x68) + (rbx_10 << 1)) = 0xffff
                                    
                                    if (r9_3 u>= *(*(r10_3 + 0x60)
                                            + (zx.q(*(*(r10_3 + 0x58) + (r8_13 << 1))) << 2)))
                                        sub_14151c590(r10_3 + 0x48, r11_1)
                                    else
                                        sub_141505070(r10_3 + 0x48, r11_1)
                        
                        i_9 += 1
                    while (i_9 u< zx.d(*(r14_6 + 0x26)))
                    
                    r15_3 = var_550_2
                    r13_6 = var_580_1.q
                    
                    if (rsi_3.b != 0)
                        int32_t var_55c_1 = r12_3[1] & 0xfffffff
                        int64_t rax_71 = (*r12_3).q
                        int64_t rcx_76 = (rax_71 u>> 0x21 ^ rax_71) * -0xae502812aa7333
                        int64_t rdx_37 = (rcx_76 u>> 0x21 ^ rcx_76) * -0x3b314601e57a13ad
                        uint64_t r9_5 = (zx.q((rdx_37 u>> 0x21).w) ^ zx.q(rdx_37.w)) & 0x3ff
                        int16_t rcx_79 = *(r15_3 + (r9_5 << 1))
                        
                        if (rcx_79 == 0xffff)
                        label_14151d46c:
                            uint64_t r8_14 = zx.q(*(r15_3 + 0xb028))
                            
                            if (r8_14.d u< 0x1000)
                                uint64_t rdx_39 = zx.q(r8_14.w)
                                *(r15_3 + 0xb028) = (r8_14 + 1).d
                                *(r15_3 + (rdx_39 << 1) + 0x800) = *(r15_3 + (r9_5 << 1))
                                *(r15_3 + (r9_5 << 1)) = rdx_39.w
                                *(*(r15_3 + 0xb000) + (r8_14 << 3)) = rax_71
                                *(*(r15_3 + 0xb018) + (r8_14 << 1)) = 0xffff
                                *(r8_14 + *(r15_3 + 0xb020)) = rsi_3.b
                                *(r15_3 + 0xb02c) += 1
                        else
                            while (true)
                                uint64_t rcx_80 = zx.q(rcx_79)
                                
                                if (rax_71 == *(*(r15_3 + 0xb000) + (rcx_80 << 3)))
                                    int64_t rax_76 = *(r15_3 + 0xb018)
                                    
                                    if (*(rax_76 + (rcx_80 << 1)) != 0xffff)
                                        *(rax_76 + (rcx_80 << 1)) = 0xffff
                                        *(r15_3 + 0xb02c) += 1
                                    
                                    char* rax_77 = *(r15_3 + 0xb020)
                                    rax_77[rcx_80] |= rsi_3.b
                                    break
                                
                                rcx_79 = *(r15_3 + (rcx_80 << 1) + 0x800)
                                
                                if (rcx_79 == 0xffff)
                                    goto label_14151d46c
                    
                    rbx_9 = arg1
            
            r12_3 = &r12_3[2]
            i_9 = 0
        while (r12_3 != r13_6)
        
        r13_1 = var_548_1
    
    int32_t rax_74 = *(rcx_55 + 0xc)
    *(rcx_55 + 8) = 0
    
    if (rax_74 s< 0 && rax_74 != 0)
        sub_1405c5570(rcx_55, 0)
    
    int32_t* rsi_5 = nullptr
    int32_t* var_568 = nullptr
    int32_t rdi_8 = 0
    void* rdi_10
    int32_t r12_4
    int32_t* r13_7
    
    if (rbx_9[0x6c] s<= 0)
        r12_4 = 1
        rdi_10 = rax_7
        r13_7 = arg1
    else
        EnterCriticalSection(&rbx_9[0x60])
        void var_478
        int32_t rax_75
        
        if (&var_478 == &arg1[0x6a])
            rax_75 = arg1[0x6d]
        else
            rsi_5 = *(arg1 + 0x1a8)
            rax_75 = 0
            *(arg1 + 0x1a8) = 0
            rdi_8 = arg1[0x6c]
            var_568 = rsi_5
            arg1[0x6d] = 0
        
        arg1[0x6c] = 0
        
        if (rax_75 s< 0 && arg1[0x6d] != 0)
            sub_1405dadb0(&arg1[0x6a], 0)
        
        if (rbx_9 != -0x180)
            LeaveCriticalSection(&rbx_9[0x60])
        
        r12_4 = 1
        
        if (rdi_8 s<= 0)
            rdi_10 = rax_7
            r13_7 = arg1
        else
            int64_t rax_78 = *r13_1
            int64_t rax_79 = r13_1[2]
            int64_t rax_80 = r13_1[3]
            int64_t* var_4d8
            r13_1[3] = &var_4d8
            var_4d8 = r13_1
            char var_4c0_1 = 0
            r13_1[4].d += 1
            int64_t* rax_81 = sub_14081d830(0xa00c, r13_1, 1, 0)
            int64_t* rbx_12 = rax_81
            
            if (rax_81 == 0)
                rbx_12 = nullptr
            else
                *rax_81 = 0
                *(rax_81 + 4) = 0
            
            if (*rbx_12 == 0)
                memset(rbx_12 + 0xc, 0xff, 0x4000)
                *rbx_12 = 1
            
            int64_t rdi_9 = 0
            void* rcx_89 = &rsi_5[sx.q(rdi_8)]
            uint64_t r14_10 = (rcx_89 - rsi_5 + 3) u>> 2
            
            if (rsi_5 u> rcx_89)
                r14_10 = 0
            
            if (r14_10 != 0)
                do
                    sub_1414fd540(rbx_12, *rsi_5, 0xffff)
                    rdi_9 += 1
                    rsi_5 = &rsi_5[1]
                while (rdi_9 != r14_10)
            
            r13_7 = arg1
            rdi_10 = rax_7
            var_598.q = rdi_10
            sub_141507bd0(r13_7, r15_3, rbx_12, *r13_7, var_598)
            
            if (var_4c0_1 == 0)
                int64_t* rax_83 = var_4d8
                char var_4c0_2 = 1
                rax_83[4].d -= 1
                int64_t* rcx_92 = var_4d8
                
                if (rax_79 != rcx_92[2])
                    sub_140b16b40(rcx_92, rax_79)
                    rcx_92 = var_4d8
                
                *rcx_92 = rax_78
                var_4d8[3] = rax_80
    
    int32_t r9_7 = *r13_7
    int32_t rax_86 = data_1439b73a0
    
    if (r9_7 u>= rax_86)
        var_598.q = rdi_10
        sub_141507bd0(r13_7, r15_3, var_540_1, r9_7 - rax_86, var_598)
    
    int32_t rax_87 = sub_142437140()
    int32_t rdx_47 = r13_7[0xb1] - r13_7[0xa6] + rax_87
    
    if (rdx_47 s>= 1)
        r12_4 = rdx_47
    
    sub_1415138a0(r15_3, &r13_7[0x26], rdi_10, r12_4, var_598.b)
    sub_14151b370(r13_7, &r13_7[0xa4], 0, arg2, arg3)
    sub_1415128c0(&r13_7[0xa4])
    sub_14151b370(r13_7, &r13_7[0x90], 0, arg2, arg3)
    sub_1415128c0(&r13_7[0x90])
    int32_t var_598_2
    var_598_2.q = r15_3
    sub_14151a4e0(r13_7, arg2, arg3, rdi_10, var_598_2, 1)
    int32_t i_19 = r13_7[0x24]
    int64_t* rdi_11 = nullptr
    int32_t r12_5 = 0
    int32_t r14_12 = 0
    
    if (i_19 s> 0)
        int64_t* rsi_7 = *(r13_7 + 0x88)
        uint64_t i_17 = zx.q(i_19)
        uint64_t i_10
        
        do
            void* r10_4 = *rsi_7
            
            if (r10_4 != 0)
                int32_t rax_88 = *r13_7
                int32_t r8_19 = 0
                int32_t r11_2 = *(r10_4 + 0xb0)
                int32_t r9_13 = 0
                r12_5 += r11_2
                int32_t rbx_13 = rax_88 - 5
                
                if (rax_88 u<= 5)
                    rbx_13 = 0
                
                if (r11_2 != 0)
                    do
                        uint64_t rcx_101 = zx.q(r9_13.w)
                        int32_t rdx_52 = r8_19 + 1
                        
                        if (*(*(r10_4 + 0x68) + (rcx_101 << 1)) != 0xffff
                                && *(*(r10_4 + 0x60) + (rcx_101 << 2)) u>> 4 u<= rbx_13)
                            rdx_52 = r8_19
                        
                        r9_13 += 1
                        r8_19 = rdx_52
                    while (r9_13 u< r11_2)
                    
                    rdi_11 = nullptr
                
                r14_12 += r8_19
            
            rsi_7 = &rsi_7[1]
            i_10 = i_17
            i_17 -= 1
        while (i_10 != 1)
    
    int128_t zmm2_1
    
    if (i_19 s<= 0 || r12_5 == 0)
        zmm2_1 = zx.o(0)
    else
        zmm2_1.d = float.s(zx.q(r14_12))
        zmm2_1.d = zmm2_1.d f/ float.s(zx.q(r12_5))
    
    sub_140b43f30("VirtualTexturePageUsage", 0, zmm2_1, 0)
    int32_t i_11 = 0
    
    if (r13_7[0x24] s> 0)
        do
            void*** rbx_14 = *(rdi_11 + *(r13_7 + 0x88))
            
            if (rbx_14 != 0 && *(rbx_14 + 0x1bc) == 0)
                sub_14198bce0(rbx_14)
                sub_1414fbc60(rbx_14)
                j_sub_140a74f90(rbx_14)
                *(rdi_11 + *(r13_7 + 0x88)) = 0
            
            i_11 += 1
            rdi_11 = &rdi_11[1]
        while (i_11 s< r13_7[0x24])
    
    if (var_568 != 0)
        sub_140a74f90(var_568)
    
    if (var_510_1 == 0)
        int64_t* rax_94 = var_528
        char var_510_2 = 1
        rax_94[4].d -= 1
        int64_t* rcx_108 = var_528
        
        if (rcx_11 != rcx_108[2])
            sub_140b16b40(rcx_108, rcx_11)
            rcx_108 = var_528
        
        *rcx_108 = rcx_10
        var_528[3] = rcx_12
        int64_t var_520_2 = 0
else
    sub_1415128c0(&arg1[0xa4])

int64_t result = sub_140b37f60("VirtualTextureSystem_Update")
__security_check_cookie(var_58 ^ &var_5b8)
return result
