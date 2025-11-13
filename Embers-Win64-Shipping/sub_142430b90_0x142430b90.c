// 函数: sub_142430b90
// 地址: 0x142430b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1 + 0x78
int64_t i_1 = 0xe
int64_t* rbx = arg1 + 8
int64_t i

do
    int64_t rcx = *rbx
    
    if (rcx != 0)
        sub_140a74f90(rcx)
        *rbx = 0
    
    *rdi = 0
    rbx = &rbx[1]
    rdi += 4
    i = i_1
    i_1 -= 1
while (i != 1)
