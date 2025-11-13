// 函数: sub_140f06100
// 地址: 0x140f06100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = nullptr
int64_t rcx = 0
int64_t* rbx = *(arg1 + 0x10)

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx = *(arg1 + 8)

int64_t var_18 = rcx

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    rbx[1].d = rax_2
    
    if (rax_2 == 0)
        (**rbx)(rbx)
        int32_t temp0_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = *(arg1 + 0x4d0)

if (rbx_1 != 0)
    int32_t rax_5 = rbx_1[1].d
    
    if (rax_5 != 0)
        rbx_1[1].d = rax_5 + 1
        rax_5.b = 1
    
    if (rax_5.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rbp = *(arg1 + 0x4c8)

char rax_6 = sub_140ec2a10(rbp, &var_18)
char rdx_1 = data_1439ae51e

if (rax_6 != 0)
    rdx_1 = data_1439ae51c

*arg2 = rdx_1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
