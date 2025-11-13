// 函数: sub_140f76860
// 地址: 0x140f76860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr

if (*(arg1 + 0x3b8) != 0)
    int64_t* rcx = *(arg1 + 0x3b0)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x3b8) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x3b0)
        
        *(arg1 + 0x3a8) = (*(*rcx_1 + 0x48))(rcx_1)

if (*(arg1 + 0x3a0) != 0)
    int64_t* rcx_2 = *(arg1 + 0x398)
    
    if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
        int64_t* rcx_3
        
        if (*(arg1 + 0x3a0) == 0)
            rcx_3 = nullptr
        else
            rcx_3 = *(arg1 + 0x398)
        
        *(arg1 + 0x390) = (*(*rcx_3 + 0x48))(rcx_3)

int64_t rax_13
int64_t rcx_6

if (*(arg1 + 0x390) != 1)
    if (*(arg1 + 0x3b8) != 0)
        int64_t* rcx_7 = *(arg1 + 0x3b0)
        
        if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
            if (*(arg1 + 0x3b8) != 0)
                rdi = *(arg1 + 0x3b0)
            
            *(arg1 + 0x3a8) = (*(*rdi + 0x48))(rdi)
    
    rax_13 = 0x1a0
    rcx_6 = 0x90
else
    if (*(arg1 + 0x3b8) != 0)
        int64_t* rcx_4 = *(arg1 + 0x3b0)
        
        if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
            if (*(arg1 + 0x3b8) != 0)
                rdi = *(arg1 + 0x3b0)
            
            *(arg1 + 0x3a8) = (*(*rdi + 0x48))(rdi)
    
    rax_13 = 0x118
    rcx_6 = 8

if (*(arg1 + 0x3a8) != 1)
    rax_13 = rcx_6

return rax_13 + *(arg1 + 0x410)
