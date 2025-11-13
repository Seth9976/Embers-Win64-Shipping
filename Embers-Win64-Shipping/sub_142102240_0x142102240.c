// 函数: sub_142102240
// 地址: 0x142102240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t r8 = *arg2
int64_t var_40 = r8
int64_t* var_38 = rbx

if (rbx != 0)
    rbx[1].d += 1

int64_t var_58 = r8
void** const var_48 = &data_142e259e0
int64_t* rdi = rbx
int64_t var_30 = 0
int64_t var_28 = 0

if (rbx != 0)
    rbx[1].d += 1

if (&var_58 != arg1 + 0x50)
    var_58.o = *(arg1 + 0x50)
    rdi = rbx
    *(arg1 + 0x50) = var_58.o

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* result = sub_14081d8c0(arg1 + 0x60, &var_30)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
