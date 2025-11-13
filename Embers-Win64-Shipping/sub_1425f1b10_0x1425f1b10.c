// 函数: sub_1425f1b10
// 地址: 0x1425f1b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 + 0xa0 != arg1 + 0x1c0)
    int64_t* rbx_1 = arg1 + 0xc8
    
    do
        int64_t* rcx = *rbx_1
        
        if (rcx != 0)
            *rbx_1 = 0
            (*(*rcx + 8))(rcx)
        
        rbx_1 = &rbx_1[0xc]
    while (&rbx_1[-5] != arg1 + 0x1c0)

int64_t* rcx_1 = *(arg1 + 0x60)

if (rcx_1 != 0)
    (*(*rcx_1 + 0x98))(rcx_1)
    int64_t* rcx_2 = *(arg1 + 0x60)
    
    if (rcx_2 != 0)
        *(arg1 + 0x60) = 0
        (*(*rcx_2 + 8))(rcx_2)

int64_t* rcx_3 = *(arg1 + 0x58)

if (rcx_3 != 0)
    (*(*rcx_3 + 0x68))(rcx_3)
    int64_t* rcx_4 = *(arg1 + 0x58)
    
    if (rcx_4 != 0)
        *(arg1 + 0x58) = 0
        (*(*rcx_4 + 8))(rcx_4)

HMODULE hLibModule = *(arg1 + 0x48)
*(arg1 + 0x50) = 0

if (hLibModule != 0)
    FreeLibrary(hLibModule)
    *(arg1 + 0x48) = 0
