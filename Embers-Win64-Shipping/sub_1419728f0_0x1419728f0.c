// 函数: sub_1419728f0
// 地址: 0x1419728f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = arg2
int64_t var_38 = arg1
int64_t rdx
int64_t var_30 = rdx
int64_t r8
int64_t var_28 = r8
int64_t var_10 = arg3
int64_t r9
int64_t var_20 = r9
sub_141971030(&data_1439c7ee0, &arg2, &var_38)
int64_t rax_2 = sx.q(arg2.d)

if (rax_2.d != 0xffffffff)
    int64_t rax_3 = rax_2 << 6
    
    if (rax_3 != neg.q(data_1439c7ee0))
        return *(rax_3 + data_1439c7ee0 + 0x30)

return 0
