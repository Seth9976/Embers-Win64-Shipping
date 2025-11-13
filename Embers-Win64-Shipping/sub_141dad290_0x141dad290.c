// 函数: sub_141dad290
// 地址: 0x141dad290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x60]
int64_t rbp = arg1[0x5f]

if (rdi != 0)
    rdi[1].d += 1

int64_t var_48 = *arg2
void* rax_1 = arg2[1]
void* var_40 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_141daee30(arg1, 1, 3, &var_48)
int32_t rax_3

if (arg4 != 0)
    int64_t* rcx = *arg3
    rax_3 = (*(*rcx + 0x40))(rcx)

if (arg4 != 0 && rax_3 == 0xcc)
    goto label_141dad376

int64_t var_38 = *arg3
void* rax_5 = arg3[1]
void* var_30_1 = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

int64_t var_28 = rbp
int64_t* var_20_1 = rdi

if (rdi != 0)
    rdi[1].d += 1

int32_t result = sub_141daeec0(arg1, &var_28, &var_38, 0, arg5)

if (result.b == 0)
    (*(*arg1 + 0x198))(arg1)
    *(arg1 + 0x29c) = 1
label_141dad376:
    (*(arg1[0x16] + 0xa0))(&arg1[0x16], 0)
    result = (*(arg1[0x16] + 0xa8))(&arg1[0x16], 0)
    arg1[0x29].d = 0
    
    if (*(arg1 + 0x14c) != 0)
        result = sub_1405c5510(&arg1[0x28], 0)
    
    arg1[0x2a].d = 0
    arg1[0x47].d = 0
    arg1[0x41].d = 0
    
    if (*(arg1 + 0x20c) != 0)
        result = sub_1405947f0(&arg1[0x40], 0)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        result = (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rdi + 8))(rdi, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rdi_1 = arg3[1]

if (rdi_1 != 0)
    result = rdi_1[1].d
    rdi_1[1].d -= 1
    
    if (result == 1)
        result = (**rdi_1)(rdi_1)
        int32_t rbx_2 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rbx_2 == 1)
            return (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_2))

return result
