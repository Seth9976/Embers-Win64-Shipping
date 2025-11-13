// 函数: sub_141c493f0
// 地址: 0x141c493f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x68) != 2)
    *(arg1 + 0x68) = 3

int64_t* rcx = *(arg1 + 0x100)
int64_t rdx
char rax

if (rcx != 0)
    rax, rdx = (*(*rcx + 0x10))(rcx)
int64_t* rcx_1 = *(arg1 + 0xf8)

if (rcx_1 != 0)
    rdx.b = 1
    (*(*rcx_1 + 0x10))(rcx_1, rdx)
    
    if (sub_140a54810() == 0)
        *(arg1 + 0x68) = 2
    
    int64_t* rcx_2 = *(arg1 + 0xf8)
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x20))(rcx_2, 1)
    
    *(arg1 + 0xf8) = 0

int64_t* rcx_3 = *(arg1 + 0x100)

if (rcx_3 != 0)
    sub_140a4fc50(rcx_3)
    *(arg1 + 0x100) = 0

int64_t* rcx_4 = *(arg1 + 0x138)

if (rcx_4 != 0)
    sub_140a4fc50(rcx_4)
    *(arg1 + 0x138) = 0

*(arg1 + 0x1dc) = 0
