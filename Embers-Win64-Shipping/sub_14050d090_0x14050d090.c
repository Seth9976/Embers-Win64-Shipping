// 函数: sub_14050d090
// 地址: 0x14050d090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143db18d0
int64_t var_18 = 0
int64_t var_10 = 0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

int64_t* rax_1 = (**rcx)(rcx, u"httpReplay.MetaFilterOverride", &var_18, &data_142d40450, 0)
data_143f38830 = rax_1
data_143f38828 = &data_142d3ff18
int64_t rdx = *rax_1
int64_t rax_2 = (*(rdx + 0x68))(rax_1, rdx)
int64_t rcx_2 = var_18
data_143f38838 = rax_2

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return atexit(sub_142cf8b50) __tailcall
