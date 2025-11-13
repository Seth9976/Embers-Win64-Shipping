// 函数: sub_140b1bda0
// 地址: 0x140b1bda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8

if (*(arg1 + 0x828) == 0)
    int64_t* rax_1 = j_sub_140a82f30(0x50)
    int64_t* rbx_1 = rax_1
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        void* rcx = &rax_1[2]
        rax_1[4] = 0
        rax_1[5] = 0
        __builtin_memset(&rax_1[6], 0, 0x1c)
        rax_1[8] = 0
        rax_1[9] = 0
        __builtin_memset(rax_1, 0, 0x2c)
        *(rcx + 0x1c) = 0x80
        void* rax_2 = *(rcx + 0x10)
        
        if (rax_2 != 0)
            rcx = rax_2
        
        *rcx = 0
        *(rcx + 8) = 0
        rbx_1[6].d = 0xffffffff
    
    if (arg1 + 0x828 != &arg_8)
        int64_t* rdx = *(arg1 + 0x828)
        *(arg1 + 0x828) = rbx_1
        sub_140b0ddb0(arg1 + 0x828, rdx)
    else if (rbx_1 != 0)
        rbx_1[9].d = 0
        int64_t rcx_2 = rbx_1[8]
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx_1[1].d = 0
        
        if (*(rbx_1 + 0xc) != 0)
            sub_1405a5410(rbx_1, 0)
        
        rbx_1[6].d = 0xffffffff
        *(rbx_1 + 0x34) = 0
        sub_14059a8e0(&rbx_1[2], 0)
        int64_t rcx_5 = rbx_1[4]
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = *rbx_1
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        j_sub_140a74f90(rbx_1)

return sub_1407d1800(*(arg1 + 0x828), &arg_8, arg2, nullptr)
