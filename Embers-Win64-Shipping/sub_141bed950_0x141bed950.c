// 函数: sub_141bed950
// 地址: 0x141bed950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141beee70(arg1)
int32_t rcx
rcx.b = sub_140b5b8a0(*(arg1 + 0x114), 0) == 0
int32_t var_60
int64_t var_58
int128_t var_48
int32_t* rdx_3
int32_t rsi
int32_t r14
int32_t zmm0

if ((arg1[0x23].d != 0 | rcx.b) == 0)
label_141bed9ef:
    zmm0 = arg1[0x21].d
    rdx_3 = &var_60
    var_60 = zmm0
    char var_5c_1 = 1
    rsi = 0
    var_58 = 0
    int32_t var_50_1 = 0
    r14 = 2
else
    void* rax_1 = sub_140d3c6e0(arg1 + 0x10c)
    
    if (rax_1 == 0)
        goto label_141bed9ef
    
    if (sub_140d1fd20(rax_1, *(arg1 + 0x114)) == 0)
        goto label_141bed9ef
    
    int64_t arg_8 = *(arg1 + 0x114)
    int32_t* rax_5 = sub_141b70000(&var_48, sub_140d3c6e0(arg1 + 0x10c), &arg_8)
    rdx_3 = rax_5
    rsi = 1
    r14 = 0
    zmm0 = *rax_5

int32_t var_78 = zmm0
char var_74 = rdx_3[1].b
int64_t var_70 = 0
int32_t var_68 = 0
sub_140692f90(&var_70, &rdx_3[2])

if (r14 != 0)
    sub_140745b20(&var_58)

if (rsi != 0)
    sub_140745b20(&var_48:8)

sub_140f603e0(arg1[0x9d], zx.d(arg1[0x8d].b))
sub_140f602c0(arg1[0x9d], *(arg1 + 0x48e))
sub_140f605e0(arg1[0x9d], *(arg1 + 0x48f))
int64_t* rcx_11 = arg1[0x9d]
char var_38 = 0
var_48 = *(arg1 + 0x46c)
int128_t var_30 = zx.o(0)
sub_140f60fb0(rcx_11, &var_48)
int64_t* rcx_12 = arg1[0x9d]
char var_38_1 = 0
var_48 = *(arg1 + 0x47c)
int128_t var_30_1 = zx.o(0)
sub_140f61080(rcx_12, &var_48)
sub_140f617a0(arg1[0x9d], &var_78)
sub_140f600f0(arg1[0x9d], *(arg1 + 0x11c), arg1[0x24].d)
int64_t* rcx_15 = arg1[0x9d]
var_60.b = *(arg1 + 0x48d)
var_60:1.b = 1
var_58 = 0
int32_t var_50_2 = 0
sub_140f5fcf0(rcx_15, &var_60)
sub_140745b20(&var_58)
int64_t* rcx_17 = arg1[0x9d]
var_60.b = *(arg1 + 0x48c)
var_60:1.b = 1
var_58 = 0
int32_t var_50_3 = 0
sub_140f5e6c0(rcx_17, &var_60)
sub_140745b20(&var_58)
void* rcx_19 = arg1[0x9d]
var_60 = arg1[0x92].d
char var_5c_2 = 1
var_58 = 0
int32_t var_50_4 = 0
sub_140f61220(rcx_19, &var_60)
sub_140745b20(&var_58)
return sub_140745b20(&var_70)
