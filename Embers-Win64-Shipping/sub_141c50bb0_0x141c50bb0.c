// 函数: sub_141c50bb0
// 地址: 0x141c50bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 2
void* rsi = &arg1[0xa]

for (int64_t i = 2; i != 0; )
    int64_t rcx = *(rsi - 0x10)
    rsi -= 0x10
    i -= 1
    
    if (rcx != 0)
        sub_140a74f90(rcx)

void* rdi = &arg1[6]

do
    int64_t rcx_1 = *(rdi - 0x10)
    rdi -= 0x10
    i_1 -= 1
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
while (i_1 != 0)

int64_t rcx_2 = *arg1

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)
