// 函数: sub_1413c4760
// 地址: 0x1413c4760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_2 = 2
void* rsi = arg1 + 0x30

for (int64_t i = 2; i != 0; )
    int64_t* rcx = *(rsi - 8)
    rsi -= 8
    i -= 1
    
    if (rcx != 0)
        (*(*rcx + 0x38))(rcx)

int64_t i_1 = 2
void* rsi_1 = arg1 + 0x20

do
    int64_t* rcx_1 = *(rsi_1 - 8)
    rsi_1 -= 8
    i_1 -= 1
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x38))(rcx_1)
while (i_1 != 0)

void* rbx = arg1 + 0x10

do
    int64_t* rcx_2 = *(rbx - 8)
    rbx -= 8
    i_2 -= 1
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x38))(rcx_2)
while (i_2 != 0)
