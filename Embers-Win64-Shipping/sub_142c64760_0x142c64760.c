// 函数: sub_142c64760
// 地址: 0x142c64760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_10 = arg2
int64_t arg_18 = arg3
int64_t r9
int64_t arg_20 = r9
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
char var_128[0x110]
int512_t zmm2 = sub_142c565b0(&var_128, 0x100, arg2, &arg_18, arg4)
char i = &var_128
int64_t r9_2 = -1

do
    r9_2 += 1
while (var_128[r9_2] != 0)

char* rcx_1 = *(arg1 + 0x268)

if (rcx_1 != 0 && *(arg1 + 0x4b10) == 0)
    char (* rdx)[0x110] = &var_128
    
    do
        i = *rdx
        rdx = &(*rdx)[1]
        *rcx_1 = i
        rcx_1 = &rcx_1[1]
    while (i != 0)
    
    *(arg1 + 0x4b10) = 1

if (*(arg1 + 0x5f0) != 0)
    var_128[r9_2] = 0xa
    
    if (r9_2 + 1 u>= 0x102)
        __report_rangecheckfailure()
        noreturn
    
    var_128[r9_2 + 1] = 0
    i = sub_142c64600(arg1, 0, &var_128, r9_2 + 1, zmm2, nullptr)

__security_check_cookie(rax_1 ^ &var_158)
return i
