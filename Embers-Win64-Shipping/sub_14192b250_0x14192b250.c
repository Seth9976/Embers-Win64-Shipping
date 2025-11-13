// 函数: sub_14192b250
// 地址: 0x14192b250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        void* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            int64_t rcx = *(rbx_1 + 0x90)
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            int64_t* rcx_1 = *(rbx_1 + 0x88)
            
            if (rcx_1 != 0)
                int32_t rax_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (rax_1 == 1 && rcx_1 != 0)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            j_sub_140a74f90(rbx_1)
        
        rdi = &rdi[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = *arg1

if (rdi == 0)
    return 

return sub_140a74f90(rdi) __tailcall
