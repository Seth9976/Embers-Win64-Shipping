// 函数: sub_1419a4a10
// 地址: 0x1419a4a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int32_t var_188 = 1
char rcx = (data_1439c7a34).b
char var_170 = 0
int128_t var_198 = zx.o(0)
int32_t i_3 = arg2
int64_t* rcx_1 = data_143f0f180
int128_t var_184 = data_143dbb1e0
int32_t var_174 = (1 << rcx) - 1
int64_t var_168 = 0
int32_t var_160 = 0
void* var_268
(*(*rcx_1 + 0x560))(rcx_1, &var_268, &data_143f02b98, 0x780, 0x438, 2, 1, 1, 1, &var_198)
void* rax_5 = var_268
int128_t zmm1 = data_142d3f5a0
int32_t var_80 = 0
int32_t var_7c
__builtin_memset(&var_7c, 0xff, 0x14)
int128_t var_68 = zmm1
int64_t var_58
__builtin_memset(&var_58, 0, 0x1a)
void* var_158 = rax_5
int64_t var_150 = 0
int32_t var_148 = 0xffffffff
int16_t var_144 = 0x100
int64_t var_98
__builtin_memset(&var_98, 0, 0x11)
int32_t var_84 = 0
int16_t var_40
var_40:1.b = *(rax_5 + 0x38) u> 1
void var_140
memset(&var_140, 0, 0xa8)
sub_1410e0180(arg1, &var_158)
int64_t rbx_2 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_6 = rbx_2 + 0x18

if (rax_6 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x1a)
    rbx_2 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_6 = rbx_2 + 0x18

wchar16 const* const rcx_5 = u"LongGPUTask"
*(arg1 + 0x30) = rax_6
wchar16 const i

do
    i = *rcx_5
    *(rbx_2 - u"LongGPUTask" + rcx_5) = i
    rcx_5 = &rcx_5[1]
while (i != 0)
void*** rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_7 = &rcx_8[0x27]

if (rax_7 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x140)
    rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_7 = &rcx_8[0x27]

*(arg1 + 0x30) = rax_7
void**** rax_8 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_8 = rcx_8
*(arg1 + 8) = &rcx_8[1]
sub_1405d11b0(rcx_8, &var_158, rbx_2)
*(arg1 + 0x1c4) = 1
sub_1405d19b0(arg1, &var_158)
int64_t var_48
*(arg1 + 0x178) = var_48:7.b
*(arg1 + 0x179) = 0
*(arg1 + 0x1c4) = 1
int128_t var_240
__builtin_memset(&var_240, 0, 0x30)
int64_t var_1e4
__builtin_memset(&var_1e4, 0, 0x43)
int128_t var_1f8 = zx.o(0)
int16_t var_1a0 = 0
sub_140fdc870(arg1, &var_240)
int64_t var_210 = data_14395da00
int64_t var_208 = data_14395da18
int64_t var_200 = data_14395d9e8
int64_t* rbx_5 = *((sx.q((*U"1111")[sx.q(data_1439c7a08)]) << 3) + &data_143f13910)
void* var_260
sub_1419a2ec0(rbx_5, &var_260, &data_143f140e0, 0)
void* var_250
sub_1419a2ec0(rbx_5, &var_250, &data_143f10bd0, 0)
void* r13 = var_260
var_240.q = data_1439c9410
int64_t rax_17 = 0

if (r13 != 0)
    int64_t rdx_9 = sx.q(*(r13 + 0x10c))
    void* var_258
    int64_t* rbx_6 = *(var_258 + 0x10)
    int64_t rax_19 = rbx_6[3]
    
    if (*(rax_19 + (rdx_9 << 3)) == 0)
        sub_1419ccf30(rbx_6, rdx_9.d)
        rax_19 = rbx_6[3]
    
    rax_17 = *(rax_19 + (rdx_9 << 3))

var_240:8.q = rax_17
int64_t rcx_17 = 0
void* rax_20 = var_250

if (rax_20 != 0)
    int64_t rdx_10 = sx.q(*(rax_20 + 0x10c))
    void* var_248
    int64_t* rbx_7 = *(var_248 + 0x10)
    int64_t rax_22 = rbx_7[3]
    
    if (*(rax_22 + (rdx_10 << 3)) == 0)
        sub_1419ccf30(rbx_7, rdx_10.d)
        rax_22 = rbx_7[3]
    
    rcx_17 = *(rax_22 + (rdx_10 << 3))

int128_t var_220
var_220.q = rcx_17
int32_t var_1e8 = 1
sub_1419870b0(arg1, &var_240, 2)
sub_141105780(r13, arg1, (zx.o(0)).d)
int64_t rbx_8 = data_1439c91b0
void*** rcx_23 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_23 = &rcx_23[5]

if (rax_23 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_23 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_23 = &rcx_23[5]

*(arg1 + 0x30) = rax_23
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_23
*(arg1 + 8) = &rcx_23[1]
rcx_23[1] = 0
*rcx_23 = &data_142d56618
rcx_23[2].d = 0
rcx_23[3] = rbx_8
rcx_23[4].d = 0

if (i_3 == 0xffffffff)
    i_3 = data_143f13c9c

if (i_3 s> 0)
    uint64_t i_2 = zx.q(i_3)
    uint64_t i_1
    
    do
        void*** rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_26 = &rcx_29[4]
        
        if (rax_26 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x28)
            rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_26 = &rcx_29[4]
        
        *(arg1 + 0x30) = rax_26
        int64_t* rax_27 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_27 = rcx_29
        *(arg1 + 8) = &rcx_29[1]
        rcx_29[1] = 0
        *rcx_29 = &data_142d54988
        rcx_29[2].d = 0
        *(rcx_29 + 0x14) = 2
        rcx_29[3].d = 1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

sub_141096650(arg1)
int64_t var_50
sub_1405d1550(&var_50)
int64_t result = sub_1405d1550(&var_268)
__security_check_cookie(rax_1 ^ &var_2b8)
return result
