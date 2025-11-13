// 函数: sub_1408c1970
// 地址: 0x1408c1970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x120) |= 1
*(arg1 + 0x121) = 1
void* rcx = *(arg1 + 0x128)

if (rcx == 0)
    return 

int64_t rdx_1 = *(arg1 + 0x108)

if (rdx_1 == 0)
    return 

sub_1408c0080(rcx, rdx_1)
void* rbx_1 = *(arg1 + 0x128)
void* rcx_1 = *(rbx_1 + 0x2b0)

if (rcx_1 == 0)
    return 

sub_1408c29c0(rcx_1)
*(rbx_1 + 0x2e) |= 4

if (sub_140db3510(rbx_1 + 0x18) != 0)
    sub_140dc03a0(rbx_1 + 0x18, *(rbx_1 + 0x2e))

*(rbx_1 + 0x2a8) = 1
