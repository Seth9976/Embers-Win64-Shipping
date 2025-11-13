// 函数: sub_140e961b0
// 地址: 0x140e961b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg4[1]
int64_t arg_8 = 0
int64_t rcx = *arg4

if (rbx != 0)
    rbx[1].d += 1

int64_t* rsi = arg3[1]
int64_t var_28 = *arg3
int64_t* var_20 = rsi

if (rsi != 0)
    rsi[1].d += 1

int64_t var_38 = rcx
int64_t* var_30 = rbx

if (rbx != 0)
    rbx[1].d += 1

sub_140e96a20(arg1, 4, data_143e2a068, arg2, &var_28, &var_38, arg_8, arg8)
*arg1 = &data_142edba70
arg1[0xa].b = arg5
sub_140b58170(&arg_8, "Menu", 1)
void* rcx_3 = arg1[1]
*(rcx_3 + 0x60) = arg6
*(rcx_3 + 0x68) = arg_8

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp2_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rsi + 8))(rsi, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

*arg1 = &data_142edba90
arg1[0xb] = 0
sub_140a96170(&arg1[0xc])
arg1[0xf].b = 0
*(arg1 + 0x79) = arg7
*(arg1 + 0x7a) = 0

if (arg7 != 0)
    sub_140ea24b0(arg1)

int64_t* rbx_1 = arg3[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp6_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg4[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp7_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg1
