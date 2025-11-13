// 函数: sub_1422aa530
// 地址: 0x1422aa530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = *arg1
int64_t* rdi = r15
void* rbp_2 = &r15[sx.q(arg1[1].d) * 2]

if (r15 == rbp_2)
    return 

int64_t rsi
int64_t arg_10 = rsi

do
    int64_t* rbx_1 = rdi[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t* rcx = *arg2
    char rax
    
    if (rcx != 0)
        rax = (**rcx)(rcx)
    
    if (rcx == 0 || rax == 0)
        rsi.b = 0
    else
        rsi.b = 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rsi.b != 0)
        int32_t rdi_2 = ((rdi - r15) s>> 4).d
        
        if (rdi_2 != 0xffffffff)
            sub_140911e80(arg1, rdi_2, 1, 1)
        
        break
    
    rdi = &rdi[2]
while (rdi != rbp_2)
