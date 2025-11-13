// 函数: sub_14138bee0
// 地址: 0x14138bee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg7
char rax = *(arg3 + 0x515a)
int64_t r15

if (*rbx == 0 || (rbx[2].d == rbx[1].d && *(rbx + 0x14) == *(rbx + 0xc)))
    r15.b = 0
else
    r15.b = 1

int32_t* rdi = arg5
int32_t var_258

if (rdi[2] != data_143dbb180.d || rdi[3] != data_143dbb180:4.d || rdi[4] != *rdi
        || rdi[5] != rdi[1])
    arg5.d = 2
    var_258 = 2
else
    arg5.d = 0
    var_258 = 0

int32_t r12 = arg8[1].d
int32_t rcx = *(data_143ec4258 + 4)

if (rcx == 2 || (rcx != 0 && r12 u> 0x20))
    arg7.d = 0
else
    arg7.d = r12

void*** rax_9 = data_1439b67f0
void*** var_298 = rax_9
uint64_t zmm1 = arg6[1].q
uint128_t var_2b8 = *arg6
uint64_t var_2a8 = zmm1
void* var_f8
uint128_t zmm7 = sub_14139d770(&var_f8, &var_2b8, rax_9)
int128_t var_108 = zx.o(0)
uint128_t var_248
uint128_t var_178
uint128_t zmm1_1

if (r15.b != 0)
    void*** r8_1 = var_298
    zmm1_1 = zx.o(rbx[2])
    var_2b8 = *rbx
    var_2a8 = zmm1_1.q
    int64_t* rax_10
    rax_10, zmm7 = sub_14139d770(&var_248, &var_2b8, r8_1)
    int32_t var_158_1 = rax_10[4].d
    int32_t rcx_4 = *(rax_10 + 0x24)
    var_178 = *rax_10
    int32_t var_150_1 = rax_10[5].d
    uint128_t var_168_1 = *(rax_10 + 0x10)
    int32_t var_14c_1 = *(rax_10 + 0x2c)
    uint128_t var_148_1 = *(rax_10 + 0x30)
    var_108.q = rax_10[0xe]
    uint128_t var_138_1 = *(rax_10 + 0x40)
    int32_t var_154_1 = rcx_4
    var_108:8.q = rax_10[0xf]
    uint128_t var_128_1 = *(rax_10 + 0x50)
    uint128_t var_118_1 = *(rax_10 + 0x60)

void* rax_15 = *arg6
uint128_t zmm6 = *(rdi + 8)
int32_t rcx_5 = 1
var_2b8.d = 1
uint128_t var_238 = *(rax_15 + 0x40)
zmm1_1 = *(rax_15 + 0x60)
uint128_t var_228 = *(rax_15 + 0x50)
var_238:4.d = *rdi
var_238:8.d = rdi[1]

if (rax != 0)
    rcx_5 = 0x10001

uint128_t var_218
var_218.d = zmm1_1.d & 0x100000
uint128_t var_208 = *(rax_15 + 0x70)
var_218:4.d = rcx_5 | (zmm1_1:4.d & 0xfffeffff)
var_228:8.w = 1
var_2b8 = data_143dbb1e0
var_208:8.b = 1
uint128_t var_58 = zmm7
var_218:8.w = 0
var_248 = var_2b8
var_238.d = var_2a8.d
uint128_t var_278 = zmm6
void*** rax_21
int128_t zmm6_1
rax_21, zmm6_1 = sub_141188e50(arg2, &var_248, arg4, 0)
int64_t* rdx_4 = *(arg2 + 8)
void*** rdi_1

if (rax == 0)
    uint64_t* rax_53
    int512_t zmm6_4
    rax_53, zmm6_4 = sub_14081d830(0xda0, rdx_4, 1, 0)
    uint64_t* rbx_3 = rax_53
    
    if (rax_53 == 0)
        rbx_3 = nullptr
    else
        rbx_3[0xe] = 0
        rbx_3[0xf] = 0
        rbx_3[0x1e] = 0
        rbx_3[0x1f] = 0
        sub_141386310(&rbx_3[0x20])
        sub_14117af20(&rbx_3[0x1a2])
    
    memset(rbx_3, 0, 0xda0)
    var_278.q = *arg9
    var_278:8.d = arg9[1].d
    int64_t* rax_56 = arg8
    var_278:8.d = r12
    var_2b8 = var_278
    var_278.q = *rax_56
    var_278 = var_278
    sub_14139cab0(rbx_3, &var_f8, &var_178, &var_278, &var_2b8)
    var_298 = rax_21
    int32_t r15_1 = arg7.d
    int16_t var_290_2 = 0
    char var_28e_1 = 0
    int32_t var_28c_1 = 0xffffffff
    *(rbx_3 + 0xd10) = var_298.o
    sub_1419a2ec0(*(arg3 + 0x5150), &var_278, &data_143ec48a0, 
        (zx.d(r15.b) + var_258) * 0x21 + r15_1)
    zmm7 = var_278
    uint128_t zmm1_4
    
    if (r15_1 == 0)
        zmm1_4 = *arg6
        zmm6_4.o = zx.o(0)
        uint64_t var_2a8_1 = arg6[1].q
        void* rcx_32 = zmm1_4.q
        uint128_t temp0_3 = _mm_bsrli_si128(zmm1_4, 8)
        var_290_2.d = _mm_bsrli_si128(zmm1_4, 8).d
        var_298.d = *(rcx_32 + 0x44)
        var_298:4.d = *(rcx_32 + 0x48)
        uint32_t var_28c_2 = (temp0_3.q u>> 0x20).d
        uint32_t var_284_1 = (var_2a8_1 u>> 0x20).d
        uint128_t zmm6_5 = sub_14139ded0(rcx_32.b)
        void* rcx_33 = var_278.q
        var_2b8 = zmm6_5
        sub_141998c50(rcx_33, &data_143ec6b70, rbx_3)
        int64_t* rdx_21 = *(arg2 + 8)
        int64_t zmm1_6 = *(rdi + 0x10)
        var_248.q = arg3
        var_248 = *rdi
        var_208:8.q = rbx_3
        var_218.q = var_2a8_1.d.q
        var_238:8.q = zmm1_6
        char var_1f8_1 = 0
        void*** rax_79
        char rcx_34
        rax_79, rcx_34 = sub_14081d830(0x90, rdx_21, 1, 0)
        rdi_1 = rax_79
        
        if (rax_79 == 0)
            rdi_1 = nullptr
        else
            var_278.q = rbx_3
            int128_t zmm6_6 = sub_14139ded0(rcx_34)
            var_278:8.q = &data_143ec6ba0
            var_2b8 = var_278
            sub_141992bd0(rdi_1, &arg8, &var_2b8, 1)
            uint128_t zmm0_16 = var_248
            *rdi_1 = &data_142f6e2b0
            *(rdi_1 + 0x38) = zmm0_16
            *(rdi_1 + 0x48) = var_238
            *(rdi_1 + 0x58) = zmm6_6
            *(rdi_1 + 0x68) = zmm7
            *(rdi_1 + 0x78) = var_208
            rdi_1[0x11] = var_1f8_1.q
    else
        sub_1419a2ec0(*(arg3 + 0x5150), &var_2b8, &data_143ec47a0, r15_1)
        uint128_t zmm2_1 = var_2b8
        zmm1_4 = *arg6
        int64_t* rdx_19 = *(arg2 + 8)
        var_228.q = data_14395da00
        void* rcx_29 = zmm1_4.q
        var_228:8.q = data_14395d9e8
        uint64_t var_268_1 = arg6[1].q
        var_218.q = data_1439c9210
        var_2b8.d = *(rcx_29 + 0x44)
        var_2b8:4.d = *(rcx_29 + 0x48)
        uint128_t temp0_1 = _mm_bsrli_si128(zmm1_4, 8)
        uint128_t temp0_2 = _mm_bsrli_si128(zmm1_4, 8)
        var_2b8:8.d = temp0_1.d
        var_2b8:0xc.d = (temp0_2.q u>> 0x20).d
        uint128_t var_f0_1 = *rdi
        var_2a8.d = var_268_1.d
        uint64_t var_e0_1 = *(rdi + 0x10)
        uint128_t var_d8_1 = var_2b8
        var_2a8:4.d = (var_268_1 u>> 0x20).d
        uint64_t var_90_1 = var_218.q
        uint64_t var_68_1 = rbx_3
        var_f8 = arg3
        char var_60_1 = 0
        void*** rax_71
        char rcx_30
        rax_71, rcx_30 = sub_14081d830(0xd8, rdx_19, 1, 0)
        rdi_1 = rax_71
        
        if (rax_71 == 0)
            rdi_1 = nullptr
        else
            var_278.q = rbx_3
            sub_14139ded0(rcx_30)
            var_278:8.q = &data_143ec6ba0
            var_2b8 = var_278
            sub_141992bd0(rdi_1, &arg8, &var_2b8, 1)
            *rdi_1 = &data_142f6e2a0
            *(rdi_1 + 0x38) = var_f8.o
            *(rdi_1 + 0x48) = var_f0_1
            *(rdi_1 + 0x58) = var_d8_1
            *(rdi_1 + 0x68) = var_2a8.o
            *(rdi_1 + 0x78) = zmm2_1
            *(rdi_1 + 0x88) = zmm7
            *(rdi_1 + 0x98) = var_228
            *(rdi_1 + 0xa8) = zmm2_1
            *(rdi_1 + 0xb8) = zmm7
            *(rdi_1 + 0xc8) = var_68_1.o
else
    uint64_t* rax_22 = sub_14081d830(0xd90, rdx_4, 1, 0)
    uint64_t* rbx_2 = rax_22
    
    if (rax_22 == 0)
        rbx_2 = nullptr
    else
        rax_22[0xe] = 0
        rax_22[0xf] = 0
        rax_22[0x1e] = 0
        rax_22[0x1f] = 0
        sub_141386310(&rax_22[0x20])
        rbx_2[0x1b0] = 0
    
    memset(rbx_2, 0, 0xd90)
    var_298 = *arg9
    int16_t var_290
    var_290.d = arg9[1].d
    int64_t* rax_25 = arg8
    var_290.d = r12
    var_2b8 = var_298.o
    var_298 = *rax_25
    var_298.o = var_298.o
    sub_14139cab0(rbx_2, &var_f8, &var_178, &var_298, &var_2b8)
    var_2b8.q = data_143dbb180
    var_2b8 = zx.o(0)
    var_2b8.d = *(rax_21 + 0x44)
    var_2b8:4.d = rax_21[9].d
    int64_t rax_30 = var_278.q
    var_2b8:8.d = rax_30.d
    var_2b8:0xc.d = (rax_30 u>> 0x20).d
    int64_t rax_32 = var_278:8.q
    var_2a8.d = rax_32.d
    var_2a8:4.d = (rax_32 u>> 0x20).d
    int32_t* rax_34 = sub_141455b70(&var_248, &var_2b8)
    var_298 = rax_21
    int16_t var_290_1 = 0
    rbx_2[0x1a2] = *rax_34
    rbx_2[0x1a3] = *(rax_34 + 8)
    rbx_2[0x1a4] = *(rax_34 + 0x10)
    rbx_2[0x1a5] = *(rax_34 + 0x18)
    rbx_2[0x1a6].d = rax_34[8]
    *(rbx_2 + 0xd34) = rax_34[9]
    rbx_2[0x1a7].d = rax_34[0xa]
    *(rbx_2 + 0xd3c) = rax_34[0xb]
    rbx_2[0x1a8] = *(rax_34 + 0x30)
    rbx_2[0x1a9] = *(rax_34 + 0x38)
    rbx_2[0x1aa] = *(rax_34 + 0x40)
    rbx_2[0x1ab] = *(rax_34 + 0x48)
    rbx_2[0x1ac] = *(rax_34 + 0x50)
    rbx_2[0x1ad] = *(rax_34 + 0x58)
    rbx_2[0x1ae] = *(rax_34 + 0x60)
    rbx_2[0x1af] = *(rax_34 + 0x68)
    void*** rax_37
    int512_t zmm6_2
    rax_37, zmm6_2 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)
    
    if (rax_37 != 0)
        int128_t zmm0_4 = var_298.o
        rax_37[1] = rax_21[1]
        *rax_37 = &data_142f285c0
        rax_37[2] = 0
        *(rax_37 + 0x18) = zmm0_4
    
    rbx_2[0x1b0] = rax_37
    char rcx_18 = sub_1419a2ec0(*(arg3 + 0x5150), &var_2b8, &data_143ec49b0, 
        (zx.d(r15.b) + arg5.d) * 0x21 + arg7.d)
    zmm6_2.o = zx.o(0)
    zmm7 = var_2b8
    int32_t temp0
    int32_t temp1_1
    temp0:temp1_1 = sx.q(rdi[4] - rdi[2] + 7)
    var_298.d = (temp1_1 + (temp0 & 7)) s>> 3
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi[5] - rdi[3] + 7)
    var_298:4.d = (temp3_1 + (temp2_1 & 7)) s>> 3
    var_278 = sub_14139dd60(rcx_18)
    sub_141998c50(zmm7.q, &data_143ec6c80, rbx_2)
    int64_t var_1a8
    var_1a8.d = 1
    void*** var_1b0_1 = var_298
    void*** rax_52
    char rcx_20
    rax_52, rcx_20 = sub_14081d830(0x60, *(arg2 + 8), 1, 0)
    rdi_1 = rax_52
    
    if (rax_52 == 0)
        rdi_1 = nullptr
    else
        var_278.q = rbx_2
        sub_14139dd60(rcx_20)
        var_278:8.q = &data_143ec6cb0
        var_2b8 = var_278
        sub_141992bd0(rdi_1, &arg8, &var_2b8, 2)
        *rdi_1 = &data_142f6e290
        *(rdi_1 + 0x38) = rbx_2.o
        *(rdi_1 + 0x48) = zmm7
        rdi_1[0xb] = var_1a8

sub_1419968d0(arg2, rdi_1)
*arg1 = rax_21.o
arg1[1].q = zmm6_1:8.q
return arg1
