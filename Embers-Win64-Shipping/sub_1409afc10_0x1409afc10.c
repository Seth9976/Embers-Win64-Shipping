// 函数: sub_1409afc10
// 地址: 0x1409afc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2

if (rcx == 0)
    return 

if (*(arg1 + 0x3a8) != 0)
    if (*(arg1 + 0x3b0) == 0)
        int64_t* rax_1 = j_sub_140a82f30(0x10)
        int64_t* rdi_1 = rax_1
        
        if (rax_1 == 0)
            rdi_1 = nullptr
        else
            *rax_1 = 0
            rax_1[1] = 0
        
        void arg_10
        
        if (arg1 + 0x3b0 != &arg_10)
            int64_t* rdx = *(arg1 + 0x3b0)
            *(arg1 + 0x3b0) = rdi_1
            sub_1409aeb90(arg1 + 0x3b0, rdx)
        else if (rdi_1 != 0)
            int64_t* rbx_1 = *rdi_1
            int32_t i_1 = rdi_1[1].d
            
            if (i_1 != 0)
                int32_t i
                
                do
                    int64_t* rcx_2 = *rbx_1
                    
                    if (rcx_2 != 0)
                        (*(*rcx_2 + 0x38))(rcx_2, 1)
                    
                    rbx_1 = &rbx_1[1]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                rbx_1 = *rdi_1
            
            if (rbx_1 != 0)
                sub_140a74f90(rbx_1)
            
            j_sub_140a74f90(rdi_1)
    
    int64_t* rbx_2 = *(arg1 + 0x3b0)
    int64_t rdi_2 = sx.q(rbx_2[1].d)
    int32_t rax_3 = (rdi_2 + 1).d
    rbx_2[1].d = rax_3
    
    if (rax_3 s> *(rbx_2 + 0xc))
        sub_1405a4d70(rbx_2)
    
    *(*rbx_2 + (rdi_2 << 3)) = *arg2
    *arg2 = 0
    return 

if (rcx != 0)
    jump(*(*rcx + 0x38))
