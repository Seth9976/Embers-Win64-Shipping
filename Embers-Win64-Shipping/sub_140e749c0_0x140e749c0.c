// 函数: sub_140e749c0
// 地址: 0x140e749c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg3
int32_t i_1 = arg3[1].d
void*** var_58 = nullptr
int32_t i_2 = i_1

if (i_1 != 0)
    sub_1405a4be0(&var_58, i_1, 0)
    void*** rbx_1 = var_58
    int32_t i
    
    do
        *rbx_1 = nullptr
        int32_t rbp_1 = *(rdi + 8)
        int64_t r15_1 = *rdi
        rbx_1[1].d = rbp_1
        
        if (rbp_1 != 0)
            sub_1405a4c70(rbx_1, rbp_1, 0)
            memcpy(*rbx_1, r15_1, rbp_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    int32_t var_4c_1 = 0

uint128_t var_38
void**** rax = sub_140db4d20(&var_38, &var_58)
int64_t* rbx_2 = rax[1]
void*** rbp_2 = *rax

if (rbx_2 != 0)
    rbx_2[1].d += 1

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp2_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

int64_t var_48
sub_140da2300(&var_48, arg1 + 0x68, arg2)

if (rbp_2 != 0 && var_48 != 0)
    var_58 = rbp_2
    i_2.q = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    uint128_t zmm0_1 = var_48.o
    var_38 = zmm0_1
    int64_t* rdi_2 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    sub_140e744d0(arg1 - 0x118, &var_38, &var_58)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            int64_t rdx_6 = *rdi_2
            (*rdx_6)(rdi_2, rdx_6)
            int32_t temp9_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp10_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp5_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return 0
