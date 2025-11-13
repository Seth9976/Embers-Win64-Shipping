// 函数: sub_1411411d0
// 地址: 0x1411411d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = *(arg2 + 0x1a0)
int64_t arg_8 = r13
sub_141080ac0(arg1, arg2, r13, *(arg3 + 0x10))
int32_t r8_1 = *(arg3 + 0x1548)

if (*(arg1 + 0x118) != 0xffff)
    int64_t arg_10
    int64_t* rcx = &arg_10
    
    if (r8_1 s< 3)
        sub_14137b7f0(rcx, arg2)
    else
        sub_14137baa0(rcx, arg2, 0xf, r8_1)
    
    sub_141083500(arg2, &arg_8, arg1 + 0x118, arg_10)
    sub_1405d1550(&arg_10)

int64_t* r15 = data_14395f4d0
int64_t* arg_30
int64_t r12 = *(*arg_30 + 0x10)

if (*(arg1 + 0x11c) u> 0)
    arg_30.d = zx.d(*(arg1 + 0x11a))
    void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_2 = &rcx_6[5]
    
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_2 = &rcx_6[5]
    
    *(arg2 + 0x30) = rax_2
    int64_t* rax_3 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_3 = rcx_6
    *(arg2 + 8) = &rcx_6[1]
    rcx_6[1] = 0
    *rcx_6 = &data_142d5a070
    rcx_6[3].d = arg_30.d
    rcx_6[2] = r13
    rcx_6[4] = r12

if (*(arg1 + 0x120) u> 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x11e))
    
    if ((*(*r15 + 8))(r15) == 0)
        void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_8 = &rcx_13[5]
        
        if (rax_8 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_8 = &rcx_13[5]
        
        *(arg2 + 0x30) = rax_8
        void**** rax_9 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_9 = rcx_13
        *(arg2 + 8) = &rcx_13[1]
        rcx_13[1] = 0
        *rcx_13 = &data_142d5a080
        rcx_13[2] = r13
        rcx_13[3].d = r12_1
        rcx_13[4] = r15

arg_30.d = arg5[1].d - *arg5
arg_30:4.d = *(arg5 + 0xc) - *(arg5 + 4)
int64_t var_68 = *arg5
int64_t* var_60 = arg_30
sub_1405d0e10(arg2, &arg_8, arg1 + 0x122, &var_68, 0)

if ((*(arg4 + 0x570) & 0x10) == 0 || 0f f>= *(arg4 + 0x3e4))
    arg_30.d = 0
    sub_1405eb490(arg2, &arg_8, arg1 + 0x128, &arg_30, 0)
    arg_30.d = 0
else
    sub_1405eb490(arg2, &arg_8, arg1 + 0x128, arg4 + 0x3e0, 0)
    arg_30.d = 1f / __maxss_xmmss_memss(*(arg4 + 0x3e4), 0x3727c5ac)

int32_t zmm6 = sub_1405eb490(arg2, &arg_8, arg1 + 0x12e, &arg_30, 0)
float zmm1_2

if ((*(arg4 + 0x570) & 0x10) != 0)
    zmm1_2 = *(arg4 + 0x3d8)

if ((*(arg4 + 0x570) & 0x10) == 0 || zmm1_2 f<= zmm6)
    arg_30.d = 0xbf800000
    sub_1405eb490(arg2, &arg_8, arg1 + 0x134, &arg_30, 0)
    arg_30.d = 0x3f800000
else
    arg_30.d = *(arg4 + 0x3d0) - zmm1_2
    sub_1405eb490(arg2, &arg_8, arg1 + 0x134, &arg_30, 0)
    int128_t zmm7
    zmm7.d = 1f f/ __maxss_xmmss_memss(*(arg4 + 0x3d8), 0x3727c5ac)
    arg_30.d = zmm7.d

return sub_1405eb490(arg2, &arg_8, arg1 + 0x13a, &arg_30, 0)
