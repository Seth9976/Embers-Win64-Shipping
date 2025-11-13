// 函数: sub_14149d2b0
// 地址: 0x14149d2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = *(arg2 + 0x1a0)
int64_t r9 = arg4[2]
int64_t arg_8 = r15
int128_t zmm6 = sub_141080ac0(arg1, arg2, r15, r9)
int32_t r8_1 = arg4[0x2a9].d
int32_t arg_10

if (*(arg1 + 0x118) != 0xffff)
    int32_t* rcx = &arg_10
    
    if (r8_1 s< 3)
        sub_14137b7f0(rcx, arg2)
    else
        sub_14137baa0(rcx, arg2, 0xf, r8_1)
    
    sub_141083500(arg2, &arg_8, arg1 + 0x118, arg_10.q)
    zmm6 = sub_1405d1550(&arg_10)

float zmm0[0x4] = sub_141472f80(arg1 + 0x11a, arg2, r15, arg5, zmm6)
int64_t* rbx_1 = *(*(arg5 + 0x5c0) + 0x20)
float zmm6_1[0x4] = *(rbx_1 + 0x20)
(*(*rbx_1 + 0x18))(rbx_1)
float var_68 = zmm6_1[0]
float zmm1 = 1f / zmm0[0]
int32_t rsi = 0
float temp0[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)
float var_5c = zmm1
float var_64 = temp0[0]
float var_60 = temp0_1[0]
sub_1405d0e10(arg2, &arg_8, arg1 + 0x13c, &var_68, 0)
void* rcx_7 = arg5 + 0x558
void* rax_2 = *(rcx_7 + 8)

if (rax_2 != 0)
    rcx_7 = rax_2

sub_1405eb490(arg2, &arg_8, arg1 + 0x142, rcx_7 + (sx.q(arg3) << 2), 0)
float arg_18 = *(rbx_1 + 0xdc) * 7f + 1f
float zmm0_2 = sub_1405eb490(arg2, &arg_8, arg1 + 0x148, &arg_18, 0)
(*(*rbx_1 + 0x18))(rbx_1)
var_68 = *(arg5 + 0x8f4)
int128_t zmm7
zmm7.d = 1f / (-1f / (zmm0_2 - 1f) * zmm0_2)
float var_60_1 = *(arg5 + 0x8fc)
float var_64_1 = *(arg5 + 0x8f8)
int32_t zmm6_3 = sub_1405d0f50(arg2, &arg_8, arg1 + 0x14e, &var_68, 0)
arg_10 = zmm7.d
int32_t arg_14 = zmm6_3
int32_t var_78 = 0
sub_1405d0cd0(arg2, &arg_8, arg1 + 0x154, &arg_10, 0)
sub_14139bef0(arg2)
void* rax_5 = sub_1422c6ca0(arg2)

if (rax_5 == 0)
    rax_5 = data_1439b70c8

arg_8 = *(rax_5 + 0x10)

if (*(arg1 + 0x15c) u> 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x15a))
    void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_17[5]
    
    if (rax_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_17[5]
    
    *(arg2 + 0x30) = rax_7
    void**** rax_8 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_8 = rcx_17
    *(arg2 + 8) = &rcx_17[1]
    rcx_17[1] = 0
    *rcx_17 = &data_142d5a070
    rcx_17[4] = arg_8
    rcx_17[2] = r15
    rcx_17[3].d = r12_1

int64_t* rcx_21 = *(*arg4 + 0x20)

if (rcx_21 != 0)
    (*(*rcx_21 + 0x248))(rcx_21)

int64_t* r12_2 = data_14395fa10

if (*(arg1 + 0x13a) u> 0)
    arg_18 = zx.d(*(arg1 + 0x138))
    
    if ((*(*r12_2 + 8))(r12_2) == 0)
        void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_16 = &rcx_25[5]
        
        if (rax_16 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_16 = &rcx_25[5]
        
        *(arg2 + 0x30) = rax_16
        void** rax_17 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_17 = rcx_25
        *(arg2 + 8) = &rcx_25[1]
        rcx_25[1] = 0
        *rcx_25 = &data_142d5a080
        rcx_25[3].d = arg_18
        rcx_25[2] = r15
        rcx_25[4] = r12_2

int64_t r11 = sx.q(*(arg1 + 0xe0))

if (r11 s> 0)
    int64_t rdx_8 = 0
    
    while (true)
        void* rcx_30 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_30 = (rcx_30 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_30 + (rdx_8 << 3)) == data_143e83070)
            break
        
        rsi += 1
        rdx_8 += 1
        
        if (rdx_8 s>= r11)
            goto label_14149d66d

void* rdx_9

if (r11 s<= 0 || rsi == 0xffffffff)
label_14149d66d:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_9 = &data_143ce8560
else
    void* rcx_34 = *(arg1 + 0xe8)
    
    if ((rcx_34.b & 1) != 0)
        rcx_34 = (rcx_34 s>> 1) + arg1 + 0xe8
    
    rdx_9 = rcx_34 + (sx.q(rsi) << 1)

int16_t result = *rdx_9
arg_18.w = result

if (result == 0xffff)
    return result

var_78.q = arg4
return sub_1412155b0(arg2, r15, &arg_18, *(arg5 + 0x5c0), var_78)
