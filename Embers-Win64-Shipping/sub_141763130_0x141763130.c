// 函数: sub_141763130
// 地址: 0x141763130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = *(**arg1 + (sx.q(arg2) << 3))
void* rdx_1 = arg1[1]
char arg_10 = 0
int32_t zmm1 = *(rdx_1 + 0x74)
int64_t var_30 = *(rdx_1 + 0x58)
int32_t* rax_2 = arg1[2]
int32_t var_38 = *(rdx_1 + 0x70)
int32_t var_34 = zmm1
int32_t* rax_3 = arg1[3]
int32_t var_28 = *rax_2
int32_t var_24 = *rax_3
int32_t var_1c = *(rdx_1 + 0x68)
int64_t rdx_2 = *(r9 + 8)
int32_t var_18 = *(rdx_1 + 0x7c)
int32_t var_20 = *arg1[4]
int32_t rcx_2 = r9[4]
char* var_10 = &arg_10
int64_t rax_7 = sx.q(*r9)
float (* rcx_4)[0x4]

if (rcx_2 == 1)
    rcx_4 = rax_7 * 0xe0 + *(rdx_2 + 0x10)
else if (rcx_2 != 2)
    rcx_4 = rax_7 * 0x140 + *(rdx_2 + 0x30)
else
    rcx_4 = rax_7 * 0xe0 + *(rdx_2 + 0x20)

float result = rcx_4[0xd][0]

if (result != 1)
    if (result == 2)
        result = sub_14176f950(rcx_4, &var_28, &var_38)
        goto label_141763229
    
    if (result == 3)
        result = sub_14175cfb0(rcx_4, &var_28, &var_38)
        goto label_141763229
else
    result = sub_14175d130(rcx_4, &var_28, &var_38)
label_141763229:
    
    if (arg_10 != 0)
        char* rcx_8 = arg1[5]
        char temp0_1 = *rcx_8
        *rcx_8 = 1
        result.b = temp0_1

return result
