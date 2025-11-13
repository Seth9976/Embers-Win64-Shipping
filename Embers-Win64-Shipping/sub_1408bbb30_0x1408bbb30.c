// 函数: sub_1408bbb30
// 地址: 0x1408bbb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x28)
int32_t rdi_1 = rdi - 1

if (rdi - 1 s< 0)
    return 

int64_t rbx_2 = sx.q(rdi_1) << 4
int32_t temp1_1

do
    int64_t* rax_1 = *(arg1 + 0x20)
    int32_t rax_2
    void* rcx
    
    if (*(rax_1 + rbx_2) != 0)
        rcx = *(rax_1 + rbx_2 + 8)
        
        if (rcx != 0)
            rax_2 = 0
            
            if (0 == *(rcx + 8))
                *(rcx + 8) = 0
            else
                rax_2 = *(rcx + 8)
    
    if (*(rax_1 + rbx_2) == 0 || (rcx != 0 && rax_2 == 1))
        sub_1408c24e0(arg1 + 0x20, rdi_1, 1, 1)
    else
        int64_t rdx = *(arg1 + 0x20)
        void* rcx_1 = *(rbx_2 + rdx)
        
        if (*(rcx_1 + 0x270) != 0)
            (*(*arg2 + 0x38))(arg2, rcx_1 + 0x270, 0, 0)
            rdx = *(arg1 + 0x20)
        
        void* rcx_3 = *(rbx_2 + rdx)
        
        if (*(rcx_3 + 0x278) != 0)
            (*(*arg2 + 0x38))(arg2, rcx_3 + 0x278, 0, 0)
            rdx = *(arg1 + 0x20)
        
        sub_1408bb950(arg1, *(rbx_2 + rdx), arg2)
    
    rbx_2 -= 0x10
    temp1_1 = rdi_1
    rdi_1 -= 1
while (temp1_1 - 1 s>= 0)
