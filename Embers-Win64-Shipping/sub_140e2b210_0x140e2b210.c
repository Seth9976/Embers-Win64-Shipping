// 函数: sub_140e2b210
// 地址: 0x140e2b210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2

if (arg4 != 0)
    void* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int64_t* rsi_1 = r14
        r14 = &r14[0xa]
        *rsi_1 = *(rbx_1 - 8)
        rsi_1[1] = *rbx_1
        *(rsi_1 + 0x10) = *(rbx_1 + 8)
        *(rsi_1 + 0x20) = *(rbx_1 + 0x18)
        int64_t* rdi_1 = *(rbx_1 + 0x30)
        int64_t var_28 = *(rbx_1 + 0x28)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        if (&var_28 != &rsi_1[6])
            var_28.o = *(rsi_1 + 0x30)
            *(rsi_1 + 0x30) = var_28.o
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp2_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        rsi_1[8] = *(rbx_1 + 0x38)
        rsi_1[9].d = *(rbx_1 + 0x40)
        char rax = *(rbx_1 + 0x44)
        rbx_1 += 0x50
        *(rsi_1 + 0x4c) = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
