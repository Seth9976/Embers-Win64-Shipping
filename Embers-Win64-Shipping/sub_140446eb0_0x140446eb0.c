// 函数: sub_140446eb0
// 地址: 0x140446eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143db9cd0, 9)
int32_t rax = data_143db9cd8 + 9
bool cond:0 = rax s<= data_143db9cdc
data_143db9cd8 = rax

if (not(cond:0))
    sub_140594770(&data_143db9cd0)

__builtin_wcscpy(data_143db9cd0, u"FMsgLogf")
int64_t rdx_1
rdx_1.b = 1
data_143db9cc8 = sub_140b44ed0(&data_143db9cd0, rdx_1.b, 0)
return atexit(sub_142cbe040) __tailcall
