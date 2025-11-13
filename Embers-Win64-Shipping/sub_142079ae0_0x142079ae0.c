// 函数: sub_142079ae0
// 地址: 0x142079ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 3
void* rdi = arg1 + 0x90

do
    int64_t rcx = *(rdi - 0x30)
    rdi -= 0x30
    i -= 1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
while (i != 0)
