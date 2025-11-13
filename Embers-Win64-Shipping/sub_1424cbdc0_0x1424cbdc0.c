// 函数: sub_1424cbdc0
// 地址: 0x1424cbdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* rax_2 = *(arg2 + 0x38)
void* rsi = &var_38
int32_t arg_10 = (zx.o(0)).d

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_5 = *(arg2 + 0x20)
bool cond:1 = arg_8 != 0
int512_t zmm3
zmm3.o = arg_10
int64_t rcx_3
rcx_3.b = rax_5 != 0
*(arg2 + 0x20) = rcx_3 + rax_5
int64_t var_28
uint64_t result = (*(*arg1 + 0x948))(arg1, &var_28, rsi, zmm3, cond:1)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx_6 = *arg3
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_8 = var_28

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
