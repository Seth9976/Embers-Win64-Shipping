// 函数: sub_140e5a5e0
// 地址: 0x140e5a5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
int64_t* var_20
int128_t var_18
int64_t* rax_1
void* const rbp
int32_t rsi

if (0 s>= *(arg1 + 0x2c0))
    rax_1 = &var_18
    var_18 = zx.o(0)
    rsi = 2
    rbp = nullptr
else
    int64_t* rax = *(arg1 + 0x2b8)
    int64_t* rcx = rax[1]
    rbp = *rax
    void* const var_28 = rbp
    var_20 = rcx
    
    if (rcx != 0)
        rcx[1].d += 1
    
    rax_1 = &var_28
    rsi = 1

int64_t* rbx = rax_1[1]
rax_1[1] = 0
*rax_1 = 0

if ((rsi.b & 2) != 0)
    int64_t* rdi_1 = var_18:8.q
    rsi &= 0xfffffffd
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if ((rsi.b & 1) != 0 && var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp5_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

void** result = sub_140e5a710(rbp)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            jump(*(*rbx + 8))

return result
