// 函数: sub_1428b93f0
// 地址: 0x1428b93f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int64_t var_20 = 0
int32_t var_28

if (sub_1428b9ad0(&var_20, &var_28, nullptr, arg2, arg5, arg3, arg6, arg7) == 0)
    return 0

uint64_t r8 = zx.q(var_28)
int64_t var_18 = var_20
int64_t result = arg1(arg4, &var_18, r8)

if (result == 0)
    int64_t* var_48
    var_48.d = 0x21
    sub_1428a5670((result + 9).d, (result + 0x67).d, (result + 0xd).d, "crypto\pem\pem_oth.c", 
        var_48.d)

sub_1428a6780(var_20)
return result
