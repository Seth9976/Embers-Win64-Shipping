// 函数: sub_14217b900
// 地址: 0x14217b900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x6e8)

if (rcx != 0)
    (*(*rcx + 0x278))(rcx)
    int64_t* rdi_1 = *(arg1 + 0x90)
    int64_t rsi_1 = 0
    uint64_t r14_2 = sx.q(*(arg1 + 0x98)) << 3 u>> 3
    
    if (rdi_1 u> &rdi_1[sx.q(*(arg1 + 0x98))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            void* rbx_1 = *rdi_1
            
            if (rbx_1 != 0)
                int64_t* rcx_1 = *(rbx_1 + 0x13c0)
                
                if (rcx_1 != 0)
                    (*(*rcx_1 + 0x2a8))(rcx_1)
                    *(rbx_1 + 0x13c0) = 0
            
            rdi_1 = &rdi_1[1]
            rsi_1 += 1
        while (rsi_1 != r14_2)
    
    void* rbx_2 = *(arg1 + 0x88)
    
    if (rbx_2 != 0)
        int64_t* rcx_2 = *(rbx_2 + 0x13c0)
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x2a8))(rcx_2)
            *(rbx_2 + 0x13c0) = 0

*(arg1 + 0x6e8) = arg2

if (arg2 == 0)
    return 

(*(*arg2 + 0x260))(arg2, *(arg1 + 0x140))
int64_t* rcx_4 = *(arg1 + 0x6e8)
(*(*rcx_4 + 0x268))(rcx_4, arg1)
*(arg1 + 0x140)
jump(*(**(arg1 + 0x6e8) + 0x270))
