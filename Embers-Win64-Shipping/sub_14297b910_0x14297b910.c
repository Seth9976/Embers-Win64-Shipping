// 函数: sub_14297b910
// 地址: 0x14297b910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_38 = -2
int64_t* r10 = arg1
int64_t* r13 = *arg1
void** rsi = r13
void** rbx = r13[1]
uint64_t rdi
rdi.b = 1

if (*(rbx + 0x19) == 0)
    do
        rsi = rbx
        
        if (arg3 == 0)
            rdi = zx.q((sub_140611000(arg4, &rbx[4]) u>> 0x1f).b)
        else
            rdi.b = (sub_140611000(&rbx[4], arg4) u>> 0x1f).b ^ 1
        
        if (rdi.b == 0)
            rbx = rbx[2]
        else
            rbx = *rbx
    while (*(rbx + 0x19) == 0)
    
    r10 = arg_8

void** rbx_1 = rsi
void** rcx_2 = rsi

if (rdi.b != 0)
    if (rsi == *r13)
        char var_40_1 = arg5
        *arg2 = *sub_14297b1d0(r10, &arg_8, 1, rsi, arg4)
        arg2[1].b = 1
        return arg2
    
    if (*(rsi + 0x19) == 0)
        void** rax_8 = *rsi
        
        if (*(rax_8 + 0x19) == 0)
            rbx_1 = rax_8
            void** rax_10 = rax_8[2]
            
            while (*(rax_10 + 0x19) == 0)
                rbx_1 = rax_10
                rax_10 = rax_10[2]
            
            rcx_2 = rbx_1
        else
            int64_t* rax_9 = rsi[1]
            
            if (*(rax_9 + 0x19) == 0)
                void** rdx_3 = rsi
                
                do
                    rcx_2 = rdx_3
                    
                    if (rdx_3 != *rax_9)
                        break
                    
                    rbx_1 = rax_9
                    rax_9 = rax_9[1]
                    rdx_3 = rbx_1
                    rcx_2 = rbx_1
                while (*(rax_9 + 0x19) == 0)
            
            if (*(rbx_1 + 0x19) == 0)
                rbx_1 = rax_9
                rcx_2 = rax_9
    else
        rbx_1 = rsi[2]
        rcx_2 = rbx_1

if ((sub_140611000(&rcx_2[4], arg4) u>> 0x1f).b == 0)
    *arg2 = rbx_1
    arg2[1].b = 0
    return arg2

char var_40_2 = arg5
int64_t* var_30
*arg2 = *sub_14297b1d0(arg_8, &var_30, rdi.b, rsi, arg4)
arg2[1].b = 1
return arg2
