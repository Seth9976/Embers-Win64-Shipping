// 函数: sub_14087e8e0
// 地址: 0x14087e8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
char* rbp = arg2

if (arg4 != 0)
    void* rbx_1 = arg3 + 0x44
    int32_t i
    
    do
        char* rdi_1 = rbp
        rbp = &rbp[0x78]
        *rdi_1 = *(rbx_1 - 0x44)
        *(rdi_1 + 8) = *(rbx_1 - 0x3c)
        *(rdi_1 + 0x10) = *(rbx_1 - 0x34)
        *(rdi_1 + 0x18) = *(rbx_1 - 0x2c)
        *(rdi_1 + 0x20) = *(rbx_1 - 0x24)
        rdi_1[0x30] = *(rbx_1 - 0x14)
        int32_t rax_5 = *(rdi_1 + 0x44)
        *(rdi_1 + 0x34) = *(rbx_1 - 0x10)
        *(rdi_1 + 0x44) ^= (rax_5 ^ *rbx_1) & 1
        int32_t rcx_3 = ((*(rdi_1 + 0x44) ^ *rbx_1) & 2) ^ *(rdi_1 + 0x44)
        *(rdi_1 + 0x44) = rcx_3
        *(rdi_1 + 0x44) = ((rcx_3 ^ *rbx_1) & 4) ^ rcx_3
        *(rdi_1 + 0x48) = *(rbx_1 + 4)
        sub_14081d8c0(&rdi_1[0x58], rbx_1 + 0x14)
        int64_t* rdi_2 = *(rbx_1 + 0x2c)
        int64_t var_28 = *(rbx_1 + 0x24)
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        if (&var_28 != &rdi_1[0x68])
            var_28.o = *(rdi_1 + 0x68)
            *(rdi_1 + 0x68) = var_28.o
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp2_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        rbx_1 += 0x78
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
