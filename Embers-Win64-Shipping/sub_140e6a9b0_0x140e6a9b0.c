// 函数: sub_140e6a9b0
// 地址: 0x140e6a9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140e12730(*arg1)

if (rax[1].d s> 0)
    int32_t i = 0
    int64_t rdi_1 = 0
    
    do
        int64_t* rdx = *rax
        int64_t var_18 = *(rdx + rdi_1)
        void* rax_1 = *(rdx + rdi_1 + 8)
        void* var_10_1 = rax_1
        
        if (rax_1 != 0)
            *(rax_1 + 8) += 1
        
        sub_140e6a9b0(&var_18, arg2)
        i += 1
        rdi_1 += 0x10
    while (i s< rax[1].d)

int64_t result = sub_140b76600(arg2, arg1)
int64_t* rbx_1 = arg1[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_1 + 8))

return result
