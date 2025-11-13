// 函数: sub_1417ab5a0
// 地址: 0x1417ab5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t i = 0
bool cond:0 = data_1439b8f50 s>= 3
int64_t var_48
__builtin_memset(&var_48, 0, 0x14)
int16_t rsi
rsi.b = cond:0
void*** rax = j_sub_140a82f30(0x180)
void*** r14

if (rax == 0)
    r14 = nullptr
else
    r14 = sub_1417a1180(rax)

do
    void arg_10
    int64_t* arg_18
    (*r14)[0xe](r14, &arg_10, (*(*arg1 + 8))(arg1, &arg_18, &var_48, zx.q(i), 1), zx.q(i))
    int64_t* rcx_3 = arg_18
    
    if (rcx_3 != 0)
        (**rcx_3)(rcx_3, 1)
    
    i += 1
while (i u< rsi + 1)

int64_t rcx_4 = var_48
*arg2 = r14

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return arg2
