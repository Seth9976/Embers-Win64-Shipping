// 函数: sub_1408ff2f0
// 地址: 0x1408ff2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t rax

if (*arg2 != 0)
    void* rdx = arg2[1]
    
    if (rdx == 0)
        goto label_1408ff328
    
    rax = 0
    
    if (0 == *(rdx + 8))
        *(rdx + 8) = 0
    else
        rax = *(rdx + 8)
    
    if (rax s<= 0)
        goto label_1408ff328
    
    return 

label_1408ff328:
int64_t* rbx_1 = *(arg1 + 8)

if (rbx_1 != 0)
    rbx_1[1].d += 1

*arg2 = arg2
int64_t* rcx = arg2[1]

if (rbx_1 != rcx)
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
        rcx = arg2[1]
    
    if (rcx != 0)
        rax = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (rax == 1)
            (*(*rcx + 8))(rcx, 1)
    
    arg2[1] = rbx_1

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
