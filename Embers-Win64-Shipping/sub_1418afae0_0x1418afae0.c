// 函数: sub_1418afae0
// 地址: 0x1418afae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143efaee8)
char rbx = data_1439c7168
int64_t result = LeaveCriticalSection(&data_143efaee8)

if (rbx == 0)
    return result

int128_t zmm2
int128_t zmm3
zmm2, zmm3 = sub_14196d390(&data_143f02b98)
int32_t rbx_1 = data_143f029c8
sub_140b34200("FlushRHIThreadFlushResourcesTotal", rbx_1)

if (data_143f02bac u> 0)
    j_sub_14196ef60(&data_143f02b88, &data_143f02b98, zmm2, zmm3)

sub_14198b230()
sub_14198b3f0()
int64_t rdx_1
rdx_1.b = 1
sub_14198b7d0()
sub_141971910()
sub_1419712f0(0)
return sub_140b38680("FlushRHIThreadFlushResourcesTotal", rbx_1) __tailcall
