// 函数: sub_140a10220
// 地址: 0x140a10220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xb8) == 0)
    return 

void* rdx_1 = *(arg1 + 0x58)

if (rdx_1 != 0)
    *(arg1 + 0x58) = 0
    sub_140a0f670(arg1 + 0x58, rdx_1)

void** rdx_2 = *(arg1 + 0x60)

if (rdx_2 != 0)
    *(arg1 + 0x60) = 0
    sub_140a0f540(arg1 + 0x60, rdx_2)

*(arg1 + 0x70) = 0

if (*(arg1 + 0x74) != 0)
    sub_1405c5570(arg1 + 0x68, 0)

*(arg1 + 0x80) = 0

if (*(arg1 + 0x84) != 0)
    sub_1405c5570(arg1 + 0x78, 0)

int64_t* rcx_4 = *(arg1 + 0x88)

if (rcx_4 != 0)
    *(arg1 + 0x88) = 0
    (*(*rcx_4 + 0x10))(rcx_4, 1)

void* rdi_1 = *(arg1 + 0x90)

if (rdi_1 != 0)
    *(arg1 + 0x90) = 0
    sub_142a35fa0(rdi_1)
    j_sub_140a74f90(rdi_1)

*(arg1 + 0x98) = 0
*(arg1 + 0xa0) = 0
*(arg1 + 0xb0) = 0

if (*(arg1 + 0xb4) != 0)
    sub_1405947f0(arg1 + 0xa8, 0)

*(arg1 + 0xb8) = 0
*(arg1 + 0xc8) = 0
*(arg1 + 0xd0) = 0
*(arg1 + 0xbc) = -1
int64_t rdi_2 = sx.q(*(arg1 + 0x38))
int32_t rax_2 = (rdi_2 + 1).d
*(arg1 + 0x38) = rax_2

if (rax_2 s> *(arg1 + 0x3c))
    sub_1405a4cf0(arg1 + 0x30)

*(*(arg1 + 0x30) + (rdi_2 << 2)) = 9
int64_t rdi_3 = sx.q(*(arg1 + 0x38))
int32_t rax_4 = (rdi_3 + 1).d
*(arg1 + 0x38) = rax_4

if (rax_4 s> *(arg1 + 0x3c))
    sub_1405a4cf0(arg1 + 0x30)

*(*(arg1 + 0x30) + (rdi_3 << 2)) = 1
