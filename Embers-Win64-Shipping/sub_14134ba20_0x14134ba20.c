// 函数: sub_14134ba20
// 地址: 0x14134ba20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm12
uint128_t var_98 = zmm12
void var_318
int64_t rax_1 = __security_cookie ^ &var_318
uint128_t zmm6 = *(arg4 + 0x20)
int32_t r14 = arg3[0x2a9].d
uint128_t zmm7 = zx.o(arg4[6])
int128_t* r12 = arg4
int32_t rsi = arg4[0x13].d
void* var_1c8 = &arg4[4]
int64_t* var_288 = nullptr
int64_t* var_1f8 = nullptr
void* var_250 = nullptr
int64_t* var_238 = arg4
uint128_t var_268 = zmm6
uint64_t var_258 = zmm7.q
int64_t* rax_4 = (*(*arg5 + 0x280))(arg5)
int64_t r8 = *rax_4
int64_t* rax_5 = (*(r8 + 0x48))(rax_4, zx.q(r14), r8)
int64_t* rbx = rax_5

if (rax_5 == 0)
    zmm6, zmm7 = sub_141356e10(sub_14210f630(4), r14, zx.q(rsi), &var_288, &var_1f8, &var_250)
    rbx = var_288
else
    int64_t rdx_1 = *rax_5
    
    if ((*(rdx_1 + 0x20))(rax_5, rdx_1) != 4)
        zmm6, zmm7 = sub_141356e10(sub_14210f630(4), r14, zx.q(rsi), &var_288, &var_1f8, &var_250)
        rbx = var_288
    else if (sub_1405948b0(rbx) == 0)
        zmm6, zmm7 = sub_141356e10(sub_14210f630(4), r14, zx.q(rsi), &var_288, &var_1f8, &var_250)
        rbx = var_288
    else
        if ((*(*rbx + 0x318))(rbx) == 0)
            (*(*rbx + 0x310))(rbx)
        
        var_250 = sub_1405948b0(rbx)
        var_288 = rbx
        var_1f8 = rax_4

int64_t r15 = data_14395d9e8
int64_t rsi_1 = 0
int64_t var_200 = r15
int64_t var_278 = 0
char rax_14 = (*(*rbx + 0x318))(rbx)
uint64_t r14_1 = zx.q(data_14401b1a0)
TEB* gsbase

if (rax_14 != 0 && *(data_143eba348 + 4) != 0)
    void* rsi_2 = *(gsbase->ThreadLocalStoragePointer + (r14_1 << 3))
    
    if (data_143ebe3a8 s> *(rsi_2 + 0x14))
        _Init_thread_header(&data_143ebe3a8)
        
        if (data_143ebe3a8 == 0xffffffff)
            int64_t* rcx_59 = data_143db18d0
            
            if (rcx_59 == 0)
                sub_140a53c40()
                rcx_59 = data_143db18d0
            
            int64_t r8_11
            r8_11.b = 1
            data_143ebe3a0 = (*(*rcx_59 + 0xb0))(rcx_59, u"r.CustomDepth", r8_11)
            _Init_thread_footer(&data_143ebe3a8)
    
    int64_t* rcx_9 = data_143ebe3a0
    
    if ((*(*rcx_9 + 0x90))(rcx_9) == 3)
        int64_t* rbx_1 = var_288
        var_278 = r12[0xa].q
        
        if (data_143ebe3f0 s> *(rsi_2 + 0x14))
            _Init_thread_header(&data_143ebe3f0)
            
            if (data_143ebe3f0 == 0xffffffff)
                data_143ebe3b0 = data_1439b6820
                data_143ebe3b8 = data_1439b6838
                data_143ebe3c0 = data_1439b6850
                data_143ebe3c8 = data_1439b6868
                data_143ebe3d0 = data_1439b6880
                data_143ebe3d8 = data_1439b6898
                data_143ebe3e0 = data_1439b68b0
                data_143ebe3e8 = data_1439b68c8
                _Init_thread_footer(&data_143ebe3f0)
        
        var_200 = (&data_143ebe3b0)[zx.q((*(*rbx_1 + 0x328))(rbx_1))]
    
    rsi_1 = var_278

int64_t* rcx_11 = var_288
int64_t rdi_1 = data_14395da00
int64_t rbx_2 = rdi_1
int64_t var_190 = rbx_2

if ((*(*rcx_11 + 0x310))(rcx_11) != 0 && *(data_143eba458 + 4) != 0)
    int64_t* rbx_3 = var_288
    
    if (data_143ebe430 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14_1 << 3))))
        _Init_thread_header(&data_143ebe430)
        
        if (data_143ebe430 == 0xffffffff)
            int64_t rax_119 = data_14395da00
            data_143ebe3f8 = rax_119
            data_143ebe400 = rax_119
            data_143ebe408 = data_1439b68e0
            data_143ebe410 = data_1439b57b8
            data_143ebe418 = data_1439b52f8
            data_143ebe420 = data_1439b68f8
            data_143ebe428 = data_1439b6910
            _Init_thread_footer(&data_143ebe430)
    
    rbx_2 = (&data_143ebe3f8)[sx.q((*(*rbx_3 + 0x1d8))(rbx_3))]
    var_190 = rbx_2

char var_2d7
int64_t* rdx_3
char r8_2

if (var_200 != r15 || rbx_2 != rdi_1)
    rdx_3 = arg3
    r8_2 = 1
    var_2d7 = 1
    r14_1.b = 1
else
    rdx_3 = arg3
    r8_2 = 0
    var_2d7 = 0
    
    if (***rdx_3 != rdx_3)
        r14_1.b = 1
    else
        r14_1.b = 0

char r11 = arg6

if (rsi_1 == 0 || data_1439c7a48 != 0 || *r12 == 0)
    if ((r8_2 == 0 || *(r12 + 0xa8) == 0) && (r11 == 0 || r8_2 == 0))
        r8_2 = 0
    else
        r8_2 = 1
else if (r12[1].d != *(r12 + 8) || *(r12 + 0x14) != *(r12 + 0xc)
        || (r8_2 != 0 && *(r12 + 0xa8) != 0) || (r11 != 0 && r8_2 != 0))
    r8_2 = 1
else
    r8_2 = 0

uint128_t zmm13 = *r12
char var_2d8 = r8_2
char rbx_4 = 1
uint128_t zmm14 = r12[1]
void*** r15_1 = zmm13.q
void*** var_248 = r15_1
uint128_t var_2a8 = zmm13
int32_t rsi_3 = var_2a8:8.d
uint128_t var_298 = zmm14
int32_t rdi_2 = var_298.d
int32_t var_2c8
uint128_t var_228
uint64_t var_218
uint128_t var_1e8
uint128_t var_1d8
uint128_t var_168
uint128_t var_158
uint128_t var_138
void*** rcx_19
int64_t r9_1
uint64_t r10
int64_t* r14_2

if ((r15_1 == 0 || (rdi_2 == rsi_3 && (var_298.q u>> 0x20).d == (var_2a8:8.q u>> 0x20).d))
        && (1 & (*(*(var_250 + 0x28) + 0x178) u>> 0xe).b) == 0 && r14_1.b != 0 && r8_2 == 0
        && *(r12 + 0xa9) != r8_2)
    rcx_19 = var_268.q
    r9_1 = var_268:8.q
    r15_1 = rcx_19
    r10 = var_258
    rsi_3 = var_268:8.d
    rdi_2 = var_258.d
    var_2a8:0xc.d = (r9_1 u>> 0x20).d
    var_2a8.q = rcx_19
    var_2a8:8.d = rsi_3
    zmm13 = var_2a8
    var_298:4.d = (r10 u>> 0x20).d
    var_248 = rcx_19
    var_298.d = rdi_2
    r14_2 = arg3
else
    r10 = var_258
    r9_1 = var_268:8.q
    
    if (r15_1 == 0)
    label_14134be45:
        void* rax_46 = var_268.q
        int32_t rcx_21 = *(r12 + 0x98)
        var_2c8 = 1
        var_158 = *(rax_46 + 0x40)
        uint128_t var_148_1 = *(rax_46 + 0x50)
        var_148_1:8.w = 1
        uint128_t var_128 = *(rax_46 + 0x70)
        var_138:8.w = 0
        var_138:4.d = ((*(rax_46 + 0x60)):4.d & 0xfffeffff) | 1
        int32_t rax_50 = var_148_1:0xc.d
        
        if (rcx_21 != 0)
            rax_50 = rcx_21
        
        var_128:8.b = 1
        var_148_1:0xc.d = rax_50
        var_158.d = data_14399f5e0:0xc.d
        var_138.d |= data_143ed3418
        var_168 = var_2c8.o
        rbx_4 = sub_14141f7a0(rdx_3)
        void*** rax_54
        rax_54, zmm6 = sub_141188e50(arg2, &var_168, u"PostProcessMaterial", 0)
        r9_1 = var_268:8.q
        r15_1 = rax_54
        r10 = var_258
        rsi_3 = var_268:8.d
        rdi_2 = var_258.d
        r8_2 = var_2d8
        r11 = arg6
        var_2a8:0xc.d = (r9_1 u>> 0x20).d
        var_298:4.d = (r10 u>> 0x20).d
        var_2a8.q = rax_54
        var_2a8:8.d = rsi_3
        zmm13 = var_2a8
        var_298.d = rdi_2
        var_298:8.b = rbx_4
        zmm14 = var_298
        var_248 = rax_54
    else if (rdi_2 != rsi_3)
        if (r8_2 != 0)
            goto label_14134be45
        
        rbx_4 = var_298:8.b
    else
        if (_mm_bsrli_si128(zmm14, 4).d == _mm_bsrli_si128(zmm13, 0xc).d || r8_2 != 0)
            goto label_14134be45
        
        rbx_4 = var_298:8.b
    
    if (r14_1.b != 0 || r8_2 != 0)
        r14_2 = arg3
        uint128_t* r9_2 = &var_1e8
        var_1e8 = zmm13
        var_1d8 = zmm14
        int128_t* r8_3 = &var_228
        var_228 = zmm6
        var_218 = zmm7.q
        
        if (r11 == 0)
            sub_141446eb0(arg2, r14_2, r8_3, r9_2)
        else
            sub_14135d470(arg2, r14_2, r8_3, r9_2)
        
        rcx_19 = var_268.q
        rbx_4 = 1
        r9_1 = var_268:8.q
        r10 = var_258
    else
        rcx_19 = var_268.q
        r14_2 = arg3

var_228.d = *(rcx_19 + 0x44)
int64_t* rcx_29 = var_288
var_228:4.d = rcx_19[9].d
var_228:8.d = var_268:8.d
var_218.d = var_258.d
int32_t var_188 = *(r15_1 + 0x44)
int32_t var_184 = r15_1[9].d
uint32_t var_17c = (var_2a8:8.q u>> 0x20).d
uint32_t r9_3 = (r9_1 u>> 0x20).d
uint32_t r10_1 = (r10 u>> 0x20).d
uint32_t var_174 = (var_298.q u>> 0x20).d
int32_t var_180 = rsi_3
var_228:0xc.d = r9_3
var_218:4.d = r10_1
int32_t rax_66 = (*(*rcx_29 + 0x320))(rcx_29)
uint64_t* rax_67 = sub_14081d830(0x3b0, arg2[1], 1, 0)
uint64_t* var_1a8 = rax_67
uint64_t* r15_2 = rax_67

if (rax_67 == 0)
    r15_2 = nullptr
    var_1a8 = nullptr
else
    r15_2[0x1c] = 0
    r15_2[0x1d] = 0
    r15_2[0x2c] = 0
    r15_2[0x2d] = 0
    r15_2[0x3c] = 0
    r15_2[0x3d] = 0
    r15_2[0x4c] = 0
    r15_2[0x4d] = 0
    __builtin_memset(&r15_2[0x5c], 0, 0x28)
    sub_14117af20(&r15_2[0x64])

memset(r15_2, 0, 0x3b0)
int32_t* rax_68 = sub_141455b70(&var_168, &var_188)
uint128_t var_2c4
var_2c4:4.b = rbx_4
var_2c4:5.w = 0
*r15_2 = *rax_68
r15_2[1] = *(rax_68 + 8)
r15_2[2] = *(rax_68 + 0x10)
r15_2[3] = *(rax_68 + 0x18)
r15_2[4].d = rax_68[8]
*(r15_2 + 0x24) = rax_68[9]
r15_2[5].d = rax_68[0xa]
*(r15_2 + 0x2c) = rax_68[0xb]
r15_2[6] = *(rax_68 + 0x30)
r15_2[7] = *(rax_68 + 0x38)
r15_2[8] = *(rax_68 + 0x40)
r15_2[9] = *(rax_68 + 0x48)
r15_2[0xa] = *(rax_68 + 0x50)
r15_2[0xb] = *(rax_68 + 0x58)
r15_2[0xc] = *(rax_68 + 0x60)
r15_2[0xd] = *(rax_68 + 0x68)
r15_2[0x5f] = var_278
r15_2[0x60] = data_14395fa10
var_2c8.q = var_248
r15_2[0x61].d = rax_66
var_2c4:8.d = 0xffffffff
*(r15_2 + 0x320) = var_2c8.o
r15_2[0x62].d = zx.d(arg6)
uint64_t rax_74 = sub_1422e5a30(r14_2)

if (rax_74.d u> 0x1e || not(test_bit(0x6562c800, rax_74.d)))
    if ((*(sx.q(rax_74.d) * 0x14 + &data_143f025fc) & 1) != 0)
        rax_74.b = 1
    else
        rax_74.b = 0
else
    rax_74.b = 1

if (var_278 == 0)
    if (rax_74.b != 0)
        int64_t* rcx_37 = var_288
        
        if ((*(*rcx_37 + 0x318))(rcx_37) != 0)
            r15_2[0x5f] = sub_1414cb880(&data_1439b70b0, arg2)
            int64_t* rcx_38 = var_288
            
            switch ((*(*rcx_38 + 0x328))(rcx_38))
                case 0
                    r15_2[0x61].d = 0xffffffff
                case 1, 3, 4
                    r15_2[0x61].d = 0
                case 2, 5
                    r15_2[0x61].d = 1
                case 7
                    r15_2[0x61].d = 0x100
else if (rax_74.b == 0)
    var_2c8.q = var_278
    var_2c4:4.w = 0x101
    var_2c4:6.b = rax_74.b
    var_2c4:8.d = 0x11
    *(r15_2 + 0x3a0) = var_2c8.o

r15_2[0x5e] = data_14395f4d0
void* rax_82 = sub_1414cb880(&data_1439b70b0, arg2)
int32_t r13_1 = 0
var_278.d = 0

if (rax_82 != 0)
    r13_1 = *(rax_82 + 0x44)
    var_278.d = *(rax_82 + 0x48)

void* rdi_4 = r15_2 + 0x9c
int64_t r14_3 = 1
var_2c8.q = data_14395fa10
void* rax_85 = var_1c8
int64_t r15_3 = var_2c8.q
int64_t i_1 = 5
int64_t i

do
    int128_t zmm1_2 = *rax_85
    void* rbx_5 = zmm1_2.q
    var_2c4:0xc.q = *(rax_85 + 0x10)
    var_2c8.o = zmm1_2
    int32_t rcx_42
    int32_t rdx_13
    
    if (rbx_5 == 0 || (zx.q(*(*(var_250 + 0x28) + 0x178)) & rol.q(r14_3, 0xe)) == 0)
        rdx_13 = 0
        int32_t var_2b4_1 = var_278.d
        rcx_42 = r13_1
        var_2c4:4.q = 0
        var_2c4:0xc.d = rcx_42
        rbx_5 = rax_82
    else
        rcx_42 = var_2c4:0xc.d
        rdx_13 = var_2c4:4.d
    
    var_1e8.q = data_143dbb180
    var_1e8 = zx.o(0)
    var_1e8.d = *(rbx_5 + 0x44)
    var_1e8:4.d = *(rbx_5 + 0x48)
    var_1e8:0xc.d = (var_2c4:4.q u>> 0x20).d
    var_1e8:8.d = rdx_13
    var_1d8.d = rcx_42
    var_1d8:4.d = (var_2c4:0xc.q u>> 0x20).d
    int32_t* rax_95 = sub_141455b70(&var_168, &var_1e8)
    r14_3 = rol.q(r14_3, 1)
    int128_t zmm10_1 = *(rax_95 + 8)
    int32_t r8_4 = rax_95[8]
    zmm12 = zx.o(*(rax_95 + 0x18))
    int32_t r9_4 = rax_95[9]
    int32_t rcx_44 = rax_95[0xa]
    int32_t rdx_15 = rax_95[0xb]
    int128_t zmm2_1 = *(rax_95 + 0x30)
    int128_t zmm4_1 = *(rax_95 + 0x40)
    int128_t zmm6_1 = *(rax_95 + 0x50)
    int128_t zmm8_1 = *(rax_95 + 0x60)
    rax_85 = var_1c8 + 0x18
    *(rdi_4 - 0x2c) = (_mm_unpacklo_ps(*rax_95, rax_95[1].q)).q
    *(rdi_4 - 0x24) = zmm10_1
    var_1c8 = rax_85
    *(rdi_4 - 0x14) = zmm12.q
    *(rdi_4 - 0xc) = r8_4
    *(rdi_4 - 8) = r9_4
    *(rdi_4 - 4) = rcx_44
    *rdi_4 = rdx_15
    *(rdi_4 + 4) = zmm2_1
    *(rdi_4 + 0x14) = zmm4_1
    *(rdi_4 + 0x24) = zmm6_1
    *(rdi_4 + 0x34) = zmm8_1
    *(rdi_4 + 0x44) = rbx_5
    *(rdi_4 + 0x4c) = r15_3
    rdi_4 -= -0x80
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t* r12_2 = var_238
int32_t rax_97

if (r12_2[0x15].b == 0 || var_2d8 != 0)
    rax_97 = 0
else
    rax_97 = 1

*(var_1a8 + 0x30c) = rax_97
void* rbx_6 = var_250
int32_t rsi_6
rsi_6.b = r14 s<= 1
void* rax_98 = sub_1419cec70(*(rbx_6 + 0x28), &data_143eba6a8, rsi_6)
void* rdi_5 = var_250
void* var_1a0 = rbx_6
void* rax_99
char rcx_47
rax_99, rcx_47 = sub_1419cec70(*(rdi_5 + 0x28), &data_143eba7b8, rsi_6)
void* var_1b0 = rdi_5
uint128_t zmm6_2 = sub_14135b140(rcx_47)
var_2c4:4.d = 2
var_2c8.q = &var_238
var_2c8.o = var_2c8.o
var_238 = rax_98
void* var_230 = rax_99
var_1c8.o = zmm6_2
sub_141998da0(&var_2c8, &data_143ebe260, var_1a8)
rsi_6.b = *(var_1a8 + 0x30c) != 0
rsi_6.b += 2
char rax_100 = sub_14212f0f0(var_288)

if (rax_100 != 0)
    sub_141390d20(&data_143ec4c60, *arg2, 1)

int64_t* rdx_17 = arg2[1]
int64_t var_110 = var_190
var_168 = var_188.o
int64_t* rax_103 = var_1f8
var_138.q = var_218
var_158:8.q = rdi_2.q
var_168.q = arg3
char var_100 = rsi_6.b
uint64_t* var_f0 = var_1a8
char var_e4 = rax_100
void*** rax_105
char rcx_51
rax_105, rcx_51 = sub_14081d830(0xc0, rdx_17, 1, 0)
void*** rbx_9 = rax_105

if (rax_105 == 0)
    rbx_9 = nullptr
else
    var_238 = var_1a8
    int128_t zmm6_3 = sub_14135b140(rcx_51)
    void* var_230_1 = &data_143ebe290
    var_238.o = var_238.o
    void var_280
    sub_141992bd0(rbx_9, &var_280, &var_238, 1)
    uint128_t zmm0_6 = var_168
    *rbx_9 = &data_142f64c10
    *(rbx_9 + 0x38) = zmm0_6
    *(rbx_9 + 0x48) = var_158
    *(rbx_9 + 0x58) = zmm6_3
    *(rbx_9 + 0x68) = rax_98.o
    *(rbx_9 + 0x78) = rax_99.o
    uint128_t var_118
    *(rbx_9 + 0x88) = var_118
    *(rbx_9 + 0x98) = var_200.o
    *(rbx_9 + 0xa8) = rax_103.o
    rbx_9[0x17] = rax_66.q

sub_1419968d0(arg2, rbx_9)

if (var_2d8 != 0 && (arg6 == 0 || var_2d7 == 0))
    void* r9_6 = *r12_2
    
    if (r12_2[0x15].b != 0)
        var_228 = zmm13
        int32_t rcx_55
        int32_t rdx_21
        
        if (r9_6 != 0)
            rcx_55 = r12_2[2].d
            rdx_21 = r12_2[1].d
        
        uint32_t rax_114
        
        if (r9_6 != 0 && (rcx_55 != rdx_21 || *(r12_2 + 0x14) != *(r12_2 + 0xc)))
            var_2a8:0xc.d = *(r12_2 + 0xc)
            rax_114 = *(r12_2 + 0x14)
            var_2a8:8.d = rdx_21
            var_298.d = rcx_55
        else
            r9_6 = var_268.q
            var_2a8:8.d = var_268:8.d
            var_2a8:0xc.d = r9_3
            var_298.d = var_258.d
            rax_114 = r10_1
        
        var_298:4.d = rax_114
        var_2a8.q = r9_6
        sub_141348cb0(arg2, arg3, var_228.q, r9_6)
    else
        int64_t rax_106 = data_143dbb180
        sub_141446b70(arg2, arg3, var_248, r9_6, rax_106, rax_106, rax_106)
        var_2a8.q = *r12_2
        var_2a8:8.d = r12_2[1].d
        var_2a8:0xc.d = *(r12_2 + 0xc)
        var_298.d = r12_2[2].d
        var_298:4.d = *(r12_2 + 0x14)
    
    zmm13 = var_2a8

*arg1 = zmm13
arg1[1].q = var_298.q
__security_check_cookie(rax_1 ^ &var_318)
return arg1
