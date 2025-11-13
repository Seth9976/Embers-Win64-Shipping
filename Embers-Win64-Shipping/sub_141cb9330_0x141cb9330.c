// 函数: sub_141cb9330
// 地址: 0x141cb9330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r12 = arg2
int32_t result

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x40
    int32_t i
    
    do
        int64_t* rsi_1 = r12
        r12 = &r12[0xa]
        *rsi_1 = *(rbx_1 - 0x40)
        rsi_1[1] = *(rbx_1 - 0x38)
        rsi_1[2] = *(rbx_1 - 0x30)
        rsi_1[3] = *(rbx_1 - 0x28)
        rsi_1[4] = *(rbx_1 - 0x20)
        int64_t* rdi_1 = *(rbx_1 - 0x10)
        int64_t var_48 = *(rbx_1 - 0x18)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        if (&var_48 != &rsi_1[5])
            var_48.o = *(rsi_1 + 0x28)
            *(rsi_1 + 0x28) = var_48.o
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp2_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (&rsi_1[7] != &rbx_1[-2])
            int64_t rbp_1 = sx.q(*rbx_1)
            int64_t r15_1 = *(rbx_1 - 8)
            int32_t r8 = *(rsi_1 + 0x44)
            rsi_1[8].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_140638750(&rsi_1[7], rbp_1.d, r8)
                memcpy(rsi_1[7], r15_1, (rbp_1 << 2).d)
            else
                *(rsi_1 + 0x44) = 0
        
        result = rbx_1[2]
        rbx_1 = &rbx_1[0x14]
        rsi_1[9].d = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
