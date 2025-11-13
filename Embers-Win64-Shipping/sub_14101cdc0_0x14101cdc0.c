// 函数: sub_14101cdc0
// 地址: 0x14101cdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439b4ad4 != 0 && arg1[0xe] != 0)
    sub_14101f400(*arg1 + 0x910, &arg1[0xd])
    int64_t var_60
    __builtin_memset(&var_60, 0, 0x40)
    *(arg1 + 0x68) = 0.o
    int64_t var_58
    *(arg1 + 0x78) = var_58.o
    int64_t var_48
    *(arg1 + 0x88) = var_48.o
    int64_t var_38
    *(arg1 + 0x98) = var_38.o
    int64_t var_28
    *(arg1 + 0xa8) = var_28.o
    int64_t var_18
    arg1[0x17] = var_18

int64_t* rdx_1 = arg1[0xc]

if (rdx_1 != 0)
    if (arg2 == 0)
        (*(*rdx_1 + 0x10))(rdx_1)
    else
        void* rax_1 = *arg1
        sub_14104ae50(*(rax_1 + 0x20) + 0x500, rdx_1, *(*(rax_1 + 0x38) + 0xe8))
    
    arg1[0xc] = 0

int64_t* rcx_5 = arg1[0x18]

if (rcx_5 == 0)
    return 

if (arg2 == 0)
    rcx_5[1].d -= 1
    
    if (rcx_5[1].d == 1 && rcx_5 != 0)
        (**rcx_5)(rcx_5, 1)
else
    sub_141049740(rcx_5)

arg1[0x18] = 0
