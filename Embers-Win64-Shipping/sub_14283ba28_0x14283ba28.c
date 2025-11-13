// 函数: sub_14283ba28
// 地址: 0x14283ba28
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = arg1
sub_14283bac4(arg1)
int64_t i = 0
int64_t* rcx = arg2 + 0x1bc

do
    *(rbx + 0x18) = _mm_cvtps_pd(*rcx)
    
    if (*(arg2 + i + 0x2ac) != 0)
        *rbx = 2
    
    i += 1
    rcx += 4
    rbx = &rbx[0x20]
while (i s< 0x3c)

return 0
