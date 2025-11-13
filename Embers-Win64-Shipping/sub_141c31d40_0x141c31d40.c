// 函数: sub_141c31d40
// 地址: 0x141c31d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x228)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = *(arg1 + 0x218)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = *(arg1 + 0x208)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x1f8)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x1e8)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

void* rbx = *(arg1 + 0x1e0)

if (rbx != 0)
    sub_140a74f90(*(rbx + 0x10))
    *(rbx + 0x10) = 0
    sub_140a74f90(*(rbx + 0x18))
    *(rbx + 0x18) = 0
    j_sub_140a74f90(rbx)

void* rbx_1 = *(arg1 + 0x1d8)

if (rbx_1 != 0)
    sub_140a74f90(*(rbx_1 + 0x10))
    *(rbx_1 + 0x10) = 0
    sub_140a74f90(*(rbx_1 + 0x18))
    *(rbx_1 + 0x18) = 0
    j_sub_140a74f90(rbx_1)

void* rbx_2 = arg1 + 0x1c8
int64_t rcx_11 = *rbx_2

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t i_1 = 7

for (int64_t i = 7; i != 0; )
    int64_t rcx_12 = *(rbx_2 - 0x10)
    rbx_2 -= 0x10
    i -= 1
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)

void* rbx_3 = arg1 + 0x148
int64_t rcx_13 = *rbx_3

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

do
    int64_t rcx_14 = *(rbx_3 - 0x10)
    rbx_3 -= 0x10
    i_1 -= 1
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
while (i_1 != 0)

void* rbx_4 = *(arg1 + 0xd0)

if (rbx_4 != 0)
    sub_141c31f70(rbx_4)
    j_sub_140a74f90(rbx_4)

void* rbx_5 = *(arg1 + 0xc8)

if (rbx_5 != 0)
    sub_141c31f70(rbx_5)
    j_sub_140a74f90(rbx_5)

sub_141c32b30(arg1 + 0x60, *(arg1 + 0x60))
sub_141c32b30(arg1 + 0x58, *(arg1 + 0x58))
sub_141c32b30(arg1 + 0x50, *(arg1 + 0x50))
sub_141c32b30(arg1 + 0x48, *(arg1 + 0x48))
int64_t result = j_sub_140a74f90(*(arg1 + 0x40))
void* rdi_1 = *(arg1 + 0x38)

if (rdi_1 == 0)
    return result

void* rbx_6 = *(rdi_1 + 0x18)

if (rbx_6 != 0)
    sub_140a74f90(*(rbx_6 + 0x10))
    *(rbx_6 + 0x10) = 0
    sub_140a74f90(*(rbx_6 + 0x18))
    *(rbx_6 + 0x18) = 0
    j_sub_140a74f90(rbx_6)

return j_sub_140a74f90(rdi_1)
