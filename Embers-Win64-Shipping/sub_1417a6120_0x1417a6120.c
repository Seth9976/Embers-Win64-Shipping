// 函数: sub_1417a6120
// 地址: 0x1417a6120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
QueryPerformanceCounter(&performanceCount)
int32_t var_18c = 0x80
int64_t* var_1b8
__builtin_memset(&var_1b8, 0, 0x2c)
int32_t var_184 = 0
int64_t var_178 = 0
int32_t var_170 = 0
int32_t var_188 = 0xffffffff
sub_140cd48b0(&var_1b8, &arg1[0xc])
int64_t var_1a8
int32_t var_290 = &var_1a8
int32_t rcx_3 = 0
int32_t var_298 = 0
int32_t r8 = 0
int32_t var_294 = 1
int32_t var_288 = 0xffffffff
int64_t var_284 = 0
int64_t* var_198
int32_t var_190

if (var_190 != 0)
    int64_t* r9_1 = &var_1a8
    
    if (var_198 != 0)
        r9_1 = var_198
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_190 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_1417a624c:
        int32_t rax_9 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_294_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        int32_t rax_11 = r8 - rax_10 + 0x1f
        
        if (rax_11 s> var_190)
            rax_11 = var_190
        
        var_284.d = rax_11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_3)
            r8 += 0x20
            rcx_3 += 1
            var_284:4.d = r8
            var_298 = rcx_3
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_284.d = var_190
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_288 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1417a624c

double zmm2[0x2] = var_288.o
int64_t* var_240 = &var_1b8
int128_t zmm7 = 0x3f800000
int128_t zmm6 = zx.o(0)
int32_t var_2a4 = var_190
uint128_t var_238 = var_298.o
double var_228 = zmm2[0]
uint128_t zmm1 = var_238
double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
uint128_t var_268 = var_240.o
uint128_t var_258 = zmm1
int64_t var_248 = temp0_3.q
int128_t var_108
int128_t var_f8

while (true)
    int64_t rcx_6 = sx.q(var_258:0xc.d)
    char rax_13
    
    if (rcx_6.d != ((0xffffffff << (var_190.b & 0x1f)).q u>> 0x20).d || var_258.q != &var_1a8)
        rax_13 = 0
    else
        rax_13 = 1
    
    int64_t* rdx_6 = var_268.q
    
    if (rax_13 == 0 || rdx_6 != &var_1b8)
        rax_13 = 1
    else
        rax_13 = 0
    
    if (rax_13 == 0)
        break
    
    int64_t* rbx_1 = *(*rdx_6 + rcx_6 * 0x10)
    void* rdx_7 = *rbx_1
    int64_t rcx_8 = sx.q(rbx_1[1].d)
    
    if (*(rcx_8 + *(rdx_7 + 0x380)) != 0)
        int64_t rax_16 = *(rdx_7 + 0x1b8)
        int64_t rcx_9 = rcx_8 * 3
        uint128_t performanceCount_1 = *(rax_16 + (rcx_9 << 2) + 4)
        zmm2 = *(rax_16 + (rcx_9 << 2))
        zmm1 = *(rax_16 + (rcx_9 << 2) + 8)
        zmm2[0].d = zmm2[0].d f* zmm2[0].d
        performanceCount_1.d = performanceCount_1.d f* performanceCount_1.d
        zmm1.d = zmm1.d f* zmm1.d
        zmm2[0].d = zmm2[0].d f+ performanceCount_1.d
        zmm2[0].d = zmm2[0].d f+ zmm1.d
        
        if (not(zmm2[0].d f<= zmm7.d))
            int64_t rax_17 = *(rdx_7 + 0x3f8)
            performanceCount_1 = *(rax_17 + (rcx_9 << 2) + 4)
            zmm2 = *(rax_17 + (rcx_9 << 2))
            zmm1 = *(rax_17 + (rcx_9 << 2) + 8)
            zmm2[0].d = zmm2[0].d f* zmm2[0].d
            performanceCount_1.d = performanceCount_1.d f* performanceCount_1.d
            zmm1.d = zmm1.d f* zmm1.d
            zmm2[0].d = zmm2[0].d f+ performanceCount_1.d
            zmm2[0].d = zmm2[0].d f+ zmm1.d
            
            if (not(zmm2[0].d f<= zmm7.d))
                int64_t* rdx_8 = nullptr
                
                if (*(rbx_1 + 0xc) u>= 3)
                    rdx_8 = rbx_1
                
                zmm6, zmm7 = sub_1417aba00(arg1, rdx_8)
                
                if (*(arg1 + 0x211) != 0)
                    int64_t r14_1 = sx.q(arg1[0x44].d)
                    var_298.q = 0
                    __builtin_memset(&var_108, 0, 0x24)
                    var_290 = 0
                    int32_t rax_18 = (r14_1 + 1).d
                    performanceCount = 0
                    int32_t var_270_1 = 0
                    arg1[0x44].d = rax_18
                    
                    if (rax_18 s> *(arg1 + 0x224))
                        sub_1405c5060(&arg1[0x43])
                    
                    int64_t rcx_12 = arg1[0x43]
                    int32_t rax_19 = var_108:8.d
                    int64_t r9_3 = r14_1 * 0xa
                    *(rcx_12 + (r9_3 << 3) + 0x10) = var_108.q
                    *(rcx_12 + (r9_3 << 3) + 0x18) = rax_19
                    *(rcx_12 + (r9_3 << 3) + 0x1c) = var_108:0xc.q
                    *(rcx_12 + (r9_3 << 3) + 0x24) = var_f8:4.d
                    *(rcx_12 + (r9_3 << 3) + 0x28) = var_f8:8.q
                    int32_t var_e8
                    *(rcx_12 + (r9_3 << 3) + 0x30) = var_e8
                    performanceCount_1 = zx.o(performanceCount)
                    *(rcx_12 + (r9_3 << 3)) = 0
                    *(rcx_12 + (r9_3 << 3) + 8) = 0
                    *(rcx_12 + (r9_3 << 3) + 0x34) = 0
                    *(rcx_12 + (r9_3 << 3) + 0x38) = performanceCount_1.q
                    performanceCount_1 = zx.o(var_298.q)
                    *(rcx_12 + (r9_3 << 3) + 0x40) = var_270_1
                    *(rcx_12 + (r9_3 << 3) + 0x44) = performanceCount_1.q
                    *(rcx_12 + (r9_3 << 3) + 0x4c) = var_290
                    int64_t r8_2 = arg1[0x43]
                    *(r8_2 + (r9_3 << 3)) = rbx_1
                    *(r8_2 + (r9_3 << 3) + 8) = 0
                    int64_t rdx_10 = sx.q(rbx_1[1].d) * 3
                    int64_t rcx_13 = *(*rbx_1 + 0x28)
                    *(r8_2 + (r9_3 << 3) + 0x10) = *(rcx_13 + (rdx_10 << 2))
                    *(r8_2 + (r9_3 << 3) + 0x18) = *(rcx_13 + (rdx_10 << 2) + 8)
                    int64_t rdx_11 = sx.q(rbx_1[1].d) * 3
                    int64_t rcx_14 = *(*rbx_1 + 0x1b8)
                    *(r8_2 + (r9_3 << 3) + 0x1c) = *(rcx_14 + (rdx_11 << 2))
                    *(r8_2 + (r9_3 << 3) + 0x24) = *(rcx_14 + (rdx_11 << 2) + 8)
                    int64_t rdx_12 = sx.q(rbx_1[1].d) * 3
                    int64_t rcx_15 = *(*rbx_1 + 0x1d0)
                    *(r8_2 + (r9_3 << 3) + 0x28) = *(rcx_15 + (rdx_12 << 2))
                    *(r8_2 + (r9_3 << 3) + 0x30) = *(rcx_15 + (rdx_12 << 2) + 8)
                    *(r8_2 + (r9_3 << 3) + 0x34) = *(*(*rbx_1 + 0x2c0) + (sx.q(rbx_1[1].d) << 2))
    
    var_258:8.d &= not.d(var_268:0xc.d)
    sub_14059bdd0(&var_268:8)

int32_t var_170_1 = 0

if (var_178 != 0)
    sub_140a74f90(var_178)

int64_t var_1b0
var_1b0.d = 0
int32_t var_188_1 = 0xffffffff
int32_t var_184_1 = 0
sub_14059a8e0(&var_1a8, 0)

if (var_198 != 0)
    sub_140a74f90(var_198)

int64_t* rcx_22 = var_1b8

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

if (arg1[0x2f].d != *(arg1 + 0x1a4))
    if (data_1439b8e6c == 0)
        sub_1417b4c90(arg1)
    else
        zmm6 = sub_1417a9610(arg1, arg3)
    
    void* rcx_24 = *(*arg1 + 0x260)
    int64_t* i = *(rcx_24 + 0x140)
    
    for (void* r14_2 = &i[sx.q(*(rcx_24 + 0x148))]; i != r14_2; i = &i[1])
        int64_t* r8_3 = *i
        
        if (*(*(*r8_3 + 0x428) + sx.q(r8_3[1].d) * 0x10 + 8) s> 0)
            sub_1405ba560(&arg1[0x2e], &performanceCount, r8_3)
            int64_t rax_43 = sx.q(performanceCount.d)
            void* const rcx_29
            
            if (rax_43.d == 0xffffffff)
                rcx_29 = nullptr
            else
                rcx_29 = (rax_43 << 5) + arg1[0x2e]
            
            int64_t r8_4 = 0
            int64_t* rdx_16 = *(rcx_29 + 8)
            uint64_t r11_2 = sx.q(*(rcx_29 + 0x10)) << 3 u>> 3
            
            if (rdx_16 u> &rdx_16[sx.q(*(rcx_29 + 0x10))])
                r11_2 = 0
            
            if (r11_2 != 0)
                do
                    int64_t* rax_46 = *rdx_16
                    int64_t* rcx_30 = nullptr
                    
                    if (*(rax_46 + 0xc) u>= 3)
                        rcx_30 = rax_46
                    
                    if (rcx_30 != 0)
                        void* r9_4 = *rcx_30
                        int64_t r10_1 = sx.q(rcx_30[1].d)
                        
                        if (not(zmm6.d f< *(*(r9_4 + 0x4e8) + (r10_1 << 2))))
                            *(*(r9_4 + 0x4d0) + (r10_1 << 2)) = 0x7f7fffff
                            arg1[0x42].b = 1
                    
                    rdx_16 = &rdx_16[1]
                    r8_4 += 1
                while (r8_4 != r11_2)
    
    if (arg1[0x42].b != 0)
        void var_118
        int32_t zmm6_1
        double zmm7_1[0x2]
        int32_t zmm8_1
        zmm6_1, zmm7_1, zmm8_1 = sub_1417a8870(arg1, &var_118, nullptr)
        int32_t r10_2 = var_f8:8.d
        int128_t* var_290_1 = &var_108
        int32_t rcx_32 = 0
        var_298 = 0
        int32_t r8_5 = 0
        int64_t var_c8 = 0
        int32_t var_c0_1 = 0
        int32_t var_9c_1 = 0x80
        int64_t var_b8
        __builtin_memset(&var_b8, 0, 0x1c)
        int32_t var_98_1 = 0xffffffff
        int32_t var_94_1 = 0
        int64_t var_88_1 = 0
        int32_t var_80_1 = 0
        int64_t var_168 = 0
        int32_t var_160_1 = 0
        int32_t var_13c_1 = 0x80
        int64_t var_158
        __builtin_memset(&var_158, 0, 0x1c)
        int32_t var_138_1 = 0xffffffff
        int32_t var_134_1 = 0
        void* var_128_1 = nullptr
        int32_t var_120_1 = 0
        int32_t var_294_2 = 1
        int32_t var_288_1 = 0xffffffff
        int64_t var_284_1 = 0
        
        if (r10_2 != 0)
            int128_t* rax_49 = var_f8.q
            int128_t* r9_5 = &var_108
            
            if (rax_49 != 0)
                r9_5 = rax_49
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_2 - 1)
            int32_t rdx_20 = *r9_5
            
            if (rdx_20 != 0)
            label_1417a684c:
                int32_t rax_56 = ((rdx_20 - 1) & rdx_20) ^ rdx_20
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_56)
                int32_t var_294_3 = rax_56
                int32_t rax_57
                
                if (rax_56 == 0)
                    rax_57 = 0x20
                else
                    rax_57 = 0x1f - temp0_4
                
                int32_t rax_58 = r8_5 - rax_57 + 0x1f
                
                if (rax_58 s> r10_2)
                    rax_58 = r10_2
                
                var_284_1.d = rax_58
            else
                while (true)
                    int64_t rdx_21 = sx.q(rcx_32)
                    r8_5 += 0x20
                    rcx_32 += 1
                    var_284_1:4.d = r8_5
                    var_298 = rcx_32
                    
                    if (rdx_21.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        var_284_1.d = r10_2
                        break
                    
                    rdx_20 = *(r9_5 + (rdx_21 << 2) + 4)
                    var_288_1 = 0xffffffff
                    
                    if (rdx_20 != 0)
                        goto label_1417a684c
        
        double zmm2_1[0x2] = var_288_1.o
        var_268.q = &var_118
        int32_t var_2a4_1 = r10_2
        var_268 = var_298.o
        uint128_t zmm0 = var_268
        var_258 = zmm2_1
        double temp0_5[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
        var_240.o = zmm0
        var_238 = var_258
        var_228 = temp0_5.q
        int32_t var_2b8
        int64_t* var_218
        int64_t var_210
        int64_t var_200
        int64_t var_1a0_1
        uint128_t zmm1_1
        
        while (true)
            int64_t rdx_23 = sx.q(var_228:4.d)
            char rax_60
            
            if (rdx_23.d != ((0xffffffff << (r10_2.b & 0x1f)).q u>> 0x20).d
                    || var_238:8.q != &var_108)
                rax_60 = 0
            else
                rax_60 = 1
            
            if (rax_60 == 0 || var_240 != &var_118)
                rax_60 = 1
            else
                rax_60 = 0
            
            if (rax_60 == 0)
                break
            
            int64_t* rdx_26 = rdx_23 * 0x60 + *var_240
            var_218 = *rdx_26
            __builtin_memset(&var_210, 0, 0x2c)
            int32_t var_1e4_1 = 0x80
            int32_t var_1e0_1 = 0xffffffff
            int32_t var_1dc_1 = 0
            int64_t var_1d0_1 = 0
            int32_t var_1c8_1 = 0
            sub_140cd48b0(&var_210, &rdx_26[1])
            int64_t* var_2b0_1 = &var_200
            int32_t rcx_37 = 0
            var_2b8 = 0
            int32_t r8_7 = 0
            int32_t var_2b4_1 = 1
            int32_t var_2a8_2 = 0xffffffff
            var_2a4_1.q = 0
            int32_t var_1e8
            
            if (var_1e8 != 0)
                int64_t* r9_6 = &var_200
                int64_t* var_1f0
                
                if (var_1f0 != 0)
                    r9_6 = var_1f0
                
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(var_1e8 - 1)
                int32_t rdx_30 = *r9_6
                
                if (rdx_30 != 0)
                label_1417a69ec:
                    int32_t rax_69 = ((rdx_30 - 1) & rdx_30) ^ rdx_30
                    uint64_t rflags_3
                    int32_t temp0_6
                    temp0_6, rflags_3 = _bit_scan_reverse(rax_69)
                    int32_t var_2b4_2 = rax_69
                    int32_t rax_70
                    
                    if (rax_69 == 0)
                        rax_70 = 0x20
                    else
                        rax_70 = 0x1f - temp0_6
                    
                    int32_t rax_71 = r8_7 - rax_70 + 0x1f
                    
                    if (rax_71 s> var_1e8)
                        rax_71 = var_1e8
                    
                    int32_t var_2a4_3 = rax_71
                else
                    while (true)
                        int64_t rdx_31 = sx.q(rcx_37)
                        r8_7 += 0x20
                        rcx_37 += 1
                        int32_t var_2a0_1 = r8_7
                        var_2b8 = rcx_37
                        
                        if (rdx_31.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                            int32_t var_2a4_2 = var_1e8
                            break
                        
                        rdx_30 = *(r9_6 + (rdx_31 << 2) + 4)
                        var_2a8_2 = 0xffffffff
                        
                        if (rdx_30 != 0)
                            goto label_1417a69ec
            
            zmm2_1 = var_2a8_2.o
            uint128_t zmm0_1 = var_2b8.o
            var_1b8 = &var_210
            var_2a4_1 = var_1e8
            var_1b0.o = zmm0_1
            zmm0_1 = var_1b8.o
            var_1a0_1.o = zmm2_1
            zmm1_1 = var_1a8.o
            double temp0_7[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
            var_268 = zmm0_1
            uint128_t var_258_1 = zmm1_1
            int64_t var_248_1 = temp0_7.q
            
            while (true)
                int64_t rdx_33 = sx.q(var_258_1:0xc.d)
                char rax_73
                
                if (rdx_33.d != ((0xffffffff << (var_1e8.b & 0x1f)).q u>> 0x20).d
                        || var_258_1.q != &var_200)
                    rax_73 = 0
                else
                    rax_73 = 1
                
                int64_t* rcx_40 = var_268.q
                
                if (rax_73 == 0 || rcx_40 != &var_210)
                    rax_73 = 1
                else
                    rax_73 = 0
                
                if (rax_73 == 0)
                    break
                
                int64_t* rdx_34 = *(*rcx_40 + rdx_33 * 0x10)
                void* rcx_42 = *rdx_34
                int64_t r8_9 = sx.q(rdx_34[1].d)
                
                if ((*(rcx_42 + 0x368))[r8_9] == 0)
                    int64_t rbx_2 = sx.q(*(*(rcx_42 + 0x350) + (r8_9 << 2)))
                    
                    if (var_160_1 == var_134_1)
                    label_1417a6b3e:
                        
                        if (rbx_2.d != 0xffffffff)
                            sub_1409afd50(&var_168, &var_298)
                            int32_t rax_83 = var_298
                            char* var_2c0_1 = nullptr
                            *var_290_1 = rbx_2.d
                            *(var_290_1 + 4) = 0xffffffff
                            sub_1406da850(&var_168, &performanceCount, rbx_2.d, var_290_1, rax_83, 
                                var_2c0_1)
                    else
                        void var_130
                        void* rcx_43 = &var_130
                        
                        if (var_128_1 != 0)
                            rcx_43 = var_128_1
                        
                        int32_t rax_82 = *(rcx_43 + ((sx.q(var_120_1 - 1) & rbx_2) << 2))
                        
                        if (rax_82 == 0xffffffff)
                            goto label_1417a6b3e
                        
                        int64_t r8_10 = var_168
                        
                        while (true)
                            int64_t rdx_37 = sx.q(rax_82) * 3
                            
                            if (*(r8_10 + (rdx_37 << 2)) == rbx_2.d)
                                break
                            
                            rax_82 = *(r8_10 + (rdx_37 << 2) + 4)
                            
                            if (rax_82 == 0xffffffff)
                                goto label_1417a6b3e
                        
                        if (rax_82 == 0xffffffff)
                            goto label_1417a6b3e
                
                var_258_1:8.d &= not.d(var_268:0xc.d)
                sub_14059bdd0(&var_268:8)
            
            sub_14178c140(&var_c8, &var_210)
            sub_140d3a280(&var_218)
            var_228.d &= not.d(var_238:4.d)
            sub_14059bdd0(&var_238)
        
        zmm0 = data_1439b8e60
        
        if (not(zmm0.d f>= zmm7_1[0].d) && var_c0_1 != var_94_1)
            if (*(*arg1 + 0x1a0) != 0)
                __builtin_memset(&var_1b8, 0, 0x2c)
                int32_t var_18c_1 = 0x80
                int32_t var_188_2 = 0xffffffff
                int32_t var_184_2 = 0
                int64_t var_178_1 = 0
                int32_t var_170_2 = 0
                sub_140cd48b0(&var_1b8, &var_c8)
                void* var_2c0_2 = arg3
                zmm6_1 = sub_14179c600(*arg1, arg1[1], &var_168, &var_1b8, zmm8_1)
                zmm0 = data_1439b8e60
            
            if (not(zmm0.d f<= zmm6_1))
                int32_t r8_13 = var_f8:8.d
                int128_t* var_2b0_2 = &var_108
                var_2b8 = 0
                int32_t var_2b4_3 = 1
                int32_t var_2a8_4 = 0xffffffff
                var_2a4_1.q = 0
                
                if (r8_13 != 0)
                    sub_14059bdd0(&var_2b8)
                    r8_13 = var_f8:8.d
                
                zmm2_1 = var_2a8_4.o
                zmm0 = var_2b8.o
                var_1b8 = &var_118
                int32_t var_2a4_4 = r8_13
                var_1b0.o = zmm0
                zmm0 = var_1b8.o
                var_1a0_1.o = zmm2_1
                zmm1_1 = var_1a8.o
                double temp0_8[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
                var_268 = zmm0
                uint128_t var_258_2 = zmm1_1
                int64_t var_248_2 = temp0_8.q
                
                while (true)
                    int64_t rdx_44 = sx.q(var_258_2:0xc.d)
                    char rax_91
                    
                    if (rdx_44.d != ((0xffffffff << (r8_13.b & 0x1f)).q u>> 0x20).d
                            || var_258_2.q != &var_108)
                        rax_91 = 0
                    else
                        rax_91 = 1
                    
                    int64_t rcx_56 = var_268.q
                    
                    if (rax_91 == 0 || rcx_56 != &var_118)
                        rax_91 = 1
                    else
                        rax_91 = 0
                    
                    if (rax_91 == 0)
                        break
                    
                    int64_t* rdx_47 = rdx_44 * 0x60 + *rcx_56
                    var_218 = *rdx_47
                    __builtin_memset(&var_210, 0, 0x2c)
                    int32_t var_1e4_2 = 0x80
                    int32_t var_1e0_2 = 0xffffffff
                    int32_t var_1dc_2 = 0
                    int64_t var_1d0_2 = 0
                    int32_t var_1c8_2 = 0
                    sub_140cd48b0(&var_210, &rdx_47[1])
                    int32_t var_1e8_1
                    int32_t r8_14 = var_1e8_1
                    int64_t* rdi_4 = var_218
                    int64_t* var_2b0_3 = &var_200
                    var_2b8 = 0
                    int32_t var_2b4_4 = 1
                    int32_t var_2a8_6 = 0xffffffff
                    var_2a4_4.q = 0
                    
                    if (r8_14 != 0)
                        sub_14059bdd0(&var_2b8)
                        r8_14 = var_1e8_1
                    
                    zmm2_1 = var_2a8_6.o
                    double zmm0_2[0x2] = var_2b8.o
                    var_1b8 = &var_210
                    var_2a4_4 = r8_14
                    var_1b0.o = zmm0_2
                    zmm0_2 = var_1b8.o
                    var_1a0_1.o = zmm2_1
                    zmm1_1 = var_1a8.o
                    double temp0_9[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
                    var_240.o = zmm0_2
                    var_238 = zmm1_1
                    var_228 = temp0_9.q
                    
                    while (true)
                        int64_t rcx_60 = sx.q(var_228:4.d)
                        char rax_94
                        
                        if (rcx_60.d != ((0xffffffff << (r8_14.b & 0x1f)).q u>> 0x20).d
                                || var_238:8.q != &var_200)
                            rax_94 = 0
                        else
                            rax_94 = 1
                        
                        if (rax_94 == 0 || var_240 != &var_210)
                            rax_94 = 1
                        else
                            rax_94 = 0
                        
                        if (rax_94 == 0)
                            break
                        
                        zmm0_2 = data_1439b8e60
                        zmm7_1[0].d = zmm7_1[0].d f- zmm0_2[0].d
                        int64_t* r8_15 = *(*var_240 + rcx_60 * 0x10)
                        int64_t rdx_51 = sx.q(rdi_4[1].d) * 3
                        int64_t rcx_62 = *(*rdi_4 + 0x1b8)
                        zmm0_2[0].d = zmm0_2[0].d f* *(rcx_62 + (rdx_51 << 2))
                        int64_t zmm4_1
                        zmm4_1.d = zmm0_2[0].d f* *(rcx_62 + (rdx_51 << 2) + 4)
                        int64_t rdx_52 = sx.q(r8_15[1].d) * 3
                        int64_t rcx_63 = *(*r8_15 + 0x1b8)
                        zmm7_1[0].d = zmm7_1[0].d f* *(rcx_63 + (rdx_52 << 2))
                        zmm7_1[0].d = zmm7_1[0].d f* *(rcx_63 + (rdx_52 << 2) + 8)
                        zmm1_1.d = zmm7_1.d f* *(rcx_63 + (rdx_52 << 2) + 4)
                        zmm0_2[0].d = zmm0_2[0].d f+ zmm7_1[0].d
                        zmm4_1.d = zmm4_1.d f+ zmm1_1.d
                        var_290_1.d = zmm0_2[0].d f* *(rcx_62 + (rdx_51 << 2) + 8) f+ zmm7_1[0].d
                        *(rcx_63 + (rdx_52 << 2)) = (_mm_unpacklo_ps(zmm0_2, zmm4_1)).q
                        *(rcx_63 + (rdx_52 << 2) + 8) = var_290_1.d
                        zmm0_2 = data_1439b8e60
                        zmm7_1[0].d = zmm7_1[0].d f- zmm0_2[0].d
                        int64_t rdx_53 = sx.q(rdi_4[1].d) * 3
                        int64_t rcx_64 = *(*rdi_4 + 0x1d0)
                        zmm0_2[0].d = zmm0_2[0].d f* *(rcx_64 + (rdx_53 << 2))
                        zmm4_1.d = zmm0_2[0].d f* *(rcx_64 + (rdx_53 << 2) + 4)
                        int64_t rdx_54 = sx.q(r8_15[1].d) * 3
                        int64_t rcx_65 = *(*r8_15 + 0x1d0)
                        zmm7_1[0].d = zmm7_1[0].d f* *(rcx_65 + (rdx_54 << 2))
                        zmm1_1.d = zmm7_1.d f* *(rcx_65 + (rdx_54 << 2) + 4)
                        zmm7_1[0].d = zmm7_1[0].d f* *(rcx_65 + (rdx_54 << 2) + 8)
                        zmm0_2[0].d = zmm0_2[0].d f+ zmm7_1[0].d
                        zmm4_1.d = zmm4_1.d f+ zmm1_1.d
                        float zmm3_1 = zmm0_2[0].d f* *(rcx_64 + (rdx_53 << 2) + 8) f+ zmm7_1[0].d
                        *(rcx_65 + (rdx_54 << 2)) = (_mm_unpacklo_ps(zmm0_2, zmm4_1)).q
                        *(rcx_65 + (rdx_54 << 2) + 8) = zmm3_1
                        var_228.d &= not.d(var_238:4.d)
                        sub_14059bdd0(&var_238)
                    
                    sub_140d3a280(&var_218)
                    var_258_2:8.d &= not.d(var_268:0xc.d)
                    sub_14059bdd0(&var_268:8)
        
        int32_t var_120_2 = 0
        
        if (var_128_1 != 0)
            sub_140a74f90(var_128_1)
        
        sub_140909ff0(&var_168)
        int32_t var_80_2 = 0
        
        if (var_88_1 != 0)
            sub_140a74f90(var_88_1)
        
        sub_14100e680(&var_c8)
        int32_t var_d0_1 = 0
        int64_t var_d8
        
        if (var_d8 != 0)
            sub_140a74f90(var_d8)
        
        sub_140d3a060(&var_118)

int64_t result = QueryPerformanceCounter(&performanceCount)
__security_check_cookie(rax_1 ^ &var_2e8)
return result
