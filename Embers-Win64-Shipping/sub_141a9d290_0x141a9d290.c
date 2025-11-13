// 函数: sub_141a9d290
// 地址: 0x141a9d290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_548
int64_t rax_1 = __security_cookie ^ &var_548
void* rax_5 = sub_1405948b0(sub_1405e25d0(&arg2[1]))
int32_t rax_8 = sub_140a77ee0(arg1 + 0xd4)
void var_238
sub_141abcb70(&var_238, sub_1405d9250(*arg2), &arg2[1], arg1 + 0xe0, rax_8, arg1 + 0xc8)
void var_290
void* var_448 = &var_290
int96_t var_228
*var_448 = var_228.d.d
*(var_448 + 4) = var_228:4.d.d
*(var_448 + 8) = var_228:8.d.d
void var_2a0
__builtin_memcpy(&var_2a0, &var_290, 0xc)
void* var_488
RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
    &var_488)
int32_t var_480 = 0
int32_t var_47c = 0
int32_t var_454
sub_141ab9ef0(arg1 + 0x150, &var_454, rax_5)
int32_t var_500
sub_141ab9ef0(arg1 + 0x140, &var_500, rax_5)
char var_4d0_1

do
    sub_141a54e70(&var_488, &var_500, 0)
    void var_2c0
    var_500 = *sub_141abbb60(sub_1405e25d0(&arg2[1]), &var_2c0, &var_500)
    
    var_4d0_1 = var_500 == var_454 ? 0 : 1
while (zx.d(var_4d0_1) != 0)
sub_141a54e70(&var_488, &var_500, 0)
int32_t var_438 = arg3[1].d
int32_t rax_27 = arg3[1].d + var_480
arg3[1].d = rax_27

if (rax_27 s> *(arg3 + 0xc))
    sub_1405c4fe0(arg3)

void* var_4f8
RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
    &var_4f8)
int32_t var_4f0 = 0
int32_t var_4ec = 0

if (var_480 s> 0)
    sub_140888ba0(&var_4f8, var_480)

int32_t* rax_32 = var_488
float var_208[0x3][0x4]
sub_141abb9e0(&arg2[1], &var_208, *rax_32)
float (* var_370)[0x3][0x4] = &var_208
int128_t* rax_37 = sub_141ab9f30(&arg2[1], *rax_32)
void* rax_39 = *arg3
void var_1a8
int32_t* rax_41 = sub_141a8fe60(&var_1a8, *rax_32, rax_37)
*rax_39 = *rax_41
*(rax_39 + 0x10) = *(rax_41 + 0x10)
*(rax_39 + 0x20) = *(rax_41 + 0x20)
*(rax_39 + 0x30) = *(rax_41 + 0x30)
int32_t var_478 = 0
void var_128
int128_t* rax_52 = sub_141a8fef0(&var_128, rax_37, var_370, &var_478)
int32_t var_4f0_1 = var_4f0 + 1

if (var_4f0 + 1 s> var_4ec)
    sub_1408888d0(&var_4f8)

sub_141a8fe80(sub_140587030(0x80, var_4f8 + sx.q(var_4f0) * 0x80), rax_52)
void var_c0
sub_1406b6170(&var_c0)

for (int32_t i = 1; i s< var_480; i += 1)
    void* rax_69 = var_488 + (sx.q(i) << 2)
    float var_1d8[0x3][0x4]
    sub_141abb9e0(&arg2[1], &var_1d8, *rax_69)
    float (* var_330_1)[0x3][0x4] = &var_1d8
    int128_t* rax_74 = sub_141ab9f30(&arg2[1], *rax_69)
    int96_t var_258_1 = (rax_74[1]).12
    void var_280
    void* var_428_1 = &var_280
    *var_428_1 = var_258_1.d.d
    *(var_428_1 + 4) = var_258_1:4.d.d
    *(var_428_1 + 8) = var_258_1:8.d.d
    int32_t var_390
    __builtin_memcpy(&var_390, &var_280, 0xc)
    int32_t* var_3b0 = *arg3 + sx.q(i) * 0x40
    void var_168
    int32_t* rax_82 = sub_141a8fe60(&var_168, *rax_69, rax_74)
    *var_3b0 = *rax_82
    void* rax_88 = &var_3b0[4]
    *rax_88 = *(rax_82 + 0x10)
    *(rax_88 + 0x10) = *(rax_82 + 0x20)
    *(rax_88 + 0x20) = *(rax_82 + 0x30)
    int96_t var_248_1 = (*(*arg3 + sx.q(i - 1) * 0x40 + 0x20))[0].12
    void var_2b0
    void* var_3d8_1 = &var_2b0
    *var_3d8_1 = var_248_1.d[0]
    *(var_3d8_1 + 4) = var_248_1:4.d[0]
    *(var_3d8_1 + 8) = var_248_1:8.d[0]
    int32_t var_3a0
    __builtin_memcpy(&var_3a0, &var_2b0, 0xc)
    float zmm0_3[0x4] = var_3a0
    zmm0_3[0] = zmm0_3[0] f- var_390
    float var_4b0_1 = zmm0_3[0]
    int32_t var_39c
    zmm0_3 = var_39c
    int32_t var_38c
    zmm0_3[0] = zmm0_3[0] f- var_38c
    float var_4b8_1 = zmm0_3[0]
    int32_t var_398
    zmm0_3 = var_398
    int32_t var_388
    zmm0_3[0] = zmm0_3[0] f- var_388
    float var_4c0_1 = zmm0_3[0]
    zmm0_3 = var_4c0_1
    zmm0_3[0] = zmm0_3[0] * var_4c0_1
    float zmm1_1[0x4] = var_4b8_1
    zmm1_1[0] = zmm1_1[0] * var_4b8_1
    float zmm2_1[0x4] = var_4b0_1
    zmm2_1[0] = zmm2_1[0] * var_4b0_1
    zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
    zmm2_1[0] = zmm2_1[0] + zmm0_3[0]
    char var_4a8_1
    
    if (sub_141ad9cb0(sqrtf(zmm2_1[0])[0]) f> 9.99999994e-09f)
        var_4a8_1 = 0
    else
        var_4a8_1 = 1
    
    if (zx.d(var_4a8_1) != 0)
        int64_t* rax_121 = var_4f8 + sx.q(var_4f0_1 - 1) * 0x80 + 0x68
        int32_t rax_123 = rax_121[1].d
        int32_t rax_126 = rax_121[1].d + 1
        rax_121[1].d = rax_126
        
        if (rax_126 s> *(rax_121 + 0xc))
            sub_1405a4cf0(rax_121)
        
        int32_t* rax_135 = sub_140587030(4, *rax_121 + (sx.q(rax_123) << 2))
        *rax_135 = i
    else
        void var_a8
        int128_t* rax_101 = sub_141a8fef0(&var_a8, rax_74, var_330_1, &i)
        int32_t var_4a0_1 = var_4f0_1
        int32_t rax_104 = var_4f0_1 + 1
        var_4f0_1 = rax_104
        
        if (rax_104 s> var_4ec)
            sub_1408888d0(&var_4f8)
        
        sub_141a8fe80(sub_140587030(0x80, var_4f8 + sx.q(var_4a0_1) * 0x80), rax_101)
        void var_40
        sub_1406b6170(&var_40)

int128_t* var_520
var_520.b = *(arg1 + 0x169)
int32_t var_528
var_528.b = *(arg1 + 0x168)

if (zx.d(sub_141a80de0(&var_4f8, &var_2a0, *(arg1 + 0x160), *(arg1 + 0x164), var_528.b, var_520.b, 
        arg1 + 0x170)) != 0)
    for (int32_t i_1 = 0; i_1 s< var_4f0_1; i_1 += 1)
        void* rcx_70 = var_4f8 + sx.q(i_1) * 0x80
        int128_t* rax_161 = *arg3 + sx.q(*(rcx_70 + 0x60)) * 0x40 + 0x10
        *rax_161 = *rcx_70
        rax_161[1] = *(rcx_70 + 0x10)
        rax_161[2] = *(rcx_70 + 0x20)
        int32_t rax_166 = *(rcx_70 + 0x70)
        
        for (int32_t j = 0; j s< rax_166; j += 1)
            int128_t* rax_178 = *arg3 + sx.q(*(*(rcx_70 + 0x68) + (sx.q(j) << 2))) * 0x40 + 0x10
            *rax_178 = *rcx_70
            rax_178[1] = *(rcx_70 + 0x10)
            rax_178[2] = *(rcx_70 + 0x20)

sub_141a90390(&var_4f8)
int64_t result =
    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_488)
__security_check_cookie(rax_1 ^ &var_548)
return result
