// 函数: sub_141e62770
// 地址: 0x141e62770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg3
char rax = sub_140b5b8a0(rbx.d, 0)
uint32_t r9_1
r9_1.b = (rbx u>> 0x20).d == 0
int32_t arg_18
char rax_2
int32_t rcx_2

if ((r9_1.b & rax) == 0)
    (*(*arg1 + 0x3f8))(arg1, &arg_18, rbx, r9_1)
    rax_2 = sub_140b5b8a0(arg_18, 0)
    rcx_2.b = arg4 == 0

if ((r9_1.b & rax) != 0 || (rcx_2.b & rax_2) != 0)
    __builtin_memset(arg2, 0, 0x18)
else
    void var_18
    int64_t* rax_3 = sub_140596d10(&var_18, &arg3[1])
    *arg2 = arg_18.q
    arg2[1] = 0
    arg2[1] = *rax_3
    *rax_3 = 0
    arg2[2].d = rax_3[1].d
    *(arg2 + 0x14) = *(rax_3 + 0xc)
    rax_3[1] = 0
    int64_t rcx_8 = *rax_3
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

return arg2
