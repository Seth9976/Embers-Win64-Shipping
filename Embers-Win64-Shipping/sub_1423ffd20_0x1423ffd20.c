// 函数: sub_1423ffd20
// 地址: 0x1423ffd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1
int32_t i = 0

if (rdi[1].d s> 0)
    void* r14_1 = nullptr
    
    do
        int64_t rbx_1 = *rdi
        int64_t* rcx_1 = r14_1 + 0x20 + rbx_1
        int64_t* rax_1 = *(rbx_1 + r14_1 + 0x10)
        
        if (rax_1 != 0)
            rcx_1 = rax_1
        
        (*(rbx_1 + r14_1))((*(*rcx_1 + 8))(rcx_1), arg2)
        rdi = *arg1
        r14_1 += 0x40
        i += 1
    while (i s< rdi[1].d)

if (rdi == 0)
    return 

int32_t i_2 = rdi[1].d
int64_t* rbx_2 = *rdi

if (i_2 != 0)
    int32_t i_1
    
    do
        if (*rbx_2 != 0)
            void* rax_4 = rbx_2[2]
            void* rcx_3 = &rbx_2[4]
            
            if (rax_4 != 0)
                rcx_3 = rax_4
            
            (*(*rcx_3 + 0x10))(rcx_3)
        
        rbx_2 = &rbx_2[8]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rbx_2 = *rdi

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

return j_sub_140a74f90(rdi) __tailcall
