// 函数: sub_140aa9980
// 地址: 0x140aa9980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 != 5)
    return 

uint32_t rdx = zx.d(*(arg2 + 8))
int64_t* rdx_2

if (rdx == 0)
    rdx_2 = arg1 + 0x10
label_140aa99b5:
    int64_t var_18
    int64_t* rax_1 = sub_140aacb40(&var_18, rdx_2, arg3)
    int32_t rcx_1 = rax_1[1].d
    int32_t r8 = rcx_1 - 1
    
    if (rcx_1 == 0)
        r8 = 0
    
    sub_140a20ba0(arg4, *rax_1, r8)
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
else
    if (rdx == 1)
        rdx_2 = arg1 + 0x20
        goto label_140aa99b5
    
    if (rdx == 2)
        rdx_2 = arg1 + 0x30
        goto label_140aa99b5
