// 函数: sub_141c79650
// 地址: 0x141c79650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int64_t rcx = *(arg1 + 0x120)

if (rcx != 0)
    sub_141c799d0(rcx)
    __builtin_memset(&arg1[0x48], 0, 0x11)

int64_t rcx_1 = *(arg1 + 0x108)

if (rcx_1 != 0)
    sub_141c799d0(rcx_1)
    __builtin_memset(&arg1[0x42], 0, 0x11)

int64_t rcx_2 = *(arg1 + 0xf0)

if (rcx_2 != 0)
    sub_141c799d0(rcx_2)
    __builtin_memset(&arg1[0x3c], 0, 0x11)

int64_t rcx_3 = *(arg1 + 0xd8)

if (rcx_3 != 0)
    sub_141c799d0(rcx_3)
    __builtin_memset(&arg1[0x36], 0, 0x11)

int64_t i_1 = 2
int64_t i = 2
void* rbx = &arg1[0x3b]

do
    void* rdi_1 = *(rbx - 0x1c)
    rbx -= 0x28
    i -= 1
    
    if (rdi_1 != 0)
        int64_t rcx_4 = *(rdi_1 + 0xa8)
        
        if (rcx_4 != 0)
            sub_141c799d0(rcx_4 - 8)
        
        int64_t rcx_6 = *(rdi_1 + 0xb8)
        
        if (rcx_6 != 0)
            sub_141c799d0(rcx_6 - 8)
        
        sub_141c799d0(rdi_1)
    
    int64_t rcx_9 = *(rbx - 0xc)
    
    if (rcx_9 != 0)
        sub_141c799d0(rcx_9)
        *(rbx - 0xc) = 0
        *(rbx - 4) = 0
    
    *(rbx + 4) = 0
while (i != 0)

void* rbx_1 = &arg1[0x27]

do
    void* rdi_2 = *(rbx_1 - 0x1c)
    rbx_1 -= 0x28
    i_1 -= 1
    
    if (rdi_2 != 0)
        int64_t rcx_10 = *(rdi_2 + 0xa8)
        
        if (rcx_10 != 0)
            sub_141c799d0(rcx_10 - 8)
        
        int64_t rcx_12 = *(rdi_2 + 0xb8)
        
        if (rcx_12 != 0)
            sub_141c799d0(rcx_12 - 8)
        
        sub_141c799d0(rdi_2)
    
    int64_t rcx_15 = *(rbx_1 - 0xc)
    
    if (rcx_15 != 0)
        sub_141c799d0(rcx_15)
        *(rbx_1 - 0xc) = 0
        *(rbx_1 - 4) = 0
    
    *(rbx_1 + 4) = 0
while (i_1 != 0)

return sub_141c79820(&arg1[4]) __tailcall
