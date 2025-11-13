// 函数: sub_140e6a530
// 地址: 0x140e6a530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = 0
int32_t arg_20 = 0
int64_t* rbx
int64_t* rsi
int64_t* rdi
void* const r12
int32_t r15

if (arg4 s< 0 || arg4 s>= *(arg1 + 0x2c0))
    rbx = arg5
    rsi = nullptr
    r15 = 8
    r12 = nullptr
    rdi = nullptr
else
    int64_t* rax_3 = (sx.q(arg4) << 4) + *(arg1 + 0x2b8)
    rbx = rax_3[1]
    r12 = *rax_3
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rsi = arg5
    r15 = 4
    rdi = rbx
    
    if (rbx != 0)
        rbx[1].d += 1

if ((r15.b & 8) != 0)
    r15 &= 0xfffffff7
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t temp2_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rsi + 8))(rsi, 1)

if ((r15.b & 4) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

char* rax_10
char rcx_5
int32_t rdx_1

if (r12 == 0)
    rcx_5 = 2
    arg_20:1.b = 0
    rdx_1 = 2
    rax_10 = &arg_20
else
    int64_t var_48 = *arg3
    void* rax_9 = arg3[1]
    void* var_40_1 = rax_9
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
    
    rax_10 = sub_140e6a100(r12, &arg_20, &var_48)
    rcx_5 = 1
    rdx_1 = 0
    rbp = 1

arg2[1] = 0

if (rax_10[1] != 0)
    *arg2 = *rax_10
    arg2[1] = 1

if (rdx_1 == 0)
    rbp = rcx_5

if ((rbp & 1) != 0)
    arg_20:1.b = 0

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp6_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rbx_1 = arg3[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp7_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
