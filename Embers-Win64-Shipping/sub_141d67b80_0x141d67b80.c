// 函数: sub_141d67b80
// 地址: 0x141d67b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x68)

for (void* rbp_2 = &i[sx.q(*(arg1 + 0x70)) * 2]; i != rbp_2; i = &i[2])
    int64_t* rdi_1 = i[1]
    int64_t* rsi_1 = *i
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    void* rax_2 = (**rsi_1)(rsi_1)
    void* rdx = *(arg2 + 0x10)
    int64_t rax = sx.q(*(rax_2 + 0x38))
    
    if (rax.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax << 3)) == rax_2 + 0x30)
        (*(*rsi_1 + 0x10))(rsi_1, arg2)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        break
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
