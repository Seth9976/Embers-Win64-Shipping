// 函数: png_destroy_info_struct
// 地址: 0x1403be860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

void* rbx_1 = *arg2

if (rbx_1 == 0)
    return 

png_free_data(arg1, rbx_1, 0x7fff, 0xffffffff)

if (*(arg1 + 0x400) != 0)
    png_free(arg1, *(arg1 + 0x408))
    *(arg1 + 0x408) = 0
    *(arg1 + 0x400) = 0

memset(rbx_1, 0, 0x140)
*(arg1 + 0x420)
sub_1403cc660(rbx_1, *(arg1 + 0x430))
*arg2 = 0
