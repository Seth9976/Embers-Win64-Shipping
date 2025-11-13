// 函数: sub_142283310
// 地址: 0x142283310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t* rax_2 = std::_Get_future_error_what((*U"1111")[3])
int64_t rcx_1 = *(arg6 + 0x38)
void* rdx = arg6 + 0xa8
int64_t rcx_2 = *(arg6 + 0x1c0)
int32_t i = 0
int64_t rcx_3 = *(arg6 + 0x1f8)
int64_t var_78
int64_t* rcx_4 = &var_78
int64_t var_80
__builtin_memset(&var_80, 0, 0x30)

do
    i += 6
    rcx_4[-1] = *(rdx - 0x38)
    rcx_4 = &rcx_4[6]
    int64_t rax_4 = *rdx
    rdx += 0x150
    rcx_4[-6] = rax_4
    rcx_4[-5] = *(rdx - 0x118)
    rcx_4[-4] = *(rdx - 0xe0)
    rcx_4[-3] = *(rdx - 0xa8)
    rcx_4[-2] = *(rdx - 0x70)
while (i u< 6)

int64_t* rdi_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rdi_2[9]

if (rax_9 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x50)
    rdi_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rdi_2[9]

*(arg1 + 0x30) = rax_9
*rdi_2 = rcx_1
rdi_2[1] = rcx_2
rdi_2[2] = rcx_3
rdi_2[3] = var_80
rdi_2[4] = var_78
__builtin_memset(&rdi_2[5], 0, 0x20)
void*** rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_15 = &rcx_8[6]

if (rax_15 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_15 = &rcx_8[6]

*(arg1 + 0x30) = rax_15
void**** rax_16 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_16 = rcx_8
*(arg1 + 8) = &rcx_8[1]
rcx_8[1] = 0
rcx_8[5] = 0
*rcx_8 = &data_142da7798
rcx_8[2].d = 9
rcx_8[3] = rdi_2
rcx_8[4].d = 2
*(rcx_8 + 0x24) = 3
int32_t r9
r9.b = *(arg5 + 0x1b8) != 0
uint128_t var_148
sub_1419a2ec0(rax_2, &var_148, &data_143f52aa0, r9)
uint128_t zmm0 = var_148
int32_t r15_1 = arg4
int32_t var_124 = arg3
int64_t var_120 = *(arg5 + 0x30)
int64_t var_118 = *(arg5 + 0x1b8)
int64_t var_110 = *(arg5 + 0x1f0)
int64_t rax_22 = *(arg6 + 0x38)
void* rax_23 = *(arg6 + 0x1c0)
int32_t var_168 = r15_1
int32_t var_164 = 1
int64_t rax_24 = *(arg6 + 0x1f8)
var_148 = zmm0
zmm0 = zx.o(var_168.q)
int32_t var_128 = arg2
var_168.q = zmm0.q
int32_t var_160 = 1
sub_142283fb0(arg1, &var_148, &var_128, &var_168)
int64_t rcx_14 = rax_22
int64_t* rdi_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t var_b8 = rcx_14
void* rax_27 = &rdi_7[3]

if (rax_27 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_14 = var_b8
    rdi_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_27 = &rdi_7[3]

*(arg1 + 0x30) = rax_27
*rdi_7 = rcx_14
rdi_7[1] = rax_23
rdi_7[2] = rax_24
void*** rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_30 = &rcx_18[6]

if (rax_30 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_30 = &rcx_18[6]

*(arg1 + 0x30) = rax_30
void* r12_1 = arg6 + 0x70
void**** rax_31 = *(arg1 + 8)
int32_t i_1 = 0
*(arg1 + 0x14) += 1
*rax_31 = rcx_18
*(arg1 + 8) = &rcx_18[1]
rcx_18[1] = 0
rcx_18[3] = rdi_7
int64_t* rdi_10 = arg5 - arg6 - 8
*rcx_18 = &data_142da7798
var_168.q = rdi_10
rcx_18[2].d = 3
rcx_18[4].d = 0
*(rcx_18 + 0x24) = 1
rcx_18[5] = 0

do
    sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[3]), &var_b8, &data_143f52ba0, 0)
    uint128_t zmm1_1 = var_b8.o
    var_128 = arg2
    int32_t var_124_1 = arg3
    void* rdi_11 = nullptr
    int64_t var_120_1 = *(rdi_10 + r12_1)
    int64_t rax_37 = *r12_1
    void* rax_38 = zmm1_1.q
    int32_t var_dc_1 = 1
    int64_t zmm0_1 = r15_1.q
    var_148 = zmm1_1
    
    if (rax_38 != 0)
        int64_t rdx_4 = sx.q(*(rax_38 + 0x10c))
        int64_t* r14_2 = *(rax_23 + 0x10)
        int64_t* rdi_12 = r14_2[3]
        
        if (rdi_12[rdx_4] == 0)
            sub_1419ccf30(r14_2, rdx_4.d)
            rdi_12 = r14_2[3]
        
        rdi_11 = rdi_12[rdx_4]
    
    *(arg1 + 0x1b0) = rdi_11
    sub_14198aa60(rdi_11)
    void*** rcx_28 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_40 = &rcx_28[3]
    
    if (rax_40 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x20)
        rcx_28 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_40 = &rcx_28[3]
    
    *(arg1 + 0x30) = rax_40
    void**** rax_41 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_41 = rcx_28
    *(arg1 + 8) = &rcx_28[1]
    rcx_28[1] = 0
    *rcx_28 = &data_142dd5b40
    rcx_28[2] = rdi_11
    sub_142285340(arg1, &var_148, rdi_11, &var_128)
    void*** rcx_35 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_43 = &rcx_35[4]
    
    if (rax_43 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x28)
        rcx_35 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_43 = &rcx_35[4]
    
    *(arg1 + 0x30) = rax_43
    int64_t* rax_44 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_44 = rcx_35
    *(arg1 + 8) = &rcx_35[1]
    rcx_35[1] = 0
    *rcx_35 = &data_142ef57a8
    rcx_35[2].d = zmm0_1.d
    *(rcx_35 + 0x14) = zmm0_1:4.d
    rcx_35[3].d = 1
    sub_14116d320(arg1, &var_148, rdi_11)
    int64_t* rdi_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_40 = &rdi_15[1]
    
    if (rcx_40 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        rdi_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_40 = &rdi_15[1]
    
    *(arg1 + 0x30) = rcx_40
    *rdi_15 = rax_37
    void*** rcx_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_47 = &rcx_44[6]
    
    if (rax_47 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x38)
        rcx_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_47 = &rcx_44[6]
    
    r15_1 = arg4
    *(arg1 + 0x30) = rax_47
    i_1 += 1
    void**** rax_48 = *(arg1 + 8)
    r12_1 += 0x38
    *(arg1 + 0x14) += 1
    *rax_48 = rcx_44
    *(arg1 + 8) = &rcx_44[1]
    rcx_44[1] = 0
    rcx_44[3] = rdi_15
    rdi_10 = var_168.q
    *rcx_44 = &data_142da7798
    rcx_44[2].d = 1
    rcx_44[4].d = 0
    *(rcx_44 + 0x24) = 1
    rcx_44[5] = 0
while (i_1 u< 6)

int64_t result = sub_14228a190(arg6)
__security_check_cookie(rax_1 ^ &var_198)
return result
