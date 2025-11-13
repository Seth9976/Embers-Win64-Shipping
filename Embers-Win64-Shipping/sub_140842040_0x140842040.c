// 函数: sub_140842040
// 地址: 0x140842040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2 + 0x10

if (arg2 == 0)
    rdi = nullptr

if (rdi == 0)
    return 

int32_t rax

if (*rdi != 0)
    void* rcx = rdi[1]
    
    if (rcx == 0)
        goto label_140842082
    
    rax = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax = *(rcx + 8)
    
    if (rax s<= 0)
        goto label_140842082
    
    return 

label_140842082:
int64_t* rbx_1 = *(arg1 + 8)

if (rbx_1 != 0)
    rbx_1[1].d += 1

*rdi = arg2
int64_t* rcx_1 = rdi[1]

if (rbx_1 != rcx_1)
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
        rcx_1 = rdi[1]
    
    if (rcx_1 != 0)
        rax = *(rcx_1 + 0xc)
        *(rcx_1 + 0xc) -= 1
        
        if (rax == 1)
            (*(*rcx_1 + 8))(rcx_1, 1)
    
    rdi[1] = rbx_1

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t rsi_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (rsi_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))
