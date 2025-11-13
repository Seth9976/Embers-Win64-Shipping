// 函数: sub_141887fe0
// 地址: 0x141887fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = nullptr
uint64_t count = zx.q(arg2)
char* var_18 = nullptr
int64_t var_10 = 0

if (arg2 s> 0)
    var_10.d = count.d
    sub_1405daba0(&var_18)
    rbx = var_18
else if (count.d s< 0 && arg2 != 0)
    var_10.d = count.d
    sub_1405dac10(&var_18)
    rbx = var_18

memset(rbx, zx.d(arg1), count)
int64_t result = sub_14183e320(rbx, count.d)

if (rbx == 0)
    return result

sub_140a74f90(rbx)
return result
