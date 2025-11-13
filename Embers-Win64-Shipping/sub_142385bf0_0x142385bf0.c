// 函数: sub_142385bf0
// 地址: 0x142385bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[1]
int64_t* rdi = nullptr
int64_t rbp = 0
int32_t rax

if (rbx != 0)
    rax = rbx[1].d
    
    if (rax != 0)
        rbx[1].d = rax + 1
        rax.b = 1
    
    if (rax.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rbp = *arg1

if (arg1[8].d != 0)
    int64_t* rcx = arg1[7]
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx).b != 0)
        if (arg1[8].d != 0)
            rdi = arg1[7]
        
        int64_t var_18 = rbp
        int64_t* var_10_1 = rbx
        
        if (rbx != 0)
            rbx[1].d += 1
        
        (*(*rdi + 0x50))(rdi, &var_18)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* i = arg1[0x11]

for (void* rsi_3 = &i[sx.q(arg1[0x12].d) * 2]; i != rsi_3; i = &i[2])
    int64_t* rbx_1 = i[1]
    
    if (rbx_1 != 0)
        rax = rbx_1[1].d
        
        if (rax != 0)
            int32_t rax_5 = rax + 1
            rbx_1[1].d = rax_5
            int64_t rcx_4 = *i
            
            if (rcx_4 != 0)
                sub_142385bf0(rcx_4)
                rax_5 = rbx_1[1].d
            
            rbx_1[1].d = rax_5 - 1
            
            if (rax_5 == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
