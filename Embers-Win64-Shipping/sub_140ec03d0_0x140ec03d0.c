// 函数: sub_140ec03d0
// 地址: 0x140ec03d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x3a8)
int64_t* rdi = *(rax + 0x78)
void* r9 = *(rax + 0x70)

if (rdi != 0)
    rdi[1].d += 1
    rax = *(arg1 + 0x3a8)

int64_t* rbx = *(rax + 0x68)
int64_t rdx = *(rax + 0x60)

if (rbx != 0)
    rbx[1].d += 1
    rax = *(arg1 + 0x3a8)

if (r9 == 0 || rdx == 0)
    sub_140ec2ca0(rax + 0x18, arg2)
else
    int64_t var_18 = rdx
    int64_t* var_10_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    sub_140e69980(r9, arg2, &var_18)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return arg2
