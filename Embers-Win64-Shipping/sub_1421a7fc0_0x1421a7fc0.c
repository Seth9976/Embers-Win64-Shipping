// 函数: sub_1421a7fc0
// 地址: 0x1421a7fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r13 = arg5
int64_t rbx

if (0f f>= *(data_143f4dd68 + 4) || r13 != 0)
    rbx.b = 1
else
    rbx.b = 0

int32_t var_3c = *(arg4 + 0x1c)
int64_t var_48 = 0
int32_t var_40 = 0
sub_1405d0e10(arg2, arg3, arg1, arg4, 0)
int64_t* r9 = arg4 + 0x10

if (rbx.b == 0)
    r9 = &var_48

sub_1405d0e10(arg2, arg3, &arg1[3], r9, 0)
uint32_t count = zx.d(arg1[8])

if (count u>= 8)
    count = 8

if (count != 0)
    uint32_t rax_1 = zx.d(arg1[7])
    int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    arg5.d = zx.d(arg1[6])
    int64_t rax_3 = *arg3
    int64_t rax_5 = zx.q(count) + rbx_3
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, count + 0x10)
        rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_5 = zx.q(count) + rbx_3
    
    *(arg2 + 0x30) = rax_5
    memcpy(rbx_3, arg4 + 0x20, count)
    void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_6[6]
    
    if (rax_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_6[6]
    
    *(arg2 + 0x30) = rax_7
    void**** rax_8 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_8 = rcx_6
    *(arg2 + 8) = &rcx_6[1]
    rcx_6[1] = 0
    *rcx_6 = &data_142d549d8
    rcx_6[2] = rax_3
    rcx_6[4].d = arg5.d
    *(rcx_6 + 0x24) = rax_1
    rcx_6[3] = rbx_3
    rcx_6[5].d = count

int64_t rbx_8 = (zx.q(r13) ^ 1) << 3
sub_1405eb490(arg2, arg3, &arg1[9], arg4 + 0x28 + rbx_8, 0)
return sub_1405eb490(arg2, arg3, &arg1[0xc], arg4 + 0x2c + rbx_8, 0)
