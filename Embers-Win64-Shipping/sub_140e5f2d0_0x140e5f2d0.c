// 函数: sub_140e5f2d0
// 地址: 0x140e5f2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t r11 = sx.q(arg3)
int32_t arg_8 = 0
int32_t* rcx_3

if (*(arg1 + 0x138) == *(arg1 + 0x164))
label_140e5f352:
    rcx_3 = nullptr
else
    void* r10_1 = arg1 + 0x168
    void* r9_1 = *(r10_1 + 8)
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    int32_t rax_1 = *(r10_1 + (((sx.q(*(arg1 + 0x178)) - 1) & r11) << 2))
    
    if (rax_1 == 0xffffffff)
    label_140e5f352_1:
        rcx_3 = nullptr
    else
        while (true)
            rcx_3 = sx.q(rax_1) * 0x30 + *(arg1 + 0x130)
            
            if (*rcx_3 == r11.d)
                break
            
            rax_1 = rcx_3[0xa]
            
            if (rax_1 == 0xffffffff)
                goto label_140e5f352_2
        
        if (rax_1 == 0xffffffff)
        label_140e5f352_2:
            rcx_3 = nullptr

int64_t rbp
int64_t arg_10 = rbp
void* rax_2 = &rcx_3[2]

if (rcx_3 == 0)
    rax_2 = nullptr

int64_t* rbx
int64_t* rdi

if (rax_2 == 0)
    rbx = arg_8.q
    rdi = arg_8.q
    rbp.b = 0
else
    int64_t rax_3 = *rax_2
    int64_t rcx_5 = sx.q(*(rax_2 + 8)) * 2
    rdi = *(rax_3 + (rcx_5 << 3) - 8)
    int64_t r14_1 = *(rax_3 + (rcx_5 << 3) - 0x10)
    rbx = rdi
    
    if (rdi != 0)
        *(rdi + 0xc) += 1
    
    rbp = 0
    
    if (rbx != 0)
        int32_t rax_4 = rdi[1].d
        
        if (rax_4 == 0)
            rbx = nullptr
        else
            rdi[1].d = rax_4 + 1
        
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)
        
        rdi = nullptr
        
        if (rbx != 0)
            rbp = r14_1
    
    rsi = 3
    
    if (rbp != *arg2)
        rbp.b = 0
    else
        rbp.b = 1

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp4_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx + 8))(rbx, 1)

if ((rsi.b & 1) != 0 && rdi != 0)
    int32_t temp3_1 = *(rdi + 0xc)
    *(rdi + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*rdi + 8))(rdi, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t r8_4 = *rbx_1
        (*r8_4)(rbx_1, arg4, r8_4)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            int64_t r8_5 = *rbx_1
            (*(r8_5 + 8))(rbx_1, 1, r8_5)

return zx.q(rbp.b)
