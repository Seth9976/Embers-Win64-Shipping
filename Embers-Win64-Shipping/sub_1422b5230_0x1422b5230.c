// 函数: sub_1422b5230
// 地址: 0x1422b5230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0xc0)

if (rbx != 0)
    sub_1422b5200(rbx)
    j_sub_140a74f90(rbx)
    *(arg1 + 0xc0) = 0

int64_t rcx_2 = *(arg1 + 0xb0)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*(arg1 + 0xa8) = 0
int64_t rcx_3 = *(arg1 + 0xa0)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*(arg1 + 0x68) = 0

if (*(arg1 + 0x6c) != 0)
    sub_140638cc0(arg1 + 0x60, 0)

*(arg1 + 0x90) = 0xffffffff
*(arg1 + 0x94) = 0
sub_14059a8e0(arg1 + 0x70, 0)
int64_t rcx_6 = *(arg1 + 0x80)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = *(arg1 + 0x60)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

*(arg1 + 0x58) = 0
int64_t rcx_8 = *(arg1 + 0x50)

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) != 0)
    sub_140638cc0(arg1 + 0x10, 0)

*(arg1 + 0x40) = 0xffffffff
*(arg1 + 0x44) = 0
void* result = sub_14059a8e0(arg1 + 0x20, 0)
int64_t rcx_11 = *(arg1 + 0x30)

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = *(arg1 + 0x10)

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
