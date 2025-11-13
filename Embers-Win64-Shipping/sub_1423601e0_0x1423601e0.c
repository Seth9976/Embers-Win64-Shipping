// 函数: sub_1423601e0
// 地址: 0x1423601e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x298) s> 0 || sub_141e644e0() == 0 || sub_14236bfb0(arg1, nullptr) == 0)
    return 

void* rax_2 = **(*(arg1 + 0x2e8) + 0x10)
int32_t rsi_1 = *(rax_2 + 4)
int32_t rax_3 = sub_140bc7f20(rax_2 + 8)
int64_t arg_8 = 0
int32_t rdi_1 = rax_3
sub_140bc7fd0(rax_2 + 8, &arg_8, 1)
int64_t rcx_4 = arg_8
int64_t var_18 = rcx_4

if (rsi_1 s> 0)
    rdi_1 = rsi_1

int32_t var_10_1 = rdi_1

if (arg1 + 0x290 != &var_18)
    int64_t rcx_5 = *(arg1 + 0x290)
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int128_t zmm0_1 = var_18.o
    var_18 = 0
    int32_t var_10_2 = 0
    *(arg1 + 0x290) = zmm0_1
    var_18.o = var_18.o
    rcx_4 = var_18

if (rcx_4 != 0)
    return sub_140a74f90(rcx_4) __tailcall
