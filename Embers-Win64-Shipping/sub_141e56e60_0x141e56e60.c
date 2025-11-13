// 函数: sub_141e56e60
// 地址: 0x141e56e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
int64_t var_58 = __security_cookie ^ &var_4a8
int32_t r12 = 0
int32_t rbx = *(arg3 + 8)
int64_t var_2c8 = 0
int32_t var_2c0 = 0
int32_t var_29c = 0x80
int64_t var_2b8
__builtin_memset(&var_2b8, 0, 0x1c)
int32_t var_298 = 0xffffffff
int32_t var_294 = 0
int64_t var_288 = 0
int32_t var_280 = 0
int64_t var_318 = 0
int32_t var_310 = 0
int32_t var_2ec = 0x80
int64_t var_308
__builtin_memset(&var_308, 0, 0x1c)
int32_t var_2e8 = 0xffffffff
int32_t var_2e4 = 0
int64_t var_2d8 = 0
int32_t var_2d0 = 0

if (rbx s> 0)
    sub_1409d9850(&var_318, rbx)
    int32_t rdx_2
    
    if (rbx u< 4)
        rdx_2 = 1
    else
        uint32_t rbx_1 = rbx u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_1 + 8)
        int32_t rcx_2
        
        if (rbx_1 == 0xfffffff8)
            rcx_2 = 0x20
        else
            rcx_2 = 0x1f - temp0_2
        
        int32_t rcx_4 = rcx_2 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_1 + 7)
        
        if (rcx_4 == 0)
            rdx_2 = 1
        else
            rdx_2 = 1 << ((not.d(rcx_4)).b & (0x20 - (0x1f - temp0_3)))
    
    if (var_2d0 == 0 || var_2d0 s< rdx_2)
        var_2d0 = rdx_2
        sub_141e68940(&var_318)

int64_t rsi = sx.q(arg4[1].d)
int64_t* r14 = nullptr
int64_t rbx_3 = *arg4
int64_t* var_3c8 = nullptr
int64_t* var_450 = nullptr
int32_t var_43c = rsi.d
int32_t var_448 = rsi.d

if (rsi.d != 0)
    sub_1405c4a00(&var_450, rsi.d, 0)
    r14 = var_450
    var_3c8 = r14
    memcpy(r14, rbx_3, (rsi << 3).d)
    rsi = zx.q(var_448)
    var_43c = rsi.d
else
    int32_t var_444_1 = 0

char var_478
sub_14098daa0(r14, rsi.d, var_478)
int32_t rdx_6 = *(arg3 + 8)
int64_t* var_420 = nullptr
int64_t* var_3d8 = nullptr
int64_t* var_428 = nullptr
void* var_3e8 = nullptr
int32_t var_440 = 0
int32_t var_474_1
__builtin_memset(&var_474_1, 0, 0x14)
int32_t var_438 = 0
void* var_470
int64_t var_468

if (rdx_6 s> 0)
    sub_1405a5410(&var_470, rdx_6)
    var_438 = var_468:4.d
    var_474_1 = var_468.d
    var_3e8 = var_470

int64_t* rax_11 = j_sub_140a82f30(0x10)
int64_t* rbx_4 = rax_11

if (rax_11 == 0)
    rbx_4 = nullptr
else
    *rax_11 = 0
    rax_11[1] = 0

int32_t rax_12 = *(arg3 + 8)

if (rax_12 s> *(rbx_4 + 0xc))
    sub_140638c50(rbx_4, rax_12)
    rax_12 = *(arg3 + 8)

void* rdi_1 = *arg3
void* r14_3 = (sx.q(rax_12) << 4) + rdi_1

while (rdi_1 != r14_3)
    int64_t rsi_1 = sx.q(rbx_4[1].d)
    int32_t rax_13 = (rsi_1 + 1).d
    rbx_4[1].d = rax_13
    
    if (rax_13 s> *(rbx_4 + 0xc))
        sub_1405a4d70(rbx_4)
    
    int64_t rax_14 = *(rdi_1 + 8)
    rdi_1 += 0x10
    *(*rbx_4 + (rsi_1 << 3)) = rax_14

int512_t zmm1 = sub_141e4eae0(*rbx_4, rbx_4[1].d, var_478)
int64_t* var_398 = rbx_4
void*** rax_15 = j_sub_140a82f30(0x18)

if (rax_15 == 0)
    rax_15 = nullptr
else
    rax_15[1].d = 1
    *rax_15 = &data_142ee2130
    *(rax_15 + 0xc) = 1
    rax_15[2] = rbx_4

int64_t* rax_16 = *arg3
char rsi_2 = arg6
void* rcx_18 = &rax_16[sx.q(*(arg3 + 8)) * 2]
int64_t* var_3f0 = rax_16
void* var_460 = rcx_18
int32_t var_418
int64_t* var_410
uint128_t var_388
int128_t var_378

if (rax_16 != rcx_18)
    char rdi_2 = var_478
    var_478 = rdi_2
    
    do
        int64_t* r8_5
        r8_5.b = 1
        void* rax_17
        rax_17, r8_5 = sub_141e5fc50(arg1, rax_16, r8_5.b)
        void* r14_4 = rax_17
        
        if (rax_17 != 0)
            void* r13_1 = rax_17 + 0x50
            void* rax_18 = *(rax_17 + 0x50)
            void* rax_19
            
            if (rax_18 != 0 && *(rax_18 + 0x12) == 0)
                rax_19 = 0x60
            
            if (rax_18 == 0 || *(rax_18 + 0x12) != 0 || *(rax_18 + 0x11) != 0)
                rax_19 = 0x40
            
            int64_t* rbx_5 = rax_19 + r14_4
            int32_t rax_20
            
            if (rsi_2 == 0)
                rax_20 = rbx_5[1].d
            
            int64_t* var_3e0_1
            int64_t* rsi_3
            void* r15
            
            if (rsi_2 != 0 || rax_20 == 0)
                rsi_3 = &var_450
                var_3e0_1 = &var_450
            else
                int64_t r14_5 = sx.q(var_43c)
                rsi_3 = &var_428
                var_3e0_1 = &var_428
                int32_t r10_1 = r14_5.d
                var_420.d = r14_5.d
                int32_t r9
                
                if (r14_5.d != 0 || r12 != 0)
                    sub_1405c4a00(&var_428, r14_5.d, r12)
                    int64_t* rax_21 = var_428
                    var_3d8 = rax_21
                    memcpy(rax_21, var_3c8, (r14_5 << 3).d)
                    r9 = var_420:4.d
                    rax_20 = rbx_5[1].d
                    r10_1 = var_420.d
                    var_440 = r9
                else
                    r9 = 0
                    var_440 = 0
                    var_420:4.d = 0
                
                int64_t* r14_6 = *rbx_5
                r15 = nullptr
                uint64_t r12_2 = sx.q(rax_20) << 3 u>> 3
                
                if (r14_6 u> &r14_6[sx.q(rax_20)])
                    r12_2 = 0
                
                if (r12_2 != 0)
                    int64_t* rdi_3 = var_3d8
                    int64_t** r13_2 = arg5
                    
                    do
                        r8_5 = *r13_2
                        int64_t* rcx_22 = r8_5
                        int64_t i = *r14_6
                        void* rdx_13 = &r8_5[sx.q(r13_2[1].d)]
                        
                        if (r8_5 != rdx_13)
                            while (*rcx_22 != i)
                                rcx_22 = &rcx_22[1]
                                
                                if (rcx_22 == rdx_13)
                                    goto label_141e57306
                        
                        if (r8_5 == rdx_13 || ((rcx_22 - r8_5) s>> 3).d == 0xffffffff)
                        label_141e57306:
                            int64_t* rcx_25 = rdi_3
                            void* rdx_14 = &rdi_3[sx.q(r10_1)]
                            
                            if (rdi_3 != rdx_14)
                                while (*rcx_25 != i)
                                    rcx_25 = &rcx_25[1]
                                    
                                    if (rcx_25 == rdx_14)
                                        goto label_141e5732e
                            
                            if (rdi_3 == rdx_14 || ((rcx_25 - rdi_3) s>> 3).d == 0xffffffff)
                            label_141e5732e:
                                int64_t rsi_4 = sx.q(r10_1)
                                r10_1 = (rsi_4 + 1).d
                                var_420.d = r10_1
                                
                                if (r10_1 s> r9)
                                    sub_1405a4d70(&var_428)
                                    r9 = var_420:4.d
                                    r10_1 = var_420.d
                                    rdi_3 = var_428
                                
                                rdi_3[rsi_4] = i
                        
                        r14_6 = &r14_6[1]
                        r15 += 1
                    while (r15 != r12_2)
                    
                    rsi_3 = var_3e0_1
                    var_3d8 = rdi_3
                    rdi_2 = var_478
                    var_440 = r9
                
                if (r10_1 s> var_43c)
                    r8_5, zmm1 = sub_14098daa0(var_3d8, r10_1, rdi_2)
                
                r14_4 = rax_17
            
            void* rax_26 = *r13_1
            int64_t* var_3a8
            uint128_t zmm0_1
            
            if (rax_26 == 0 || *(rax_26 + 0x12) != 0 || *(rax_26 + 0x11) != 0)
                void* rax_41 = *(r14_4 + 0x30)
                
                if (rax_41 == 0 || *(rax_41 + 0x12) != 0 || *(rax_41 + 0x11) != 0)
                label_141e57525:
                    int64_t rax_35 = *(r14_4 + 0x18)
                    r15.b = rax_35 == 0
                    void var_348
                    
                    if (rax_35 != 0)
                        r8_5, zmm1 = sub_141e4c4c0(&var_318, &var_348, r14_4 + 0x18, nullptr)
                    int64_t* rsi_5 = *rsi_3
                    int64_t* rcx_41 = var_3e0_1
                    int64_t* r14_7 = rsi_5
                    var_3a8 = rsi_5
                    int64_t r13_3 = sx.q(rcx_41[1].d)
                    void* var_3b8_1
                    var_3b8_1.d = r13_3.d
                    void* r12_3 = &rsi_5[r13_3]
                    
                    if (rsi_5 != r12_3)
                        do
                            (*(*arg1 + 0x350))(arg1, &var_388, var_3f0, *r14_7)
                            int32_t rcx_43
                            rcx_43.b = sub_140b5b8a0(var_378.d, 0) == 0
                            
                            if ((var_378:4.d != 0 | rcx_43.b) != 0)
                                int32_t var_368
                                int32_t rbx_10 = var_368 - var_2e4 + var_310
                                
                                if (rbx_10 s> var_310 - var_2e4)
                                    sub_1409d9850(&var_318, rbx_10)
                                    int32_t rdx_22
                                    
                                    if (rbx_10 u< 4)
                                        rdx_22 = 1
                                    else
                                        uint32_t rbx_11 = rbx_10 u>> 1
                                        uint64_t rflags_3
                                        int32_t temp0_5
                                        temp0_5, rflags_3 = _bit_scan_reverse(rbx_11 + 8)
                                        int32_t rcx_45
                                        
                                        if (rbx_11 == 0xfffffff8)
                                            rcx_45 = 0x20
                                        else
                                            rcx_45 = 0x1f - temp0_5
                                        
                                        int32_t rcx_48 = rcx_45 << 0x1a s>> 0x1f
                                        uint64_t rflags_4
                                        char temp0_6
                                        temp0_6, rflags_4 = _bit_scan_reverse(rbx_11 + 7)
                                        char rdx_21
                                        
                                        if (rcx_48 == 0)
                                            rdx_21 = 0x20
                                        else
                                            rdx_21 = 0x1f - temp0_6
                                        
                                        rdx_22 = 1 << ((not.d(rcx_48)).b & (0x20 - rdx_21))
                                    
                                    if (var_2d0 == 0 || var_2d0 s< rdx_22)
                                        var_2d0 = rdx_22
                                        sub_141e68940(&var_318)
                                
                                for (int64_t* i_1 = var_378:8.q; i_1 != &i_1[sx.q(var_368) * 3]; 
                                        i_1 = &i_1[3])
                                    void var_34c
                                    sub_141e4c4c0(&var_318, &var_34c, i_1, nullptr)
                                
                                int64_t rax_46
                                rax_46.b = var_368 == 0
                                r15.b &= rax_46.b
                            
                            r8_5, zmm1 = sub_1408464b0(&var_378:8)
                            r14_7 = &r14_7[1]
                        while (r14_7 != r12_3)
                        
                        rdi_2 = var_478
                        r13_3 = zx.q(var_3b8_1.d)
                        rsi_5 = var_3a8
                        rcx_41 = var_3e0_1
                    
                    if (r15.b == 0)
                        if (rax_17 + 0x60 != rcx_41)
                            r8_5 = zx.q(*(rax_17 + 0x6c))
                            *(rax_17 + 0x68) = r13_3.d
                            
                            if (r13_3.d != 0 || r8_5.d != 0)
                                sub_1405c4a00(rax_17 + 0x60, r13_3.d, r8_5.d)
                                memcpy(*(rax_17 + 0x60), rsi_5, r13_3.d << 3)
                            else
                                *(rax_17 + 0x6c) = 0
                        
                        zmm1.o = var_398.o
                        var_3a8.o = zmm1.o
                        void* rax_50 = _mm_bsrli_si128(zmm1.o, 8).q
                        
                        if (rax_50 != 0)
                            *(rax_50 + 8) += 1
                        
                        if (&var_3a8 != rax_17 + 0x70)
                            zmm0_1 = *(rax_17 + 0x70)
                            *(rax_17 + 0x70) = zmm1.o
                            var_3a8.o = zmm0_1
                        
                        int64_t* var_3a0
                        
                        if (var_3a0 != 0)
                            var_3a0[1].d -= 1
                            
                            if (var_3a0[1].d == 1)
                                (**var_3a0)(var_3a0)
                                int32_t temp22_1 = *(var_3a0 + 0xc)
                                *(var_3a0 + 0xc) -= 1
                                
                                if (temp22_1 == 1)
                                    (*(*var_3a0 + 8))(var_3a0, 1)
                        
                        int64_t rbx_17 = sx.q(var_474_1)
                        int32_t rdx_28 = (rbx_17 + 1).d
                        var_474_1 = rdx_28
                        var_468.d = rdx_28
                        
                        if (rdx_28 s> var_438)
                            sub_1405a4f90(&var_470)
                            var_438 = var_468:4.d
                            var_474_1 = var_468.d
                            var_3e8 = var_470
                        
                        *(var_3e8 + rbx_17 * 0x10) = *var_3f0
                    else
                        if (rax_17 + 0x40 != rcx_41)
                            r8_5 = zx.q(*(rax_17 + 0x4c))
                            *(rax_17 + 0x48) = r13_3.d
                            
                            if (r13_3.d != 0 || r8_5.d != 0)
                                sub_1405c4a00(rax_17 + 0x40, r13_3.d, r8_5.d)
                                memcpy(*(rax_17 + 0x40), rsi_5, r13_3.d << 3)
                            else
                                *(rax_17 + 0x4c) = 0
                        
                        if (rax_17 + 0x30 != &var_3a8)
                            *(rax_17 + 0x30) = 0
                            int64_t* rbx_14 = *(rax_17 + 0x38)
                            
                            if (rbx_14 != 0)
                                *(rax_17 + 0x38) = 0
                                rbx_14[1].d -= 1
                                
                                if (rbx_14[1].d == 1)
                                    (**rbx_14)(rbx_14)
                                    int32_t temp23_1 = *(rbx_14 + 0xc)
                                    *(rbx_14 + 0xc) -= 1
                                    
                                    if (temp23_1 == 1)
                                        (*(*rbx_14 + 8))(rbx_14, 1)
                else
                    int32_t i_9 = *(r14_4 + 0x48)
                    
                    if (i_9 != rsi_3[1].d)
                        goto label_141e57525
                    
                    int64_t* rcx_46 = *rsi_3
                    
                    if (i_9 != 0)
                        r8_5 = *(r14_4 + 0x40) - rcx_46
                        int32_t i_2
                        
                        do
                            if (*(rcx_46 + r8_5) != *rcx_46)
                                goto label_141e57525
                            
                            rcx_46 = &rcx_46[1]
                            i_2 = i_9
                            i_9 -= 1
                        while (i_2 != 1)
            else
                int32_t i_7 = *(r14_4 + 0x68)
                
                if (i_7 != rsi_3[1].d)
                label_141e5740e:
                    int64_t* rcx_32 = *(r14_4 + 0x70)
                    rsi_3.b = 1
                    
                    if (var_398 != rcx_32)
                        int32_t i_8 = var_398[1].d
                        
                        if (i_8 != rcx_32[1].d)
                        label_141e574ad:
                            rsi_3.b = 0
                        else
                            int64_t* rcx_33 = *rcx_32
                            
                            if (i_8 != 0)
                                void* r8_13 = *var_398 - rcx_33
                                int32_t i_3
                                
                                do
                                    if (*(rcx_33 + r8_13) != *rcx_33)
                                        goto label_141e574ad
                                    
                                    rcx_33 = &rcx_33[1]
                                    i_3 = i_8
                                    i_8 -= 1
                                while (i_3 != 1)
                            
                            var_418.q = *(r14_4 + 0x70)
                            int64_t* rax_30 = *(r14_4 + 0x78)
                            var_410 = rax_30
                            
                            if (rax_30 != 0)
                                rax_30[1].d += 1
                            
                            zmm1.o = var_398.o
                            zmm0_1 = var_418.o
                            var_418.o = zmm1.o
                            zmm1.o = _mm_bsrli_si128(zmm1.o, 8)
                            int64_t* rbx_6 = zmm1.q
                            var_398.o = zmm0_1
                            
                            if (rbx_6 != 0)
                                rbx_6[1].d -= 1
                                
                                if (rbx_6[1].d == 1)
                                    (**rbx_6)(rbx_6)
                                    int32_t temp25_1 = *(rbx_6 + 0xc)
                                    *(rbx_6 + 0xc) -= 1
                                    
                                    if (temp25_1 == 1)
                                        (*(*rbx_6 + 8))(rbx_6, 1)
                    
                    int64_t* rcx_36 = *r13_1
                    
                    if (rcx_36 != 0)
                        if (*(rcx_36 + 0x12) == 0 && *(rcx_36 + 0x11) == 0 && rsi_3.b != 0)
                            zmm1 = sub_142386180(rcx_36, zmm1)
                        
                        if (r13_1 != &var_3a8)
                            *r13_1 = 0
                            int64_t* rbx_7 = *(r13_1 + 8)
                            
                            if (rbx_7 != 0)
                                *(r13_1 + 8) = 0
                                rbx_7[1].d -= 1
                                
                                if (rbx_7[1].d == 1)
                                    (**rbx_7)(rbx_7)
                                    int32_t temp24_1 = *(rbx_7 + 0xc)
                                    *(rbx_7 + 0xc) -= 1
                                    
                                    if (temp24_1 == 1)
                                        (*(*rbx_7 + 8))(rbx_7, 1)
                    
                    *(r13_1 + 0x18) = 0
                    
                    if (*(r13_1 + 0x1c) s<= 0xffffffff)
                        sub_140638c50(r13_1 + 0x10, 0)
                    
                    rsi_3 = var_3e0_1
                    goto label_141e57525
                
                int64_t* rcx_30 = *rsi_3
                
                if (i_7 != 0)
                    void* r9_2 = *(r14_4 + 0x60) - rcx_30
                    int32_t i_4
                    
                    do
                        if (*(rcx_30 + r9_2) != *rcx_30)
                            goto label_141e5740e
                        
                        rcx_30 = &rcx_30[1]
                        i_4 = i_7
                        i_7 -= 1
                    while (i_4 != 1)
                
                void var_350
                r8_5, zmm1 = sub_140e47250(&var_2c8, &var_350, r13_1, nullptr)
            rsi_2 = arg6
        
        r12 = var_440
        rax_16 = &var_3f0[2]
        var_3f0 = rax_16
    while (rax_16 != var_460)

int64_t* result = arg2
void var_258
void* var_278 = &var_258
int64_t* r15_1 = &result[1]
int64_t* var_3f0_1 = r15_1
int16_t var_260 = 0x100
void* var_270 = &var_258
*result = 0
int64_t* var_268 = &var_58
*r15_1 = 0
int32_t var_404
int64_t* r12_5
int32_t r13_6

if (var_310 - var_2e4 s<= 0)
    r13_6 = var_474_1
    r12_5 = arg1
else
    int32_t rcx_67 = 0
    int32_t var_408_1 = 0xffffffff
    int32_t r8_22 = 0
    var_404 = 0
    int32_t var_2f0
    
    if (var_2f0 != 0)
        int64_t* r9_4 = &var_308
        int64_t* var_2f8
        
        if (var_2f8 != 0)
            r9_4 = var_2f8
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(var_2f0 - 1)
        int32_t rdx_32 = *r9_4
        
        if (rdx_32 != 0)
        label_141e5799f:
            int32_t rax_67 = neg.d(rdx_32) & rdx_32
            uint64_t rflags_5
            int32_t temp0_8
            temp0_8, rflags_5 = _bit_scan_reverse(rax_67)
            int32_t r13_5
            
            if (rax_67 == 0)
                r13_5 = 0x20
            else
                r13_5 = 0x1f - temp0_8
            
            int32_t rax_68 = r8_22 - r13_5 + 0x1f
            
            if (rax_68 s> var_2f0)
                rax_68 = var_2f0
            
            var_404 = rax_68
        else
            while (true)
                int64_t rax_64 = sx.q(rcx_67)
                r8_22 += 0x20
                rcx_67 += 1
                
                if (rax_64.d s>= ((temp1_1 & 0x1f) + temp2_1) s>> 5)
                    var_404 = var_2f0
                    break
                
                rdx_32 = *(r9_4 + (rax_64 << 2) + 4)
                int32_t var_408_2 = 0xffffffff
                
                if (rdx_32 != 0)
                    goto label_141e5799f
    
    sub_140d30980(var_318, &var_278)
    r13_6 = var_474_1
    
    if (r13_6 s> 1)
        void* rcx_70 = var_270
        
        if (rcx_70 + 0xa u>= var_268)
            sub_140b38e20(&var_278, 5)
            rcx_70 = var_270
        
        var_270 = rcx_70 + 0xa
        *rcx_70 = 0x610020
        *(rcx_70 + 4) = 0x64006e
        *(rcx_70 + 8) = 0x20
        int64_t* rax_71 = sub_140b33460(&var_278, u"%d", zx.q(r13_6 - 1))
        int32_t* rcx_73 = rax_71[1]
        
        if (rcx_73 + 0xa u>= rax_71[2])
            sub_140b38e20(rax_71, 5)
            rcx_73 = rax_71[1]
        
        rax_71[1] = rcx_73 + 0xa
        rcx_73[2].w = 0x65
        *rcx_73 = 0x6d0020
        rcx_73[1] = 0x72006f
    
    void* rcx_76 = var_270
    
    if (rcx_76 + 4 u>= var_268)
        sub_140b38e20(&var_278, 2)
        rcx_76 = var_270
    
    void* var_270_1 = rcx_76 + 4
    int64_t* rbx_19 = var_3c8
    *rcx_76 = 0x280020
    void* rcx_77 = var_270_1
    int32_t rsi_9 = ((rcx_77 - var_278) s>> 1).d
    void* rdi_4 = &var_3c8[sx.q(var_43c)]
    
    if (var_3c8 != rdi_4)
        do
            var_460 = *rbx_19
            
            if (arg6 == 0)
                if (rcx_77 + 2 u>= var_268)
                    sub_140b38e20(&var_278, 1)
                    rcx_77 = var_270_1
                
                *rcx_77 = 0x2b
                var_270_1 += 2
            
            sub_140b5c850(&var_460, &var_278)
            void* rcx_80 = var_270_1
            
            if (rcx_80 + 4 u>= var_268)
                sub_140b38e20(&var_278, 2)
                rcx_80 = var_270_1
            
            rbx_19 = &rbx_19[1]
            var_270_1 = rcx_80 + 4
            *rcx_80 = 0x20002c
            rcx_77 = var_270_1
        while (rbx_19 != rdi_4)
        
        r15_1 = var_3f0_1
        r13_6 = var_474_1
    
    int64_t* rbx_20 = *arg5
    void* rdi_5 = &rbx_20[sx.q(arg5[1].d)]
    
    if (rbx_20 != rdi_5)
        do
            var_460 = *rbx_20
            
            if (rcx_77 + 2 u>= var_268)
                sub_140b38e20(&var_278, 1)
                rcx_77 = var_270_1
            
            *rcx_77 = 0x2d
            void* var_270_2 = var_270_1 + 2
            sub_140b5c850(&var_460, &var_278)
            void* rcx_84 = var_270_2
            
            if (rcx_84 + 4 u>= var_268)
                sub_140b38e20(&var_278, 2)
                rcx_84 = var_270_2
            
            rbx_20 = &rbx_20[1]
            var_270_1 = rcx_84 + 4
            *rcx_84 = 0x20002c
            rcx_77 = var_270_1
        while (rbx_20 != rdi_5)
        
        r15_1 = var_3f0_1
        r13_6 = var_474_1
    
    if (((rcx_77 - var_278) s>> 1).d s> rsi_9)
        rcx_77 -= 4
        var_270_1 = rcx_77
    
    if (rcx_77 + 2 u>= var_268)
        sub_140b38e20(&var_278, 1)
        rcx_77 = var_270_1
    
    r12_5 = arg1
    var_270 = rcx_77 + 2
    *rcx_77 = 0x29
    int64_t* rax_92 = var_278
    int64_t rdi_6 = *r12_5
    int32_t var_448_1 = ((var_270 - rax_92) s>> 1).d
    var_450 = rax_92
    var_470 = nullptr
    var_468.d = 0
    int64_t* rax_93 = sub_140a1c6a0(&var_460, &var_450)
    int64_t* rax_94
    rax_94, zmm1 = sub_141e54b80(&var_318, &var_418)
    int64_t var_488
    var_488.d = arg8
    int64_t* rax_96 = (*(rdi_6 + 0x348))(r12_5, &var_428, rax_94, &var_470, var_488, rax_93, 
        var_478, var_470, var_468)
    
    if (arg2 != rax_96)
        *arg2 = *rax_96
        *rax_96 = 0
        int64_t rax_98 = rax_96[1]
        int64_t* rbx_22 = *r15_1
        
        if (rax_98 != rbx_22)
            rax_96[1] = 0
            *r15_1 = rax_98
            
            if (rbx_22 != 0)
                rbx_22[1].d -= 1
                
                if (rbx_22[1].d == 1)
                    (**rbx_22)(rbx_22)
                    int32_t temp9_1 = *(rbx_22 + 0xc)
                    *(rbx_22 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rbx_22 + 8))(rbx_22, 1)
    
    if (var_420 != 0)
        var_420[1].d -= 1
        
        if (var_420[1].d == 1)
            (**var_420)(var_420)
            int32_t temp6_1 = *(var_420 + 0xc)
            *(var_420 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_420 + 8))(var_420, 1)
    
    int32_t i_11 = var_410.d
    
    if (i_11 != 0)
        int64_t* rbx_25 = var_418.q + 8
        int32_t i_5
        
        do
            int64_t rcx_98 = *rbx_25
            
            if (rcx_98 != 0)
                zmm1 = sub_140a74f90(rcx_98)
            
            rbx_25 = &rbx_25[3]
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
    
    int64_t rcx_99 = var_418.q
    
    if (rcx_99 != 0)
        zmm1 = sub_140a74f90(rcx_99)
    
    void* rcx_100 = var_460
    
    if (rcx_100 != 0)
        zmm1 = sub_140a74f90(rcx_100)
    
    void* rdi_7 = var_3e8
    void* rsi_12 = (sx.q(r13_6) << 4) + var_3e8
    
    if (var_3e8 != rsi_12)
        do
            void* rax_104 = sub_141e5fc50(r12_5, rdi_7, 1)
            
            if (rax_104 != 0)
                int64_t* rbx_26 = *r15_1
                var_450 = *arg2
                var_448_1.q = rbx_26
                
                if (rbx_26 != 0)
                    rbx_26[1].d += 1
                
                if (&var_450 != rax_104 + 0x50)
                    zmm1.o = var_450.o
                    var_450.o = *(rax_104 + 0x50)
                    rbx_26 = var_448_1.q
                    *(rax_104 + 0x50) = zmm1.o
                
                if (rbx_26 != 0)
                    rbx_26[1].d -= 1
                    
                    if (rbx_26[1].d == 1)
                        (**rbx_26)(rbx_26)
                        int32_t temp30_1 = *(rbx_26 + 0xc)
                        *(rbx_26 + 0xc) -= 1
                        
                        if (temp30_1 == 1)
                            (*(*rbx_26 + 8))(rbx_26, 1)
            
            rdi_7 += 0x10
        while (rdi_7 != rsi_12)
        
        r13_6 = var_474_1
    
    result = arg2

int32_t r8_30
void* r14_10

if (var_2c0 - var_294 s<= 0)
    r14_10 = nullptr
else
    int64_t rcx_105 = *result
    var_460 = nullptr
    int64_t var_458_1 = 0
    int32_t rdx_42
    rdx_42.b = rcx_105 != 0
    int32_t rdx_44 = rdx_42 - var_294 + var_2c0
    
    if (rdx_44 s> 0)
        sub_1405a5410(&var_460, rdx_44)
        rcx_105 = *result
    
    if (rcx_105 != 0)
        int64_t rbx_27 = sx.q(var_458_1.d)
        int32_t rax_110 = (rbx_27 + 1).d
        var_458_1.d = rax_110
        
        if (rax_110 s> 0)
            sub_1405a4f90(&var_460)
            rcx_105 = *result
        
        int64_t* rax_113 = (rbx_27 << 4) + var_460
        *rax_113 = rcx_105
        void* rcx_108 = *r15_1
        rax_113[1] = rcx_108
        
        if (rcx_108 != 0)
            *(rcx_108 + 8) += 1
    
    int32_t var_2a0
    int32_t rdx_46 = var_2a0
    var_410 = &var_2b8
    var_418 = 0
    int32_t var_414_1 = 1
    int32_t var_408_3 = 0xffffffff
    var_404.q = 0
    
    if (rdx_46 != 0)
        sub_14059bdd0(&var_418)
        rdx_46 = var_2a0
    
    double zmm2_1[0x2] = var_408_3.o
    double var_328_1[0x2] = zmm2_1
    int32_t var_404_1 = rdx_46
    zmm1.o = var_418.o
    zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
    var_388 = (&var_2c8).o
    var_378 = zmm1.o
    int64_t var_368_1 = zmm2_1.q
    
    while (true)
        int64_t rax_114 = sx.q(var_378:0xc.d)
        int64_t* rdx_47 = var_388.q
        
        if (rax_114.d == ((0xffffffff << (rdx_46.b & 0x1f)).q u>> 0x20).d && var_378.q == &var_2b8
                && rdx_47 == &var_2c8)
            break
        
        int64_t rbx_28 = sx.q(var_458_1.d)
        int64_t* rdi_8 = *rdx_47 + rax_114 * 0x18
        int32_t rax_116 = (rbx_28 + 1).d
        var_458_1.d = rax_116
        
        if (rax_116 s> var_458_1:4.d)
            sub_1405a4f90(&var_460)
        
        int64_t* rcx_116 = (rbx_28 << 4) + var_460
        *rcx_116 = *rdi_8
        void* rax_118 = rdi_8[1]
        rcx_116[1] = rax_118
        
        if (rax_118 != 0)
            *(rax_118 + 8) += 1
        
        var_378:8.d &= not.d(var_388:0xc.d)
        sub_14059bdd0(&var_388:8)
    
    int512_t zmm1_1 = sub_140b33240(&var_278, " combined", 9)
    r14_10 = nullptr
    
    if (*var_270 != 0)
        *var_270 = 0
    
    void* rbx_29 = var_278
    int32_t rdx_49 = 0
    var_470 = nullptr
    int32_t rcx_119 = 0
    var_468.d = 0
    var_468:4.d = 0
    
    if (rbx_29 != 0 && *rbx_29 != 0)
        int64_t rdi_9 = -1
        
        do
            rdi_9 += 1
        while (*(rbx_29 + (rdi_9 << 1)) != 0)
        
        if (rdi_9.d + 1 s> 0)
            sub_1405947f0(&var_470, rdi_9.d + 1)
            rcx_119 = var_468:4.d
            rdx_49 = var_468.d
        
        int32_t rax_122 = rdx_49 + rdi_9.d + 1
        var_468.d = rax_122
        
        if (rax_122 s> rcx_119)
            sub_140594770(&var_470)
        
        UnDecorator::getReferenceType(var_470, rbx_29, (rdi_9.d + 1) * 2)
    
    int64_t* rax_123
    rax_123, r8_30, zmm1 = sub_142387b40(&r12_5[0x2f], &var_418, &var_460, &var_470, zmm1_1)
    result = arg2
    
    if (result != rax_123)
        *result = *rax_123
        *rax_123 = 0
        sub_14066a200(r15_1, &rax_123[1])
    
    int64_t* rbx_30 = var_410
    
    if (rbx_30 != 0)
        rbx_30[1].d -= 1
        
        if (rbx_30[1].d == 1)
            (**rbx_30)(rbx_30)
            int32_t temp16_1 = *(rbx_30 + 0xc)
            *(rbx_30 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*rbx_30 + 8))(rbx_30, 1)
    
    void* rcx_127 = var_470
    
    if (rcx_127 != 0)
        r8_30, zmm1 = sub_140a74f90(rcx_127)
    
    int32_t i_10 = var_458_1.d
    
    if (i_10 != 0)
        int64_t* rdi_12 = var_460 + 8
        int32_t i_6
        
        do
            int64_t* rbx_31 = *rdi_12
            
            if (rbx_31 != 0)
                rbx_31[1].d -= 1
                
                if (rbx_31[1].d == 1)
                    (**rbx_31)(rbx_31)
                    int32_t temp28_1 = *(rbx_31 + 0xc)
                    *(rbx_31 + 0xc) -= 1
                    
                    if (temp28_1 == 1)
                        (*(*rbx_31 + 8))(rbx_31, 1)
            
            rdi_12 = &rdi_12[2]
            i_6 = i_10
            i_10 -= 1
        while (i_6 != 1)
        result = arg2
    
    void* rcx_130 = var_460
    
    if (rcx_130 != 0)
        r8_30, zmm1 = sub_140a74f90(rcx_130)

void* rbx_32 = *result
int64_t* rsi_15

if (rbx_32 == 0 || *(rbx_32 + 0x10) != 0)
    r14_10 = var_3e8
    void* rdi_13 = r14_10
    void* rsi_18 = (sx.q(r13_6) << 4) + r14_10
    
    if (r14_10 != rsi_18)
        do
            r8_30.b = 1
            void* rax_134
            rax_134, r8_30 = sub_141e5fc50(r12_5, rdi_13, r8_30.b)
            
            if (rax_134 != 0)
                if (rax_134 + 0x60 != rax_134 + 0x40)
                    zmm1.o = *(rax_134 + 0x60)
                    *(rax_134 + 0x60) = *(rax_134 + 0x40)
                    *(rax_134 + 0x40) = zmm1.o
                
                if (rax_134 + 0x50 != rax_134 + 0x30)
                    zmm1.o = *(rax_134 + 0x50)
                    *(rax_134 + 0x50) = *(rax_134 + 0x30)
                    *(rax_134 + 0x30) = zmm1.o
                
                r8_30, zmm1 = sub_141e699b0(rax_134 + 0x50, 0, zmm1)
                var_418.o = zx.o(0)
                
                if (rax_134 + 0x70 != &var_418)
                    *(rax_134 + 0x70) = 0
                    sub_14066a200(rax_134 + 0x78, &var_410)
                    int64_t* rbx_34 = var_410
                    
                    if (rbx_34 != 0)
                        rbx_34[1].d -= 1
                        
                        if (rbx_34[1].d == 1)
                            (**rbx_34)(rbx_34)
                            int32_t temp10_1 = *(rbx_34 + 0xc)
                            *(rbx_34 + 0xc) -= 1
                            
                            if (temp10_1 == 1)
                                (*(*rbx_34 + 8))(rbx_34, 1)
            
            rdi_13 += 0x10
        while (rdi_13 != rsi_18)
        
        r14_10 = var_3e8
    
    rsi_15 = arg7
    sub_140910050(rsi_15)
    result = arg2
else
    rsi_15 = arg7
    var_450 = nullptr
    int32_t var_448_2 = 0
    
    if (rsi_15 != &var_450 && rsi_15[1].d != 0)
        int64_t* rcx_131 = *rsi_15
        
        if (rcx_131 != 0)
            (*(*rcx_131 + 0x40))(rcx_131, &var_450)
            rbx_32 = *result
    
    void* rax_130 = *r15_1
    var_470 = rbx_32
    void* var_468_1 = rax_130
    
    if (rax_130 != 0)
        *(rax_130 + 8) += 1
        rbx_32 = *result
    
    var_418.q = var_3e8
    var_410:4.d = var_438
    var_410.d = r13_6
    sub_142385440(rbx_32, 
        sub_141e4bf80(&var_428, r12_5, sub_141e52c40, &var_418, &var_470, &var_450))

sub_140b301c0(&var_278)

if (rax_15 != 0)
    rax_15[1].d -= 1
    
    if (rax_15[1].d == 1)
        (**rax_15)(rax_15)
        int32_t temp4_1 = *(rax_15 + 0xc)
        *(rax_15 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*rax_15)[1](rax_15, 1)

if (r14_10 != 0)
    sub_140a74f90(r14_10)

if (var_3d8 != 0)
    sub_140a74f90(var_3d8)

if (var_3c8 != 0)
    sub_140a74f90(var_3c8)

int32_t var_2d0_1 = 0

if (var_2d8 != 0)
    sub_140a74f90(var_2d8)

sub_140597460(&var_318)
int32_t var_280_1 = 0

if (var_288 != 0)
    sub_140a74f90(var_288)

sub_140a720d0(&var_2c8, 0)
int64_t var_2a8

if (var_2a8 != 0)
    sub_140a74f90(var_2a8)

int64_t rcx_153 = var_2c8

if (rcx_153 != 0)
    sub_140a74f90(rcx_153)

sub_140745b20(rsi_15)
__security_check_cookie(var_58 ^ &var_4a8)
return result
