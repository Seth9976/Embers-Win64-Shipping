// 函数: sub_1418feaa0
// 地址: 0x1418feaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_30 = 0
int128_t var_58 = zx.o(0)
int32_t var_48 = 1
void*** rbx = nullptr
int128_t var_44 = data_143dbb1e0
int32_t var_34 = (1 << (data_1439c7a34).b) - 1
int64_t var_28 = 0
int32_t var_20 = 0
void*** rax_2 = j_sub_140a82f30(0x110)

if (rax_2 != 0)
    rbx = sub_1418f27f0(rax_2, *(arg1 + 0x58), *(arg3 + 0x3c), arg5, arg6, arg4, *(arg3 + 0x38), 
        *(arg3 + 0x40), &var_58)

int64_t var_78_1 = arg7
sub_1418f8620(*(*(arg1 + 0x58) + 0x1a50), arg3, rbx, arg4, arg5, arg6)
*arg2 = rbx

if (rbx != 0)
    rbx[1].d += 1

return arg2
