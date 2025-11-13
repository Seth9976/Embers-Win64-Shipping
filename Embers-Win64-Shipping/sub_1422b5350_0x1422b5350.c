// 函数: sub_1422b5350
// 地址: 0x1422b5350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x848)

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t rcx_1 = *(arg1 + 0x838)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t result = sub_1422b53f0(arg1 + 0x818)
void* rbx = *(arg1 + 0x800)

if (rbx != 0)
    sub_1422b50a0(rbx + 8)
    result = j_sub_140a74f90(rbx)

int64_t i = 0x40
void* rdi_1 = arg1 + 0x808

do
    int64_t rcx_5 = *(rdi_1 - 0x20)
    rdi_1 -= 0x20
    i -= 1
    
    if (rcx_5 != 0)
        result = sub_140a74f90(rcx_5)
while (i != 0)

return result
