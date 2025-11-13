// 函数: sub_140e74da0
// 地址: 0x140e74da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* var_30
int128_t var_28
int64_t* rax_1
void* const rbp
int32_t rsi

if (0 s>= *(arg1 + 0x1a8))
    rax_1 = &var_28
    var_28 = zx.o(0)
    rsi = 2
    rbp = nullptr
else
    int64_t* rax = *(arg1 + 0x1a0)
    int64_t* rcx = rax[1]
    rbp = *rax
    void* const var_38 = rbp
    var_30 = rcx
    
    if (rcx != 0)
        rcx[1].d += 1
    
    rax_1 = &var_38
    rsi = 1

int64_t* rbx = rax_1[1]
rax_1[1] = 0
*rax_1 = 0

if ((rsi.b & 2) != 0)
    int64_t* rdi_1 = var_28:8.q
    rsi &= 0xfffffffd
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp2_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if ((rsi.b & 1) != 0 && var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp5_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

int64_t* result = rbp + 0x1d0

if (result != &var_28)
    *result = 0
    int64_t* rdi_3 = result[1]
    
    if (rdi_3 != 0)
        result[1] = 0
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            result = (**rdi_3)(rdi_3)
            int32_t temp7_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                result = (*(*rdi_3 + 8))(rdi_3, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp6_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp6_1 == 1)
            jump(*(*rbx + 8))

return result
