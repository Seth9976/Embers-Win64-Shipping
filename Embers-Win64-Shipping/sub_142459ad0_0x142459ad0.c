// 函数: sub_142459ad0
// 地址: 0x142459ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 3
void* rdi = arg2 + 0x90

do
    int64_t rcx = *(rdi - 0x28)
    rdi -= 0x28
    i -= 1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
while (i != 0)
