// 函数: sub_141187a90
// 地址: 0x141187a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_1c = 2
__builtin_memset(arg1, 0, 0x20)
int32_t var_20 = 0x209
int32_t var_24 = 0x20
void*** rax = sub_14081d830(0x48, *(arg2 + 8), 1, 0)

if (rax == 0)
    rax = nullptr
else
    rax[2] = 0
    rax[1] = u"HairDebugShadingPoint"
    rax[3].b = 0
    *(rax + 0x1c) = 0
    rax[4] = 0
    rax[5].w = 0x200
    *rax = &data_142f285d0
    *(rax + 0x30) = 0x30.o
    rax[8] = 0

int64_t* rdx_1 = *(arg2 + 8)
*arg1 = rax
var_20.q = 0x209
int32_t var_24_1 = 1
void*** rax_1 = sub_14081d830(0x48, rdx_1, 1, 0)

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[2] = 0
    rax_1[1] = u"HairDebugShadingPointCounter"
    rax_1[3].b = 0
    *(rax_1 + 0x1c) = 0
    rax_1[4] = 0
    rax_1[5].w = 0x200
    *rax_1 = &data_142f285d0
    *(rax_1 + 0x30) = 4.o
    rax_1[8] = 0

int64_t* rdx_2 = *(arg2 + 8)
arg1[1] = rax_1
int32_t var_1c_1 = 2
int32_t var_20_1 = 0x209
int32_t var_24_2 = 0x8000
void*** rax_2 = sub_14081d830(0x48, rdx_2, 1, 0)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[2] = 0
    rax_2[1] = u"HairDebugSample"
    rax_2[3].b = 0
    *(rax_2 + 0x1c) = 0
    rax_2[4] = 0
    rax_2[5].w = 0x200
    *rax_2 = &data_142f285d0
    *(rax_2 + 0x30) = 0x20.o
    rax_2[8] = 0

int64_t* rdx_3 = *(arg2 + 8)
arg1[2] = rax_2
var_20_1.q = 0x209
int32_t var_24_3 = 1
void*** rax_3 = sub_14081d830(0x48, rdx_3, 1, 0)

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[2] = 0
    rax_3[1] = u"HairDebugSampleCounter"
    rax_3[3].b = 0
    *(rax_3 + 0x1c) = 0
    rax_3[4] = 0
    rax_3[5].w = 0x200
    *rax_3 = &data_142f285d0
    *(rax_3 + 0x30) = 4.o
    rax_3[8] = 0

void* rsi = arg1[1]
int64_t* rdx_4 = *(arg2 + 8)
arg1[3] = rax_3
int32_t var_28_3
var_28_3.q = rsi
int32_t var_20_2 = 0x1c
var_1c_1.w = 0
void*** rax_4 = sub_14081d830(0x28, rdx_4, 1, 0)
void*** rdx_5 = rax_4

if (rax_4 == 0)
    rdx_5 = nullptr
else
    rdx_5[1] = *(rsi + 8)
    rdx_5[2] = 0
    *(rdx_5 + 0x18) = 4
    *rdx_5 = &data_142f285c0

sub_1419965b0(arg2, rdx_5)
void* rsi_1 = arg1[3]
var_28_3.q = rsi_1
int32_t var_20_3 = 0x1c
var_1c_1.w = 0
void*** rax_6 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)
void*** rdx_7 = rax_6

if (rax_6 == 0)
    rdx_7 = nullptr
else
    rdx_7[1] = *(rsi_1 + 8)
    rdx_7[2] = 0
    *(rdx_7 + 0x18) = var_28_3.o
    *rdx_7 = &data_142f285c0

sub_1419965b0(arg2, rdx_7)
return arg1
