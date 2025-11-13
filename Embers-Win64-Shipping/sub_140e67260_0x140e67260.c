// 函数: sub_140e67260
// 地址: 0x140e67260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* rcx = *(arg1 + 0x600)
int32_t rax_1 = (*(*rcx + 8))(rcx)
int64_t* rbx_1
int32_t rbp
int64_t* rsi
int64_t* rdi
void* const r15

if (rax_1 s< 0 || rax_1 s>= *(arg1 + 0x2c0))
    rbx_1 = arg_8.q
    rsi = nullptr
    r15 = nullptr
    rbp = 8
    rdi = nullptr
else
    int64_t* rax_4 = (sx.q(rax_1) << 4) + *(arg1 + 0x2b8)
    rbx_1 = rax_4[1]
    r15 = *rax_4
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    rsi = arg_8.q
    rbp = 4
    rdi = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1

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
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int128_t var_38
int64_t rax_10
int64_t* rcx_6
int32_t rsi_1

if (r15 == 0)
    rcx_6 = &var_38
    var_38 = zx.o(0)
    rax_10 = 0
    rsi_1 = 2
else
    void var_28
    int64_t* rax_9 = sub_140e660c0(r15, &var_28)
    rcx_6 = rax_9
    rsi_1 = 1
    rax_10 = *rax_9

*arg2 = rax_10
int32_t rsi_2 = rsi_1 | rbp
arg2[1] = rcx_6[1]
rcx_6[1] = 0
*rcx_6 = 0

if ((rsi_2.b & 2) != 0)
    int64_t* rbx_2 = var_38:8.q
    rsi_2 &= 0xfffffffd
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp7_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* var_20

if ((rsi_2.b & 1) != 0 && var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp9_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp8_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return arg2
