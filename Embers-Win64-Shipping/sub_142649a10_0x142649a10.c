// 函数: sub_142649a10
// 地址: 0x142649a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = data_143f714b0
sub_140b34200("AsyncNavQueryFinished", r14)
int64_t* rbx = *(arg1 + 0xb0)
int64_t rdi = *(arg1 + 0xa8)

if (rbx != 0)
    rbx[1].d += 1

int32_t r15 = *(arg1 + 0xb8)
int32_t r12 = *(arg1 + 0x88)

if (*(arg1 + 0x98) != 0)
    int64_t* rcx = *(arg1 + 0x90)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x98) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x90)
        
        int64_t var_28 = rdi
        int64_t* var_20_1 = rbx
        
        if (rbx != 0)
            rbx[1].d += 1
        
        (*(*rcx_1 + 0x50))(rcx_1, zx.q(r12), zx.q(r15), &var_28)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_1))

sub_140b38680("AsyncNavQueryFinished", r14)
return sub_142645160(arg1) __tailcall
