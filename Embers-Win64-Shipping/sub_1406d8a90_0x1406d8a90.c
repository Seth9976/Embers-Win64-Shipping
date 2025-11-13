// 函数: sub_1406d8a90
// 地址: 0x1406d8a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = zx.o(0)
var_38.q = 0
var_38:8.q = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int128_t var_48 = zx.o(0)
var_48.q = 0
var_48:8.q = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rsi
rsi.b = arg_18 != 0
char arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_5 = *(arg2 + 0x38)
char* rdx_8 = &arg_10

if (rax_5 != 0)
    rdx_8 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rcx_4
rcx_4.b = rax_6 != 0
*(arg2 + 0x20) = rcx_4 + rax_6
int64_t var_28
int64_t* result = sub_1406d1280(&var_28, &var_38, &var_48, rsi.b, rdx_8)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx_7 = *arg3
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_9 = var_28

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_48.q

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = var_38.q

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
