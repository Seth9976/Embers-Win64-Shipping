// 函数: sub_14103ccd0
// 地址: 0x14103ccd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg7
void var_328
int64_t rax_1 = __security_cookie ^ &var_328
int32_t rbx = 0x10
int32_t rax_3 = *(arg1 + 0x2b0)

if (rax_3 s<= 0x10)
    rbx = rax_3

void* var_2e0 = arg8
int32_t var_2e8 = rax_3
void buffer2

if (rbx s> 0)
    memcpy(&buffer2, arg1 + 0x2b4, rbx * 0x18)
    rax_3 = var_2e8

if (rax_3 s> rbx)
    memset(&buffer2 + sx.q(rbx) * 0x18, 0, sx.q(rax_3 - rbx) * 0x18)

int64_t var_270 = data_14395da00
int64_t var_268 = data_14395da18
int64_t var_244
__builtin_memset(&var_244, 0, 0x43)
int16_t var_200 = 0
int128_t var_2a0
__builtin_memset(&var_2a0, 0, 0x30)
int128_t var_258 = zx.o(0)

if (arg4 != 0)
    sub_141018440(arg1, arg4 + 0xb0)

int32_t* rcx_4 = arg12
int64_t rax_9

if (*rcx_4 != 0 || rcx_4[1] != 0 || sx.q(rcx_4[2]) != *(arg10 + 0x10)
        || rcx_4[3] != *(arg10 + 0x18))
    rax_9.b = 0
else
    rax_9.b = 1

int64_t var_308
int128_t var_2c8
int32_t var_208

if ((*(arg10 + 0x30) & 2) == 0)
    if (rax_9.b != 0)
        if (*(arg1 + 0x135) != 0)
            sub_141031e00(*(arg1 + 0x138), 0, 0)
        
        int32_t rcx_17 = *(arg8 + 0x4c)
        void* rdx_8 = *(*(arg8 + 0x28) + 0x10)
        
        if (rcx_17 == 4)
            sub_141037220(arg1 + 0x1c0, rdx_8, 4, *(arg8 + 0x50))
        else if (rcx_17 == 5)
            sub_141036f20(arg1 + 0x1c0, rdx_8, 4, arg8 + 0x38)
        else if (rcx_17 == 6 || rcx_17 == 8)
            sub_141037220(arg1 + 0x1c0, rdx_8, 4, *(arg8 + 0x50))
        
        void* rbx_2 = *(arg1 + 0x1c8)
        int32_t rdx_9 = *(rbx_2 + 0x128)
        int64_t* rcx_22 = *(rbx_2 + 0x30)
        
        if (rdx_9 != 0)
            (*(*rcx_22 + 0xd0))(rcx_22, rdx_9, *(rbx_2 + 0x120))
            *(rbx_2 + 0x128) = 0
            rbx_2 = *(arg1 + 0x1c8)
        
        *(arg1 + 0x3b88) += 1
        var_2c8 = zx.o(0)
        (*(**(rbx_2 + 0x30) + 0x180))(zx.o(0), *(arg8 + 0x10), &var_2c8, 0, 0)
        void* rdx_11 = *(*(arg8 + 0x28) + 0x10)
        void* rax_22 = *(rdx_11 + 0x28)
        
        if (rax_22 == 0)
            if (data_1439b4ad4 != 0 && *(rdx_11 + 0x38) != 0)
                sub_141026da0(*(*(arg1 + 0x1c8) + 0x118), rdx_11 + 0x30)
        else if (data_1439b4ad4 != 0 && *(rax_22 + 0x30) != 0)
            sub_141026da0(*(*(arg1 + 0x1c8) + 0x118), rax_22 + 0x28)
    
    *(arg1 + 0x281) = 1
    void** rdx_13 = &var_2e0
    *(arg1 + 0xa18) = 0
    int32_t i_5 = 0
    __builtin_memset(arg1 + 0x9d8, 0, 0x38)
    int32_t i = 0
    *(arg1 + 0x9d0) = var_2e0
    int32_t i_3
    
    do
        i += 1
        bool cond:1_1 = *rdx_13 == 0
        rdx_13 = &rdx_13[1]
        i_3 = i
        
        if (cond:1_1)
            i_3 = i_5
        
        i_5 = i_3
    while (i u< 1)
    
    *(arg1 + 0xa10) = i_3
    int64_t var_260_1 = data_14395d9e8
    
    if (arg4 != 0)
        var_244:4.b = *(arg4 + 0x3c)
        int64_t var_238
        var_238.d = *(arg4 + 0x40)
        var_208.w = *(arg4 + 0x38)
else
    if (rax_9.b != 0)
        if (*(arg1 + 0x135) != 0)
            sub_141031e00(*(arg1 + 0x138), 0, 0)
        
        int32_t rcx_6 = *(arg9 + 0x4c)
        void* rdx_2 = *(*(arg9 + 0x28) + 0x10)
        
        if (rcx_6 == 3)
        label_14103ce92:
            
            if (*(rdx_2 + 0xc0) u<= 1)
                sub_141037220(arg1 + 0x1c0, rdx_2, 0x10, *(arg9 + 0x54))
            else
                sub_141036f20(arg1 + 0x1c0, rdx_2, 0x10, arg9 + 0x38)
        else if (rcx_6 == 4)
            sub_141036f20(arg1 + 0x1c0, rdx_2, 0x10, arg9 + 0x38)
        else
            if (rcx_6 == 5)
                goto label_14103ce92
            
            if (rcx_6 == 6)
                sub_141036f20(arg1 + 0x1c0, rdx_2, 0x10, arg9 + 0x38)
        
        void* rbx_1 = *(arg1 + 0x1c8)
        int32_t rdx_3 = *(rbx_1 + 0x128)
        int64_t* rcx_12 = *(rbx_1 + 0x30)
        
        if (rdx_3 != 0)
            (*(*rcx_12 + 0xd0))(rcx_12, rdx_3, *(rbx_1 + 0x120))
            *(rbx_1 + 0x128) = 0
            rbx_1 = *(arg1 + 0x1c8)
        
        *(arg1 + 0x3b88) += 1
        arg6 = zx.o(0)
        int64_t* rcx_13 = *(rbx_1 + 0x30)
        var_308.b = 0
        (*(*rcx_13 + 0x178))(rcx_13, *(arg9 + 0x10), 3, arg6, var_308, 0, 0)
        void* rdx_5 = *(*(arg9 + 0x28) + 0x10)
        void* rax_14 = *(rdx_5 + 0x28)
        
        if (rax_14 == 0)
            if (data_1439b4ad4 != 0 && *(rdx_5 + 0x38) != 0)
                sub_141026da0(*(*(arg1 + 0x1c8) + 0x118), rdx_5 + 0x30)
        else if (data_1439b4ad4 != 0 && *(rax_14 + 0x30) != 0)
            sub_141026da0(*(*(arg1 + 0x1c8) + 0x118), rax_14 + 0x28)
    
    var_2e0 = nullptr
    int64_t* rdx_7 = &var_2e0
    *(arg1 + 0x281) = 1
    int32_t i_4 = 0
    *(arg1 + 0xa18) = arg9
    int32_t i_1 = 0
    __builtin_memset(arg1 + 0x9d8, 0, 0x38)
    *(arg1 + 0x9d0) = var_2e0
    int32_t i_2
    
    do
        i_1 += 1
        bool cond:2_1 = *rdx_7 == 0
        rdx_7 = &rdx_7[1]
        i_2 = i_1
        
        if (cond:2_1)
            i_2 = i_4
        
        i_4 = i_2
    while (i_1 u< 1)
    
    *(arg1 + 0xa10) = i_2
    int64_t var_260 = data_1439b4ac0
    
    if (arg4 != 0)
        int64_t var_218
        var_218.d = *(arg4 + 0x3c)
        var_218:4.d = *(arg4 + 0x40)
        var_208.w = *(arg4 + 0x38)

if (*(arg2 + 0x14) u> 0)
    sub_14196fa90(&data_143f02b88, arg2, arg5, arg6)

void*** rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
arg7.d = float.s(zx.q(*(arg10 + 0x18)))
int128_t zmm7
zmm7.d = float.s(zx.q(*(arg10 + 0x10)))
void* rax_29 = &rcx_29[5]

if (rax_29 u> *(arg2 + 0x38))
    arg7 = sub_140b0e3d0(&arg2[0x30], 0x30)
    rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_29 = &rcx_29[5]

*(arg2 + 0x30) = rax_29
int64_t* rax_30 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_30 = rcx_29
*(arg2 + 8) = &rcx_29[1]
rcx_29[1] = 0
*rcx_29 = &data_142d54998
*(rcx_29 + 0x1c) = zmm7.d
rcx_29[4].d = arg7.d
rcx_29[2] = 0
rcx_29[3].d = 0
*(rcx_29 + 0x24) = 0x3f800000
int64_t* rax_33 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
sub_1419a2ec0(rax_33, &var_2e0, &data_143f1ed10, 0)
void* r12_1 = var_2e0
sub_1419a2ec0(rax_33, &var_2c8, &data_143f1ec00, 0)
void* r13_1 = var_2c8.q
int64_t rax_34 = 0

if (r12_1 != 0)
    int64_t rdx_17 = sx.q(*(r12_1 + 0x10c))
    void* var_2d8
    int64_t* rbx_4 = *(var_2d8 + 0x10)
    int64_t rax_36 = rbx_4[3]
    
    if (*(rax_36 + (rdx_17 << 3)) == 0)
        sub_1419ccf30(rbx_4, rdx_17.d)
        rax_36 = rbx_4[3]
    
    rax_34 = *(rax_36 + (rdx_17 << 3))

var_2a0:8.q = rax_34
int64_t rax_37 = 0

if (r13_1 != 0)
    int64_t rdx_18 = sx.q(*(r13_1 + 0x10c))
    int64_t* rbx_5 = *(var_2c8:8.q + 0x10)
    int64_t rax_39 = rbx_5[3]
    
    if (*(rax_39 + (rdx_18 << 3)) == 0)
        sub_1419ccf30(rbx_5, rdx_18.d)
        rax_39 = rbx_5[3]
    
    rax_37 = *(rax_39 + (rdx_18 << 3))

int128_t var_280
var_280.q = rax_37
var_2a0.q = data_1439c9210
int32_t var_248 = 1
sub_1419870b0(arg2, &var_2a0, 0)
void*** rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_41 = &rcx_41[4]

if (rax_41 u> *(arg2 + 0x38))
    sub_140b0e3d0(&arg2[0x30], 0x28)
    rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_41 = &rcx_41[4]

*(arg2 + 0x30) = rax_41
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_41
*(arg2 + 8) = &rcx_41[1]
rcx_41[1] = 0
*rcx_41 = &data_142ef5798
*(rcx_41 + 0x10) = data_14399f5c0
var_308.d = *(arg10 + 0x10)
int128_t zmm2
int128_t zmm3
zmm2, zmm3 = sub_1419d8470(r12_1, arg2, arg11, arg12, var_308.d, *(arg10 + 0x18))
sub_1419d8330(r13_1, arg2, arg13)

if (*(arg2 + 0x14) u> 0)
    zmm2, zmm3 = sub_14196fa90(&data_143f02b88, arg2, zmm2, zmm3)

uint64_t rbx_6 = zx.q(*(r13_1 + 0x118))
void* rdx_23 = *(arg3 + 0x158)
void* r8_9 = arg1 + (rbx_6 << 3)

if (*(r8_9 + 0x1068) != rdx_23)
    int64_t rax_48
    
    if (rdx_23 == 0)
        *(arg1 + 0x2280) &= not.q(1 << (rbx_6 u% 0x40))
        rax_48 = 0
    else
        *(arg1 + 0x283) = 0
        *(arg1 + 0x2280) |= 1 << (rbx_6 u% 0x40)
        rax_48 = *(rdx_23 + 0x48)
    
    *(arg1 + (rbx_6 << 3) + 0x1c68) = rax_48
    int64_t rax_51 = *(arg1 + 0x2280)
    int32_t rcx_48
    
    if (rax_51 != 0)
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_51.d)
        rcx_48 = 0
        
        if (rax_51 != 0)
            rcx_48 = temp0_2
    else
        rcx_48 = (rax_51 - 1).d
    
    *(arg1 + 0x22a4) = rcx_48
    sub_1405d16e0(r8_9 + 0x1068, rdx_23)
    *(arg1 + 0xa50) |= 1 << (rbx_6 u% 0x40)

void*** rcx_52 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_55 = &rcx_52[4]

if (rax_55 u> *(arg2 + 0x38))
    sub_140b0e3d0(&arg2[0x30], 0x28)
    rcx_52 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_55 = &rcx_52[4]

*(arg2 + 0x30) = rax_55
int64_t* rax_56 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_56 = rcx_52
*(arg2 + 8) = &rcx_52[1]
rcx_52[1] = 0
*rcx_52 = &data_142d54988
rcx_52[2].d = 0
*(rcx_52 + 0x14) = 2
rcx_52[3].d = 1

if (*(arg2 + 0x14) u> 0)
    sub_14196fa90(&data_143f02b88, arg2, zmm2, zmm3)

sub_141018440(arg1, arg3 + 0xb0)
sub_1410181b0(arg1)
uint64_t r14_1 = zx.q(var_2e8)
int32_t result

if (*(arg1 + 0x2b0) == r14_1.d)
    result = memcmp(arg1 + 0x2b4, &buffer2, r14_1 * 0x18)

if (*(arg1 + 0x2b0) != r14_1.d || result != 0)
    result = memcpy(arg1 + 0x2b4, &buffer2, (r14_1 * 0x18).d)
    *(arg1 + 0x2b0) = r14_1.d
    *(arg1 + 0x284) = 1

__security_check_cookie(rax_1 ^ &var_328)
int512_t zmm6
zmm6.o = var_58
return result
