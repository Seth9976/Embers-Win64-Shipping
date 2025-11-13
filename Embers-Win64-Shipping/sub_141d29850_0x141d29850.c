// 函数: sub_141d29850
// 地址: 0x141d29850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t i_2 = arg1[1].d
    void* rdi_1 = *arg1
    
    if (i_2 != 0)
        void* rbx_1 = rdi_1 + 0xa0
        int32_t i
        
        do
            *(rbx_1 + 8) = 0
            int64_t rcx = *rbx_1
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            *(rbx_1 - 0x38) = 0
            
            if (*(rbx_1 - 0x34) != 0)
                sub_1408cf3a0(rbx_1 - 0x40, 0)
            
            *(rbx_1 - 0x10) = 0xffffffff
            *(rbx_1 - 0xc) = 0
            sub_14059a8e0(rbx_1 - 0x30, 0)
            int64_t rcx_3 = *(rbx_1 - 0x20)
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            int64_t rcx_4 = *(rbx_1 - 0x40)
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = *(rbx_1 - 0x50)
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            int64_t rcx_6 = *(rbx_1 - 0x60)
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int64_t rcx_7 = *(rbx_1 - 0x70)
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            int64_t rcx_8 = *(rbx_1 - 0x80)
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            int64_t rcx_9 = *(rbx_1 - 0x90)
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            int64_t rcx_10 = *rdi_1
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            rdi_1 += 0xb8
            rbx_1 += 0xb8
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = arg2[1].d
    int64_t* rdi_2 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        sub_1409768a0(arg1, i_3, r8_1)
        int64_t* rbx_2 = *arg1
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                sub_141d182b0(rbx_2, rdi_2)
                rbx_2 = &rbx_2[0x17]
                rdi_2 = &rdi_2[0x17]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = 0

return arg1
