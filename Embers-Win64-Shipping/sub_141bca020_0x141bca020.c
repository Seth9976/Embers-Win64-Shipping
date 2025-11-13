// 函数: sub_141bca020
// 地址: 0x141bca020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143e29f28 == 0 || *(arg1 + 0x200) == 0)
    int64_t* rbx_5 = arg2[2]
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp1_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    void* const* result
    result.b = 0
    return result

void** const var_80 = *arg2
int64_t var_78 = arg2[1]
void* rax_2 = arg2[2]
void* var_70 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

int32_t* var_88
int32_t* arg_20
sub_140d44bb0(sub_140d449f0(), &var_80, &var_88, &arg_20)
int32_t* rax_4 = arg_20
int32_t* rcx_1 = var_88
int64_t r14
r14.b = rax_4 != 0
int32_t rdx_1

if (rcx_1 == 0)
    rdx_1 = 0
else
    rdx_1 = *rcx_1

int32_t rsi

if (rax_4 == 0)
    int64_t rax_5 = *arg2
    rsi = 0
    
    if (rax_5 == data_143e1e098)
        rsi = 9
        r14.b = 1
    else if (rax_5 == data_143e1e080)
        rsi = 8
        r14.b = 1
    else if (rax_5 == data_143e1e0b0)
        rsi = 0xa
        r14.b = 1
else
    rsi = *rax_4

int64_t* rbx = arg2[2]
int64_t r8_1 = *arg2
int64_t r9_1 = arg2[1]
int32_t rcx_2 = *(*(arg1 + 0x200) + 8)

if (rbx != 0)
    rbx[1].d += 1

int16_t var_58 = *(arg1 + 0x258)
void** const var_60 = &data_142d7f6a8
char var_56 = arg3
int32_t var_54 = rcx_2
int64_t var_50 = 0
int64_t var_48 = r8_1
int64_t var_40 = r9_1

if (rbx != 0)
    rbx[1].d += 1

int32_t var_30 = rdx_1
int32_t var_2c = rsi

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

char rax_10 = sub_140e7bd40(data_143e29f28, &var_60)

if (r14.b == 0)
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp7_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    int64_t* rbx_4 = arg2[2]
    var_60 = &data_142d7f690
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp10_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    return zx.q(rax_10)

var_78.w = *(arg1 + 0x258)
var_78:4.d = *(*(arg1 + 0x200) + 8)
int64_t* rcx_7 = data_143e29f28
var_80 = &data_142ecfd70
var_78:2.b = arg3
int64_t var_70_1 = 0
int16_t var_68_1 = rsi.w
char rax_13 = sub_140e7baa0(rcx_7, &var_80)
var_80 = &data_142d7f690

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx_4 = *rbx
        (*rdx_4)(rbx, rdx_4)
        int32_t temp9_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_2 = arg2[2]
var_60 = &data_142d7f690

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp11_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return zx.q(rax_13)
