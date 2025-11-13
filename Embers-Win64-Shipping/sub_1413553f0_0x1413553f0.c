// 函数: sub_1413553f0
// 地址: 0x1413553f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x34) |= 0x10008
void*** result = sub_141188e50(arg1, arg2, arg3, 0)
int64_t* rax = sub_14081d830(0xa0, *(arg1 + 8), 1, 0)
void**** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rax = 0
    rax[1] = 0
    sub_14117af20(&rax[2])

memset(rbx, 0, 0xa0)
void*** result_1 = result
int16_t var_10 = 0
char var_e = 0
int32_t var_c = 0xffffffff
*(rbx + 0x10) = result_1.o
*rbx = sub_1410fccd0(arg1, &data_1439b70c8, u"External", 0)
rbx[1] = data_14395fa10
sub_1419a2ec0(*(arg4 + 0x5150), &result_1, &data_143ebd510, 0)
result_1.o = result_1.o
void arg_8
sub_141335330(arg1, &arg_8, arg4, arg5, arg5, &result_1, rbx, 0)
return result
