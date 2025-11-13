// 函数: sub_141476540
// 地址: 0x141476540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rax_1 = *(arg1 + 0x20)
    void* rbx_1 = arg1
    int32_t i_2 = *(arg1 + 0x28)
    
    if (rax_1 != 0)
        rbx_1 = rax_1
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t* rcx = *rbx_1
            
            if (rcx != 0)
                (*(*rcx + 0x38))(rcx)
            
            rbx_1 += 8
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = *(arg2 + 0x28)
    void* r14_1 = *(arg2 + 0x20)
    int32_t r8_1 = *(arg1 + 0x2c)
    *(arg1 + 0x28) = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        sub_14085a010(arg1, i_3, r8_1)
        void* rax_3 = *(arg1 + 0x20)
        void* rbx_2 = arg2
        
        if (r14_1 != 0)
            rbx_2 = r14_1
        
        void* r14_2 = arg1
        
        if (rax_3 != 0)
            r14_2 = rax_3
        
        if (i_3 != 0)
            void* r14_3 = r14_2 - rbx_2
            int32_t i_1
            
            do
                int64_t* rcx_2 = *rbx_2
                *(r14_3 + rbx_2) = rcx_2
                
                if (rcx_2 != 0)
                    (*(*rcx_2 + 0x30))()
                
                rbx_2 += 8
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x2c) = 4

int64_t* rcx_3 = *(arg2 + 0x30)
int64_t* rbx_3 = *(arg1 + 0x30)
*(arg1 + 0x30) = rcx_3

if (rcx_3 != 0)
    (*(*rcx_3 + 0x30))()

if (rbx_3 != 0)
    (*(*rbx_3 + 0x38))(rbx_3)

return arg1
