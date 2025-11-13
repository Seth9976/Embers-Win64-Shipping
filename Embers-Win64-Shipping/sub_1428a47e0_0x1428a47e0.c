// 函数: sub_1428a47e0
// 地址: 0x1428a47e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

__chkstk(0x20)
char* rbx_1 = arg1 + 0x100
int64_t i_1 = 0x10
int64_t* rdi_1 = arg1 + 0x80
int64_t i

do
    if ((*rbx_1 & 1) != 0)
        sub_1428a6780(*rdi_1)
        *rdi_1 = 0
    
    *rbx_1 = 0
    rdi_1 = &rdi_1[1]
    rbx_1 = &rbx_1[4]
    i = i_1
    i_1 -= 1
while (i != 1)
sub_1428a6780(arg1)
