// 函数: sub_142795a30
// 地址: 0x142795a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*(arg1 + 0x4f8) + 0x30))(arg1 + 0x4f8)
(*(*(arg1 + 0x470) + 0x30))(arg1 + 0x470)
(*(*(arg1 + 0x538) + 0x30))(arg1 + 0x538)
(*(*(arg1 + 0x578) + 0x30))(arg1 + 0x578)
(*(*(arg1 + 0x598) + 0x30))(arg1 + 0x598)

if (*(arg1 + 0x468) != 0)
    (*(*(arg1 + 0x5b8) + 0x30))(arg1 + 0x5b8)
    int32_t i = 0
    
    if (*(arg1 + 0x660) s> 0)
        int64_t rbx_1 = 0
        
        do
            void* rax_6 = *(arg1 + 0x658)
            void* rcx_6 = arg1 + 0x5e0
            
            if (rax_6 != 0)
                rcx_6 = rax_6
            
            void* rcx_7 = rcx_6 + rbx_1
            (*(*rcx_7 + 0x30))(rcx_7)
            void* rax_8 = *(arg1 + 0x6e0)
            void* rcx_8 = arg1 + 0x668
            
            if (rax_8 != 0)
                rcx_8 = rax_8
            
            void* rcx_9 = rcx_8 + rbx_1
            (*(*rcx_9 + 0x30))(rcx_9)
            i += 1
            rbx_1 += 0x28
        while (i s< *(arg1 + 0x660))
    
    int32_t rax_10 = *(arg1 + 0x664)
    void* rbx_2 = arg1 + 0x5e0
    void* rcx_10 = *(rbx_2 + 0x78)
    void* r15_1 = rbx_2 + 0x80
    int32_t i_3 = *r15_1
    
    if (rax_10 s< 0)
        void* rdi_1 = rbx_2
        
        if (rcx_10 != 0)
            rdi_1 = rcx_10
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                sub_1405ec8a0(rdi_1 + 0x20)
                *rdi_1 = &data_142dda848
                sub_1405d1550(rdi_1 + 0x10)
                sub_1419948a0(rdi_1)
                rdi_1 += 0x28
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            rax_10 = *(rbx_2 + 0x84)
        
        *r15_1 = 0
        
        if (rax_10 != 0)
            sub_142795d90(rbx_2, 0)
    else
        if (rcx_10 != 0)
            rbx_2 = rcx_10
        
        if (i_3 != 0)
            int32_t i_2
            
            do
                sub_1405ec8a0(rbx_2 + 0x20)
                *rbx_2 = &data_142dda848
                sub_1405d1550(rbx_2 + 0x10)
                sub_1419948a0(rbx_2)
                rbx_2 += 0x28
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        *r15_1 = 0

jump(*(*(arg1 + 0x170) + 0x30))
