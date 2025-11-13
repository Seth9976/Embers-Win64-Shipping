// 函数: png_destroy_read_struct
// 地址: 0x1403c4b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void* rbx_1 = *arg1

if (rbx_1 == 0)
    return 

*(rbx_1 + 0x420)
int64_t r15_1 = *(rbx_1 + 0x430)
void* const rbp_1
void* const rdi_1

if (arg2 == 0)
    rbp_1 = nullptr
    
    if (arg3 != 0)
        rdi_1 = *arg3
    else
        rdi_1 = nullptr
else
    rbp_1 = *arg2
    
    if (arg3 == 0)
        rdi_1 = nullptr
    else
        rdi_1 = *arg3

sub_1403c4c60(rbx_1, rbp_1, rdi_1)

if (rbp_1 != 0)
    png_free_data(rbx_1, rbp_1, 0x4000, 0xffffffff)
    sub_1403cc660(rbp_1, r15_1)
    *arg2 = 0

if (rdi_1 != 0)
    png_free_data(rbx_1, rdi_1, 0x4000, 0xffffffff)
    sub_1403cc660(rdi_1, r15_1)
    *arg3 = 0

sub_1403cc660(rbx_1, r15_1)
*arg1 = 0
