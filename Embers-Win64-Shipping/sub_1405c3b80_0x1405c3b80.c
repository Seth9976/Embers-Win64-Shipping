// 函数: sub_1405c3b80
// 地址: 0x1405c3b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rsi = zx.d(*(arg1 + 0x2ac))
void* rcx

if (arg1[0x54].d != 1)
    rcx = arg1[0x62]

int64_t arg_8

if (arg1[0x54].d == 1 || rcx == 0)
    arg_8 = *(arg1 + 0x2a4)
else
    sub_1405be000(rcx, &arg_8)

int64_t* rax_2 = sub_1405be050(arg1)
int64_t rbx = arg_8
int64_t var_38 = *rax_2
int64_t* rcx_3 = rax_2[1]

if (rcx_3 != 0)
    *(rcx_3 + 0xc) += 1

void var_28
sub_140d3a3a0(&var_28, arg1)
int32_t var_20 = 2
int64_t var_1c = rbx
uint32_t var_14 = rsi
sub_1405b4df0(arg1, &var_38)
void* result = arg1[0x48]

if (result != 0)
    result = *(result + 0xb8)

if (rcx_3 != 0)
    int32_t temp0_1 = *(rcx_3 + 0xc)
    *(rcx_3 + 0xc) -= 1
    
    if (temp0_1 == 1)
        int64_t r8_1 = *rcx_3
        (*(r8_1 + 8))(rcx_3, 1, r8_1)

return result
