// 函数: sub_140f771b0
// 地址: 0x140f771b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0

if (*(arg1 + 8) == 0)
    *arg2 = 0
    arg2[1] = 0
    return arg2

int64_t* rbx = *(arg1 + 0x18)
int64_t* rax_1 = rbx

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    
    if (rax_2 == 0)
        rbx = nullptr
        rax_1 = nullptr
    else
        rbx[1].d = rax_2 + 1
        rax_1 = rbx

void* rcx

if (rax_1 != 0)
    rcx = *(arg1 + 0x10)

int128_t var_28
int64_t rax_5
int64_t* rcx_1
int32_t rbp

if (rax_1 == 0 || rcx == 0)
    rcx_1 = &var_28
    var_28 = zx.o(0)
    rbp = 2
    rax_5 = 0
else
    void var_18
    int64_t* rax_4 = sub_140e152a0(rcx, &var_18)
    rcx_1 = rax_4
    rbp = 1
    rax_5 = *rax_4

*arg2 = rax_5
arg2[1] = rcx_1[1]
rcx_1[1] = 0
*rcx_1 = 0

if ((rbp.b & 2) != 0)
    int64_t* rdi_1 = var_28:8.q
    rbp &= 0xfffffffd
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_10

if ((rbp.b & 1) != 0 && var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp5_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
