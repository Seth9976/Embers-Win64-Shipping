// 函数: sub_142677dd0
// 地址: 0x142677dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x4a8)

if (rbx == 0)
    return 

void* rcx = *(rbx + 8)

if (rcx != 0)
    sub_142609270(rcx)

*(rbx + 8) = 0
sub_142679620(rbx + 0x10, 0)
sub_142602500(rbx + 0x60)
*(rbx + 0x58) = 0
int64_t rcx_3 = *(rbx + 0x50)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_1426796a0(rbx + 0x10, 0)
int64_t rcx_5 = *(rbx + 0x30)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = *(rbx + 0x10)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

j_sub_140a74f90(rbx)
*(arg1 + 0x4a8) = 0
