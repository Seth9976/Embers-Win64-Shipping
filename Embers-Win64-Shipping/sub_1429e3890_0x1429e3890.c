// 函数: sub_1429e3890
// 地址: 0x1429e3890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20 = arg5
__chkstk(0x6468)
void var_6498
int64_t rax_1 = __security_cookie ^ &var_6498
int64_t rbx = sx.q(arg6)
void var_6448
sub_1429e1780(arg1, arg2, &var_6448, rbx.d, arg3, arg4, rbx.d, arg7, arg8, arg9)
int64_t rdx = sx.q(arg13)
int64_t rcx = sx.q(arg14)
int64_t rax_6 = 4

if (rcx.d != 0)
    rax_6 = 6

int32_t var_6468
var_6468.q = (rcx << 4) + arg15
int32_t var_6478
var_6478.q = (rdx << 4) + arg15
int64_t result = (
    *(arg16 + (((zx.q((sbb.q(arg5, arg5, rdx.d != 0)).d) & 4) + rax_6 + sx.q(arg19)) << 3)))(
    &var_6448 + sx.q(arg10), rbx, arg11, sx.q(arg12), var_6478, arg20, var_6468, arg21, arg17, 
    arg18)
__security_check_cookie(rax_1 ^ &var_6498)
return result
