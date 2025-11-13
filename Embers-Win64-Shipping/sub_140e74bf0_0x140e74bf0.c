// 函数: sub_140e74bf0
// 地址: 0x140e74bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** var_28
uint128_t var_18
void**** rax_1 = sub_140db50d0(&var_28, sub_140596d10(&var_18, arg3))
int64_t* rbx = rax_1[1]
void*** rbp = *rax_1

if (rbx != 0)
    rbx[1].d += 1

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

int64_t var_38
sub_140da2300(&var_38, arg1 + 0x68, arg2)

if (rbp != 0 && var_38 != 0)
    var_28 = rbp
    int64_t* var_20_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    uint128_t zmm0_1 = var_38.o
    var_18 = zmm0_1
    int64_t* rdi_1 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    sub_140e744d0(arg1 - 0x118, &var_18, &var_28)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            int64_t rdx_4 = *rdi_1
            (*rdx_4)(rdi_1, rdx_4)
            int32_t temp8_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp9_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx + 8))(rbx, 1)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp4_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp5_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return 0
