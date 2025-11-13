// 函数: sub_1418a8d40
// 地址: 0x1418a8d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x20)
int64_t rbp = sx.q(*(arg1 + 0x50))
int32_t rax = (rbp + 1).d
*(arg1 + 0x50) = rax

if (rax s> *(arg1 + 0x54))
    sub_1405c4e40(arg1 + 0x48)

int64_t var_28 = *arg3
int64_t* rcx_4 = (rbp << 5) + *(arg1 + 0x48)
*arg3 = 0
int32_t var_20 = arg3[1].d
int32_t rax_3 = *(arg3 + 0xc)
arg3[1] = 0
int32_t var_1c = rax_3
int64_t rax_4 = *arg2
*arg2 = 0
int64_t var_18 = rax_4
int32_t var_10 = arg2[1].d
int32_t rax_6 = *(arg2 + 0xc)
arg2[1] = 0
int32_t var_c = rax_6
sub_14189cc20(rcx_4, &var_18, &var_28)

if (arg1 != -0x20)
    LeaveCriticalSection(arg1 + 0x20)

int64_t rcx_6 = *arg2

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return sub_14180c130(arg3) __tailcall
