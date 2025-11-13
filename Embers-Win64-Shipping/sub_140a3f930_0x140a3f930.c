// 函数: sub_140a3f930
// 地址: 0x140a3f930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x68)

if (rbx == 0)
    return 

int64_t* rcx = *(rbx + 0x20)

if (rcx == 0 || (*(*rcx + 0x18))(rcx, rbx) == 0)
    return 

*(rbx + 0x10) -= 1
int64_t* rcx_1 = *(rbx + 0x18)

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

*(rbx + 0x20) = 0
int64_t* rcx_2 = *(arg1 + 0x68)

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2, 1)

*(arg1 + 0x68) = 0
sub_140a536a0(arg1)
