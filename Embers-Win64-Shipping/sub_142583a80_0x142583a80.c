// 函数: sub_142583a80
// 地址: 0x142583a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 2
void* rdi = arg2 + 0x28

do
    int64_t rcx = *(rdi - 0x10)
    rdi -= 0x10
    i -= 1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
while (i != 0)
