// 函数: sub_14137acc0
// 地址: 0x14137acc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
void* var_270 = arg4
arg4.b = 1
void var_178
sub_14108c030(&var_178, 4, arg3, arg4.b)
sub_1410e0180(arg1, &var_178)
int64_t rbx_2 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_2 = rbx_2 + 0x28

if (rax_2 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x2a)
    rbx_2 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_2 = rbx_2 + 0x28

wchar16 const* const rcx_3 = u"ClearVolumeTextures"
*(arg1 + 0x30) = rax_2
wchar16 const i

do
    i = *rcx_3
    *(rbx_2 - u"ClearVolumeTextures" + rcx_3) = i
    rcx_3 = &rcx_3[1]
while (i != 0)
void*** rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_6[0x27]

if (rax_3 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x140)
    rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_6[0x27]

*(arg1 + 0x30) = rax_3
void**** rax_4 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_4 = rcx_6
*(arg1 + 8) = &rcx_6[1]
sub_1405d11b0(rcx_6, &var_178, rbx_2)
*(arg1 + 0x1c4) = 1
sub_1405d19b0(arg1, &var_178)
char var_61
*(arg1 + 0x178) = var_61
*(arg1 + 0x179) = 0
*(arg1 + 0x1c4) = 1
int64_t var_1cc
__builtin_memset(&var_1cc, 0, 0x43)
int128_t var_228
__builtin_memset(&var_228, 0, 0x30)
int128_t var_1e0 = zx.o(0)
int16_t var_188 = 0
sub_140fdc870(arg1, &var_228)
int64_t var_1f0 = data_14395da18
int64_t var_1e8 = data_14395d9e8
int64_t var_1f8 = data_14395da00
int32_t rax_10 = data_1439b70ac
int32_t r14

if (rax_10 s>= 4)
    r14 = 0x800
    
    if (rax_10 s< 0x800)
        r14 = rax_10
else
    r14 = 4

int64_t var_288 = 0
int32_t var_280 = 0
int32_t var_27c = r14
int32_t var_274 = r14
int64_t* rax_11 = std::_Get_future_error_what((*U"1111")[sx.q(arg2)])
void* var_268
sub_1419a2ec0(rax_11, &var_268, &data_143f5e630, 0)
int128_t var_248
int128_t* rax_12 = sub_1419a2ec0(rax_11, &var_248, &data_143f5e530, 0)
int64_t* r15_1 = *(rax_12 + 8)
void* r13 = *rax_12
int64_t* var_298 = r15_1
void* var_258
sub_1419a2ec0(rax_11, &var_258, &data_143f12f80, 3)
void* rcx_16 = var_268
var_228.q = data_143a2fe60
int64_t rax_14 = 0

if (rcx_16 != 0)
    int64_t rdx_9 = sx.q(*(rcx_16 + 0x10c))
    void* var_260
    int64_t* rbx_6 = *(var_260 + 0x10)
    int64_t r15_2 = rdx_9 << 3
    int64_t rax_16 = rbx_6[3]
    
    if (*(r15_2 + rax_16) == 0)
        sub_1419ccf30(rbx_6, rdx_9.d)
        rax_16 = rbx_6[3]
    
    rax_14 = *(r15_2 + rax_16)
    r15_1 = var_298

var_228:8.q = rax_14
int64_t rax_17 = 0

if (r13 != 0)
    int64_t* rbx_7 = r15_1[2]
    int64_t rdx_10 = sx.q(*(r13 + 0x10c))
    int64_t rax_18 = rbx_7[3]
    int64_t r15_3 = rdx_10 << 3
    
    if (*(r15_3 + rax_18) == 0)
        sub_1419ccf30(rbx_7, rdx_10.d)
        rax_18 = rbx_7[3]
    
    rax_17 = *(r15_3 + rax_18)

void* r15_4 = var_258
int128_t var_208
var_208:8.q = rax_17
int64_t rax_19 = 0

if (r15_4 != 0)
    int64_t rdx_11 = sx.q(*(r15_4 + 0x10c))
    void* var_250
    int64_t* rbx_8 = *(var_250 + 0x10)
    int64_t* rcx_19 = rdx_11 << 3
    var_298 = rcx_19
    int64_t rax_21 = rbx_8[3]
    
    if (*(rcx_19 + rax_21) == 0)
        sub_1419ccf30(rbx_8, rdx_11.d)
        rax_21 = rbx_8[3]
        rcx_19 = var_298
    
    rax_19 = *(rcx_19 + rax_21)

var_208.q = rax_19
int32_t var_1d0 = 1
sub_1419870b0(arg1, &var_228, 2)
void* rcx_22 = var_268
var_298.d = r14
var_298:4.d = r14
var_298 = var_298
int32_t var_290 = r14
sub_1412f1e20(rcx_22, arg1, &var_288, &var_298)

if (r13 != 0)
    sub_14137f4a0(r13, arg1, var_280)

sub_1419ab500(r15_4, arg1, var_270, 4)
var_248 = var_288.o
int64_t var_238 = r14.q
sub_14243f510(arg1, &var_248)
sub_141096650(arg1)
int64_t* rbx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_22 = &rbx_11[4]

if (rax_22 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rbx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_22 = &rbx_11[4]

*(arg1 + 0x30) = rax_22
*rbx_11 = *arg3
rbx_11[1] = arg3[1]
rbx_11[2] = arg3[2]
rbx_11[3] = arg3[3]
void*** rcx_30 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_27 = &rcx_30[5]

if (rax_27 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_30 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_27 = &rcx_30[5]

*(arg1 + 0x30) = rax_27
void**** rax_28 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_28 = rcx_30
*(arg1 + 8) = &rcx_30[1]
rcx_30[1] = 0
*rcx_30 = &data_142d549c8
rcx_30[2].d = 4
rcx_30[3] = rbx_11
rcx_30[4].d = 0
void var_70
int64_t result = sub_1405d1550(&var_70, 0)
__security_check_cookie(rax_1 ^ &var_2b8)
return result
