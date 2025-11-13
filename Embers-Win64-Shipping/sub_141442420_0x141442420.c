// 函数: sub_141442420
// 地址: 0x141442420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 0x12
int64_t* rsi = arg1 + 0x36a40

for (int64_t i = 0x12; i != 0; )
    rsi = &rsi[-0x102]
    i -= 1
    int64_t rcx = *rsi
    
    if (rcx != 0)
        sub_140a74f90(rcx)

void* rbx = arg1 + 0x2f920

do
    rbx -= 0x2810
    i_1 -= 1
    int64_t rcx_1 = *rbx
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
while (i_1 != 0)
