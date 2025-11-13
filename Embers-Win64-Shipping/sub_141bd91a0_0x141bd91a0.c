// 函数: sub_141bd91a0
// 地址: 0x141bd91a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143e29f28 == 0 || *(arg1 + 0x200) == 0)
    int64_t* rbx_3 = arg2[2]
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp1_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t result
    result.b = 0
    return result

int64_t var_58 = *arg2
int64_t var_50 = arg2[1]
void* rax_2 = arg2[2]
void* var_48 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

int32_t* arg_18
int32_t* arg_20
sub_140d44bb0(sub_140d449f0(), &var_58, &arg_18, &arg_20)
int32_t* rax_4 = arg_18
int32_t rdx_1

if (rax_4 == 0)
    rdx_1 = 0
else
    rdx_1 = *rax_4

int32_t* rax_5 = arg_20
int32_t rcx_1

if (rax_5 == 0)
    int64_t rax_6 = *arg2
    rcx_1 = 0
    
    if (rax_6 == data_143e1e098)
        rcx_1 = 9
    else if (rax_6 == data_143e1e080)
        rcx_1 = 8
    else if (rax_6 == data_143e1e0b0)
        rcx_1 = 0xa
else
    rcx_1 = *rax_5

int64_t* rbx = arg2[2]
int64_t r9_1 = *arg2
int64_t r10 = arg2[1]
int32_t r8_1 = *(*(arg1 + 0x200) + 8)

if (rbx != 0)
    rbx[1].d += 1

int16_t var_38 = *(arg1 + 0x258)
void** const var_40 = &data_142d7f6a8
char var_36 = 0
int32_t var_34 = r8_1
int64_t var_30 = 0
int64_t var_28 = r9_1
int64_t var_20 = r10

if (rbx != 0)
    rbx[1].d += 1

int32_t var_10 = rdx_1
int32_t var_c = rcx_1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx + 8))(rbx, 1)

char rax_11 = sub_140e7c340(data_143e29f28, &var_40)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx_3 = *rbx
        (*rdx_3)(rbx, rdx_3)
        int32_t temp6_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_2 = arg2[2]
var_40 = &data_142d7f690

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp7_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return zx.q(rax_11)
