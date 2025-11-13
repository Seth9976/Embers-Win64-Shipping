// 函数: sub_14119be50
// 地址: 0x14119be50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x1b0)
int64_t r8 = *arg4
void* var_48 = arg2
int64_t var_40 = rax
sub_14117ec10(&var_48, arg1 + 0x118, r8)
int32_t rdx_1
rdx_1.b = (*arg3 & 0xfffffffd) == 0
int32_t rcx_2 = rdx_1 | 2

if (*arg3 u> 1)
    rcx_2 = rdx_1

int32_t arg_10 = rcx_2

if (not(arg6[1] f<= *arg6))
    arg_10 = rcx_2 | 4

int32_t* arg_30
int32_t* r13 = arg_30
arg_30.d = r13[2] - *r13
arg_30:4.d = r13[3] - r13[1]
int64_t* rax_11 = sub_14115f940(
    sub_14115fa70(
        sub_14115f940(
            sub_14115f940(sub_14115f810(&var_48, arg1 + 0x120, &arg_10), arg1 + 0x126, arg5), 
            arg1 + 0x12c, arg5 + 8), 
        arg1 + 0x138, r13), 
    arg1 + 0x132, &arg_30)
return sub_14115fba0(rax_11, arg1 + 0x13e, arg6)
