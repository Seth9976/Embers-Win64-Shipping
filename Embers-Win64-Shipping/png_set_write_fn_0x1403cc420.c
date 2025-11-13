// 函数: png_set_write_fn
// 地址: 0x1403cc420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

*(arg1 + 0x130) = arg2
void (* rax)(void* arg1, int64_t arg2, uint64_t arg3) = sub_1403cc3a0

if (arg3 != 0)
    rax = arg3

void (* rdx)(void* arg1) = sub_1403cc400

if (arg4 != 0)
    rdx = arg4

*(arg1 + 0x120) = rax
*(arg1 + 0x288) = rdx

if (*(arg1 + 0x128) != 0)
    *(arg1 + 0x128) = 0
    return png_warning(arg1, "Can't set both read_data_fn and write_data_fn in the same structure")
        __tailcall
