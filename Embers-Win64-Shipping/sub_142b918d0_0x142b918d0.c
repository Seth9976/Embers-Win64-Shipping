// 函数: sub_142b918d0
// 地址: 0x142b918d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void* r8_1 = *(arg1 + 8)
void* rdx_1 = nullptr
int64_t rdi_1 = *(*(r8_1 + 0x90) + 0x10)
void* rax = *(r8_1 + 0x78)

if (rax == 0)
    return 

while (rax != arg1)
    rdx_1 = rax
    rax = *(rax + 0x10)
    
    if (rax == 0)
        return 

int64_t rcx = *(rax + 0x10)

if (rdx_1 != 0)
    *(rdx_1 + 0x10) = rcx
else
    *(r8_1 + 0x78) = rcx

int64_t rax_2 = *(arg1 + 0x28)

if (rax_2 != 0)
    rax_2(arg1)

sub_142b98c50(arg1)
(*(rdi_1 + 0x10))(rdi_1, arg1)
