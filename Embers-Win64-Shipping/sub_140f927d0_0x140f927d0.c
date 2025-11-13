// 函数: sub_140f927d0
// 地址: 0x140f927d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rbp = arg2

if (arg4 != 0)
    void* rbx_1 = arg3 + 0x18
    int32_t i
    
    do
        int64_t* rsi_1 = rbp
        rbp = &rbp[4]
        *rsi_1 = *(rbx_1 - 0x18)
        int64_t* rdi_1 = *(rbx_1 - 8)
        int64_t var_28 = *(rbx_1 - 0x10)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        if (&var_28 != &rsi_1[1])
            var_28.o = *(rsi_1 + 8)
            *(rsi_1 + 8) = var_28.o
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp2_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        rsi_1[3].d ^= (rsi_1[3].d ^ *rbx_1) & 1
        int32_t rcx_6 = ((*rbx_1 ^ rsi_1[3].d) & 2) ^ rsi_1[3].d
        rsi_1[3].d = rcx_6
        int32_t rdx_3 = ((rcx_6 ^ *rbx_1) & 4) ^ rcx_6
        rsi_1[3].d = rdx_3
        int32_t rax_8 = rdx_3 ^ *rbx_1
        rbx_1 += 0x20
        rsi_1[3].d = (rax_8 & 8) ^ rdx_3
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
