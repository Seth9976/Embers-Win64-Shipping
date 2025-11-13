// 函数: sub_140e69720
// 地址: 0x140e69720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
int64_t* rbx
int32_t rbp
int64_t* rsi
int64_t* rdi
void* const r15

if (arg3 s< 0 || arg3 s>= *(arg1 + 0x2c0))
    rbx = arg4
    rsi = nullptr
    r15 = nullptr
    rbp = 8
    rdi = nullptr
else
    int64_t* rax_3 = (sx.q(arg3) << 4) + *(arg1 + 0x2b8)
    rbx = rax_3[1]
    r15 = *rax_3
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rsi = arg4
    rbp = 4
    rdi = rbx
    
    if (rbx != 0)
        rbx[1].d += 1

if ((rbp.b & 8) != 0)
    rbp &= 0xfffffff7
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t temp2_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rsi + 8))(rsi, 1)

if ((rbp.b & 4) != 0)
    rbp &= 0xfffffffb
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx + 8))(rbx, 1)

int128_t var_48
int64_t rax_9
int64_t* rcx_5
int32_t rsi_1

if (r15 == 0)
    rcx_5 = &var_48
    var_48 = zx.o(0)
    rax_9 = 0
    rsi_1 = 2
else
    void var_38
    int64_t* rax_8 = sub_140e660c0(r15, &var_38)
    rcx_5 = rax_8
    rsi_1 = 1
    rax_9 = *rax_8

int32_t rsi_2 = rsi_1 | rbp
*arg2 = rax_9
arg2[1] = rcx_5[1]
rcx_5[1] = 0
*rcx_5 = 0

if ((rsi_2.b & 2) != 0)
    int64_t* rbx_1 = var_48:8.q
    rsi_2 &= 0xfffffffd
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp7_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_30

if ((rsi_2.b & 1) != 0 && var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp9_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp8_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return arg2
