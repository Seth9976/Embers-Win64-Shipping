// 函数: sub_140938230
// 地址: 0x140938230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx
char arg_10 = rdx
int64_t* rbx = arg4[1]
int64_t* r12 = arg4
int64_t r15 = *arg4

if (rbx != 0)
    rbx[1].d += 1

int64_t rbp
rbp.b = 0
*(arg1 + 0x184) += 1
int32_t rax = *(arg1 + 0x178)
int32_t rcx = *(arg1 + 0x184)
int64_t rsi = sx.q(rax - 1)

if (rax - 1 s>= 0)
    int64_t rdi_2 = rsi << 4
    int64_t temp4_1
    
    do
        int64_t rax_2 = *(arg1 + 0x170)
        
        if (*(rdi_2 + rax_2 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_1 = *(rdi_2 + rax_2)
            
            if (rcx_1 == 0)
                rbp.b = 1
            else
                int64_t var_48 = r15
                int64_t* var_40_1 = rbx
                
                if (rbx != 0)
                    rbx[1].d += 1
                
                if ((*(*rcx_1 + 0x50))(rcx_1, arg2, zx.q(arg3), &var_48, arg5) == 0)
                    rbp.b = 1
        
        rdi_2 -= 0x10
        temp4_1 = rsi
        rsi -= 1
    while (temp4_1 - 1 s>= 0)
    rcx = *(arg1 + 0x184)
    r12 = arg4

int32_t result = rcx - 1
*(arg1 + 0x184) = result

if (rbp.b != 0)
    result = sub_140599630(arg1 + 0x170, 0)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = r12[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            jump(*(*rbx_1 + 8))

return result
