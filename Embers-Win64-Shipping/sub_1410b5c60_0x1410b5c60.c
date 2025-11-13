// 函数: sub_1410b5c60
// 地址: 0x1410b5c60
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

int64_t* r14 = data_14395f4d0
int64_t rbp = *(*arg5 + 0x10)

if (*(arg1 + 0x11c) u> 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x11a))
    void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_6[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_6[5]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_6
    *(arg2 + 8) = &rcx_6[1]
    rcx_6[1] = 0
    rcx_6[3].d = r12_1
    *rcx_6 = &data_142d5a070
    rcx_6[2] = r13
    rcx_6[4] = rbp

if (*(arg1 + 0x120) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x11e))
    
    if ((*(*r14 + 8))(r14) == 0)
        void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_6 = &rcx_13[5]
        
        if (rax_6 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_6 = &rcx_13[5]
        
        *(arg2 + 0x30) = rax_6
        void**** rax_7 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_7 = rcx_13
        *(arg2 + 8) = &rcx_13[1]
        rcx_13[1] = 0
        *rcx_13 = &data_142d5a080
        rcx_13[2] = r13
        rcx_13[3].d = rbp_1
        rcx_13[4] = r14

arg5.d = arg4[1].d - *arg4
arg5:4.d = *(arg4 + 0xc) - *(arg4 + 4)
int64_t var_48 = *arg4
int64_t* var_40 = arg5
sub_1405d0e10(arg2, &arg_8, arg1 + 0x122, &var_48, 0)
char arg_30
int32_t zmm0

if (arg_30 == 0)
    zmm0 = (zx.o(0)).d
else
    zmm0 = 0x3f800000

arg_30.d = zmm0
return sub_1405eb490(arg2, &arg_8, arg1 + 0x128, &arg_30, 0)
