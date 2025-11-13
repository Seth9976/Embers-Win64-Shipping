// 函数: sub_140bc2a50
// 地址: 0x140bc2a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

if (*(arg1 + 0x10) == 0xffffffff)
    *(arg1 + 0x10) = arg2

void* rbx_1 = arg1 + 0x88
int64_t rbp_1 = sx.q(*(rbx_1 + 0x10))
int32_t rax_1 = (rbp_1 + 1).d
*(rbx_1 + 0x10) = rax_1

if (rax_1 s> *(rbx_1 + 0x14))
    sub_140bcee10(rbx_1, rbp_1.d)

void* rax_2 = *(rbx_1 + 8)
int32_t arg_10 = arg2

if (rax_2 != 0)
    rbx_1 = rax_2

*(rbx_1 + (rbp_1 << 2)) = arg2
void* rdi_2 = *(arg1 + 0xc8)
EnterCriticalSection(rdi_2 + 0x1c8)
void arg_18
sub_14077a5e0(rdi_2 + 0x178, &arg_18, &arg_10, nullptr)

if (rdi_2 != -0x1c8)
    LeaveCriticalSection(rdi_2 + 0x1c8)
