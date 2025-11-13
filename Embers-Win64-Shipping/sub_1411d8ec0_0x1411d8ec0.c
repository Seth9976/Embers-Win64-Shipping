// 函数: sub_1411d8ec0
// 地址: 0x1411d8ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
int64_t rax_1 = __security_cookie ^ &var_4a8
void var_2f0
sub_1419928d0(&var_2f0, arg2)
int32_t zmm1 = 0x3c23d70a
__builtin_memset(&arg1[0x10], 0, 0x28)
*(arg1 + 0x70) = 0
__builtin_memset(&arg1[0x20], 0, 0x58)
void*** var_3c0 = nullptr
void*** var_3b8 = nullptr
void*** var_3b0 = nullptr
void*** var_3a8 = nullptr
void** var_3a0 = nullptr
void*** var_398 = nullptr
void*** var_390 = nullptr
int32_t rcx_1 = data_1439b6154
*arg1 = rcx_1
arg1[1] = rcx_1
arg1[2] = rcx_1
arg1[7] = rcx_1 * rcx_1 * rcx_1
void*** zmm0 = data_1439b614c

if (not(zmm0.d f< 0.00999999978f))
    zmm1 = _mm_min_ss(zmm0.d, 0x41200000).d

arg1[3] = zmm1
int32_t rcx_2 = data_1439b6150
bool cond:0 = rcx_2 == 2
int32_t rax_5

if (rcx_2 s>= 2)
    rax_5 = 0x100
    cond:0 = rcx_2 == 0x100
    
    if (rcx_2 s< 0x100)
        rax_5 = rcx_2
else
    rax_5 = 2

uint64_t rflags
int32_t temp0_2
temp0_2, rflags = _bit_scan_reverse(rax_5)
int32_t var_388 = temp0_2
int32_t rcx_3

rcx_3 = cond:0 ? 0x20 : 0x1f - temp0_2

uint64_t rflags_1
int32_t temp0_3
temp0_3, rflags_1 = _bit_scan_reverse(rax_5 - 1)
int32_t var_384 = temp0_3
char rdx

if (rax_5 == 1)
    rdx = 0x20
else
    rdx = 0x1f - temp0_3.b

int32_t rdx_1 = arg1[2]
void*** var_410 = *arg1
int32_t rax_7 = var_410:4.d
int32_t r8_2 = 1 << ((not.d(rcx_3 << 0x1a s>> 0x1f)).b & (0x20 - rdx))
int32_t rcx_8 = var_410.d
arg1[8] = r8_2
int32_t rcx_9 = rcx_8 * r8_2
var_410:4.d = rax_7 * r8_2
arg1[4] = rcx_9
arg1[6] = rdx_1 * r8_2
var_410.d = rcx_9
arg1[5] = (var_410 u>> 0x20).d
arg1[0xc] = _mm_max_ss(data_1439b6124.d, 0).d
arg1[0xd] = _mm_max_ss(data_1439b6128.d, 0).d
zmm1 = data_1439b6144

if (zmm1 f>= 1f)
    zmm1 = _mm_min_ss(zmm1, 0x41200000)
else
    zmm1 = 0x3f800000

arg1[0xe] = zmm1
arg1[0xb] = arg4[1].d
arg1[0xa] = 0x40
int32_t zmm2 = *(arg3 + 0xae0)
int32_t var_3c4 = *(arg3 + 0x15a4) - *(arg3 + 0x159c)
int32_t var_488 = 0x3f800000
int32_t var_3c8 = *(arg3 + 0x15a0) - *(arg3 + 0x1598)
int32_t var_368[0x4]
int32_t* rax_14 = sub_1411dadc0(&var_368, &var_3c8, zmm2, 1, var_488)
int64_t zmm0_1 = *rax_14
int32_t rax_15 = rax_14[2]
arg1[0xf] = zmm0_1.d
int32_t var_3d0 = rax_15
int64_t var_3d8 = zmm0_1
int64_t i = 3
void* rdi = &var_2f0
void var_308
*(arg1 + 0x58) = *(sub_14118c8f0(&var_308, arg2, arg3)[2] + 8)

do
    int64_t* rcx_15 = *(rdi - 8)
    rdi -= 8
    i -= 1
    
    if (rcx_15 != 0)
        (*(*rcx_15 + 0x38))(rcx_15)
while (i != 0)

int64_t zmm0_2 = *(arg1 + 0x10)
int64_t* var_428 = &var_390
*(arg1 + 0x60) = data_14395f4d0
void**** var_430 = &var_398
void*** var_438 = &var_3a0
void**** var_440 = &var_3a8
void**** var_448 = &var_3b0
void**** var_450 = &var_3b8
void**** var_458 = &var_3c0
int32_t var_370 = arg1[6]
int32_t var_3d0_1 = arg1[2]
int32_t rax_23 = arg1[0xa]
int64_t var_378
int32_t var_470 = &var_378
int32_t rax_24 = arg1[8]
int32_t rax_25 = arg1[7]
var_378 = zmm0_2
var_3d8 = *arg1
int32_t var_480 = arg1[3].d
int32_t var_488_1 = rax_25
float zmm7 = sub_1411cd390(&var_2f0, arg3, arg4, &var_3d8, var_488_1, var_480, rax_24, var_470, 
    rax_23, &arg1[9], var_458, var_450, var_448, var_440, var_438, var_430)
void*** rax_26 = var_3c0
int64_t var_180
int32_t var_178
int32_t var_174

if (rax_26 != 0)
    int16_t var_400_1 = i.w
    int64_t rbx_1 = sx.q(var_178)
    var_410 = rax_26
    int64_t* var_408_1 = &arg1[0x24]
    int32_t rax_27 = (rbx_1 + 1).d
    var_178 = rax_27
    
    if (rax_27 s> var_174)
        sub_14119a720(&var_180, rbx_1.d)
    
    int64_t rax_28 = var_180
    int64_t rcx_18 = rbx_1 * 3
    *(rax_28 + (rcx_18 << 3)) = var_410.o
    *(rax_28 + (rcx_18 << 3) + 0x10) = var_400_1.q

void*** rax_29 = var_3b8

if (rax_29 != 0)
    int64_t rbx_2 = sx.q(var_178)
    var_410 = rax_29
    int64_t var_408_2 = arg5
    int32_t rax_31 = (rbx_2 + 1).d
    int16_t var_400_2 = 0
    var_178 = rax_31
    
    if (rax_31 s> var_174)
        sub_14119a720(&var_180, rbx_2.d)
    
    int64_t rax_32 = var_180
    int64_t rcx_20 = rbx_2 * 3
    *(rax_32 + (rcx_20 << 3)) = var_410.o
    *(rax_32 + (rcx_20 << 3) + 0x10) = var_400_2.q

void*** rax_33 = var_3b0

if (rax_33 != 0)
    int64_t rbx_3 = sx.q(var_178)
    var_410 = rax_33
    void* var_408_3 = &arg1[0x2c]
    int16_t var_400_3 = 0x100
    int32_t rax_34 = (rbx_3 + 1).d
    var_178 = rax_34
    
    if (rax_34 s> var_174)
        sub_14119a720(&var_180, rbx_3.d)
    
    int64_t rax_35 = var_180
    int64_t rcx_22 = rbx_3 * 3
    *(rax_35 + (rcx_22 << 3)) = var_410.o
    *(rax_35 + (rcx_22 << 3) + 0x10) = var_400_3.q

void*** rax_36 = var_3a8

if (rax_36 != 0)
    int64_t rbx_4 = sx.q(var_178)
    var_410 = rax_36
    void* var_408_4 = &arg1[0x28]
    int16_t var_400_4 = 0
    int32_t rax_38 = (rbx_4 + 1).d
    var_178 = rax_38
    
    if (rax_38 s> var_174)
        sub_14119a720(&var_180, rbx_4.d)
    
    int64_t rax_39 = var_180
    int64_t rcx_24 = rbx_4 * 3
    *(rax_39 + (rcx_24 << 3)) = var_410.o
    *(rax_39 + (rcx_24 << 3) + 0x10) = var_400_4.q

void** rax_40 = var_3a0

if (rax_40 != 0)
    int64_t rbx_5 = sx.q(var_178)
    var_410 = rax_40
    void* var_408_5 = &arg1[0x30]
    int16_t var_400_5 = 0x100
    int32_t rax_41 = (rbx_5 + 1).d
    var_178 = rax_41
    
    if (rax_41 s> var_174)
        sub_14119a720(&var_180, rbx_5.d)
    
    int64_t rax_42 = var_180
    int64_t rcx_26 = rbx_5 * 3
    *(rax_42 + (rcx_26 << 3)) = var_410.o
    *(rax_42 + (rcx_26 << 3) + 0x10) = var_400_5.q

void*** rax_43 = var_398

if (rax_43 != 0)
    int64_t rbx_6 = sx.q(var_178)
    var_410 = rax_43
    void* var_408_6 = &arg1[0x32]
    int16_t var_400_6 = 0x100
    int32_t rax_45 = (rbx_6 + 1).d
    var_178 = rax_45
    
    if (rax_45 s> var_174)
        sub_14119a720(&var_180, rbx_6.d)
    
    int64_t rax_46 = var_180
    int64_t rcx_28 = rbx_6 * 3
    *(rax_46 + (rcx_28 << 3)) = var_410.o
    *(rax_46 + (rcx_28 << 3) + 0x10) = var_400_6.q

void*** rax_47 = var_390

if (rax_47 != 0)
    int64_t rbx_7 = sx.q(var_178)
    var_410 = rax_47
    void* var_408_7 = &arg1[0x34]
    int16_t var_400_7 = 0x100
    int32_t rax_49 = (rbx_7 + 1).d
    int32_t var_178_1 = rax_49
    
    if (rax_49 s> var_174)
        sub_14119a720(&var_180, rbx_7.d)
    
    int64_t rax_50 = var_180
    int64_t rcx_30 = rbx_7 * 3
    *(rax_50 + (rcx_30 << 3)) = var_410.o
    *(rax_50 + (rcx_30 << 3) + 0x10) = var_400_7.q

sub_14199ef00(&var_2f0)
int64_t* r9_2 = *(arg1 + 0x90)
void* r12_1

if (r9_2 == 0)
    r12_1 = &arg1[0x26]
else
    int64_t* rcx_32 = data_143f0f180
    var_480.b = 0x1c
    var_488_1 = 4
    int64_t* var_3f0
    (*(*rcx_32 + 0x4b8))(rcx_32, &var_3f0, &data_143f02b98, *r9_2, var_488_1, var_480)
    r12_1 = &arg1[0x26]
    
    if (r12_1 == &var_3f0)
    label_1411d95a1:
        int64_t* rdi_2 = var_3f0
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                char rax_58
                
                if (rdi_2[2].b == 0 && data_143f0f1d0 == 0)
                    rax_58 = sub_1405949a0()
                
                if (rdi_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_58 != 0))
                    (**rdi_2)(rdi_2, 1)
                else
                    bool z_2
                    
                    if (0 == *(rdi_2 + 0xc))
                        *(rdi_2 + 0xc) = 1
                        z_2 = true
                    else
                        *(rdi_2 + 0xc)
                        z_2 = false
                    
                    if (z_2)
                        sub_1405dcc10(&data_143f02390, rdi_2)
    else
        int64_t* rdi_1 = *r12_1
        *r12_1 = var_3f0
        var_3f0 = nullptr
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                char rax_54
                
                if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_54 = sub_1405949a0()
                
                if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_54 != 0))
                    (**rdi_1)(rdi_1, 1)
                else
                    bool z_1
                    
                    if (0 == *(rdi_1 + 0xc))
                        *(rdi_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rdi_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        sub_1405dcc10(&data_143f02390, rdi_1)
            
            goto label_1411d95a1

int64_t* r9_4 = *(arg1 + 0xb0)
void* r15_1

if (r9_4 == 0)
    r15_1 = &arg1[0x2e]
else
    int64_t* rcx_35 = data_143f0f180
    var_480.b = 0x3c
    var_488_1 = 4
    int64_t* var_3e8
    (*(*rcx_35 + 0x4b8))(rcx_35, &var_3e8, &data_143f02b98, *r9_4, var_488_1, var_480)
    r15_1 = &arg1[0x2e]
    
    if (r15_1 == &var_3e8)
    label_1411d96af:
        int64_t* rdi_4 = var_3e8
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                char rax_68
                
                if (rdi_4[2].b == 0 && data_143f0f1d0 == 0)
                    rax_68 = sub_1405949a0()
                
                if (rdi_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_68 != 0))
                    (**rdi_4)(rdi_4, 1)
                else
                    bool z_4
                    
                    if (0 == *(rdi_4 + 0xc))
                        *(rdi_4 + 0xc) = 1
                        z_4 = true
                    else
                        *(rdi_4 + 0xc)
                        z_4 = false
                    
                    if (z_4)
                        sub_1405dcc10(&data_143f02390, rdi_4)
    else
        int64_t* rdi_3 = *r15_1
        *r15_1 = var_3e8
        var_3e8 = nullptr
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                char rax_64
                
                if (rdi_3[2].b == 0 && data_143f0f1d0 == 0)
                    rax_64 = sub_1405949a0()
                
                if (rdi_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_64 != 0))
                    (**rdi_3)(rdi_3, 1)
                else
                    bool z_3
                    
                    if (0 == *(rdi_3 + 0xc))
                        *(rdi_3 + 0xc) = 1
                        z_3 = true
                    else
                        *(rdi_3 + 0xc)
                        z_3 = false
                    
                    if (z_3)
                        sub_1405dcc10(&data_143f02390, rdi_3)
            
            goto label_1411d96af

void* r9_6 = *(arg1 + 0xa0)
void* r14_2

if (r9_6 == 0)
    r14_2 = &arg1[0x2a]
else
    int64_t* rcx_38 = data_143f0f180
    int64_t* var_3e0
    (*(*rcx_38 + 0x5b0))(rcx_38, &var_3e0, &data_143f02b98, *(r9_6 + 0x10), var_488_1, var_480)
    r14_2 = &arg1[0x2a]
    
    if (r14_2 == &var_3e0)
    label_1411d97af:
        int64_t* rdi_6 = var_3e0
        
        if (rdi_6 != 0)
            rdi_6[1].d -= 1
            
            if (rdi_6[1].d == 1)
                char rax_78
                
                if (rdi_6[2].b == 0 && data_143f0f1d0 == 0)
                    rax_78 = sub_1405949a0()
                
                if (rdi_6[2].b != 0 || (data_143f0f1d0 == 0 && rax_78 != 0))
                    (**rdi_6)(rdi_6, 1)
                else
                    bool z_6
                    
                    if (0 == *(rdi_6 + 0xc))
                        *(rdi_6 + 0xc) = 1
                        z_6 = true
                    else
                        *(rdi_6 + 0xc)
                        z_6 = false
                    
                    if (z_6)
                        sub_1405dcc10(&data_143f02390, rdi_6)
    else
        int64_t* rdi_5 = *r14_2
        *r14_2 = var_3e0
        var_3e0 = nullptr
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                char rax_74
                
                if (rdi_5[2].b == 0 && data_143f0f1d0 == 0)
                    rax_74 = sub_1405949a0()
                
                if (rdi_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_74 != 0))
                    (**rdi_5)(rdi_5, 1)
                else
                    bool z_5
                    
                    if (0 == *(rdi_5 + 0xc))
                        *(rdi_5 + 0xc) = 1
                        z_5 = true
                    else
                        *(rdi_5 + 0xc)
                        z_5 = false
                    
                    if (z_5)
                        sub_1405dcc10(&data_143f02390, rdi_5)
            
            goto label_1411d97af

float _X = float.s(zx.q(arg1[8]))
TEB* gsbase

if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cda914)
    
    if (data_143cda914 == 0xffffffff)
        data_143cda910 = 0x3fb8aa3b
        _Init_thread_footer(&data_143cda914)

int32_t var_348 = data_1439c7ae8
int32_t var_344 = arg1[4]
int32_t var_340 = arg1[5]
int32_t var_33c = arg1[6]
int16_t var_320 = 0
int16_t var_30f = 0
int128_t var_358 = data_1439c7ad8
int32_t var_338 = 1
int16_t var_334 = 0
var_470.b = 0
int32_t var_478
var_478.b = 1
var_480.b = 1
int16_t var_330 = 1
int64_t var_32c = 0x1c
int32_t var_324 = 0x10008
char var_310 = 1
int16_t var_332 = (int.q(logf(_X) f* data_143cda910 + zmm7)).w
wchar16 const* const var_318 = u"UnknownTextureVolume"
var_488_1.q = u"VoxelPageTexture"
sub_1419a0ce0(&data_1439c9260, arg2, &var_358, &arg1[0x22], var_488_1, var_480.b, var_478.b, 
    var_470.b)
int64_t rdx_23 = *r12_1
int64_t r8_6 = *r14_2
*(arg1 + 0x48) = *r15_1
void* rax_90 = *(arg1 + 0x88)
*(arg1 + 0x40) = rdx_23
*(arg1 + 0x50) = r8_6
*(arg1 + 0x70) = *(rax_90 + 0x10)

if (rdx_23 != 0 && r8_6 != 0)
    int64_t* rcx_44 = data_143f0f180
    (*(*rcx_44 + 0xf8))(rcx_44, &var_410, arg1, &data_143e78450, 1, 1)
    void*** rax_92 = var_410
    void*** var_3f8 = rax_92
    
    if (rax_92 != 0)
        rax_92[1].d += 1
        void*** rdi_7 = var_410
        
        if (rdi_7 != 0)
            rdi_7[1].d -= 1
            
            if (rdi_7[1].d == 1)
                char rax_94
                
                if (rdi_7[2].b == 0 && data_143f0f1d0 == 0)
                    rax_94 = sub_1405949a0()
                
                if (rdi_7[2].b != 0 || (data_143f0f1d0 == 0 && rax_94 != 0))
                    (**rdi_7)(rdi_7, 1)
                else
                    bool z_7
                    
                    if (0 == *(rdi_7 + 0xc))
                        *(rdi_7 + 0xc) = 1
                        z_7 = true
                    else
                        *(rdi_7 + 0xc)
                        z_7 = false
                    
                    if (z_7)
                        sub_1405dcc10(&data_143f02390, rdi_7)
        
        rax_92 = var_3f8
    
    if (&arg1[0x20] != &var_3f8)
        int64_t* rdi_8 = *(arg1 + 0x80)
        *(arg1 + 0x80) = rax_92
        
        if (rdi_8 != 0)
            rdi_8[1].d -= 1
            
            if (rdi_8[1].d == 1)
                char rax_97
                
                if (rdi_8[2].b == 0 && data_143f0f1d0 == 0)
                    rax_97 = sub_1405949a0()
                
                if (rdi_8[2].b != 0 || (data_143f0f1d0 == 0 && rax_97 != 0))
                    (**rdi_8)(rdi_8, 1)
                else
                    bool z_8
                    
                    if (0 == *(rdi_8 + 0xc))
                        *(rdi_8 + 0xc) = 1
                        z_8 = true
                    else
                        *(rdi_8 + 0xc)
                        z_8 = false
                    
                    if (z_8)
                        sub_1405dcc10(&data_143f02390, rdi_8)
    else if (rax_92 != 0)
        rax_92[1].d -= 1
        
        if (rax_92[1].d == 1)
            void*** rbx_10 = var_3f8
            char rax_100
            
            if (rbx_10[2].b == 0 && data_143f0f1d0 == 0)
                rax_100 = sub_1405949a0()
            
            if (rbx_10[2].b != 0 || (data_143f0f1d0 == 0 && rax_100 != 0))
                void** r8_8 = *rbx_10
                (*r8_8)(rbx_10, 1, r8_8)
            else
                bool z_9
                
                if (0 == *(rbx_10 + 0xc))
                    *(rbx_10 + 0xc) = 1
                    z_9 = true
                else
                    *(rbx_10 + 0xc)
                    z_9 = false
                
                if (z_9)
                    sub_1405dcc10(&data_143f02390, var_3f8)

sub_1410eb9e0(&var_2f0)
__security_check_cookie(rax_1 ^ &var_4a8)
return arg1
