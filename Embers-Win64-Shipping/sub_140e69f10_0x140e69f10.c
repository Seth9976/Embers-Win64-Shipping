// 函数: sub_140e69f10
// 地址: 0x140e69f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t arg_8 = 0
arg2[1] = 0
int64_t* rsi = *(arg1 + 0x2b8)
void* r15_2 = &rsi[sx.q(*(arg1 + 0x2c0)) * 2]

if (rsi != r15_2)
    char rax = 0
    char rbp_1 = arg_8:1.b
    
    do
        void* rcx = *rsi
        char* rcx_1
        
        if (rcx == 0)
            rbx |= 2
            rcx_1 = &arg_8
            rbp_1 = 0
            arg_8:1.b = 0
        else
            rbx |= 1
            int64_t var_38 = *arg3
            void* rax_2 = arg3[1]
            void* var_30_1 = rax_2
            
            if (rax_2 != 0)
                *(rax_2 + 8) += 1
                rcx = *rsi
            
            void arg_10
            rcx_1 = sub_140e6a100(rcx, &arg_10, &var_38)
            rax = arg2[1]
        
        if (rcx_1 != arg2)
            if (rax != 0)
                arg2[1] = 0
                rax = 0
            
            if (rcx_1[1] != 0)
                *arg2 = *rcx_1
                rax = 1
                arg2[1] = 1
        
        if ((rbx.b & 2) != 0)
            rbx &= 0xfffffffd
            
            if (rbp_1 != 0)
                rbp_1 = 0
                arg_8:1.b = 0
        
        if ((rbx.b & 1) != 0)
            rbx &= 0xfffffffe
            
            if (arg4 != 0)
                arg4 = 0
        
        if (rax != 0)
            break
        
        rsi = &rsi[2]
    while (rsi != r15_2)

int64_t* rbx_1 = arg3[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
