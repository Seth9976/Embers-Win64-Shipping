// 函数: sub_140f8f360
// 地址: 0x140f8f360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x48)
int32_t rdi_1 = *(rcx + 0x30) - 1
int32_t rax = sub_140f01890(rcx, rcx + 0x28, arg2, *(arg1 + 0x798) == 1)
int32_t rsi = 0
int32_t rax_1 = rax + arg3

if (rax + arg3 s< 0)
    rdi_1 = 0
else if (rax_1 s< rdi_1)
    rdi_1 = rax_1

void* rcx_1 = *(arg1 + 0x48)
float arg_8 = arg4.d f* *(arg1 + 0x78c)
int64_t* r8_2 = sx.q(rdi_1) * 0x58 + *(rcx + 0x28)
char arg_18 = 0
int128_t zmm6
zmm6.d = arg4.d f* *(r8_2 + 0x34)
int32_t arg_c = zmm6.d
void var_38
int32_t* result = sub_140f04560(rcx_1, &var_38, r8_2, &arg_8, &arg_18)
bool cond:1 = arg_18 != 2
int64_t* rdx_2 = arg5
int64_t rcx_2 = *result
*rdx_2 = rcx_2

if (not(cond:1))
    arg5.d = rcx_2.d
    uint32_t rcx_3 = (rcx_2 u>> 0x20).d
    
    if (rcx_3 - 1 s>= 0)
        rsi = rcx_3 - 1
    
    arg5:4.d = rsi
    *rdx_2 = arg5
    result = arg6
    
    if (&arg_18 != result)
        *result = 0x101

return result
