// 函数: sub_14138a240
// 地址: 0x14138a240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
int64_t rax_1 = __security_cookie ^ &var_4a8
uint32_t rsi = 0
void* const var_430 = arg4
void* rax_2 = arg5[4]
void* rdi = *arg5
int64_t* r12 = arg5[5]
char rax_3 = arg5[2].b
void* r13_2 = sx.q(arg5[1].d) * 0xa0 + rdi
int64_t* var_478
void* const var_470
void* var_468
void* var_460
int128_t* var_458
int64_t* var_450
void* var_448
void* var_428
void* var_420
void* var_408

if (rdi != r13_2)
    int128_t zmm6
    int128_t var_58_1 = zmm6
    int128_t zmm7
    int128_t var_68_1 = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    int128_t zmm9
    int128_t var_88_1 = zmm9
    int128_t zmm10
    int128_t var_98_1 = zmm10
    int128_t zmm11
    int128_t var_a8_1 = zmm11
    
    do
        int64_t* rcx = *(rdi + 0x80)
        uint64_t rdx = zx.q(*(arg2 + 8))
        int64_t var_410 = 0
        int64_t* rax_6 = (*(*rcx + 0x40))(rcx, rdx, &var_410)
        int64_t rdx_1 = *rax_6
        (*(rdx_1 + 0x348))(rax_6, rdx_1)
        int64_t rsi_1 = var_410
        
        if (rsi_1 == 0)
            rsi_1 = *(rdi + 0x80)
        
        int32_t var_17c_1 = 2
        void* var_188_1 = nullptr
        int128_t var_248
        __builtin_memset(&var_248, 0, 0x50)
        zmm8 = zx.o(0)
        int128_t var_1e8_1 = zmm8
        int32_t var_180_1 = 0
        int64_t* var_178
        memset(&var_178, 0, 0x50)
        int512_t zmm0_1
        zmm0_1.o = zx.o(0)
        int32_t var_128_1 = 0
        int128_t var_120_1 = zx.o(0)
        int64_t* var_480
        var_480.b = 1
        int32_t var_488_1 = 0
        void* var_258
        void** rax_9
        int128_t zmm6_1
        rax_9, zmm6_1 = sub_142127800(rax_6, &var_258, &data_143ec5bb0, 
            (*(**(rdi + 0x78) + 0x40))(zmm0_1), zmm0_1)
        int128_t var_338
        __builtin_memset(&var_338, 0, 0x40)
        void* rcx_5 = *rax_9
        void* rax_10 = rax_9[1]
        var_408 = rcx_5
        void* var_400_1 = rax_10
        int128_t zmm0_2 = var_408.o
        void* var_2e0_1 = rax_10
        var_420 = rcx_5
        var_428 = rax_10
        int128_t var_278_1 = rcx_5.o
        int128_t var_2f8_1 = zmm6_1
        int128_t var_2d8
        __builtin_memset(&var_2d8, 0, 0x50)
        int128_t var_288_1 = zmm6_1
        int128_t var_268_1 = zmm8
        int128_t var_2c8
        void var_198
        sub_1412709a0(&var_198, &var_2c8)
        void* const r8_1 = var_430
        var_480.b = 0
        int128_t var_390 = zx.o(0)
        sub_141458e70(&var_390, arg3, r8_1, rdi, 0xffffffff, var_480.b)
        uint64_t rcx_9 = zx.q(var_128_1) & 0x3f
        int64_t rcx_10 = rcx_9 - (zx.q(rcx_9.d) u>> 1 & 0x5555555555555555)
        int64_t rax_17 = (rcx_10 u>> 2 & 0x3333333333333333) + (rcx_10 & 0x3333333333333333)
        uint64_t r8_7 =
            ((((rax_17 u>> 4) + rax_17) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
        int64_t var_3f0
        
        if (r8_7.d u< 1)
            var_3f0 = 0x98
            int64_t var_3e8_2 = 0
        else
            int64_t* rdx_5 = &var_178
            void* rcx_12 = &var_198
            
            if (var_128_1:2.w u> 0x50)
                rdx_5 = var_178
            
            if (var_188_1 != 0)
                rcx_12 = var_188_1
            
            var_3f0 = *(rcx_12 + (r8_7 << 3) - 8)
            int64_t* var_3e8_1 = rdx_5
        
        int32_t r8_8 = *(arg2 + 8)
        void* rcx_13 = var_420
        int64_t var_360_1 = *(arg2 + 0x20)
        int64_t var_348_1 = *(arg2 + 0x38)
        int64_t* var_468_1 = &var_3f0
        int64_t* var_470_1 = &var_390
        int128_t var_378
        var_478 = &var_378
        var_480 = rax_6
        int32_t var_488_2
        var_488_2.q = rsi_1
        void* const rsi_2 = var_430
        var_378 = zx.o(0)
        int32_t var_368_1 = 0x11
        int128_t var_358_1 = zx.o(0)
        int32_t var_340_1 = 0
        sub_141456250(rcx_13, arg2, r8_8, rsi_2, var_488_2, var_480, var_478, var_470_1)
        void* rcx_14 = *(rdi + 0x68)
        void* r8_9 = rdi
        
        if (rcx_14 != 0)
            r8_9 = rcx_14
        
        int64_t var_c8_1 = 0
        int32_t var_c0_1 = 0
        int32_t rax_22 = *(arg2 + 8)
        void var_f8
        var_448 = &var_f8
        var_450 = &var_3f0
        var_458 = &var_390
        var_460 = r8_9
        var_468 = rdi
        var_470 = rsi_2
        var_478.d = rax_22
        int32_t var_3a0_1 = rax_22
        int32_t var_bc_1 = 4
        var_480.b = 0
        var_488_2.q = *(rdi + 0x78)
        sub_141455490(var_420, *(var_428 + 0x20), arg2, arg3.b, var_488_2, var_480, var_478, 
            var_470)
        int32_t rcx_16 = *(arg5 + 0x14)
        int32_t rax_24 = 0
        void* rdx_9 = rdi
        
        if (rax_3 == 0)
            rax_24 = rcx_16
        
        int32_t var_10c_1 = rax_24
        void* rax_26 = *(rdi + 0x68)
        
        if (rax_26 != 0)
            rdx_9 = rax_26
        
        int32_t rcx_17 = *(rdx_9 + 0x50)
        int32_t rax_27 = *(rdx_9 + 0x54)
        
        if (rcx_17 u< rax_27)
            var_10c_1 = rax_27 - rcx_17
            rcx_17 = *(rdx_9 + 0x50)
        
        int64_t* rsi_3 = *arg1
        int64_t rbx_2 = sx.q(rsi_3[1].d)
        int32_t rax_30 = (rbx_2 + 1).d
        rsi_3[1].d = rax_30
        
        if (rax_30 s> *(rsi_3 + 0xc))
            sub_140775640(rsi_3)
        
        void* rbx_5 = rbx_2 * 0xa0 + *rsi_3
        rsi = 0
        *(rbx_5 + 0x10) = 0
        *(rbx_5 + 0x18) = 0
        *(rbx_5 + 0x1c) = 2
        memset(rbx_5 + 0x20, 0, 0x50)
        *(rbx_5 + 0x70) = 0
        sub_141264230(rbx_5, &var_198)
        *(rbx_5 + 0x78) = zmm0_2
        *(rbx_5 + 0x88) = rcx_16
        *(rbx_5 + 0x8c) = var_10c_1
        *(rbx_5 + 0x90) = rcx_17
        *(rbx_5 + 0x94) = arg6
        *(rbx_5 + 0x98) = r12
        
        if (var_c8_1 != 0)
            sub_140a74f90(var_c8_1)
        
        sub_14125cf90(&var_198)
        rdi += 0xa0
    while (rdi != r13_2)

int32_t r9_4 = arg5[3].d
int64_t rax_4
rax_4.b = 1

if (r12[3].d != r9_4)
    int32_t var_1c8_1 = 1
    int64_t var_1d8 = 0
    r12[3].d = r9_4 & 0xfffffffc
    int64_t* rcx_24 = data_143f0f180
    int32_t var_1b4_1 = (1 << (data_1439c7a34).b) - 1
    int64_t* var_480_1 = &var_1d8
    wchar16 const* const var_1a8_1 =
        FRayTracingDynamicGeometryCollection::RayTracingDynamicVertexBuffer"
    int128_t var_1c4_1 = data_143dbb1e0
    char var_1b0_1 = 0
    int32_t var_1a0_1 = 0
    int64_t var_1d0_1 = 0
    int32_t var_488_3 = 0x208
    (*(*rcx_24 + 0x498))(rcx_24, &var_408, &data_143f02b98)
    sub_1405d1600(r12, &var_408)
    sub_1405d1550(&var_408)
    int64_t* rcx_27 = data_143f0f180
    var_488_3.b = 0xd
    (*(*rcx_27 + 0x590))(rcx_27, &var_428, &data_143f02b98, *r12, var_488_3, var_480_1, var_478, 
        var_470, var_468, var_460, var_458, var_450, var_448)
    sub_1405d1600(&r12[1], &var_428)
    sub_1405d1550(&var_428)
    int64_t* rcx_30 = data_143f0f180
    var_480_1.b = 0xd
    (*(*rcx_30 + 0x4b8))(rcx_30, &var_420, &data_143f02b98, *r12, 4, var_480_1)
    sub_1405d1600(&r12[2], &var_420)
    sub_1405ec8a0(&var_420)
    rax_4.b = 0

char rcx_33 = 0
int32_t rdx_18 = *(arg5 + 0x1c)

if (*(rax_2 + 0x30) != 0)
    rcx_33 = rax_4.b

if (*(rax_2 + 0x69) != 0)
    rsi = zx.d(rcx_33)

if (*(rax_2 + 0x48) != rdx_18)
    *(rax_2 + 0x48) = rdx_18
    void* rbx_6 = *(rax_2 + 0x50)
    
    if ((rbx_6.b & 1) != 0)
        rbx_6 = (rbx_6 s>> 1) + rax_2 + 0x50
    
    int32_t i_3 = *(rax_2 + 0x58)
    
    if (i_3 != 0)
        int32_t i
        
        do
            sub_1405d1550(rbx_6)
            rbx_6 += 0x20
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t rbx_8 = 0
    *(rax_2 + 0x58) = 0
    
    if (*(rax_2 + 0x5c) != 0)
        sub_1408e7310(rax_2 + 0x50, 0)
        rbx_8 = *(rax_2 + 0x58)
    
    rsi = *(arg5 + 0x1c)
    int64_t var_3e0 = 0
    int64_t var_3d8_1 = 3
    int64_t var_3d0_1 = 0xc
    int16_t var_3c4_1 = 0x100
    char var_3c2_1 = 1
    uint32_t var_3c8_1 = rsi
    *(rax_2 + 0x58) = rbx_8 + 1
    
    if (rbx_8 + 1 s> *(rax_2 + 0x5c))
        sub_1405e4030(rax_2 + 0x50, rbx_8)
    
    void* rcx_38 = *(rax_2 + 0x50)
    
    if ((rcx_38.b & 1) != 0)
        rcx_38 = (rcx_38 s>> 1) + rax_2 + 0x50
    
    int64_t* rax_44 = sx.q(rbx_8) << 5
    *(rax_44 + rcx_38) = 0
    *(rax_44 + rcx_38 + 0x18) = rsi
    rsi.b = 0
    *(rax_44 + rcx_38 + 8) = 3
    *(rax_44 + rcx_38 + 0x10) = 0xc
    *(rax_44 + rcx_38 + 0x1c) = 0x100
    *(rax_44 + rcx_38 + 0x1e) = 1
    sub_1405d1550(&var_3e0, 0)

void* i_1 = *(rax_2 + 0x50)

if ((i_1.b & 1) != 0)
    i_1 = (i_1 s>> 1) + rax_2 + 0x50

for (void* rdi_4 = (sx.q(*(rax_2 + 0x58)) << 5) + i_1; i_1 != rdi_4; i_1 += 0x20)
    sub_1405d16e0(i_1, *r12)

if (rsi.b == 0)
    int64_t* rcx_41 = data_143f0f180
    (*(*rcx_41 + 0x6f0))(rcx_41, &var_430, rax_2 + 0x38)
    
    if (rax_2 + 0x30 != &var_430)
        int64_t* rbx_10 = *(rax_2 + 0x30)
        *(rax_2 + 0x30) = var_430
        var_430 = nullptr
        
        if (rbx_10 != 0)
            rbx_10[1].d -= 1
            
            if (rbx_10[1].d == 1)
                char rax_49
                
                if (rbx_10[2].b == 0 && data_143f0f1d0 == 0)
                    rax_49 = sub_1405949a0()
                
                if (rbx_10[2].b != 0 || (data_143f0f1d0 == 0 && rax_49 != 0))
                    (**rbx_10)(rbx_10, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_10 + 0xc))
                        *(rbx_10 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_10 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_51 = sub_140a20af0()
                        uint64_t rdx_22 = zx.q(rax_51)
                        void* const rax_52
                        
                        if (rax_51 != 0)
                            rax_52 = *(&data_143cf0bf8 + (rdx_22 u>> 0xe << 3))
                                + (zx.q(rdx_22.d) & 0x3fff) * 0x18
                        else
                            rax_52 = nullptr
                        
                        *(rax_52 + 8) = rbx_10
                        sub_1405a42f0(&data_143f02390, rdx_22.d)
    
    sub_14081c9d0(&var_430)

void* rdx_23 = *(rax_2 + 0x30)
void* var_3c0 = nullptr
int32_t var_3b8 = 0
int64_t var_3b0 = 0
int32_t var_3a8 = 0
sub_1405d16e0(&var_3c0, rdx_23)
int64_t rdi_5 = sx.q(arg1[2].d)
int32_t rax_57 = (rdi_5 + 1).d
arg1[2].d = rax_57

if (rax_57 s> *(arg1 + 0x14))
    sub_1405c4e40(&arg1[1])

void* rcx_49 = var_3c0
int64_t* rax_60 = (rdi_5 << 5) + arg1[1]
*rax_60 = rcx_49

if (rcx_49 != 0)
    *(rcx_49 + 8) += 1

rax_60[1].d = zx.d(rsi.b)
*(rax_60 + 0x10) = var_3b0.o
int64_t result = sub_14081c9d0(&var_3c0)
int32_t i_4 = arg5[1].d
void* rcx_51 = *arg5

if (i_4 != 0)
    int64_t* rbx_12 = rcx_51 + 0x68
    int32_t i_2
    
    do
        int64_t rcx_52 = *rbx_12
        
        if (rcx_52 != 0)
            result = sub_140a74f90(rcx_52)
        
        rbx_12 = &rbx_12[0x14]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
    rcx_51 = *arg5

if (rcx_51 != 0)
    result = sub_140a74f90(rcx_51)

__security_check_cookie(rax_1 ^ &var_4a8)
return result
