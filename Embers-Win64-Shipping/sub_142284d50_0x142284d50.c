// 函数: sub_142284d50
// 地址: 0x142284d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = *arg1
int64_t* rsi = r15
void* rbp_2 = &r15[sx.q(arg1[1].d) * 2]

if (r15 != rbp_2)
    do
        int64_t* rdi_1 = rsi[1]
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int64_t* rcx = *(arg2 + 8)
        char rax_2 = (**rcx)(rcx, *rsi)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (rax_2 != 0)
            return zx.q(((rsi - r15) s>> 4).d)
        
        rsi = &rsi[2]
    while (rsi != rbp_2)

return 0xffffffff
