// 函数: sub_14214a8b0
// 地址: 0x14214a8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax = *arg2
int64_t rbx = 0
int64_t var_28 = 0
int32_t var_20 = 0xffffffff
char var_1c = 2
var_28.o = *rax
int32_t rsi = rax[1].d
*arg2 = rax + 0x14
int64_t arg_10 = 0

if (var_28 == 0)
    return sub_1421368e0(arg1[1], rsi)

int64_t* rcx_1 = *arg1

if (rcx_1 != 0 && (*(*rcx_1 + 0x70))(rcx_1, &var_28, &arg_10, arg1) != 0)
    return arg_10

bool cond:0 = data_143de5480 == 0
int64_t rbp = data_143f4ca00
int64_t arg_18 = 0

if (not(cond:0))
    rbx.b = GetCurrentThreadId() != data_143de5470

int64_t* rcx_2 = arg1[1]

if (*(rbp + (rbx << 2)) == 1)
    int64_t* rax_8 = (*(*rcx_2 + 0x348))(rcx_2)
    
    if (rax_8 != 0 && (*(*rax_8 + 0x338))(rax_8, &var_28, &arg_18, 0) != 0)
        return arg_18
    
    rcx_2 = arg1[1]

return sub_1421368e0(rcx_2, rsi)
