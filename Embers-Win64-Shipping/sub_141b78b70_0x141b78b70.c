// 函数: sub_141b78b70
// 地址: 0x141b78b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
void arg_18
char arg_19
int32_t* rdx
int32_t rbx

if ((*(arg1 + 0x108) & 1) == 0)
    arg_19 = 0
    rdx = &arg_18
    rbx = 8
else
    rdx = &arg_8
    arg_8.b = *(arg1 + 0x109)
    rbx = 4
    arg_8:1.b = 1

sub_140f8dbe0(arg2, rdx)
int32_t rcx_2 = rbx & 0xfffffff7

if ((rbx.b & 8) == 0)
    rcx_2 = rbx

int32_t rdx_2 = rcx_2 & 0xfffffffb

if ((rcx_2.b & 4) == 0)
    rdx_2 = rcx_2

int32_t* rax_5
int32_t rbx_1

if ((*(arg1 + 0x108) & 2) == 0)
    arg_19 = 0
    rax_5 = &arg_18
    rbx_1 = 0x20
else
    rbx_1 = 0x10
    arg_8.b = *(arg1 + 0x10a)
    rax_5 = &arg_8
    arg_8:1.b = 1

int32_t rbx_2 = rbx_1 | rdx_2
sub_140f8d720(arg2, rax_5)
char var_54 = 1
int64_t var_50 = 0
int32_t rcx_5 = rbx_2 & 0xffffffdf
int32_t var_48 = 0

if ((rbx_2.b & 0x20) == 0)
    rcx_5 = rbx_2

int32_t rbx_4 = rcx_5 & 0xffffffef

if ((rcx_5.b & 0x10) == 0)
    rbx_4 = rcx_5

uint32_t var_58 = zx.d(*(arg1 + 0x10b))
sub_140f8c1f0(arg2, &var_58)
sub_140745b20(&var_50)
var_58:1.b = 1
var_58.b = *(arg1 + 0x10d) & 1
var_50 = 0
int32_t var_48_1 = 0
sub_140f8a1f0(arg2, &var_58)
sub_140745b20(&var_50)
int32_t zmm1 = *(arg1 + 0x110)
int32_t var_40
int64_t var_38
int32_t rax_10
int32_t* rdx_6

if (zmm1 f== 0f)
    var_58 = 0
    rdx_6 = &var_58
    char var_54_1 = 0
    rax_10 = 2
    var_50 = 0
    int32_t var_48_2 = 0
else
    var_40 = zmm1
    rdx_6 = &var_40
    char var_3c_1 = 1
    rax_10 = 1
    var_38 = 0
    int32_t var_30_1 = 0

int32_t rbx_5 = rbx_4 | rax_10
sub_140f8e050(arg2, rdx_6)

if ((rbx_5.b & 2) != 0)
    rbx_5 &= 0xfffffffd
    sub_140745b20(&var_50)

if ((rbx_5.b & 1) != 0)
    sub_140745b20(&var_38)

var_40.b = *(arg1 + 0x10c)
var_40:1.b = 1
var_38 = 0
int32_t var_30_2 = 0
sub_140f8e170(arg2, &var_40)
sub_140745b20(&var_38)
int128_t zmm0 = *(arg1 + 0x114)
var_30_2.b = 1
int64_t var_28 = 0
var_40.o = zmm0
int32_t var_20 = 0
sub_140f8c500(arg2, &var_40)
sub_140745b20(&var_28)
var_40 = *(arg1 + 0x124)
char var_3c_2 = 1
var_38 = 0
int32_t var_30_3 = 0
sub_140f8c3d0(arg2, &var_40)
return sub_140745b20(&var_38)
