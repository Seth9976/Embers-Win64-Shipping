// 函数: sub_1413a33d0
// 地址: 0x1413a33d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1 + 0x10
int64_t i_1 = 3
int64_t i

do
    int64_t* rcx = *rbx
    *rbx = 0
    
    if (rcx != 0)
        (*(*rcx + 0x38))(rcx)
    
    rbx = &rbx[1]
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t* rcx_1 = *(arg1 + 0x40)
*(arg1 + 0x40) = 0

if (rcx_1 != 0)
    (*(*rcx_1 + 0x38))(rcx_1)

int64_t* rcx_2 = *(arg1 + 0x70)
*(arg1 + 0x70) = 0

if (rcx_2 != 0)
    (*(*rcx_2 + 0x38))(rcx_2)
