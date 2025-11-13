// 函数: png_set_read_fn
// 地址: 0x1403cc500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void (* rax)(void* arg1, int64_t arg2, uint64_t arg3) = sub_1403cc4b0

if (arg3 != 0)
    rax = arg3

*(arg1 + 0x130) = arg2
*(arg1 + 0x128) = rax

if (*(arg1 + 0x120) != 0)
    *(arg1 + 0x120) = 0
    png_warning(arg1, "Can't set both read_data_fn and write_data_fn in the same structure")

*(arg1 + 0x288) = 0
