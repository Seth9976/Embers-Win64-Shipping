// 函数: sub_140f073c0
// 地址: 0x140f073c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = 0
int32_t arg_8 = 0
void* rax_1

if (*(arg1 + 0x528) != 0)
    rax_1 = *(arg1 + 0x530)

int64_t* rbx
void* rbp
int64_t* rdi

if (*(arg1 + 0x528) == 0 || rax_1 == 0 || *(rax_1 + 8) s<= 0)
    rbx = arg_8.q
    rbp.b = 1
    rdi = arg_8.q
else
    rbx = *(arg1 + 0x10)
    int64_t r14_1 = 0
    
    if (rbx != 0)
        int32_t rax_2 = rbx[1].d
        
        if (rax_2 != 0)
            rbx[1].d = rax_2 + 1
            rax_2.b = 1
        
        if (rax_2.b == 0)
            rbx = nullptr
        
        if (rbx != 0)
            int32_t rax_3 = rbx[1].d
            r14_1 = *(arg1 + 8)
            rbx[1].d = rax_3
            
            if (rax_3 == 0)
                (**rbx)(rbx)
                int32_t temp6_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx + 8))(rbx, 1)
    
    rdi = *(arg1 + 0x530)
    
    if (rdi != 0)
        int32_t rax_6 = rdi[1].d
        
        if (rax_6 == 0)
            rdi = nullptr
        else
            rdi[1].d = rax_6 + 1
            
            if (rdi != 0)
                rsi = *(arg1 + 0x528)
    
    void var_28
    int64_t rcx_3 = *sub_140ebeb20(rsi, &var_28)
    
    if (rcx_3 == 0 || rcx_3 != r14_1)
        rbp.b = 0
        rsi = 7
    else
        rbp.b = 1
        rsi = 7

if ((rsi.b & 4) != 0)
    rsi = zx.q(rsi.d) & 0xfffffffb
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp2_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_20 + 8))(var_20, 1)

if ((rsi.b & 2) != 0)
    rsi = zx.q(rsi.d) & 0xfffffffd
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp4_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi + 8))(rdi, 1)

if ((rsi.b & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t r8_1 = *rbx
        (*r8_1)(rbx, arg2, r8_1)
        int32_t temp5_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp5_1 == 1)
            int64_t r8_2 = *rbx
            (*(r8_2 + 8))(rbx, 1, r8_2)

return zx.q(rbp.b)
