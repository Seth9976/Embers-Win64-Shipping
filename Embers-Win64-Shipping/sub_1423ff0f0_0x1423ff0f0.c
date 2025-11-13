// 函数: sub_1423ff0f0
// 地址: 0x1423ff0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 5
void* rsi = arg1 + 0xc0

for (int64_t i = 5; i != 0; )
    int64_t rcx = *(rsi - 0x10)
    rsi -= 0x10
    i -= 1
    
    if (rcx != 0)
        sub_140a74f90(rcx)

void* rdi = arg1 + 0x70

do
    int64_t rcx_1 = *(rdi - 0x10)
    rdi -= 0x10
    i_1 -= 1
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
while (i_1 != 0)
