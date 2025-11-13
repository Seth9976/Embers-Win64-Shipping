// 函数: sub_14217eae0
// 地址: 0x14217eae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
(*(*arg2 + 0x168))(arg2, &arg_20)
int32_t rdx_1 = arg_20

if ((rdx_1.b & 1) != 0 && rdx_1 != 1)
    char rax_1
    int512_t zmm1_1
    rax_1, zmm1_1 = sub_14216e470(arg1, rdx_1)
    
    if (rax_1 == 0)
        void var_18
        int64_t* rax_2 = sub_140596d10(&var_18, arg5)
        sub_142166630(arg1, arg_20, nullptr, rax_2, zmm1_1, arg3)

int64_t rcx_4 = *arg5

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return 1
