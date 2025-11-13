// 函数: sub_141c9c900
// 地址: 0x141c9c900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1[0x17]

if (rsi != 0)
    EnterCriticalSection(&rsi[1])
    int32_t i_2 = rsi[0xa].d
    int64_t* rdi_1 = rsi[9]
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *rdi_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rdi_1 = &rdi_1[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    rsi[0xa].d = 0
    
    if (*(rsi + 0x54) != 0)
        sub_14061cd70(&rsi[9], 0)
    
    if (rsi != -8)
        LeaveCriticalSection(&rsi[1])
    
    (*(*rsi + 0x10))(rsi)
    int64_t* rcx_5 = rsi[0x12]
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x18))(rcx_5)
        int64_t* rcx_6 = rsi[0x12]
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x20))(rcx_6, 1)
        
        rsi[0x12] = 0

EnterCriticalSection(&arg1[1])
int32_t i_3 = arg1[9].d
int64_t* rdi_2 = arg1[8]

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_8 = *rdi_2
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        rdi_2 = &rdi_2[3]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

arg1[9].d = 0

if (*(arg1 + 0x4c) != 0)
    sub_1405a5130(&arg1[8], 0)

if (arg1 != -8)
    LeaveCriticalSection(&arg1[1])

int64_t result = (*(*arg1 + 0x10))(arg1)
int64_t* rcx_12 = arg1[0x32]

if (rcx_12 != 0)
    result = (*(*rcx_12 + 0x18))(rcx_12)
    int64_t* rcx_13 = arg1[0x32]
    
    if (rcx_13 != 0)
        result = (*(*rcx_13 + 0x20))(rcx_13, 1)
    
    arg1[0x32] = 0

return result
