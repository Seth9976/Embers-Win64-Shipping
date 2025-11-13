// 函数: sub_141451b50
// 地址: 0x141451b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_17c = 2
int32_t var_180 = 0x209
int32_t var_188 = 0x10
int32_t var_184 = sub_141455800() + 1
void*** rax_2 = sub_14081d830(0x48, arg1[1], 1, 0)
void*** r15 = rax_2

if (rax_2 == 0)
    r15 = nullptr
else
    int128_t zmm0_1 = var_188.o
    r15[2] = 0
    r15[1] = u"ShaderPrintSymbolBuffer"
    r15[3].b = 0
    *(r15 + 0x1c) = 0
    r15[4] = 0
    r15[5].w = 0x200
    *r15 = &data_142f285d0
    *(r15 + 0x30) = zmm0_1
    r15[8] = 0

int64_t* rdx_1 = arg1[1]
var_180.q = 0x309
var_188 = 4
int32_t var_184_1 = 4
void*** rax_3 = sub_14081d830(0x48, rdx_1, 1, 0)
void*** r12 = rax_3

if (rax_3 == 0)
    r12 = nullptr
else
    int128_t zmm0_2 = var_188.o
    r12[2] = 0
    r12[1] = u"ShaderPrintIndirectDispatchArgs"
    r12[3].b = 0
    *(r12 + 0x1c) = 0
    r12[4] = 0
    r12[5].w = 0x200
    *r12 = &data_142f285d0
    *(r12 + 0x30) = zmm0_2
    r12[8] = 0

int64_t* rdx_2 = arg1[1]
var_180.q = 0x309
var_188 = 4
int32_t var_184_2 = 5
void*** rax_4 = sub_14081d830(0x48, rdx_2, 1, 0)
void*** var_198 = rax_4

if (rax_4 == 0)
    var_198 = nullptr
else
    int128_t zmm0_3 = var_188.o
    rax_4[2] = 0
    rax_4[1] = u"ShaderPrintIndirectDrawArgs"
    rax_4[3].b = 0
    *(rax_4 + 0x1c) = 0
    rax_4[4] = 0
    rax_4[5].w = 0x200
    *rax_4 = &data_142f285d0
    *(rax_4 + 0x30) = zmm0_3
    rax_4[8] = 0

sub_14144b500(&var_188, arg2)
void* rbx = *(arg2 + 0x51a0)
void* var_128 = rbx

if (rbx != 0)
    *(rbx + 8) += 1
    rbx = var_128

void* rdi_1 = *(data_143f5b298 + 0x720)
void* rdi_2

if (rdi_1 == 0)
    rdi_2 = data_1439b70c8
else
    rdi_2 = *(rdi_1 + 0x78)

void* rdi_4 = *(rdi_2 + 0x10)
void* var_108 = rdi_4

if (rdi_4 != 0)
    *(rdi_4 + 8) += 1
    rbx = var_128
    rdi_4 = var_108

int64_t* rax_7 = std::_Get_future_error_what((*U"1111")[sx.q(*(arg2 + 0x1548))])
int64_t* var_118 = rax_7
int128_t var_148
sub_1419a2ec0(rax_7, &var_148, &data_143ed6f70, 0)
int128_t zmm7 = var_148
int64_t* rax_8 = sub_14081d830(0x20, arg1[1], 1, 0)
int64_t* r13_1 = rax_8

if (rax_8 == 0)
    r13_1 = nullptr
else
    __builtin_memset(rax_8, 0, 0x20)

void* rsi_1 = var_188.q
__builtin_memset(r13_1, 0, 0x20)
sub_1405d16e0(r13_1, rsi_1)
r13_1[1] = rbx
void*** var_1a8 = r15
int32_t var_1a0 = 0x1c
int16_t var_19c = 0
void*** rax_9 = sub_14081d830(0x28, arg1[1], 1, 0)

if (rax_9 == 0)
    rax_9 = nullptr
else
    int128_t zmm0_4 = var_1a8.o
    rax_9[1] = r15[1]
    rax_9[2] = 0
    *(rax_9 + 0x18) = zmm0_4
    *rax_9 = &data_142f285c0

r13_1[2] = rax_9
var_1a8 = r12
var_1a0 = 0x1c
int16_t var_19c_1 = 0
void*** rax_11
int64_t rcx_5
int512_t zmm6
rax_11, rcx_5, zmm6 = sub_14081d830(0x28, arg1[1], 1, 0)

if (rax_11 == 0)
    rax_11 = nullptr
else
    rcx_5 = r12[1]
    int128_t zmm0_5 = var_1a8.o
    rax_11[1] = rcx_5
    *rax_11 = &data_142f285c0
    rax_11[2] = 0
    *(rax_11 + 0x18) = zmm0_5

r13_1[3] = rax_11
zmm6.o = zx.o(0)
var_1a8.d = 1
var_1a8:4.d = 1
int128_t var_e8 = sub_141457620(rcx_5.b)
sub_141998c50(var_148.q, &data_143ed8640, r13_1)
void*** var_158 = var_1a8
int32_t var_150 = 1
void*** rax_13
char rcx_7
rax_13, rcx_7 = sub_14081d830(0x60, arg1[1], 1, 0)
var_1a8 = rax_13
void*** r13_2

if (rax_13 == 0)
    r13_2 = nullptr
else
    var_148.q = r13_1
    sub_141457620(rcx_7)
    r13_2 = var_1a8
    var_148:8.q = &data_143ed8670
    int128_t var_d8 = var_148
    void arg_10
    sub_141992bd0(r13_2, &arg_10, &var_d8, 2)
    *r13_2 = &data_142f86120
    *(r13_2 + 0x38) = r13_1.o
    *(r13_2 + 0x48) = zmm7
    r13_2[0xb] = var_150.q

sub_1419968d0(arg1, r13_2)
int128_t var_f8
sub_1419a2ec0(var_118, &var_f8, &data_143ed7070, 0)
int512_t zmm6_2
zmm6_2.o = var_f8
int64_t* rax_14 = sub_14081d830(0x20, arg1[1], 1, 0)
int64_t* r13_4 = rax_14

if (rax_14 == 0)
    r13_4 = nullptr
else
    __builtin_memset(rax_14, 0, 0x20)

__builtin_memset(r13_4, 0, 0x20)
sub_1405d16e0(r13_4, rsi_1)
r13_4[1] = rbx
var_1a8 = r15
var_1a0 = 0x1c
int16_t var_19c_2 = 0
void*** rax_15
int64_t rcx_12
rax_15, rcx_12 = sub_14081d830(0x28, arg1[1], 1, 0)

if (rax_15 == 0)
    rax_15 = nullptr
else
    rcx_12 = r15[1]
    int128_t zmm0_9 = var_1a8.o
    rax_15[1] = rcx_12
    *rax_15 = &data_142f285c0
    rax_15[2] = 0
    *(rax_15 + 0x18) = zmm0_9

r13_4[2] = rax_15
var_148.q = &var_1a8
var_148:8.q = &var_1a0
r13_4[3] = r12
var_1a8 = r12
int128_t zmm6_3 = sub_141457900(rcx_12.b)
int128_t var_c8 = var_148
sub_141998c50(var_f8.q, &data_143ed8750, r13_4)
void*** var_158_1 = r12
int32_t var_150_1 = 0
void*** rax_16
char rcx_14
rax_16, rcx_14 = sub_14081d830(0x60, arg1[1], 1, 0)
void*** rbx_2 = rax_16

if (rax_16 == 0)
    rbx_2 = nullptr
else
    var_f8.q = r13_4
    sub_141457900(rcx_14)
    var_f8:8.q = &data_143ed8780
    int128_t var_b8 = var_f8
    void arg_20
    sub_141992bd0(rbx_2, &arg_20, &var_b8, 2)
    *rbx_2 = &data_142f86130
    *(rbx_2 + 0x38) = r13_4.o
    *(rbx_2 + 0x48) = zmm6_3
    rbx_2[0xb] = var_150_1.q

sub_1419968d0(arg1, rbx_2)
int128_t var_138
sub_1419a2ec0(var_118, &var_138, &data_143ed7170, 0)
zmm7 = var_138
int64_t* rax_17 = sub_14081d830(0x20, arg1[1], 1, 0)
int64_t* rbx_3 = rax_17

if (rax_17 == 0)
    rbx_3 = nullptr
else
    __builtin_memset(rax_17, 0, 0x18)

__builtin_memset(rbx_3, 0, 0x20)
sub_1405d16e0(rbx_3, rsi_1)
bool cond:0 = (r15[7].d & 0x100) == 0
var_1a8 = r15
var_1a0.q = 1

if (not(cond:0))
    var_1a0 = 4
    var_19c_2.d = 0x1c

void*** rax_18 = sub_14081d830(0x28, arg1[1], 1, 0)

if (rax_18 == 0)
    rax_18 = nullptr
else
    int128_t zmm0_13 = var_1a8.o
    rax_18[1] = r15[1]
    rax_18[2] = 0
    *(rax_18 + 0x18) = zmm0_13
    *rax_18 = &data_142f285c0

rbx_3[1] = rax_18
int32_t var_190 = 0x1c
int16_t var_18c = 0
void*** rax_19
int64_t rcx_20
int512_t zmm6_4
rax_19, rcx_20, zmm6_4 = sub_14081d830(0x28, arg1[1], 1, 0)

if (rax_19 == 0)
    rax_19 = nullptr
else
    rcx_20 = var_198[1]
    rax_19[1] = rcx_20
    *rax_19 = &data_142f285c0
    rax_19[2] = 0
    *(rax_19 + 0x18) = var_198.o

rbx_3[2] = rax_19
zmm6_4.o = zx.o(0)
void*** var_198_1
var_198_1.d = 1
var_198_1:4.d = 1
int128_t var_a8 = sub_141457790(rcx_20.b)
sub_141998c50(var_138.q, &data_143ed8860, rbx_3)
int32_t var_150_2 = 1
void*** var_158_2 = var_198_1
void*** rax_20
char rcx_22
rax_20, rcx_22 = sub_14081d830(0x60, arg1[1], 1, 0)
void*** rbx_4

if (rax_20 == 0)
    rbx_4 = nullptr
else
    var_138.q = rbx_3
    sub_141457790(rcx_22)
    rbx_4 = rax_20
    var_138:8.q = &data_143ed8890
    int128_t var_98 = var_138
    void var_178
    sub_141992bd0(rbx_4, &var_178, &var_98, 2)
    *rbx_4 = &data_142f86140
    *(rbx_4 + 0x38) = rbx_3.o
    *(rbx_4 + 0x48) = zmm7
    rbx_4[0xb] = var_150_2.q

sub_1419968d0(arg1, rbx_4)
int128_t var_88
sub_1419a2ec0(var_118, &var_88, &data_143ed7270, 0)
int512_t zmm6_6
zmm6_6.o = var_88
int128_t var_78
sub_1419a2ec0(var_118, &var_78, &data_143ed7370, 0)
zmm7 = var_78
int128_t* rax_21 = sub_14081d830(0xb0, arg1[1], 1, 0)
int128_t* rbx_5 = rax_21

if (rax_21 == 0)
    rbx_5 = nullptr
else
    sub_14117af20(rax_21)
    __builtin_memset(&rbx_5[9], 0, 0x20)

memset(&rbx_5[1], 0, 0xa0)
var_190.w = 0
var_190:2.b = 0
var_18c.d = 0xffffffff
*rbx_5 = arg3.o
sub_1405d16e0(&rbx_5[9], rsi_1)
*(rbx_5 + 0x98) = rdi_4
var_190.q = 1

if ((r15[7].d & 0x100) != 0)
    int32_t var_190_1 = 4
    var_18c.d = 0x1c

void*** rax_23 = sub_14081d830(0x28, arg1[1], 1, 0)

if (rax_23 == 0)
    rax_23 = nullptr
else
    rax_23[1] = r15[1]
    *rax_23 = &data_142f285c0
    rax_23[2] = 0
    *(rax_23 + 0x18) = r15.o

rbx_5[0xa].q = rax_23
*(rbx_5 + 0xa8) = var_198
var_150_2.q = rbx_5
void*** rax_24
char rcx_31
rax_24, rcx_31 = sub_14081d830(0x60, arg1[1], 1, 0)
void*** rdi_5 = rax_24

if (rax_24 == 0)
    rdi_5 = nullptr
else
    var_138.q = rbx_5
    int128_t zmm6_7 = sub_141457a70(rcx_31)
    var_138:8.q = &data_143ed89a0
    var_118.o = var_138
    void var_177
    sub_141992bd0(rdi_5, &var_177, &var_118, 1)
    *(rdi_5 + 0x38) = zmm6_7
    *rdi_5 = &data_142f86090
    *(rdi_5 + 0x48) = zmm7
    rdi_5[0xb] = var_150_2.q

sub_1419968d0(arg1, rdi_5)
sub_1405d1550(&var_108)
sub_1405ec8a0(&var_128)
return sub_1405d1550(&var_188)
