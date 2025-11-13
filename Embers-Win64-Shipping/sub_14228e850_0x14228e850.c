// 函数: sub_14228e850
// 地址: 0x14228e850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
int64_t arg_18 = rsi
int64_t* r12 = *arg1
int64_t* rdi = r12
void* rbp_2 = &r12[sx.q(arg1[1].d) * 2]
int64_t* rax

if (r12 != rbp_2)
    while (true)
        int64_t* rbx_1 = rdi[1]
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int64_t* rcx = *arg2
        
        if (rcx != 0)
            rax = (**rcx)(rcx)
        
        if (rcx == 0 || rax.b == 0)
            rsi.b = 0
        else
            rsi.b = 1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (rsi.b != 0)
            break
        
        rdi = &rdi[2]
        
        if (rdi == rbp_2)
            goto label_14228e8fb

if (r12 != rbp_2 && ((rdi - r12) s>> 4).d != 0xffffffff)
    return 

label_14228e8fb:
int64_t* rbx_2 = arg2[1]
int64_t rsi_1 = *arg2

if (rbx_2 != 0)
    rbx_2[1].d += 1

int64_t rdi_3 = sx.q(arg1[1].d)
int32_t rax_4 = (rdi_3 + 1).d
arg1[1].d = rax_4

if (rax_4 s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

rax = (rdi_3 << 4) + *arg1
*rax = rsi_1
rax[1] = rbx_2

if (rbx_2 == 0)
    return 

rbx_2[1].d += 1

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t temp1_1 = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_2 + 8))(rbx_2, 1)
