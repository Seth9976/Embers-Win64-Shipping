// 函数: sub_1419c9c10
// 地址: 0x1419c9c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140b55c80(arg1)
int64_t rbx_1

if ((*arg2 & 1) == 0)
    rbx_1 = *arg2
else
    sub_1419c1a30()
    int64_t r9_1 = *rax
    rbx_1 = (*(r9_1 + 0x10))(rax, &data_143f21220, *arg2 u>> 1, r9_1)

int64_t rdx_3

if (rbx_1 == 0)
    rdx_3 = 0
else
    int64_t* rax_2 = sub_140b50ec0(arg1)
    int64_t r9_2 = *rax_2
    rdx_3 = (zx.q((*(r9_2 + 8))(rax_2, arg3, rbx_1, r9_2)) * 2) | 1

return sub_140b56590(arg1, rdx_3) __tailcall
