// 函数: sub_140e6a270
// 地址: 0x140e6a270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
int64_t var_10 = rbp
int32_t rdi = 0
int32_t arg_8 = 0
int64_t* rbx
int64_t* rsi

if (*(arg1 + 0x60) s<= 0)
    rsi = arg_8.q
    rbx = arg_8.q
    rbp.b = 0
else
    int64_t rax_1 = *(arg1 + 0x58)
    int64_t rcx_1 = sx.q(*(arg1 + 0x60)) * 2
    rsi = *(rax_1 + (rcx_1 << 3) - 8)
    rbp = *(rax_1 + (rcx_1 << 3) - 0x10)
    rbx = rsi
    
    if (rsi != 0)
        *(rsi + 0xc) += 1
    
    if (rbx == 0)
    label_140e6a30a:
        rdi = 3
        
        if (sub_140d9c250(arg1 + 0x58, arg2) == 0)
            rbp.b = 0
        else
            rbp.b = 1
    else
        int32_t rax_2 = rsi[1].d
        
        if (rax_2 == 0)
            rbx = nullptr
        else
            rsi[1].d = rax_2 + 1
        
        int32_t temp1_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rsi + 8))(rsi, 1)
        
        rsi = nullptr
        
        if (rbx == 0 || rbp == 0 || rbp != *arg2)
            goto label_140e6a30a
        
        rdi = 3
        rbp.b = 0

if ((rdi.b & 2) != 0)
    rdi &= 0xfffffffd
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp4_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx + 8))(rbx, 1)

if ((rdi.b & 1) != 0 && rsi != 0)
    int32_t temp3_1 = *(rsi + 0xc)
    *(rsi + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*rsi + 8))(rsi, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t r8_1 = *rbx_1
        (*r8_1)(rbx_1, arg3, r8_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            int64_t r8_2 = *rbx_1
            (*(r8_2 + 8))(rbx_1, 1, r8_2)

return zx.q(rbp.b)
