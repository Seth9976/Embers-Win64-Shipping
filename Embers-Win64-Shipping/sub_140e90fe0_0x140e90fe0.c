// 函数: sub_140e90fe0
// 地址: 0x140e90fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2 + 0x10

if (arg2 == 0)
    rdi = nullptr

if (rdi == 0)
    return 

void* rax

if (*rdi != 0)
    rax = rdi[1]

if (*rdi != 0 && rax != 0 && *(rax + 8) s> 0)
    return 

int64_t* rbx_1 = *(arg1 + 8)
rax = arg2 + 8

if (arg2 == 0)
    rax = nullptr

if (rbx_1 != 0)
    rbx_1[1].d += 1

*rdi = rax
int64_t* rcx = rdi[1]

if (rbx_1 != rcx)
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
        rcx = rdi[1]
    
    if (rcx != 0)
        int32_t temp2_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    rdi[1] = rbx_1

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp1_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
