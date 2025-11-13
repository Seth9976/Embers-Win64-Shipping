// 函数: sub_141bb4080
// 地址: 0x141bb4080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void* result = sub_141b71fc0(arg1, &arg_10)

if (result != 0)
    int64_t r9_1 = *arg1
    (*(r9_1 + 0xa0))(arg1, arg_10, result, r9_1)
    int64_t rdx_2 = *arg1
    int64_t r15_1 = arg_10
    int64_t* rax = (*(rdx_2 + 0x28))(arg1, rdx_2)
    int64_t rbp
    rbp.b = 0
    *(rax + 0x14) += 1
    int32_t rcx_2 = *(rax + 0x14)
    int32_t rax_1 = rax[1].d
    int64_t rdi_1 = sx.q(rax_1 - 1)
    
    if (rax_1 - 1 s>= 0)
        int64_t rbx_2 = rdi_1 << 4
        int64_t temp1_1
        
        do
            int64_t rax_3 = *rax
            
            if (*(rbx_2 + rax_3 + 8) == 0)
                rbp.b = 1
            else
                int64_t* rcx_3 = *(rbx_2 + rax_3)
                
                if (rcx_3 == 0)
                    rbp.b = 1
                else if ((*(*rcx_3 + 0x50))(rcx_3, r15_1, result) == 0)
                    rbp.b = 1
            
            rbx_2 -= 0x10
            temp1_1 = rdi_1
            rdi_1 -= 1
        while (temp1_1 - 1 s>= 0)
        rcx_2 = *(rax + 0x14)
    
    result = zx.q(rcx_2 - 1)
    *(rax + 0x14) = result.d
    
    if (rbp.b != 0)
        return sub_140599630(rax, 0)

return result
