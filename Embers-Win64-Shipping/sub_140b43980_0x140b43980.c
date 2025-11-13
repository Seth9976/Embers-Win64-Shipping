// 函数: sub_140b43980
// 地址: 0x140b43980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void var_58
int64_t* rax = sub_140b3a6e0(arg1, &var_58, arg2)
int64_t* rbx = rax[1]
void* rbp = *rax

if (rbx != 0)
    rbx[1].d += 1

int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t rax_4 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (rax_4 == 1)
            (*(*var_50 + 8))(var_50, 1)

int64_t* rdi

if (rbp != 0)
    int64_t var_48
    int64_t* rax_7 = sub_140b63b70(&arg_10, &var_48)
    
    if (arg3 != rax_7)
        int64_t rcx_3 = *arg3
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        *arg3 = *rax_7
        *rax_7 = 0
        arg3[1].d = rax_7[1].d
        *(arg3 + 0xc) = *(rax_7 + 0xc)
        rax_7[1] = 0
    
    int64_t rcx_5 = var_48
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t var_38
    uint64_t rax_10 = sub_140b11c80(&var_38, rbp + 0x10)
    rdi = rax_10
    
    if (&arg3[2] != rax_10)
        int64_t rcx_7 = arg3[2]
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        arg3[2] = *rdi
        *rdi = 0
        arg3[3].d = rdi[1].d
        *(arg3 + 0x1c) = *(rdi + 0xc)
        rdi[1] = 0
    
    int64_t rcx_9 = var_38
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int64_t rcx_10 = *(rbp + 0x28)
    rax_10.b = rcx_10 != 0
    arg3[4].b = rax_10.b
    
    if (rcx_10 != 0)
        int64_t* rcx_11 = *(rbp + 0x28)
        *(arg3 + 0x21) = (*(*rcx_11 + 0x38))(rcx_11)
    
    rdi.b = 1
else
    rdi.b = 0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_2 = *rbx
            (*(r8_2 + 8))(rbx, zx.q(rsi_1), r8_2)

return zx.q(rdi.b)
