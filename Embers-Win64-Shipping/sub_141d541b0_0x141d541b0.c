// 函数: sub_141d541b0
// 地址: 0x141d541b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_478
int64_t rax_1 = __security_cookie ^ &var_478
void* r14 = arg1
int32_t rax_2 = sub_141d58640(arg2)
int64_t* rcx_1 = *arg2
int64_t rdx = *rcx_1
int64_t* rax_3 = (*(rdx + 0x30))(rcx_1, rdx)
void* rax_4
void* rbx_1

if (rax_3 != 0)
    int64_t rdx_1 = *rax_3
    rax_4 = (*(rdx_1 + 8))(rax_3, rdx_1)
    rbx_1 = rax_4

int32_t var_458
int32_t var_448

if (rax_3 == 0 || rax_4 == 0)
    int64_t* rcx_5 = *arg2
    int32_t rbx_2
    
    if ((*(*rcx_5 + 0x58))(rcx_5) == 0)
        rbx_2 = 0x100
    else
        int64_t* rcx_6 = *arg2
        int32_t rax_8 = (*(*rcx_6 + 0x18))(rcx_6)
        
        if (rax_8 u> 0xb)
            rbx_2 = 0x100
        else
            rbx_2 = 0x110
            
            if (not(test_bit(0xc14, rax_8)))
                rbx_2 = 0x100
    
    int64_t* rcx_7 = *arg2
    int64_t var_410
    (*(*rcx_7 + 8))(rcx_7, &var_410)
    int32_t rax_10 = var_410.d
    void* r14_1 = *(r14 + 0x80)
    int32_t r8 = var_410:4.d
    int32_t var_440
    int32_t var_438
    int128_t* var_430
    
    if (r14_1 == 0 || *(r14_1 + 0x60) != rax_10 || *(r14_1 + 0x64) != r8 || *(r14_1 + 0x3c) != rax_2
            || (*(r14_1 + 0x40) & rbx_2) != rbx_2)
        int128_t zmm1 = data_143dbb1e0
        int64_t* rcx_11 = data_143f0f180
        int512_t zmm0
        zmm0.o = zx.o(0)
        int32_t rdx_4 = (1 << (data_1439c7a34).b) - 1
        int128_t var_1d8 = zx.o(0)
        int32_t var_1b4_1 = rdx_4
        int32_t var_1c8_1 = 1
        var_430 = &var_1d8
        var_438 = rbx_2 | 9
        var_440 = 1
        int128_t var_1c4_1 = zmm1
        char var_1b0_1 = 0
        int64_t var_1a8_1 = 0
        int32_t var_1a0_1 = 0
        void* const var_408
        (*(*rcx_11 + 0x560))(zmm0, &var_408, &data_143f02b98, zx.q(rax_10), r8, rax_2.b, 1, 
            var_440, var_438, var_430)
        void* const rdx_6 = var_408
        void* const var_3d8 = rdx_6
        var_408 = nullptr
        sub_1405d16e0(r14 + 0x80, rdx_6)
        sub_1405d1550(&var_408)
        sub_141d5db30(arg1)
        sub_1405d1550(&var_3d8)
        rax_10 = var_410.d
        r8 = var_410:4.d
        r14_1 = *(arg1 + 0x80)
    
    int64_t* rbx_4 = *arg2
    int64_t var_3f0 = 0
    int64_t var_3e8_1 = 0
    int32_t var_3e0_1 = rax_10
    int32_t var_3dc_1 = r8
    int64_t rax_12 = (**rbx_4)(rbx_4)
    int64_t rdx_7 = *rbx_4
    int32_t rax_13 = (*(rdx_7 + 0x28))(rbx_4, rdx_7)
    int64_t* rcx_18 = data_143f0f180
    var_448.q = rax_12
    char var_450
    var_450.d = rax_13
    var_458.q = &var_3f0
    (*(*rcx_18 + 0x520))(rcx_18, &data_143f02b98, r14_1, 0, var_458, var_450, var_448, var_440, 
        var_438, var_430)
    rbx_1 = *(r14 + 0x80)
    r14 = arg1
else
    sub_1405d16e0(r14 + 0x80, nullptr)
    sub_141d5db30(r14)

int64_t* rcx_19 = *arg2
int32_t var_428
(*(*rcx_19 + 0x20))(rcx_19, &var_428)
int64_t* rcx_20 = *arg2
int32_t rax_16 = (*(*rcx_20 + 0x18))(rcx_20)
int32_t r8_2

if (rax_16 != 3)
    r8_2 = 2

if (rax_16 == 3 || rax_16 == 0xc)
    r8_2 = 0x12

var_458.q = arg3
sub_141d56270(r14, &var_428, r8_2, arg4, arg5, arg6, var_458, arg7)
int64_t rax_20 = *(r14 + 8)
int32_t var_c0 = 0
int32_t var_bc
__builtin_memset(&var_bc, 0xff, 0x14)
int128_t var_288
__builtin_memset(&var_288, 0, 0x30)
int64_t var_98
__builtin_memset(&var_98, 0, 0x19)
int128_t var_240 = zx.o(0)
int128_t var_a8 = data_142d3f5a0
int64_t var_198 = rax_20
int64_t var_190 = 0
int32_t var_188 = 0xffffffff
int16_t var_184 = 0x100
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x11)
int32_t var_c4 = 0
int64_t var_22c
__builtin_memset(&var_22c, 0, 0x43)
int16_t var_1e8 = 0
bool var_7f = *(rax_20 + 0x38) u> 1
void var_180
memset(&var_180, 0, 0xa8)
int64_t rdi_5 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
int64_t rax_21 = rdi_5 + 0x1a

if (rax_21 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x1c)
    rdi_5 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
    rax_21 = rdi_5 + 0x1a

wchar16 const* const rcx_23 = u"ConvertMedia"
data_143f02bc8 = rax_21
wchar16 const i

do
    i = *rcx_23
    *(rdi_5 - u"ConvertMedia" + rcx_23) = i
    rcx_23 = &rcx_23[1]
while (i != 0)
void*** rcx_26 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_22 = &rcx_26[0x27]

if (rax_22 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x140)
    rcx_26 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_22 = &rcx_26[0x27]

data_143f02bac += 1
data_143f02bc8 = rax_22
*data_143f02ba0 = rcx_26
data_143f02ba0 = &rcx_26[1]
sub_1405d11b0(rcx_26, &var_198, rdi_5)
data_143f02d5c = 1
sub_1405d19b0(&data_143f02b98, &var_198)
int64_t var_88
data_143f02d10 = var_88:7.b
data_143f02d11 = 0
data_143f02d5c = 1
sub_140fdc870(&data_143f02b98, &var_288)
uint128_t zmm7 = zx.o(var_428)
void*** rcx_31 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
int32_t var_424
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(var_424))
void* rax_26 = &rcx_31[5]
bool cond:0 = rax_26 u<= data_143f02bd0
zmm7 = _mm_cvtepi32_ps(zmm7)

if (not(cond:0))
    zmm6 = sub_140b0e3d0(&data_143f02bc8, 0x30)
    rcx_31 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_26 = &rcx_31[5]

data_143f02bac += 1
data_143f02bc8 = rax_26
*data_143f02ba0 = rcx_31
data_143f02ba0 = &rcx_31[1]
rcx_31[1] = 0
*rcx_31 = &data_142d54998
*(rcx_31 + 0x1c) = zmm7.d
rcx_31[4].d = zmm6.d
rcx_31[2] = 0
rcx_31[3].d = 0
*(rcx_31 + 0x24) = 0x3f800000
int64_t var_248 = data_14395d9e8
int64_t var_250 = data_14395da18
int64_t var_258 = data_14395e020
int32_t var_230 = 1
int64_t* rax_33 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
void* var_2d8
sub_1419a2ec0(rax_33, &var_2d8, &data_143f10cd0, 0)
int64_t rax_34 = 0
var_288.q = data_1439c93a0
void* rcx_37 = var_2d8

if (rcx_37 != 0)
    int64_t rdx_16 = sx.q(*(rcx_37 + 0x10c))
    void* var_2d0
    int64_t* r14_2 = *(var_2d0 + 0x10)
    int64_t rax_35 = r14_2[3]
    
    if (*(rax_35 + (rdx_16 << 3)) == 0)
        sub_1419ccf30(r14_2, rdx_16.d)
        rax_35 = r14_2[3]
    
    rax_34 = *(rax_35 + (rdx_16 << 3))

int64_t* rcx_40 = *arg2
var_288:8.q = rax_34
int128_t* rax_37 = (*(*rcx_40 + 0x70))(rcx_40)
int64_t* rcx_41 = *arg2
uint128_t var_2c8 = *rax_37
int128_t var_2b8 = rax_37[1]
uint128_t var_2a8 = rax_37[2]
int32_t rax_38 = data_1439c9378
uint128_t zmm0_1 = zx.o(data_1439c9370)
int128_t var_298 = rax_37[3]
uint64_t var_420 = zmm0_1.q
int32_t var_418 = rax_38

if ((*(*rcx_41 + 0x18))(rcx_41) == 0xc)
    zmm0_1 = zx.o(data_1439c9380)
    int32_t rax_41 = data_1439c9388
    var_420 = zmm0_1.q
    int32_t var_418_1 = rax_41

char rax_43 = (*(**arg2 + 0x58))(zmm0_1)
int64_t* rcx_43 = *arg2
int64_t rdx_17 = *rcx_43
int32_t rax_45 = (*(rdx_17 + 0x18))(rcx_43, rdx_17) - 1
int64_t result
int64_t var_90

if (rax_45 u> 0xb)
    result = sub_1405d1550(&var_90)
else
    char var_450_1
    int128_t var_268
    void* rdi_17
    
    switch (rax_45)
        case 0
            void* var_378
            sub_1419a2ec0(rax_33, &var_378, &data_143f10e70, 0)
            void* rdi_9 = var_378
            int64_t rax_46 = 0
            
            if (rdi_9 != 0)
                int64_t rdx_21 = sx.q(*(rdi_9 + 0x10c))
                void* var_370
                int64_t* rsi_1 = *(var_370 + 0x10)
                int64_t rax_48 = rsi_1[3]
                
                if (*(rax_48 + (rdx_21 << 3)) == 0)
                    sub_1419ccf30(rsi_1, rdx_21.d)
                    rax_48 = rsi_1[3]
                
                rax_46 = *(rax_48 + (rdx_21 << 3))
            
            var_268.q = rax_46
            sub_1419870b0(&data_143f02b98, &var_288, 2)
            void* var_3d0 = rbx_1
            
            if (rbx_1 != 0)
                *(rbx_1 + 8) += 1
                rdi_9 = var_378
            
            var_458.q = &var_420
            sub_1419abb60(rdi_9, &data_143f02b98, &var_3d0, &var_2c8, var_458, rax_43)
        case 1, 9, 0xa
            void* var_2e8
            sub_1419a2ec0(rax_33, &var_2e8, &data_143f114f0, 0)
            rdi_17 = var_2e8
            int64_t rax_74 = 0
            
            if (rdi_17 != 0)
                int64_t rdx_48 = sx.q(*(rdi_17 + 0x10c))
                void* var_2e0
                int64_t* rsi_10 = *(var_2e0 + 0x10)
                int64_t rax_76 = rsi_10[3]
                
                if (*(rax_76 + (rdx_48 << 3)) == 0)
                    sub_1419ccf30(rsi_10, rdx_48.d)
                    rax_76 = rsi_10[3]
                
                rax_74 = *(rax_76 + (rdx_48 << 3))
            
            var_268.q = rax_74
            sub_1419870b0(&data_143f02b98, &var_288, 2)
            void* var_388 = rbx_1
            
            if (rbx_1 != 0)
                *(rbx_1 + 8) += 1
                rdi_17 = var_2e8
            
            var_458.b = 0
            sub_1419ace30(rdi_17, &data_143f02b98, &var_388, &var_428, var_458.b)
        case 2
            void* var_2f8
            sub_1419a2ec0(rax_33, &var_2f8, &data_143f114f0, 0)
            rdi_17 = var_2f8
            int64_t rax_71 = 0
            
            if (rdi_17 != 0)
                int64_t rdx_45 = sx.q(*(rdi_17 + 0x10c))
                void* var_2f0
                int64_t* rsi_9 = *(var_2f0 + 0x10)
                int64_t rax_73 = rsi_9[3]
                
                if (*(rax_73 + (rdx_45 << 3)) == 0)
                    sub_1419ccf30(rsi_9, rdx_45.d)
                    rax_73 = rsi_9[3]
                
                rax_71 = *(rax_73 + (rdx_45 << 3))
            
            var_268.q = rax_71
            sub_1419870b0(&data_143f02b98, &var_288, 2)
            void* var_390 = rbx_1
            
            if (rbx_1 != 0)
                *(rbx_1 + 8) += 1
                rdi_17 = var_2f8
            
            var_458.b = rax_43
            sub_1419ace30(rdi_17, &data_143f02b98, &var_390, &var_428, var_458.b)
        case 3
            void* var_368
            sub_1419a2ec0(rax_33, &var_368, &data_143f11010, 0)
            void* rdi_10 = var_368
            int64_t rax_49 = 0
            
            if (rdi_10 != 0)
                int64_t rdx_24 = sx.q(*(rdi_10 + 0x10c))
                void* var_360
                int64_t* rsi_2 = *(var_360 + 0x10)
                int64_t rax_51 = rsi_2[3]
                
                if (*(rax_51 + (rdx_24 << 3)) == 0)
                    sub_1419ccf30(rsi_2, rdx_24.d)
                    rax_51 = rsi_2[3]
                
                rax_49 = *(rax_51 + (rdx_24 << 3))
            
            var_268.q = rax_49
            sub_1419870b0(&data_143f02b98, &var_288, 2)
            char rax_52
            
            if (rax_43 == 0 || arg4 != 0)
                rax_52 = 0
            else
                rax_52 = 1
            
            void* var_3c8 = rbx_1
            
            if (rbx_1 != 0)
                *(rbx_1 + 8) += 1
                rdi_10 = var_368
            
            var_458.b = rax_52
            sub_1419abe30(rdi_10, &data_143f02b98, &var_3c8, &var_428, var_458.b)
        case 4
            void* var_358
            sub_1419a2ec0(rax_33, &var_358, &data_143f111b0, 0)
            void* rdi_11 = var_358
            int64_t rax_53 = 0
            
            if (rdi_11 != 0)
                int64_t rdx_27 = sx.q(*(rdi_11 + 0x10c))
                void* var_350
                int64_t* rsi_3 = *(var_350 + 0x10)
                int64_t rax_55 = rsi_3[3]
                
                if (*(rax_55 + (rdx_27 << 3)) == 0)
                    sub_1419ccf30(rsi_3, rdx_27.d)
                    rax_55 = rsi_3[3]
                
                rax_53 = *(rax_55 + (rdx_27 << 3))
            
            var_268.q = rax_53
            sub_1419870b0(&data_143f02b98, &var_288, 2)
            void* var_3c0 = rbx_1
            
            if (rbx_1 != 0)
                *(rbx_1 + 8) += 1
                rdi_11 = var_358
            
            var_448.b = rax_43
            var_450_1.q = &var_420
            var_458.q = &var_2c8
            sub_1419ac2b0(rdi_11, &data_143f02b98, &var_3c0, &var_428, var_458, var_450_1, 
                var_448.b)
        case 5
            void* var_348
            sub_1419a2ec0(rax_33, &var_348, &data_143f11350, 0)
            void* rdi_12 = var_348
            int64_t rax_56 = 0
            
            if (rdi_12 != 0)
                int64_t rdx_30 = sx.q(*(rdi_12 + 0x10c))
                void* var_340
                int64_t* rsi_4 = *(var_340 + 0x10)
                int64_t rax_58 = rsi_4[3]
                
                if (*(rax_58 + (rdx_30 << 3)) == 0)
                    sub_1419ccf30(rsi_4, rdx_30.d)
                    rax_58 = rsi_4[3]
                
                rax_56 = *(rax_58 + (rdx_30 << 3))
            
            var_268.q = rax_56
            sub_1419870b0(&data_143f02b98, &var_288, 2)
            void* var_3b8 = rbx_1
            
            if (rbx_1 != 0)
                *(rbx_1 + 8) += 1
                rdi_12 = var_348
            
            var_448.b = rax_43
            var_450_1.q = &var_420
            var_458.q = &var_2c8
            sub_1419ac5b0(rdi_12, &data_143f02b98, &var_3b8, &var_428, var_458, var_450_1, 
                var_448.b)
        case 6
            void* var_338
            sub_1419a2ec0(rax_33, &var_338, &data_143f11930, 0)
            void* rdi_13 = var_338
            int64_t rax_59 = 0
            
            if (rdi_13 != 0)
                int64_t rdx_33 = sx.q(*(rdi_13 + 0x10c))
                void* var_330
                int64_t* rsi_5 = *(var_330 + 0x10)
                int64_t rax_61 = rsi_5[3]
                
                if (*(rax_61 + (rdx_33 << 3)) == 0)
                    sub_1419ccf30(rsi_5, rdx_33.d)
                    rax_61 = rsi_5[3]
                
                rax_59 = *(rax_61 + (rdx_33 << 3))
            
            var_268.q = rax_59
            float zmm6_1[0x4] = sub_1419870b0(&data_143f02b98, &var_288, 2)
            void* var_3b0 = rbx_1
            
            if (rbx_1 != 0)
                *(rbx_1 + 8) += 1
                rdi_13 = var_338
            
            var_458.q = &var_420
            sub_1419ad510(rdi_13, &data_143f02b98, &var_3b0, &var_2c8, zmm6_1, zmm7, var_458, 
                rax_43)
        case 7
            void* var_328
            sub_1419a2ec0(rax_33, &var_328, &data_143f11e20, 0)
            void* rdi_14 = var_328
            int64_t rax_62 = 0
            
            if (rdi_14 != 0)
                int64_t rdx_36 = sx.q(*(rdi_14 + 0x10c))
                void* var_320
                int64_t* rsi_6 = *(var_320 + 0x10)
                int64_t rax_64 = rsi_6[3]
                
                if (*(rax_64 + (rdx_36 << 3)) == 0)
                    sub_1419ccf30(rsi_6, rdx_36.d)
                    rax_64 = rsi_6[3]
                
                rax_62 = *(rax_64 + (rdx_36 << 3))
            
            var_268.q = rax_62
            sub_1419870b0(&data_143f02b98, &var_288, 2)
            void* var_3a8 = rbx_1
            
            if (rbx_1 != 0)
                *(rbx_1 + 8) += 1
                rdi_14 = var_328
            
            var_448.b = rax_43
            var_450_1.q = &var_420
            var_458.q = &var_2c8
            sub_1419addf0(rdi_14, &data_143f02b98, &var_3a8, &var_428, var_458, var_450_1, 
                var_448.b)
        case 8
            void* var_318
            sub_1419a2ec0(rax_33, &var_318, &data_143f11fc0, 0)
            void* rdi_15 = var_318
            int64_t rax_65 = 0
            
            if (rdi_15 != 0)
                int64_t rdx_39 = sx.q(*(rdi_15 + 0x10c))
                void* var_310
                int64_t* rsi_7 = *(var_310 + 0x10)
                int64_t rax_67 = rsi_7[3]
                
                if (*(rax_67 + (rdx_39 << 3)) == 0)
                    sub_1419ccf30(rsi_7, rdx_39.d)
                    rax_67 = rsi_7[3]
                
                rax_65 = *(rax_67 + (rdx_39 << 3))
            
            var_268.q = rax_65
            float zmm6_2[0x4] = sub_1419870b0(&data_143f02b98, &var_288, 2)
            void* var_3a0 = rbx_1
            
            if (rbx_1 != 0)
                *(rbx_1 + 8) += 1
                rdi_15 = var_318
            
            var_458.q = &var_420
            sub_1419ae100(rdi_15, &data_143f02b98, &var_3a0, &var_2c8, zmm6_2, zmm7, var_458, 
                rax_43)
        case 0xb
            void* var_308
            sub_1419a2ec0(rax_33, &var_308, &data_143f11c80, 0)
            void* rdi_16 = var_308
            int64_t rax_68 = 0
            
            if (rdi_16 != 0)
                int64_t rdx_42 = sx.q(*(rdi_16 + 0x10c))
                void* var_300
                int64_t* rsi_8 = *(var_300 + 0x10)
                int64_t rax_70 = rsi_8[3]
                
                if (*(rax_70 + (rdx_42 << 3)) == 0)
                    sub_1419ccf30(rsi_8, rdx_42.d)
                    rax_70 = rsi_8[3]
                
                rax_68 = *(rax_70 + (rdx_42 << 3))
            
            var_268.q = rax_68
            sub_1419870b0(&data_143f02b98, &var_288, 2)
            void* var_398 = rbx_1
            
            if (rbx_1 != 0)
                *(rbx_1 + 8) += 1
                rdi_16 = var_308
            
            var_448.b = rax_43
            var_450_1.q = &var_420
            var_458.q = &var_2c8
            sub_1419adb00(rdi_16, &data_143f02b98, &var_398, &var_428, var_458, var_450_1, 
                var_448.b)
    
    int64_t var_3f8
    sub_141d56bf0(&var_3f8, zx.o(0), 0x3f800000, zx.o(0), 0x3f800000)
    int64_t rbx_5 = var_3f8
    void*** rcx_77 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_77 = &rcx_77[5]
    
    if (rax_77 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x30)
        rcx_77 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_77 = &rcx_77[5]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_77
    *data_143f02ba0 = rcx_77
    data_143f02ba0 = &rcx_77[1]
    rcx_77[1] = 0
    *rcx_77 = &data_142d56618
    rcx_77[2].d = 0
    rcx_77[3] = rbx_5
    rcx_77[4].d = 0
    uint128_t zmm7_1 = zx.o(var_428)
    void*** rcx_82 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    uint128_t zmm6_3 = _mm_cvtepi32_ps(zx.o(var_424))
    void* rax_80 = &rcx_82[5]
    bool cond:1_1 = rax_80 u<= data_143f02bd0
    zmm7_1 = _mm_cvtepi32_ps(zmm7_1)
    
    if (not(cond:1_1))
        zmm6_3 = sub_140b0e3d0(&data_143f02bc8, 0x30)
        rcx_82 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_80 = &rcx_82[5]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_80
    *data_143f02ba0 = rcx_82
    data_143f02ba0 = &rcx_82[1]
    rcx_82[1] = 0
    *rcx_82 = &data_142d54998
    *(rcx_82 + 0x1c) = zmm7_1.d
    rcx_82[4].d = zmm6_3.d
    rcx_82[2] = 0
    rcx_82[3].d = 0
    *(rcx_82 + 0x24) = 0x3f800000
    void*** rcx_87 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_83 = &rcx_87[4]
    
    if (rax_83 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x28)
        rcx_87 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_83 = &rcx_87[4]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_83
    *data_143f02ba0 = rcx_87
    data_143f02ba0 = &rcx_87[1]
    rcx_87[1] = 0
    *rcx_87 = &data_142d54988
    rcx_87[2].d = 0
    *(rcx_87 + 0x14) = 2
    rcx_87[3].d = 1
    sub_1405d1550(&var_3f8)
    sub_141096650(&data_143f02b98)
    int64_t* rbx_8 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    int64_t rcx_91 = *(arg1 + 8)
    void* rax_86 = &rbx_8[1]
    
    if (rax_86 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x10)
        rbx_8 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_86 = &rbx_8[1]
    
    data_143f02bc8 = rax_86
    *rbx_8 = rcx_91
    void*** rcx_94 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_87 = &rcx_94[5]
    
    if (rax_87 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x30)
        rcx_94 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_87 = &rcx_94[5]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_87
    *data_143f02ba0 = rcx_94
    data_143f02ba0 = &rcx_94[1]
    rcx_94[1] = 0
    *rcx_94 = &data_142d549c8
    rcx_94[2].d = 1
    rcx_94[3] = rbx_8
    rcx_94[4].d = 0
    result = sub_1405d1550(&var_90)
    *(arg1 + 0x59) = 0
__security_check_cookie(rax_1 ^ &var_478)
return result
