// 函数: sub_140e6a880
// 地址: 0x140e6a880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = nullptr
int32_t arg_10 = 0
int64_t* rbx
int64_t* rsi
int64_t* rdi
int32_t r14

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x2c0))
    rbx = arg4
    rsi = nullptr
    r14 = 2
    rdi = nullptr
else
    int64_t* rax_3 = (sx.q(arg2) << 4) + *(arg1 + 0x2b8)
    rbx = rax_3[1]
    rbp = *rax_3
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rsi = arg4
    r14 = 1
    rdi = rbx
    
    if (rbx != 0)
        rbx[1].d += 1

if ((r14.b & 2) != 0)
    r14 &= 0xfffffffd
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t temp2_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rsi + 8))(rsi, 1)

if ((r14.b & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rbp == 0 || *(rbp + 0x138) - *(rbp + 0x164) s<= 0)
    rbx.b = 0
else
    rbx.b = 1

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        int64_t r8_1 = *rdi
        (*r8_1)(rdi, arg3, r8_1)
        int32_t temp5_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp5_1 == 1)
            int64_t r8_2 = *rdi
            (*(r8_2 + 8))(rdi, 1, r8_2)

return zx.q(rbx.b)
