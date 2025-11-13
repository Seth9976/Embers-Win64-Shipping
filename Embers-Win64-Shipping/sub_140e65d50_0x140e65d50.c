// 函数: sub_140e65d50
// 地址: 0x140e65d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = nullptr
int32_t arg_10 = 0
int64_t* rbx
int64_t* rsi
int64_t* rdi
int32_t r14

if (0 s>= *(arg1 + 0x2c0))
    rbx = arg_10.q
    rsi = nullptr
    r14 = 2
    rdi = nullptr
else
    int64_t* rax_1 = *(arg1 + 0x2b8)
    rbx = rax_1[1]
    r15 = *rax_1
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rsi = arg_10.q
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
            int32_t temp3_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rsi + 8))(rsi, 1)

if ((r14.b & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp5_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140e68880(r15, arg2, 0xa)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp4_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return arg2
