// 函数: sub_140d95e80
// 地址: 0x140d95e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x790)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = *(arg1 + 0x770)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140d94b90(arg1 + 0x100)
sub_140d94ee0(arg1 + 0xf0)
int64_t rcx_4 = *(arg1 + 0xe0)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140596d80(arg1 + 0xc8)
sub_140d94e80(arg1 + 0xb8)
int64_t rcx_7 = *(arg1 + 0xa8)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = *(arg1 + 0x88)

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = *(arg1 + 0x78)

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = *(arg1 + 0x68)

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = *(arg1 + 0x58)

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = *(arg1 + 0x48)

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

void* result = sub_140b16b40(arg1 + 0x18, 0)
int64_t* rcx_14 = *(arg1 + 8)

if (rcx_14 != 0)
    int32_t temp0_1 = *(rcx_14 + 0xc)
    *(rcx_14 + 0xc) -= 1
    
    if (temp0_1 == 1)
        jump(*(*rcx_14 + 8))

return result
