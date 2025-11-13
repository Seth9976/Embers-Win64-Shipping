// 函数: sub_141365fb0
// 地址: 0x141365fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_458
int64_t rax_1 = __security_cookie ^ &var_458
void* rbx = nullptr
int32_t var_41c = 0
int64_t* rdi = *arg2
void var_300
sub_1419928d0(&var_300, arg2[8])
void*** rax_2 = sub_141397b60(arg1, &var_300, 0, u"SceneColor")
int128_t zmm0 = *(arg2 + 8)
int32_t r12 = 2
void*** rax_3 = sub_141397b20(arg1, &var_300, 1, u"Bloom", 2)
int64_t r10 = *(rax_3 + 0x44)
int32_t temp0 = divs.dp.d(sx.q(arg2[3].d - 1 + r10.d), r10.d)
uint64_t r10_1 = r10 u>> 0x20
uint64_t rflags
int32_t temp0_1
temp0_1, rflags = _bit_scan_reverse(temp0)
int32_t var_368 = temp0_1
int32_t rcx_3

if (r10_1 == 0)
    rcx_3 = 0x20
else
    rcx_3 = 0x1f - temp0_1

uint64_t rflags_1
int32_t temp0_2
temp0_2, rflags_1 = _bit_scan_reverse(temp0 - 1)
int32_t var_364 = temp0_2
char rdx_5

if (temp0 == 1)
    rdx_5 = 0x20
else
    rdx_5 = 0x1f - temp0_2.b

int32_t rax_12 = *(arg2 + 0x1c) - 1
int32_t r11_1 = 1 << ((not.d(rcx_3 << 0x1a s>> 0x1f)).b & (0x20 - rdx_5))
int32_t temp0_3 = divs.dp.d(sx.q(rax_12 + r10_1.d), r10_1.d)
uint64_t rflags_2
int32_t temp0_4
temp0_4, rflags_2 = _bit_scan_reverse(temp0_3)
int32_t var_360 = temp0_4
int32_t rcx_8

if (rax_12 == neg.d(r10_1.d))
    rcx_8 = 0x20
else
    rcx_8 = 0x1f - temp0_4

uint64_t rflags_3
int32_t temp0_5
temp0_5, rflags_3 = _bit_scan_reverse(temp0_3 - 1)
int32_t var_35c = temp0_5
char r8

if (temp0_3 == 1)
    r8 = 0x20
else
    r8 = 0x1f - temp0_5.b

int128_t zmm0_1 = *(arg2 + 8)
int64_t rcx_13 = zmm0_1:8.q
int32_t var_424 = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - r8))
int64_t r8_1 = r11_1.q
uint32_t r9_2 = (r8_1 u>> 0x20).d
int32_t temp0_6 = divs.dp.d(sx.q((rcx_13 - 1).d + r11_1), r11_1)
int32_t var_424_1 = divs.dp.d(sx.q((rcx_13 u>> 0x20).d - 1 + r9_2), r9_2)
int64_t* rax_26 = zmm0_1.q
int64_t* var_410 = rax_26
int128_t var_378
var_378:8.q = temp0_6.q
int32_t var_418 = divs.dp.d(sx.q(var_410:4.d), (r8_1 u>> 0x20).d)
int32_t rax_32 = 1

if (temp0_6 s>= 1)
    rax_32 = temp0_6

bool cond:5 = var_378:0xc.d s>= 1
var_378:8.d = rax_32
int32_t rax_33 = 1

if (cond:5)
    rax_33 = var_378:0xc.d

var_378:0xc.d = rax_33
void*** rax_34 = sub_141397b60(arg1, &var_300, 3, u"ColorGrading")
int32_t var_428_1
var_428_1.q = rax_34

if (rax_34 == 0)
    int64_t* rax_35 = sub_141420590(rdi)
    var_410 = rax_35
    
    if (rax_35 == 0)
        var_428_1.q = 0
    else
        int64_t rdx_14 = *rax_35
        (*(rdx_14 + 0x30))(rax_35, rdx_14)
        rax_35 = var_410
        
        if (rax_35 == 0)
            var_428_1.q = 0
        else
            var_428_1.q = sub_1410fccd0(&var_300, &var_410, u"External", 0)
            rax_35 = var_410
    
    if (rax_35 != 0)
        int64_t rdx_16 = *rax_35
        (*(rdx_16 + 0x38))(rax_35, rdx_16)

void*** rax_37
uint128_t zmm6
rax_37, zmm6 = sub_14139b4b0(arg1, &var_300, 0, u"OutputTexture")
void*** rsi = rax_37
uint128_t var_3e8
int128_t var_3d8
uint128_t var_3c8
int128_t var_3b8
uint128_t var_3a8
int64_t* rax_38
int32_t rcx_23
int32_t rdx_18
int32_t r8_3
int32_t r9_3
int32_t r10_3

if (rax_37 == 0)
    int128_t zmm1_1 = *(rax_2 + 0x40)
    int32_t rcx_24 = 1
    
    if (*(rdi + 0x515a) != 0)
        rcx_24 = 0x10001
    
    var_3e8 = *(rax_2 + 0x30)
    int32_t rsi_1 = 2
    int32_t var_350_1 = 1
    var_3d8 = zmm1_1
    zmm1_1 = *(rax_2 + 0x60)
    var_3c8 = *(rax_2 + 0x50)
    var_3c8:8.w = 1
    uint128_t var_3a8_1 = *(rax_2 + 0x70)
    uint128_t var_48_1 = zmm6
    
    if (*(arg1 + 0xeb) != 0)
        rsi_1 = data_1439c7a4c
    
    var_3b8.d = zmm1_1.d | data_143ed33b4
    int128_t var_34c_1 = zx.o(0)
    var_3a8_1:8.b = 1
    void* rdx_19 = *rdi
    var_3b8:4.d = rcx_24 | (zmm1_1:4.d & 0xfffeffff)
    var_3b8:8.w = 0
    var_3d8.d = _mm_bsrli_si128(zx.o(0), 0xc).d
    int64_t var_338
    sub_14135ba90(&var_338, rdx_19)
    int32_t var_32c
    
    if (var_32c != 7)
        if (var_32c - 8 u<= 1)
            rsi_1 = 0xa
        
        var_3c8:0xc.d = rsi_1
    else
        var_3c8:0xc.d = 1
    
    int512_t zmm6_1
    zmm6_1.o = var_3d8
    var_3a8 = var_3a8_1
    var_3a8.q = u"Tonemap"
    int64_t* var_2f8
    void*** rax_44
    rax_44, zmm6 = sub_14081d830(0x88, var_2f8, 1, 0)
    rsi = rax_44
    
    if (rax_44 == 0)
        rsi = nullptr
    else
        rsi[1] = u"Tonemap"
        rsi[2] = 0
        rsi[3].b = 0
        *(rsi + 0x1c) = 0
        rsi[4] = 0
        rsi[5].w = 0x200
        *(rsi + 0x30) = var_350_1.o
        *rsi = &data_142f11960
        *(rsi + 0x40) = zmm6
        rsi[0x10] = 0
        *(rsi + 0x50) = var_3c8
        *(rsi + 0x60) = var_3b8
        *(rsi + 0x70) = var_3a8
    
    zmm6 = var_48_1
    
    if (rdi[0x2a9].d s> 1)
        rax_38 = sub_14141f7a0(rdi)
    else
        rax_38 = 2
    
    rcx_23 = zmm0:0xc.d
    r10_3 = rcx_23
    rdx_18 = zmm0.d
    r8_3 = zmm0:4.d
    r9_3 = zmm0:8.d
else
    if (*(rdi + 0x1524) != 2)
        rdx_18 = rdi[0x4b].d
        r8_3 = *(rdi + 0x25c)
        r9_3 = rdi[0x4c].d
        r10_3 = *(rdi + 0x264)
    else
        rdx_18 = rdi[0x2b3].d
        r8_3 = *(rdi + 0x159c)
        r9_3 = rdi[0x2b4].d
        r10_3 = *(rdi + 0x15a4)
    
    rcx_23 = zmm0:0xc.d
    rax_38.b = ***rdi == rdi
    rax_38.b += 1

var_3b8:4.d = rcx_23
var_3b8:8.q = rax_3
var_3a8.d = divs.dp.d(sx.q(rax_26.d), r11_1)
var_3a8:4.d = var_418
var_3a8:8.d = rax_32
var_3c8:8.d = zmm0.d
var_3a8:0xc.d = rax_33
var_3c8:0xc.d = zmm0:4.d
int64_t var_398 = var_428_1.q
char var_385 = 0
var_3c8.q = rax_2
var_3b8.d = zmm0:8.d
int64_t var_390 = 0
var_3e8.q = rsi
var_3e8:8.d = rdx_18
var_3e8:0xc.d = r8_3
var_3d8.d = r9_3
var_3d8:4.d = r10_3
var_3d8:8.b = rax_38.b

if (rdi[0x2a4].d == 1)
    char var_387_2 = 1
else if (sub_1413197f0() != 0)
    var_387_2 = 1
else
    char var_387_1 = 0
    
    if (*(arg1 + 0xed) != 0)
        var_387_2 = 1

int32_t rcx_34 = (*U"1111")[sx.q(arg2[0xb].d)]
int32_t var_41c_2 = rcx_34
char rax_47 = sub_14128e090(rcx_34)

if (rax_47 != 0)
    char var_388_1 = 1

if (rax_47 == 0 || data_143ebe680 != arg1)
    char var_388_2 = 0

char var_386 = arg1[0x1d].b
char var_384 = *(arg1 + 0xec)
void* rax_50

if (*(arg1 + 0xea) != 0)
    rax_50, zmm6 = sub_14141f470(rdi)

int64_t rax_52

if (*(arg1 + 0xea) == 0 || rax_50 == 0)
    var_428_1.q = 0
    rax_52 = 0
else
    void* rax_51
    rax_51, zmm6 = sub_14141f470(rdi)
    void* rcx_37 = *(rax_51 + 8)
    var_418.q = rcx_37
    
    if (rcx_37 != 0)
        *(rcx_37 + 8) += 1
    
    rax_52 = var_418.q
    r12 = 1
    rbx = var_428_1.q

int64_t var_380 = rax_52

if ((r12.b & 2) != 0)
    r12 &= 0xfffffffd
    
    if (rbx != 0)
        int32_t rax_53 = *(rbx + 8)
        *(rbx + 8) -= 1
        
        if (rax_53 == 1)
            int64_t* rbx_1 = var_428_1.q
            char rax_54
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_54 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_54 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    zmm6 = sub_1405dcc10(&data_143f02390, var_428_1.q)

if ((r12.b & 1) != 0)
    void* rax_57 = var_418.q
    
    if (rax_57 != 0)
        int32_t r14_1 = *(rax_57 + 8)
        *(rax_57 + 8) -= 1
        
        if (r14_1 == 1)
            int64_t* rbx_2 = var_418.q
            char rax_58
            
            if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_58 = sub_1405949a0()
            
            if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_58 != 0))
                (**rbx_2)(rbx_2, 1)
            else
                bool z_2
                
                if (0 == *(rbx_2 + 0xc))
                    *(rbx_2 + 0xc) = 1
                    z_2 = true
                else
                    *(rbx_2 + 0xc)
                    z_2 = false
                
                if (z_2)
                    zmm6 = sub_1405dcc10(&data_143f02390, var_418.q)

uint128_t var_318
sub_14134e0d0(&var_318, &var_300, rdi, &var_3e8, zmm6)
sub_14139b300(arg1, &var_300, 0, rsi)
sub_14199ef00(&var_300)
int64_t* rax_61 = *rdi

if (*(*rax_61 + (sx.q(rax_61[1].d) << 3) - 8) == rdi)
    arg2[8]
    sub_1413a9e60(&data_143ec4c60, nullptr)

int64_t result = sub_1410eb9e0(&var_300)
__security_check_cookie(rax_1 ^ &var_458)
return result
