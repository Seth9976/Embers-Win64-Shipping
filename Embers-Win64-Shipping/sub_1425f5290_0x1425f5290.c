// 函数: sub_1425f5290
// 地址: 0x1425f5290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x20)
*(arg1 + 0x20) = 0
int32_t result

if (arg3 == 0)
    result = sub_1425f7480(*(arg1 + 0x70))
else
    sub_1425f5e40(arg1)
    int32_t result_1 = *(arg1 + 0x20)
    *(arg1 + 0x20) = 2
    result = result_1

if (arg5 != 0)
    *(arg1 + 0x1c) += 1
    int32_t rax_1 = *(arg1 + 0x10)
    int32_t rcx_1 = *(arg1 + 0x1c)
    int64_t rbp
    rbp.b = 0
    int64_t rdi_1 = sx.q(rax_1 - 1)
    
    if (rax_1 - 1 s>= 0)
        int64_t rbx_2 = rdi_1 << 4
        int64_t temp2_1
        
        do
            int64_t rax_3 = *(arg1 + 8)
            
            if (*(rbx_2 + rax_3 + 8) == 0)
                rbp.b = 1
            else
                int64_t* rcx_2 = *(rbx_2 + rax_3)
                
                if (rcx_2 == 0)
                    rbp.b = 1
                else if ((*(*rcx_2 + 0x50))(rcx_2, zx.q(arg2), arg4) == 0)
                    rbp.b = 1
            
            rbx_2 -= 0x10
            temp2_1 = rdi_1
            rdi_1 -= 1
        while (temp2_1 - 1 s>= 0)
        rcx_1 = *(arg1 + 0x1c)
    
    result = rcx_1 - 1
    *(arg1 + 0x1c) = result
    
    if (rbp.b != 0)
        result = sub_140599630(arg1 + 8, 0)

int64_t rcx_4 = *arg4

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4) __tailcall
