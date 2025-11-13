// 函数: sub_1417b8260
// 地址: 0x1417b8260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_448
int64_t rax_1 = __security_cookie ^ &var_448
int64_t rsi = 0
int32_t var_410 = 0
int32_t rax_2 = 0
int32_t r9 = arg3[1].d
int32_t r10 = *(arg3 + 0x34)
int64_t* r13 = arg3
int64_t* var_3e8 = arg2
int32_t rdx_1 = r9 - r10
int64_t* var_358 = arg3
int64_t* var_3d8
__builtin_memset(&var_3d8, 0, 0x20)
int32_t var_3bc

if (rdx_1 s> 0)
    sub_1405c5570(&var_3d8, rdx_1)
    r10 = *(r13 + 0x34)
    r9 = r13[1].d
    rax_2 = var_3bc

int32_t rdx_3 = r9 - r10
int64_t var_3c8

if (rdx_3 s> rax_2)
    sub_1405c5570(&var_3c8, rdx_3)
    r10 = *(r13 + 0x34)
    r9 = r13[1].d

int64_t rcx_2 = sx.q(arg2[1].d)
void* rax_3 = *arg2
int32_t r9_1 = r9 - r10
int64_t* r15 = nullptr
int64_t* var_408 = nullptr
int32_t i_4 = 0
int64_t var_400 = 0
int64_t r8 = rcx_2 * 3
int64_t rdx_4 = *(rax_3 + 0x28)
uint128_t var_118 = *((rcx_2 << 4) + *(rax_3 + 0x68))
float zmm2[0x4] = *(rdx_4 + (r8 << 2) + 4)
float temp0[0x4] = _mm_unpacklo_ps(*(rdx_4 + (r8 << 2)), (*(rdx_4 + (r8 << 2) + 8)).q)
uint128_t zmm0 = data_14399f670
float var_108[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm2, 0)[0].q)
float var_f8[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
    _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
int64_t var_3b8 = 0
int64_t var_3b0 = 0

if (r9_1 s> 0)
    sub_1405c5570(&var_3b8, r9_1)

char var_418_1

if (*arg4 != 0 || *(arg5 + 9) != 0)
    var_418_1 = 1

if ((*arg4 == 0 && *(arg5 + 9) == 0) || *(arg5 + 0x10) != 0)
    var_418_1 = 0

int32_t r11 = r13[5].d
void* rbx_1 = &r13[2]
rax_3.b = 0
float var_3f0 = 0f
char var_3a8 = rax_3.b
char var_417 = 0
int64_t* var_3f8 = nullptr
int32_t rcx_7 = 0
int32_t var_320 = 0
int32_t r8_1 = 0
int32_t var_31c = 1
void* var_318 = rbx_1
int32_t var_310 = 0xffffffff
int64_t var_30c = 0

if (r11 != 0)
    void* rax_4 = *(rbx_1 + 0x10)
    void* r9_2 = rbx_1
    
    if (rax_4 != 0)
        r9_2 = rax_4
    
    int32_t temp0_6
    int32_t temp1_1
    temp0_6:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *r9_2
    
    if (rdx_8 != 0)
    label_1417b8478:
        int32_t rax_11 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_1
        int32_t temp0_7
        temp0_7, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_31c_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_7
        
        var_30c.d = r8_1 - rax_12 + 0x1f
        
        if (r8_1 - rax_12 + 0x1f s> r11)
            var_30c.d = r11
    else
        while (true)
            int64_t rdx_9 = sx.q(rcx_7)
            r8_1 += 0x20
            rcx_7 += 1
            var_30c:4.d = r8_1
            var_320 = rcx_7
            
            if (rdx_9.d s>= (temp1_1 + (temp0_6 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r9_2 + (rdx_9 << 2) + 4)
            int32_t var_310_1 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1417b8478
        
        var_30c.d = r11

int32_t rdx_10 = r13[5].d
uint128_t var_340 = var_320.o
int32_t rdi_1 = 0xffffffff << (rdx_10.b & 0x1f)
int32_t r8_4 = rdx_10 s>> 5
int32_t r9_4 = rdx_10 & 0xffffffe0
int32_t var_298 = rdi_1
int32_t var_294 = rdx_10
int64_t var_330 = 0xffffffff
int64_t var_378 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
float zmm1[0x4] = var_340
uint128_t var_398 = r13.o

if (rdx_10 != r11)
    void* rax_14 = *(rbx_1 + 0x10)
    void* r10_1 = rbx_1
    
    if (rax_14 != 0)
        r10_1 = rax_14
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_14 = *(r10_1 + (sx.q(r8_4) << 2)) & rdi_1
    
    if (rdx_14 != 0)
    label_1417b8555:
        int32_t rax_21 = neg.d(rdx_14) & rdx_14
        uint64_t rflags_2
        int32_t temp0_9
        temp0_9, rflags_2 = _bit_scan_reverse(rax_21)
        int32_t rax_22
        
        if (rax_21 == 0)
            rax_22 = 0x20
        else
            rax_22 = 0x1f - temp0_9
        
        var_294 = r9_4 - rax_22 + 0x1f
        
        if (r9_4 - rax_22 + 0x1f s> r11)
            var_294 = r11
    else
        while (true)
            int64_t rcx_12 = sx.q(r8_4)
            r9_4 += 0x20
            r8_4 += 1
            
            if (rcx_12.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_14 = *(r10_1 + (rcx_12 << 2) + 4)
            var_298 = 0xffffffff
            
            if (rdx_14 != 0)
                goto label_1417b8555
        
        var_294 = r11

while (true)
    int64_t rcx_15 = sx.q(zmm1[3])
    int64_t* rax_24 = var_398.q
    
    if (rcx_15.d == (var_298.q u>> 0x20).d && zmm1[0].q == rbx_1 && rax_24 == r13)
        break
    
    int64_t* rdx_15 = *(*rax_24 + rcx_15 * 0x10)
    int64_t r8_5 = sx.q(rdx_15[1].d) * 3
    int64_t rcx_17 = *(*rdx_15 + 0xf8)
    void* rax_28 = *(rcx_17 + (r8_5 << 3) + 8)
    void* rdx_16 = rcx_17 + (r8_5 << 3)
    void* rcx_18 = rdx_16
    
    if (rax_28 != 0)
        rcx_18 = rax_28
    
    void* rdx_17 = rcx_18 + (sx.q(*(rdx_16 + 0x10)) << 3)
    
    if (rcx_18 != rdx_17)
        while (true)
            void* rax_30 = *rcx_18
            
            if (rax_30 != 0)
                uint128_t zmm13 = *(rax_30 + 0x10)
                
                if (zmm13.d != 0)
                    break
                
                if ((zmm13.q u>> 0x20).d != 0)
                    break
                
                if (_mm_bsrli_si128(zmm13, 8).d != 0)
                    break
                
                if ((_mm_bsrli_si128(zmm13, 8).q u>> 0x20).d != 0)
                    break
            
            rcx_18 += 8
            
            if (rcx_18 == rdx_17)
                goto label_1417b8655
        
        break
    
label_1417b8655:
    zmm1[2] &= not.d(var_398:0xc.d)
    sub_14059bdd0(&var_398:8)

int32_t var_2a8
void* var_2a0

if (var_418_1 != 0)
    int32_t r11_1 = *(rbx_1 + 0x18)
    int32_t rcx_20 = 0
    var_2a8 = 0
    int32_t var_2a4_1 = 1
    int32_t rdi_4 = 0
    var_2a0 = rbx_1
    int32_t r8_6 = 0
    int32_t var_298_1 = 0xffffffff
    var_294.q = 0
    
    if (r11_1 != 0)
        void* rax_39 = *(rbx_1 + 0x10)
        void* r9_6 = rbx_1
        
        if (rax_39 != 0)
            r9_6 = rax_39
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(r11_1 - 1)
        int32_t rdx_20 = *r9_6
        int32_t var_294_2
        
        if (rdx_20 != 0)
        label_1417b8701:
            int32_t rax_46 = neg.d(rdx_20) & rdx_20
            uint64_t rflags_3
            int32_t temp0_12
            temp0_12, rflags_3 = _bit_scan_reverse(rax_46)
            int32_t var_2a4_2 = rax_46
            int32_t rax_47
            
            if (rax_46 == 0)
                rax_47 = 0x20
            else
                rax_47 = 0x1f - temp0_12
            
            int32_t var_294_1 = r8_6 - rax_47 + 0x1f
            
            if (r8_6 - rax_47 + 0x1f s> r11_1)
                var_294_2 = r11_1
        else
            while (true)
                int64_t rdx_21 = sx.q(rcx_20)
                r8_6 += 0x20
                rcx_20 += 1
                int32_t var_290_1 = r8_6
                var_2a8 = rcx_20
                
                if (rdx_21.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_20 = *(r9_6 + (rdx_21 << 2) + 4)
                var_298_1 = 0xffffffff
                
                if (rdx_20 != 0)
                    goto label_1417b8701
            
            var_294_2 = r11_1
    
    int32_t rdx_22 = r13[5].d
    zmm2 = var_298_1.o
    var_294 = rdx_22
    int32_t r9_7 = 0xffffffff << (rdx_22.b & 0x1f)
    int32_t var_298_2 = r9_7
    var_340 = var_2a8.o
    int32_t r9_9 = rdx_22 & 0xffffffe0
    int32_t r8_9 = rdx_22 s>> 5
    var_330 = zmm2[0].q
    int64_t var_378_1 = (_mm_unpackhi_pd(zmm2, zmm2[0].q)).q
    zmm1 = var_340
    var_398 = r13.o
    
    if (rdx_22 != r11_1)
        void* rax_49 = *(rbx_1 + 0x10)
        void* r10_2 = rbx_1
        
        if (rax_49 != 0)
            r10_2 = rax_49
        
        int32_t temp10_1
        int32_t temp11_1
        temp10_1:temp11_1 = sx.q(r11_1 - 1)
        int32_t rdx_26 = *(r10_2 + (sx.q(r8_9) << 2)) & r9_7
        
        if (rdx_26 != 0)
        label_1417b87f5:
            int32_t rax_56 = neg.d(rdx_26) & rdx_26
            uint64_t rflags_4
            int32_t temp0_14
            temp0_14, rflags_4 = _bit_scan_reverse(rax_56)
            int32_t rax_57
            
            if (rax_56 == 0)
                rax_57 = 0x20
            else
                rax_57 = 0x1f - temp0_14
            
            var_294 = r9_9 - rax_57 + 0x1f
            
            if (r9_9 - rax_57 + 0x1f s> r11_1)
                var_294 = r11_1
        else
            while (true)
                int64_t rcx_25 = sx.q(r8_9)
                r9_9 += 0x20
                r8_9 += 1
                
                if (rcx_25.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                    break
                
                rdx_26 = *(r10_2 + (rcx_25 << 2) + 4)
                var_298_2 = 0xffffffff
                
                if (rdx_26 != 0)
                    goto label_1417b87f5
            
            var_294 = r11_1
    
    while (true)
        int64_t rcx_28 = sx.q(zmm1[3])
        int64_t* rax_59 = var_398.q
        
        if (rcx_28.d == (var_298_2.q u>> 0x20).d && zmm1[0].q == rbx_1 && rax_59 == r13)
            break
        
        int64_t* rax_61 = *(*rax_59 + rcx_28 * 0x10)
        void* rax_63 = *(*(*rax_61 + 0x320) + (sx.q(rax_61[1].d) << 3))
        int32_t rax_64
        
        if (rax_63 != 0)
            rax_64 = *(rax_63 + 0x18)
        else
            rax_64 = 0
        
        rdi_4 += rax_64
        zmm1[2] &= not.d(var_398:0xc.d)
        sub_14059bdd0(&var_398:8)
    
    r15 = nullptr
    
    if (rdi_4 s> 0)
        sub_14083ad30(&var_408, rdi_4)
        i_4 = var_400.d
        r15 = var_408

int32_t r11_2 = *(rbx_1 + 0x18)
int32_t rcx_33 = 0
var_2a8 = 0
int32_t var_2a4_3 = 1
int32_t r8_10 = 0
var_2a0 = rbx_1
int32_t var_298_3 = 0xffffffff
var_294.q = 0

if (r11_2 != 0)
    void* rax_67 = *(rbx_1 + 0x10)
    void* r9_11 = rbx_1
    
    if (rax_67 != 0)
        r9_11 = rax_67
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r11_2 - 1)
    int32_t rdx_31 = *r9_11
    int32_t var_294_4
    
    if (rdx_31 != 0)
    label_1417b8941:
        int32_t rax_74 = neg.d(rdx_31) & rdx_31
        uint64_t rflags_5
        int32_t temp0_15
        temp0_15, rflags_5 = _bit_scan_reverse(rax_74)
        var_2a4_3 = rax_74
        int32_t rax_75
        
        if (rax_74 == 0)
            rax_75 = 0x20
        else
            rax_75 = 0x1f - temp0_15
        
        int32_t var_294_3 = r8_10 - rax_75 + 0x1f
        
        if (r8_10 - rax_75 + 0x1f s> r11_2)
            var_294_4 = r11_2
    else
        while (true)
            int64_t rdx_32 = sx.q(rcx_33)
            r8_10 += 0x20
            rcx_33 += 1
            int32_t var_290_2 = r8_10
            var_2a8 = rcx_33
            
            if (rdx_32.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_31 = *(r9_11 + (rdx_32 << 2) + 4)
            var_298_3 = 0xffffffff
            
            if (rdx_31 != 0)
                goto label_1417b8941
        
        var_294_4 = r11_2

int32_t rdx_33 = r13[5].d
zmm2 = var_298_3.o
var_398.q = r13
int32_t var_294_5 = rdx_33
int32_t r9_12 = 0xffffffff << (rdx_33.b & 0x1f)
int32_t var_298_4 = r9_12
var_398 = var_2a8.o
int32_t r9_14 = rdx_33 & 0xffffffe0
int32_t r8_13 = rdx_33 s>> 5
zmm0 = var_398
float var_388[0x4] = zmm2
var_330 = (_mm_unpackhi_pd(zmm2, zmm2[0].q)).q
int64_t* var_348
var_348.o = zmm0
var_340 = var_388

if (rdx_33 != r11_2)
    void* rax_77 = *(rbx_1 + 0x10)
    void* r10_3 = rbx_1
    
    if (rax_77 != 0)
        r10_3 = rax_77
    
    int32_t temp8_1
    int32_t temp9_1
    temp8_1:temp9_1 = sx.q(r11_2 - 1)
    int32_t rdx_37 = *(r10_3 + (sx.q(r8_13) << 2)) & r9_12
    int32_t var_294_7
    
    if (rdx_37 != 0)
    label_1417b8a35:
        int32_t rax_84 = neg.d(rdx_37) & rdx_37
        uint64_t rflags_6
        int32_t temp0_17
        temp0_17, rflags_6 = _bit_scan_reverse(rax_84)
        int32_t r12_1
        
        if (rax_84 == 0)
            r12_1 = 0x20
        else
            r12_1 = 0x1f - temp0_17
        
        int32_t var_294_6 = r9_14 - r12_1 + 0x1f
        
        if (r9_14 - r12_1 + 0x1f s> r11_2)
            var_294_7 = r11_2
    else
        while (true)
            int64_t rcx_38 = sx.q(r8_13)
            r9_14 += 0x20
            r8_13 += 1
            
            if (rcx_38.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                break
            
            rdx_37 = *(r10_3 + (rcx_38 << 2) + 4)
            var_298_4 = 0xffffffff
            
            if (rdx_37 != 0)
                goto label_1417b8a35
        
        var_294_7 = r11_2

float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm12[0x4]
float var_a8[0x4] = zmm12
uint64_t rdx_39 = var_298_4.q u>> 0x20
uint128_t zmm14
uint128_t var_c8 = zmm14
uint128_t zmm15
uint128_t var_d8 = zmm15
uint64_t var_368 = rdx_39

while (true)
    int64_t rcx_40 = sx.q(var_330:4.d)
    int64_t var_3d0_1
    int32_t var_3c0_1
    float var_248[0x4]
    float var_228[0x4]
    float var_1e8[0x4]
    float zmm3[0x4]
    float zmm4[0x4]
    float zmm5[0x4]
    
    if (rcx_40.d == rdx_39.d && var_340:8.q == rbx_1 && var_348 == r13)
        int64_t* rdi_5 = var_3e8
        int64_t rbx_16 = sx.q(rdi_5[1].d)
        int64_t r12_5 = *(*rdi_5 + 0x488)
        void*** rax_141
        
        if (var_3c0_1 == 0)
            rax_141 = nullptr
        else
            void*** rax_140 = j_sub_140a82f30(0xa0)
            
            if (rax_140 == 0)
                rax_141 = nullptr
            else
                rax_141 = sub_141704b70(rax_140, &var_3c8, &var_3b8)
        
        int64_t* rcx_86 = *(r12_5 + (rbx_16 << 3))
        
        if (rcx_86 != rax_141)
            *(r12_5 + (rbx_16 << 3)) = rax_141
            
            if (rcx_86 != 0)
                (**rcx_86)(rcx_86, 1)
        
        void* rbx_17 = arg5
        int64_t* r12_6 = nullptr
        var_358 = nullptr
        int32_t i_6 = 0
        int32_t i_7 = 0
        
        if (*(rbx_17 + 0x10) == 0)
            int64_t** rcx_87
            int32_t rbx_18
            int64_t* r8_27
            
            if (*(rbx_17 + 8) == 0)
                var_408 = nullptr
                r8_27 = nullptr
                var_400.d = i_4
                
                if (i_4 != 0)
                    sub_1407c3650(&var_408, i_4, 0)
                    r8_27 = var_408
                    int64_t* rcx_91 = r15
                    void* rdx_77 = r8_27 - r15
                    int32_t i
                    
                    do
                        *(rcx_91 + rdx_77) = *rcx_91
                        *(rcx_91 + rdx_77 + 8) = rcx_91[1].d
                        rcx_91 += 0xc
                        i = i_4
                        i_4 -= 1
                    while (i != 1)
                else
                    var_400:4.d = 0
                
                rcx_87 = &var_408
                rbx_18 = 2
            else if (i_4 != 0)
                var_2a8.q = (_mm_unpacklo_ps(0x7f7fffff, 0x7f7fffff)).q
                var_3f0 = 3.40282347e+38f
                var_2a0.d = 0x7f7fffff
                int32_t var_360_1 = 0xff7fffff
                int32_t var_294_8 = 0xff7fffff
                var_2a0 = (_mm_unpacklo_ps(0xff7fffff, 0xff7fffff)).q
                void* rdx_73 = r15 + sx.q(i_4) * 0xc
                
                while (r15 != rdx_73)
                    zmm4 = *r15
                    zmm0 = __minss_xmmss_memss(var_2a0.d.d, r15[1].d)
                    float temp0_219[0x4] = __minss_xmmss_memss(zmm4[0], var_2a8)
                    zmm5 = *(r15 + 4)
                    float temp0_220[0x4] = __maxss_xmmss_memss(zmm4[0], var_2a0:4.d)
                    float temp0_221[0x4] = __minss_xmmss_memss(zmm5[0], var_2a4_3)
                    float temp0_222[0x4] = __maxss_xmmss_memss(zmm5[0], var_298_4)
                    var_3f0 = zmm0.d
                    zmm0 = __maxss_xmmss_memss(var_294_8.d, r15[1].d)
                    r15 += 0xc
                    var_2a8.q = (_mm_unpacklo_ps(temp0_219, temp0_221[0].q)).q
                    var_2a0.d = var_3f0
                    var_294_8 = zmm0.d
                    var_2a0 = (_mm_unpacklo_ps(temp0_220, temp0_222[0].q)).q
                
                zmm3 = data_1439b8e80
                var_398 = var_2a8.o
                var_388[0].q = var_298_4.q
                sub_14178c3d0(&var_3f8, &var_408, &var_398, zmm3)
                r8_27 = var_408
                rcx_87 = &var_3f8
                r15 = var_408
                rbx_18 = 1
            else
                r8_27 = var_408
                rcx_87 = &var_3f8
                var_3f8 = nullptr
                rbx_18 = i_4 + 1
                var_3f0 = 0f
            
            if (&var_358 != rcx_87)
                r12_6 = *rcx_87
                *rcx_87 = nullptr
                i_6 = rcx_87[1].d
                int32_t i_8 = *(rcx_87 + 0xc)
                rcx_87[1] = 0
                r8_27 = var_408
                var_358 = r12_6
                i_7 = i_6
                i_7 = i_8
            
            if ((rbx_18.b & 2) != 0)
                rbx_18 &= 0xfffffffd
                
                if (r8_27 != 0)
                    sub_140a74f90(r8_27)
            
            if ((rbx_18.b & 1) != 0)
                int64_t* rcx_93 = var_3f8
                
                if (rcx_93 != 0)
                    sub_140a74f90(rcx_93)
            
            rbx_17 = arg5
        
        int64_t* rcx_95 = *arg4
        int128_t zmm13_1
        uint64_t rcx_98
        
        if (rcx_95 == 0)
            int32_t rax_150 = var_3d0_1.d
            
            if (rax_150 == 0)
                int64_t rbx_20 = sx.q(rdi_5[1].d)
                void* rdi_6 = *rdi_5
                *(*(rdi_6 + 0x80) + (rbx_20 << 3)) = 0
                zmm13_1 = sub_14175b390(rdi_6, rbx_20.d)
                sub_141744270(rdi_6, rbx_20.d)
                rdi_5 = var_3e8
            else if (data_143ef7eb0 == 0)
                if (var_417 != 0 || rax_150 != 1)
                    void*** rax_163 = j_sub_140a82f30(0xa0)
                    void*** rax_164
                    
                    if (rax_163 == 0)
                        rax_164 = nullptr
                    else
                        rax_164 = sub_141704b70(rax_163, &var_3d8, &var_3b8)
                    
                    var_3e8 = rax_164
                    zmm13_1 = sub_1417b5440(rdi_5, &var_3e8)
                    rcx_98 = var_3e8
                    goto label_1417b9dce
                
                zmm13_1 = sub_1417b5440(rdi_5, var_3d8)
            else
                var_408 = nullptr
                int64_t var_400_2 = 0
                void var_1b8
                sub_141704b70(&var_1b8, &var_3d8, &var_408)
                int64_t* rcx_102 = var_408
                
                if (rcx_102 != 0)
                    sub_140a74f90(rcx_102)
                
                int32_t var_18c
                int64_t zmm1_4 = var_18c
                int32_t var_188
                float zmm2_4[0x4] = var_188
                int64_t var_198
                int32_t zmm5_2 = var_198.d
                float zmm9_2 = var_198:4.d
                int64_t zmm7_2
                zmm7_2.d = zmm1_4.d f- zmm5_2
                int32_t var_184
                int64_t zmm3_4 = var_184
                float zmm6_2 = zmm2_4[0] - zmm9_2
                var_2a8.q = var_198
                int32_t var_190
                int64_t zmm8_2
                zmm8_2.d = zmm3_4.d f- var_190
                var_2a0.d = var_190
                int32_t var_294_9 = var_184
                var_2a0 = var_18c.q
                int64_t zmm0_8
                
                if (zmm7_2.d f>= zmm6_2 || zmm7_2.d f>= zmm8_2.d)
                    zmm0_8 = _mm_min_ss(zmm8_2.d, zmm6_2)
                else
                    zmm0_8 = zmm7_2
                
                int32_t zmm4_3 = data_1439b8e78
                
                if (zmm0_8.d f< zmm4_3)
                    var_3f8 = nullptr
                    var_3f0 = 0f
                    void*** rax_160 = j_sub_140a82f30(0x20)
                    void*** rax_161
                    
                    if (rax_160 == 0)
                        rax_161 = nullptr
                    else
                        zmm7_2.d = zmm7_2.d f* zmm7_2.d
                        zmm8_2.d = zmm8_2.d f* zmm8_2.d
                        float temp0_228[0x4] =
                            _mm_sqrt_ss(0, zmm6_2 * zmm6_2 f+ zmm7_2.d f+ zmm8_2.d)
                        temp0_228[0] = temp0_228[0] * 0.5f
                        rax_161 = sub_1417a12b0(rax_160, &var_3f8, temp0_228)
                    
                    var_3e8 = rax_161
                    zmm13_1 = sub_1417b5440(rdi_5, &var_3e8)
                    int64_t* rcx_115 = var_3e8
                    
                    if (rcx_115 != 0)
                        (**rcx_115)(rcx_115, 1)
                else
                    zmm1_4.d = zmm1_4.d f- zmm5_2
                    float rcx_103 = data_1439b8e70
                    zmm2_4[0] = zmm2_4[0] - zmm9_2
                    float rax_154 = data_1439b8e74
                    zmm3_4.d = zmm3_4.d f- var_190
                    zmm0_8.d = 1f f/ zmm4_3
                    zmm1_4.d = zmm1_4.d f* zmm0_8.d
                    zmm2_4[0] = zmm2_4[0] f* zmm0_8.d
                    float r10_4 = int.d(zmm1_4.d)
                    zmm3_4.d = zmm3_4.d f* zmm0_8.d
                    float r8_31 = int.d(zmm2_4[0])
                    float r9_16 = int.d(zmm3_4.d)
                    float rdx_84
                    
                    if (r10_4 s>= rcx_103)
                        rdx_84 = rax_154
                        
                        if (r10_4 s< rax_154)
                            rdx_84 = r10_4
                    else
                        rdx_84 = rcx_103
                    
                    var_3f8.d = rdx_84
                    float rdx_85
                    
                    if (r8_31 s>= rcx_103)
                        rdx_85 = rax_154
                        
                        if (r8_31 s< rax_154)
                            rdx_85 = r8_31
                    else
                        rdx_85 = rcx_103
                    
                    var_3f8:4.d = rdx_85
                    
                    if (r9_16 s>= rcx_103)
                        if (r9_16 s< rax_154)
                            rax_154 = r9_16
                        
                        rcx_103 = rax_154
                    
                    var_3f0 = rcx_103
                    var_408 = nullptr
                    int64_t var_400_3 = 0
                    var_398.w = 0
                    sub_140596d10(&var_398:8, &var_408)
                    int64_t* rcx_105 = var_408
                    
                    if (rcx_105 != 0)
                        sub_140a74f90(rcx_105)
                    
                    sub_1417a1530(&var_248, &var_2a8, &var_2a0:4, &var_3f8, data_1439b8e7c)
                    void*** rax_156 = j_sub_140a82f30(0xb8)
                    void*** rax_157
                    
                    if (rax_156 == 0)
                        rax_157 = nullptr
                    else
                        rax_157 = sub_141761480(rax_156, &var_398, &var_248, &var_1b8, 0, 0)
                    
                    if (*(rbx_17 + 0x10) == 0)
                        zmm6_2 = var_228[1]
                        float zmm1_5 = var_228[2]
                        float zmm0_9 = var_228[3]
                        
                        if (zmm6_2 <= zmm1_5 || not(zmm6_2 > zmm0_9))
                            _mm_max_ss(zmm0_9, zmm1_5)
                        
                        int32_t rbx_21 = i_6 - 1
                        
                        if (rbx_21 s>= 0)
                            int64_t r14_1 = sx.q(rbx_21) * 0xc
                            int32_t temp14_1
                            
                            do
                                if (i_6 s> data_1439b8e84)
                                    int32_t zmm0_10
                                    int128_t zmm6_3
                                    int128_t zmm7_3
                                    zmm0_10, zmm6_3, zmm7_3 = sub_14177ffe0(rax_157, r12_6 + r14_1)
                                    
                                    if (not(zmm0_10 f>= (zmm6_3 ^ zmm7_3).d))
                                        sub_1417b4600(&var_358, rbx_21, 1, 1)
                                        i_6 = i_7
                                        r12_6 = var_358
                                
                                r14_1 -= 0xc
                                temp14_1 = rbx_21
                                rbx_21 -= 1
                            while (temp14_1 - 1 s>= 0)
                            rdi_5 = var_3e8
                            rsi = 0
                    
                    var_3e8 = rax_157
                    zmm13_1 = sub_1417b5440(rdi_5, &var_3e8)
                    int64_t* rcx_111 = var_3e8
                    
                    if (rcx_111 != 0)
                        (**rcx_111)(rcx_111, 1)
                    
                    int64_t rcx_112 = var_398:8.q
                    
                    if (rcx_112 != 0)
                        sub_140a74f90(rcx_112)
                
                int32_t var_120_1 = 0
                int64_t var_128
                
                if (var_128 != 0)
                    sub_140a74f90(var_128)
                
                void var_168
                sub_14094b3a0(&var_168)
                int64_t var_178
                
                if (var_178 != 0)
                    sub_140a74f90(var_178)
                
                sub_1417068a0(&var_1b8)
        else
            int64_t** rax_148 = (*(*rcx_95 + 0x18))(rcx_95, &var_368)
            int64_t* rbx_19 = *rax_148
            *rax_148 = nullptr
            var_408 = rbx_19
            void*** var_400_1 = sub_140dd3780(rbx_19)
            zmm13_1 = sub_1417b5700(rdi_5, &var_408)
            rcx_98 = var_368
        label_1417b9dce:
            
            if (rcx_98 != 0)
                (**rcx_98)(rcx_98, 1)
        
        if (var_3a8 != 0)
            void* rax_167 = *(*(*rdi_5 + 0xb0) + (sx.q(rdi_5[1].d) << 3))
            
            if (rax_167 != 0)
                *(rax_167 + 0xb) = 0
        
        int64_t rcx_125 = *(arg5 + 0x10)
        float zmm0_7[0x4]
        
        if (rcx_125 == 0)
            uint64_t rcx_128 = sx.q(rdi_5[1].d)
            void* r14_2 = *rdi_5
            var_368 = rcx_128
            
            if (*(*(r14_2 + 0x320) + (rcx_128 << 3)) == 0)
                void*** rax_170 = j_sub_140a82f30(0x48)
                void*** rbx_23
                
                if (rax_170 == 0)
                    rbx_23 = nullptr
                else
                    rbx_23 = sub_141702a70(rax_170)
                
                void**** rcx_131 = *(r14_2 + 0x320) + (var_368 << 3)
                
                if (rcx_131 != &var_368)
                    void*** r14_3 = *rcx_131
                    *rcx_131 = rbx_23
                    
                    if (r14_3 != 0)
                        sub_1417059c0(r14_3)
                        j_sub_140a74f90(r14_3)
                else if (rbx_23 != 0)
                    sub_1417059c0(rbx_23)
                    j_sub_140a74f90(rbx_23)
            
            int64_t rbx_24 = sx.q(rdi_5[1].d)
            int64_t r14_4 = *(*rdi_5 + 0x320)
            void* rcx_135 = *(r14_4 + (rbx_24 << 3))
            
            if (i_6 != 0)
                sub_1417502a0(rcx_135, *(rcx_135 + 0x18) + i_6)
                
                if (i_6 s> 0)
                    uint64_t i_3 = zx.q(i_6)
                    uint64_t i_1
                    
                    do
                        zmm0_7 = zx.o(*(r12_6 + rsi))
                        rsi += 0xc
                        int64_t rcx_136 = *(*(r14_4 + (rbx_24 << 3)) + 0x28)
                        *(rcx_136 + rsi - 0xc) = zmm0_7.q
                        *(rcx_136 + rsi - 4) = *(r12_6 + rsi - 4)
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
            
            if (var_418_1 != 0)
                sub_141759be0(*(*(*rdi_5 + 0x320) + (sx.q(rdi_5[1].d) << 3)))
        else
            int64_t rdx_98 = sx.q(rdi_5[1].d)
            int64_t r8_35 = *(*rdi_5 + 0x320)
            void*** rbx_22 = *(r8_35 + (rdx_98 << 3))
            
            if (rbx_22 != rcx_125)
                *(r8_35 + (rdx_98 << 3)) = rcx_125
                
                if (rbx_22 != 0)
                    sub_1417059c0(rbx_22)
                    j_sub_140a74f90(rbx_22)
        
        int64_t rax_185 = sx.q(rdi_5[1].d)
        void* rdx_104 = *rdi_5
        int64_t* rcx_140 = *(*(rdx_104 + 0x80) + (rax_185 << 3))
        
        if (rcx_140 != 0)
            *(rax_185 + *(rdx_104 + 0x158)) = 1
            int64_t* rax_179 = (*(*rcx_140 + 0x28))(rcx_140, &var_398)
            int64_t r8_37 = sx.q(rdi_5[1].d) * 3
            int64_t rdx_106 = *(*rdi_5 + 0x128)
            *(rdx_106 + (r8_37 << 3)) = *rax_179
            *(rdx_106 + (r8_37 << 3) + 8) = rax_179[1].d
            *(rdx_106 + (r8_37 << 3) + 0xc) = *(rax_179 + 0xc)
            *(rdx_106 + (r8_37 << 3) + 0x14) = *(rax_179 + 0x14)
            void* rcx_144 = *rdi_5
            int64_t r9_19 = sx.q(rdi_5[1].d)
            int64_t rdx_107 = *(rcx_144 + 0x28)
            int64_t r8_38 = r9_19 * 3
            int64_t r10_5 = *(rcx_144 + 0x128)
            var_1e8 = *((r9_19 << 4) + *(rcx_144 + 0x68))
            zmm0_7 = *(rdx_107 + (r8_38 << 2) + 4)
            float temp0_229[0x4] =
                _mm_unpacklo_ps(*(rdx_107 + (r8_38 << 2)), *(rdx_107 + (r8_38 << 2) + 8))
            float temp0_230[0x4] = _mm_unpacklo_ps(zmm0_7, zx.o(0)[0].q)
            float zmm2_3[0x4] = data_14399f66c
            float var_1d8_2[0x4] = _mm_unpacklo_ps(temp0_229, temp0_230[0].q)
            float var_1c8_2[0x4] = _mm_unpacklo_ps(
                _mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
                _mm_unpacklo_ps(zmm2_3, (zx.o(0)).q)[0].q)
            sub_1417598c0(r10_5 + r9_19 * 0x18, &var_2a8, &var_1e8)
            zmm13_1 = sub_141756120(*rdi_5, rdi_5[1].d, &var_2a8)
            rax_185 = zx.q(rdi_5[1].d)
            rdx_104 = *rdi_5
        
        int64_t rcx_147 = sx.q(rax_185.d) * 3
        int64_t rax_187 = *(rdx_104 + 0xf8)
        void* rdx_110 = rax_187 + (rcx_147 << 3)
        void* rax_188 = *(rax_187 + (rcx_147 << 3) + 8)
        void* rcx_148 = rdx_110
        
        if (rax_188 != 0)
            rcx_148 = rax_188
        
        void* rdx_111 = rcx_148 + (sx.q(*(rdx_110 + 0x10)) << 3)
        
        while (rcx_148 != rdx_111)
            void* rax_190 = *rcx_148
            rcx_148 += 8
            *(rax_190 + 0x10) = zmm13_1
        
        if (r12_6 != 0)
            sub_140a74f90(r12_6)
        
        int64_t rcx_150 = var_3b8
        
        if (rcx_150 != 0)
            sub_140a74f90(rcx_150)
        
        if (r15 != 0)
            sub_140a74f90(r15)
        
        sub_1417a2470(&var_3c8)
        sub_1417a2470(&var_3d8)
        int64_t result = sub_1405970a0(arg4)
        __security_check_cookie(rax_1 ^ &var_448)
        return result
    
    int64_t* r12_2 = *(*var_348 + rcx_40 * 0x10)
    int64_t rcx_42 = sx.q(r12_2[1].d)
    void* rax_88 = *r12_2
    int64_t r8_14 = rcx_42 * 3
    int64_t rdx_40 = *(rax_88 + 0x28)
    var_248 = *((rcx_42 << 4) + *(rax_88 + 0x68))
    zmm0 = *(rdx_40 + (r8_14 << 2) + 4)
    float temp0_18[0x4] =
        _mm_unpacklo_ps(*(rdx_40 + (r8_14 << 2)), (*(rdx_40 + (r8_14 << 2) + 8))[0].q)
    zmm0 = _mm_unpacklo_ps(zmm0, zx.o(0)[0].q)
    zmm2 = data_14399f66c
    float temp0_20[0x4] = _mm_unpacklo_ps(temp0_18, zmm0.q)
    var_228 = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670.q), 
        _mm_unpacklo_ps(zmm2, zx.o(0)[0].q)[0].q)
    float (* rax_89)[0x4] = sub_140ad7d70(&var_248, &var_1e8, &var_118)
    int64_t rdx_42 = sx.q(r12_2[1].d)
    uint128_t var_278 = *rax_89
    float var_268_1[0x4] = rax_89[1]
    uint128_t var_258_1 = rax_89[2]
    
    if (*(*(*r12_2 + 0x80) + (rdx_42 << 3)) != 0)
        int64_t* rax_91 = nullptr
        
        if (*(r12_2 + 0xc) u>= 3)
            rax_91 = r12_2
        
        int64_t rdx_43 = sx.q(rax_91[1].d)
        void* r8_16 = *rax_91
        int64_t* rbx_2
        
        if (rax_91 == 0)
            rbx_2 = nullptr
        else
            rbx_2 = *(*(r8_16 + 0x4a0) + (rdx_43 << 3))
        
        int64_t* var_3e0_1 = rbx_2
        float (* rdx_44)[0x4]
        
        if (data_143ef7eb0 == 0 && rbx_2 != 0)
            rdx_44 = *(*(r8_16 + 0x4b8) + (rdx_43 << 3))
        
        if (data_143ef7eb0 != 0 || rbx_2 == 0 || rdx_44 == 0)
            void*** rax_112 = j_sub_140a82f30(0x70)
            void*** r13_3 = rax_112
            
            if (rax_112 == 0)
                r13_3 = nullptr
            else
                int64_t* rbx_10 = *(*(*r12_2 + 0x80) + (sx.q(r12_2[1].d) << 3))
                sub_1417048d0(rax_112, 2, 4)
                r13_3[2] = rbx_10
                *r13_3 = &data_142fc4c88
                r13_3[3] = 0
                *(r13_3 + 0x20) = var_278
                *(r13_3 + 0x30) = var_268_1
                *(r13_3 + 0x40) = var_258_1
                sub_1417598c0((*(*rbx_10 + 0x28))(rbx_10, &var_2a8), &r13_3[0xa], &var_278)
                *(r13_3 + 0xa) = *(rbx_10 + 0xa)
                *(r13_3 + 0xb) = *(r13_3[2] + 0xb)
            
            int64_t rbx_11 = sx.q(var_3d0_1.d)
            int32_t rax_117 = (rbx_11 + 1).d
            var_3d0_1.d = rax_117
            
            if (rax_117 s> var_3d0_1:4.d)
                sub_1405a4d70(&var_3d8)
            
            var_3d8[rbx_11] = r13_3
            void*** rax_119 = j_sub_140a82f30(0x70)
            void*** r13_4 = rax_119
            
            if (rax_119 == 0)
                r13_4 = nullptr
            else
                int64_t* rbx_13 = *(*(*r12_2 + 0x80) + (sx.q(r12_2[1].d) << 3))
                sub_1417048d0(rax_119, 2, 4)
                r13_4[2] = rbx_13
                *r13_4 = &data_142fc4c88
                r13_4[3] = 0
                *(r13_4 + 0x20) = var_278
                *(r13_4 + 0x30) = var_268_1
                *(r13_4 + 0x40) = var_258_1
                sub_1417598c0((*(*rbx_13 + 0x28))(rbx_13, &var_2a8), &r13_4[0xa], &var_278)
                *(r13_4 + 0xa) = *(rbx_13 + 0xa)
                *(r13_4 + 0xb) = *(r13_4[2] + 0xb)
            
            int64_t rbx_14 = sx.q(var_3c0_1)
            int32_t rax_124 = (rbx_14 + 1).d
            var_3c0_1 = rax_124
            
            if (rax_124 s> var_3bc)
                sub_1405a4d70(&var_3c8)
            
            *(var_3c8 + (rbx_14 << 3)) = r13_4
            int64_t rbx_15 = sx.q(var_3b0.d)
            int32_t rax_126 = (rbx_15 + 1).d
            var_3b0.d = rax_126
            
            if (rax_126 s> var_3b0:4.d)
                sub_1405a4d70(&var_3b8)
            
            *(var_3b8 + (rbx_15 << 3)) = r12_2
        else if (rdx_44[3][0].q == r12_2)
            zmm1 = data_143ef8240
            zmm15 = rdx_44[2]
            zmm0 = _mm_min_ps(zmm15, var_228)
            var_2a8.o = zmm1
            float zmm6_1[0x4]
            float zmm7_1[0x4]
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(zmm0, zmm1, 1)) == 0)
                zmm4 = var_248
                zmm2 = *rdx_44
                zmm3 = rdx_44[1]
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
                float temp0_158[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm0)
                float temp0_159[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                float temp0_160[0x4] = _mm_mul_ps(zmm3, var_228)
                float temp0_161[0x4] = __mulps_xmmps_memps(temp0_158, data_143ef7f10)
                float temp0_162[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                zmm14 = _mm_mul_ps(zmm15, var_228)
                float temp0_165[0x4] = _mm_add_ps(temp0_161, _mm_mul_ps(temp0_162, zmm2))
                float temp0_167[0x4] = _mm_mul_ps(temp0_159, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                zmm0 =
                    _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                float temp0_171[0x4] = __mulps_xmmps_memps(temp0_167, data_143ef7f00)
                float temp0_172[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                zmm0 = __mulps_xmmps_memps(zmm0, data_143ef7ef0)
                float temp0_174[0x4] = _mm_add_ps(temp0_165, temp0_171)
                float temp0_175[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                float temp0_177[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_160, temp0_160, 0xd2), temp0_175)
                zmm6_1 = _mm_add_ps(temp0_174, zmm0)
                float temp0_181[0x4] = _mm_sub_ps(temp0_177, 
                    _mm_mul_ps(_mm_shuffle_ps(temp0_160, temp0_160, 0xc9), temp0_172))
                float temp0_182[0x4] = _mm_add_ps(temp0_181, temp0_181)
                float temp0_183[0x4] = _mm_mul_ps(temp0_162, temp0_182)
                float temp0_185[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_182, temp0_182, 0xd2), temp0_175)
                zmm0 = _mm_shuffle_ps(temp0_182, temp0_182, 0xc9)
                float temp0_187[0x4] = _mm_add_ps(temp0_183, temp0_160)
                zmm7_1 = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(temp0_185, _mm_mul_ps(zmm0, temp0_172)), temp0_187), 
                    temp0_20)
            else
                zmm1 = var_248
                zmm11 = data_143ef7f20
                float temp0_27[0x4] = _mm_add_ps(zmm1, zmm1)
                float temp0_28[0x4] = _mm_shuffle_ps(var_228, var_228, 0xc9)
                zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
                _mm_mul_ps(zmm15, var_228)
                float temp0_31[0x4] = _mm_mul_ps(temp0_27, zmm1)
                float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0x29), zmm0)
                float temp0_34[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                zmm0 = _mm_shuffle_ps(temp0_31, temp0_31, 0x1a)
                float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0x12), temp0_34)
                zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(temp0_31, temp0_31, 1))
                float temp0_40[0x4] = _mm_add_ps(temp0_37, temp0_33)
                float temp0_41[0x4] = _mm_sub_ps(temp0_33, temp0_37)
                float temp0_42[0x4] = _mm_sub_ps(zmm11, zmm0)
                float temp0_43[0x4] = _mm_mul_ps(temp0_40, var_228)
                float temp0_44[0x4] = _mm_mul_ps(temp0_42, var_228)
                float temp0_45[0x4] = _mm_mul_ps(temp0_28, temp0_41)
                zmm1 = __andps_xmmxud_memxud(temp0_44, data_143ef7f30)
                float temp0_49[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_43, zmm1, 0), 
                    _mm_shuffle_ps(temp0_45, zmm1, 0x32), 0x82)
                zmm0 = _mm_shuffle_ps(temp0_43, zmm1, 0x31)
                float temp0_52[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_45, zmm1, 0x10), zmm0, 0x88)
                float temp0_54[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_43, temp0_45, 0x12), zmm1, 0xe8)
                zmm1 = *rdx_44
                zmm0.q = temp0_20 u>> 0x40
                float temp0_55[0x4] = _mm_add_ps(zmm1, zmm1)
                float temp0_56[0x4] = _mm_shuffle_ps(temp0_20, zmm0, 0xc4)
                float temp0_57[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
                float temp0_59[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                float temp0_60[0x4] = _mm_mul_ps(zmm1, temp0_55)
                float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0x29), zmm0)
                float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0x12), temp0_59)
                zmm0 = _mm_add_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0x1a), 
                    _mm_shuffle_ps(temp0_60, temp0_60, 1))
                float temp0_68[0x4] = _mm_add_ps(temp0_64, temp0_62)
                float temp0_69[0x4] = _mm_sub_ps(temp0_62, temp0_64)
                float temp0_70[0x4] = _mm_sub_ps(zmm11, zmm0)
                float temp0_71[0x4] = _mm_mul_ps(temp0_68, zmm15)
                float temp0_72[0x4] = _mm_mul_ps(temp0_57, temp0_69)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_70, zmm15), data_143ef7f30)
                float temp0_77[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_71, zmm1, 0), 
                    _mm_shuffle_ps(temp0_72, zmm1, 0x32), 0x82)
                float temp0_78[0x4] = _mm_shuffle_ps(temp0_72, zmm1, 0x10)
                zmm0 = _mm_shuffle_ps(temp0_71, zmm1, 0x31)
                float temp0_80[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0x55)
                float temp0_81[0x4] = _mm_shuffle_ps(temp0_78, zmm0, 0x88)
                float temp0_82[0x4] = _mm_mul_ps(temp0_80, temp0_52)
                float temp0_83[0x4] = _mm_shuffle_ps(temp0_71, temp0_72, 0x12)
                zmm5 = rdx_44[1]
                float temp0_84[0x4] = _mm_shuffle_ps(temp0_83, zmm1, 0xe8)
                float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_77, temp0_77, 0xaa), temp0_54)
                zmm0.q = zmm5 u>> 0x40
                float temp0_87[0x4] = _mm_shuffle_ps(zmm5, zmm0, 0xc4)
                zmm0 = _mm_shuffle_ps(temp0_77, temp0_77, 0)
                float temp0_90[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_77, temp0_77, 0xff), temp0_56)
                float temp0_92[0x4] = _mm_add_ps(temp0_82, _mm_mul_ps(zmm0, temp0_49))
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_81, temp0_81, 0), temp0_49)
                float temp0_95[0x4] = _mm_add_ps(temp0_92, temp0_86)
                float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_81, temp0_81, 0xaa), temp0_54)
                float temp0_98[0x4] = _mm_add_ps(temp0_95, temp0_90)
                float temp0_100[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_81, temp0_81, 0x55), temp0_52)
                float temp0_101[0x4] = _mm_shuffle_ps(temp0_81, temp0_81, 0xff)
                float var_2f8[0x4] = temp0_98
                float temp0_102[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0x55)
                float temp0_103[0x4] = _mm_add_ps(temp0_100, zmm0)
                float temp0_104[0x4] = _mm_mul_ps(temp0_102, temp0_52)
                float temp0_105[0x4] = _mm_mul_ps(temp0_101, temp0_56)
                zmm0 = _mm_shuffle_ps(temp0_84, temp0_84, 0)
                float temp0_107[0x4] = _mm_add_ps(temp0_103, temp0_97)
                zmm0 = _mm_mul_ps(zmm0, temp0_49)
                float temp0_110[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0xaa), temp0_54)
                float temp0_111[0x4] = _mm_add_ps(temp0_107, temp0_105)
                float temp0_112[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xff)
                float temp0_113[0x4] = _mm_add_ps(temp0_104, zmm0)
                float temp0_114[0x4] = _mm_mul_ps(temp0_112, temp0_56)
                zmm0 = _mm_shuffle_ps(temp0_87, temp0_87, 0)
                int96_t var_2e8_1 = temp0_111[0].12
                float temp0_116[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0x55)
                float temp0_117[0x4] = _mm_add_ps(temp0_113, temp0_110)
                float temp0_118[0x4] = _mm_mul_ps(temp0_116, temp0_52)
                float temp0_120[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xaa), temp0_54)
                zmm0 = _mm_mul_ps(zmm0, temp0_49)
                float temp0_122[0x4] = _mm_add_ps(temp0_117, temp0_114)
                float temp0_124[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xff), temp0_56)
                float temp0_125[0x4] = _mm_add_ps(temp0_118, zmm0)
                int96_t var_2d8_1 = temp0_122[0].12
                int96_t var_2c8_1 = _mm_add_ps(_mm_add_ps(temp0_125, temp0_120), temp0_124)[0].12
                int128_t zmm11_1
                zmm11_1, zmm14 = sub_1407740e0(&var_2f8, 0x322bcc77)
                float zmm2_1[0x4] = var_2f8[0]
                float zmm4_1[0x4] =
                    _mm_and_ps(_mm_cmpeq_ps(var_2a8.o, zmm14, 2), data_143ef8230 ^ zmm11_1)
                    ^ data_143ef8230
                zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                uint32_t zmm0_1[0x4] = var_2f8[2]
                float zmm1_1 = var_2f8[1] * zmm4_1[0]
                zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
                var_2f8[0] = zmm2_1[0]
                float temp0_130[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                var_2f8[1] = zmm1_1
                zmm1_1 = var_2e8_1:4.d * temp0_130[0]
                var_2f8[2] = zmm0_1[0]
                zmm0_1 = var_2e8_1:8.d
                zmm0_1[0] = zmm0_1[0] f* temp0_130[0]
                float zmm3_1 = var_2e8_1.d * temp0_130[0]
                zmm2_1 = var_2d8_1.d
                float temp0_131[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                var_2e8_1:4.d = zmm1_1
                var_2e8_1:8.d = zmm0_1[0]
                zmm0_1 = var_2d8_1:8.d
                zmm1_1 = var_2d8_1:4.d * temp0_131[0]
                zmm0_1[0] = zmm0_1[0] f* temp0_131[0]
                zmm2_1[0] = zmm2_1[0] * temp0_131[0]
                var_2d8_1:4.d = zmm1_1
                var_2d8_1:8.d = zmm0_1[0]
                var_2e8_1.d = zmm3_1
                var_2d8_1.d = zmm2_1[0]
                sub_14077e4a0(&var_398, &var_2f8)
                uint128_t zmm5_1 = var_398
                zmm6_1 = data_143ef7ee0
                uint128_t zmm1_2 = _mm_mul_ps(zmm5_1, zmm5_1)
                zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
                uint128_t zmm4_2 = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
                zmm1_2 = _mm_rsqrt_ps(zmm4_2)
                uint128_t zmm3_2 = _mm_mul_ps(zmm4_2, zmm6_1)
                float temp0_143[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_2)), 
                        zmm1_2), 
                    zmm1_2)
                float temp0_146[0x4] =
                    _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_143, temp0_143), zmm3_2))
                uint128_t zmm0_2 =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
                float temp0_150[0x4] = _mm_add_ps(_mm_mul_ps(temp0_146, temp0_143), temp0_143)
                float temp0_151[0x4] = _mm_unpacklo_ps(var_2c8_1:4.d, 0)
                zmm6_1 = _mm_and_ps(_mm_mul_ps(temp0_150, zmm5_1) ^ data_143ef7ed0, zmm0_2)
                    ^ data_143ef7ed0
                zmm7_1 =
                    _mm_unpacklo_ps(_mm_unpacklo_ps(var_2c8_1.d, var_2c8_1:8.d.q), temp0_151[0].q)
                var_398 = zmm6_1
            
            var_1e8 = zmm6_1
            float var_1d8_1[0x4] = zmm7_1
            uint128_t var_1c8_1 = zmm14
            float (* rax_95)[0x4] = sub_140ad7d70(&var_1e8, &var_2a8, &var_118)
            float var_218[0x4] = *rax_95
            float var_208_1[0x4] = rax_95[1]
            float zmm0_3[0x4] = rax_95[2]
            void*** rax_96 = j_sub_140a82f30(0x70)
            void*** r13_1 = rax_96
            
            if (rax_96 == 0)
                r13_1 = nullptr
            else
                int64_t* rbx_4 = *(*(*rbx_2 + 0x80) + (sx.q(rbx_2[1].d) << 3))
                sub_1417048d0(rax_96, 2, 4)
                r13_1[2] = rbx_4
                *r13_1 = &data_142fc4c88
                r13_1[3] = 0
                *(r13_1 + 0x20) = var_218
                *(r13_1 + 0x30) = var_208_1
                *(r13_1 + 0x40) = zmm0_3
                sub_1417598c0((*(*rbx_4 + 0x28))(rbx_4, &var_2a8), &r13_1[0xa], &var_218)
                rbx_2 = var_3e0_1
                *(r13_1 + 0xa) = *(rbx_4 + 0xa)
                *(r13_1 + 0xb) = *(r13_1[2] + 0xb)
            
            int32_t rcx_56 = var_3d0_1.d
            var_3d0_1.d = rcx_56 + 1
            
            if (rcx_56 + 1 s> var_3d0_1:4.d)
                sub_1405a4d70(&var_3d8)
            
            var_3d8[sx.q(rcx_56)] = r13_1
            void*** rax_103 = j_sub_140a82f30(0x70)
            void*** r13_2 = rax_103
            
            if (rax_103 == 0)
                r13_2 = nullptr
            else
                int64_t* rbx_6 = *(*(*rbx_2 + 0x80) + (sx.q(rbx_2[1].d) << 3))
                sub_1417048d0(rax_103, 2, 4)
                r13_2[2] = rbx_6
                *r13_2 = &data_142fc4c88
                r13_2[3] = 0
                *(r13_2 + 0x20) = var_218
                *(r13_2 + 0x30) = var_208_1
                *(r13_2 + 0x40) = zmm0_3
                sub_1417598c0((*(*rbx_6 + 0x28))(rbx_6, &var_2a8), &r13_2[0xa], &var_218)
                *(r13_2 + 0xa) = *(rbx_6 + 0xa)
                *(r13_2 + 0xb) = *(r13_2[2] + 0xb)
            
            int64_t rbx_7 = sx.q(var_3c0_1)
            int32_t rax_108 = (rbx_7 + 1).d
            var_3c0_1 = rax_108
            
            if (rax_108 s> var_3bc)
                sub_1405a4d70(&var_3c8)
            
            *(var_3c8 + (rbx_7 << 3)) = r13_2
            int64_t rbx_8 = sx.q(var_3b0.d)
            int32_t rax_110 = (rbx_8 + 1).d
            var_3b0.d = rax_110
            
            if (rax_110 s> var_3b0:4.d)
                sub_1405a4d70(&var_3b8)
            
            var_417 = 1
            *(var_3b8 + (rbx_8 << 3)) = var_3e0_1
    
    int64_t* rcx_78 = nullptr
    
    if (*(r12_2 + 0xc) u>= 3)
        rcx_78 = r12_2
    
    uint128_t* rdx_68 = sx.q(rcx_78[1].d) * 0x30 + *(*rcx_78 + 0x440)
    *rdx_68 = var_278
    rdx_68[1] = var_268_1
    rdx_68[2] = var_258_1
    
    if (var_418_1 != 0)
        int64_t r13_5 = sx.q(r12_2[1].d)
        int64_t rax_131 = *(*r12_2 + 0x320)
        void* rdx_69 = *(rax_131 + (r13_5 << 3))
        
        if (rdx_69 != 0)
            int32_t i_2 = 0
            
            if (*(rdx_69 + 0x18) u> 0)
                do
                    zmm5 = var_278
                    float temp0_192[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                    int64_t i_5 = sx.q(i_4)
                    int64_t rcx_79 = sx.q(i_2) * 3
                    int64_t rax_133 = *(rdx_69 + 0x28)
                    i_4 = (i_5 + 1).d
                    var_400.d = i_4
                    float temp0_196[0x4] = __mulps_xmmps_memps(
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rax_133 + (rcx_79 << 2)), 
                                (*(rax_133 + (rcx_79 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rax_133 + (rcx_79 << 2) + 4), zx.o(0)[0].q)[0].q), 
                        var_258_1)
                    float temp0_197[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                    float temp0_198[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_196, temp0_196, 0xc9), temp0_192)
                    float temp0_203[0x4] = _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(temp0_196, temp0_196, 0xd2), temp0_197), zmm0)
                    float temp0_204[0x4] = _mm_add_ps(temp0_203, temp0_203)
                    float temp0_206[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_204, temp0_204, 0xd2), temp0_197)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_204, temp0_204, 0xc9), temp0_192)
                    float temp0_209[0x4] = _mm_mul_ps(temp0_198, temp0_204)
                    float temp0_213[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(temp0_206, zmm0), _mm_add_ps(temp0_209, temp0_196)), 
                        var_268_1)
                    var_3f8.d = temp0_213[0]
                    zmm0 = _mm_shuffle_ps(temp0_213, temp0_213, 0x55)
                    var_3f0 = _mm_shuffle_ps(temp0_213, temp0_213, 0xaa)[0]
                    var_3f8:4.d = zmm0.d
                    
                    if (i_4 s> var_400:4.d)
                        sub_14083a7e0(&var_408)
                        i_4 = var_400.d
                        r15 = var_408
                    
                    int64_t rcx_81 = i_5 * 3
                    i_2 += 1
                    *(r15 + (rcx_81 << 2)) = var_3f8
                    *(r15 + (rcx_81 << 2) + 8) = var_3f0
                    rdx_69 = *(rax_131 + (r13_5 << 3))
                while (i_2 u< *(rdx_69 + 0x18))
                
                rsi = 0
    
    void* rcx_83 = *(*(*r12_2 + 0x80) + (sx.q(r12_2[1].d) << 3))
    
    if (rcx_83 != 0)
        char r12_4 = var_3a8
        
        if (sub_1405e66c0(rcx_83) == 7)
            r12_4 = 1
        
        var_3a8 = r12_4
    
    var_330.d &= not.d(var_340:4.d)
    sub_14059bdd0(&var_340)
    rdx_39 = var_368
    rbx_1 = var_318
    r13 = var_358
