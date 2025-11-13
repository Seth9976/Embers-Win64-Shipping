// 函数: sub_141be9810
// 地址: 0x141be9810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x50) == 0)
    return 

void* rax_1 = *(arg1 + 0x28)
int128_t zmm1 = *(arg1 + 0x38)
int64_t* rcx = *(rax_1 + 0x1c8)
*(rax_1 + 0x120) = zmm1

if (rcx != 0)
    char var_28_1 = 1
    int64_t var_20 = 0
    int32_t var_18_1 = 0
    int128_t var_38 = zmm1
    sub_140f60400(rcx, &var_38)
    sub_140745b20(&var_20)

void* rax_2 = *(arg1 + 0x28)
char rdx_2 = *(arg1 + 0x48)
int64_t* rcx_2 = *(rax_2 + 0x1c8)
*(rax_2 + 0x130) = rdx_2

if (rcx_2 != 0)
    sub_140f5e570(rcx_2, zx.d(rdx_2))

void* rax = *(arg1 + 0x28)
char rdx_4 = *(arg1 + 0x49)
int64_t* rcx_3 = *(rax + 0x1c8)
*(rax + 0x131) = rdx_4

if (rcx_3 != 0)
    return sub_140f61770(rcx_3, zx.d(rdx_4)) __tailcall
