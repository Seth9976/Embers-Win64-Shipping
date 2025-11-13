// 函数: sub_140d6e860
// 地址: 0x140d6e860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rbp = arg2

if (arg4 != 0)
    void* rdi_1 = arg3 + 8
    int32_t i
    
    do
        int64_t* rcx = rbp
        rbp = &rbp[3]
        *rcx = *(rdi_1 - 8)
        int64_t* rbx_1 = *(rdi_1 + 8)
        int64_t var_18 = *rdi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (&var_18 != &rcx[1])
            var_18.o = *(rcx + 8)
            *(rcx + 8) = var_18.o
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
