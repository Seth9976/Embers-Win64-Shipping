// 函数: sub_140e6a720
// 地址: 0x140e6a720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = nullptr
int32_t arg_18 = 0
int64_t* rbx
int32_t rbp
int64_t* rsi
int64_t* rdi

if (arg3 s< 0 || arg3 s>= *(arg1 + 0x2c0))
    rbx = arg5
    rsi = nullptr
    rbp = 2
    rdi = nullptr
else
    int64_t* rax_3 = (sx.q(arg3) << 4) + *(arg1 + 0x2b8)
    rbx = rax_3[1]
    r14 = *rax_3
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rsi = arg5
    rbp = 1
    rdi = rbx
    
    if (rbx != 0)
        rbx[1].d += 1

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t temp2_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rsi + 8))(rsi, 1)

if ((rbp.b & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

char rax_10

if (r14 != 0)
    int64_t var_38 = *arg2
    void* rax_9 = arg2[1]
    void* var_30_1 = rax_9
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
    
    rax_10 = sub_140e6a270(r14, &var_38, arg4)

if (r14 == 0 || rax_10 == 0)
    rbx.b = 0
else
    rbx.b = 1

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        int64_t r8 = *rdi
        (*r8)(rdi, arg4, r8)
        int32_t temp5_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp5_1 == 1)
            int64_t r8_1 = *rdi
            (*(r8_1 + 8))(rdi, 1, r8_1)

return zx.q(rbx.b)
