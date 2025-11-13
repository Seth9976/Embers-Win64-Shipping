// 函数: sub_141c5c440
// 地址: 0x141c5c440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x359) & 2) != 0 && sub_140a54810() != 0)
    int64_t* rcx = *(arg1 + 0x7f0)
    
    if ((*(*rcx + 0xf8))(rcx) == 0)
        return sub_141c5c610(*(arg1 + 0xa90), arg2) __tailcall

int64_t* rcx_3 = *(arg1 + 0x7f0)
char result

if ((*(*rcx_3 + 0xf8))(rcx_3) == 0)
    sub_141c69700(arg1)
    sub_141c698b0(*(arg1 + 0xa90))
    result = sub_141c698b0(*(arg1 + 0xa90))
    void* r15_1 = *(arg1 + 0xa90)
    int32_t rdi_1 = *(r15_1 + 0x150)
    int32_t rdi_2 = rdi_1 - 1
    
    if (rdi_1 - 1 s>= 0)
        int64_t r14_2 = sx.q(rdi_2) << 4
        int32_t temp1_1
        
        do
            void* rsi_1 = *(r14_2 + *(r15_1 + 0x148))
            EnterCriticalSection(rsi_1 + 0xb8)
            int64_t* rcx_14 = *(rsi_1 + 0x60)
            
            if (rcx_14 != 0)
                (*(*rcx_14 + 0x20))(rcx_14)
                int64_t* rcx_15 = *(rsi_1 + 0x60)
                
                if (rcx_15 != 0)
                    (**rcx_15)(rcx_15, 1)
                
                *(rsi_1 + 0x60) = 0
            
            if (rsi_1 != -0xb8)
                LeaveCriticalSection(rsi_1 + 0xb8)
            
            result = sub_140dbb060(r15_1 + 0x148, rdi_2, 1, 0)
            r14_2 -= 0x10
            temp1_1 = rdi_2
            rdi_2 -= 1
        while (temp1_1 - 1 s>= 0)
else
    void* rbx_1 = *(arg1 + 0xa90)
    result = 0
    bool z_1
    
    if (0 == *(rbx_1 + 0x1bc))
        *(rbx_1 + 0x1bc) = 0
        z_1 = true
    else
        result = (*(rbx_1 + 0x1bc)).b
        z_1 = false
    
    if (not(z_1))
        int64_t* rcx_4 = *(rbx_1 + 0x78)
        
        if ((*(*rcx_4 + 0x20))(rcx_4, zx.q(data_143a13c14), 0) == 0)
            int64_t* rcx_5 = *(rbx_1 + 0x78)
            (*(*rcx_5 + 0x10))(rcx_5)
        
        sub_141c738c0(rbx_1)
        sub_141c698b0(rbx_1)
        int64_t* rcx_8 = *(rbx_1 + 0x78)
        result = (*(*rcx_8 + 0x20))(rcx_8, 0x3e8, 0)
        
        if (result == 0)
            jump(*(**(rbx_1 + 0x78) + 0x10))

return result
