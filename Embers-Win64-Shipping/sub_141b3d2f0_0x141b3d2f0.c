// 函数: sub_141b3d2f0
// 地址: 0x141b3d2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14086c240(arg1 + 8, arg2 + 8)

if (arg1 + 0x18 != arg2 + 0x18)
    int32_t i_3 = *(arg1 + 0x20)
    
    if (i_3 != 0)
        void* rbx_2 = *(arg1 + 0x18) + 0x10
        int32_t i
        
        do
            int64_t rcx_1 = *(rbx_2 + 0x10)
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            int64_t rcx_2 = *rbx_2
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rbx_2 += 0x30
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = *(arg2 + 0x20)
    void* rdi_1 = *(arg2 + 0x18)
    int32_t r8_1 = *(arg1 + 0x24)
    *(arg1 + 0x20) = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_1405a4b40(arg1 + 0x18, i_2, r8_1)
        int64_t* rsi_1 = *(arg1 + 0x18)
        
        if (i_2 != 0)
            void* rdi_2 = rdi_1 + 0x10
            void* rbx_3 = &rsi_1[4]
            int32_t i_1
            
            do
                *rsi_1 = *(rdi_2 - 0x10)
                *(rbx_3 - 0x18) = *(rdi_2 - 8)
                sub_140596d10(rbx_3 - 0x10, rdi_2)
                *rbx_3 = 0
                uint32_t count = *(rdi_2 + 0x18)
                int64_t r12_1 = *(rdi_2 + 0x10)
                *(rbx_3 + 8) = count
                
                if (count != 0)
                    sub_1405da9e0(rbx_3, count, 0)
                    memcpy(*rbx_3, r12_1, count)
                else
                    *(rbx_3 + 0xc) = 0
                
                rsi_1 = &rsi_1[6]
                rbx_3 += 0x30
                rdi_2 += 0x30
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x24) = 0

sub_141f98dc0(arg1 + 0x28)
return arg1
