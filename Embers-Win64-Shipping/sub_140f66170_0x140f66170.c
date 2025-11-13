// 函数: sub_140f66170
// 地址: 0x140f66170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t var_2b8
void*** var_2a8
int64_t* rax_4
int32_t rsi_1
void** var_298

if (arg6[1].d == 0)
    rax_4 = sub_140ef7690(&var_2a8, arg2, sub_140ddd070(&var_298, arg3))
    rsi_1 = 2
else
    int64_t* rcx = *arg6
    
    if (rcx == 0)
        rax_4 = sub_140ef7690(&var_2a8, arg2, sub_140ddd070(&var_298, arg3))
        rsi_1 = 2
    else if ((*(*rcx + 0x28))(rcx) == 0)
        rax_4 = sub_140ef7690(&var_2a8, arg2, sub_140ddd070(&var_298, arg3))
        rsi_1 = 2
    else
        int64_t* rcx_1
        
        if (arg6[1].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *arg6
        
        (*(*rcx_1 + 0x48))(rcx_1, &var_2b8, arg2, arg3)
        rax_4 = &var_2b8
        rsi_1 = 1
*arg1 = *rax_4
void* rax_6 = rax_4[1]
arg1[1] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

int64_t* var_2a0

if ((rsi_1.b & 2) != 0)
    rsi_1 &= 0xfffffffd
    
    if (var_2a0 != 0)
        var_2a0[1].d -= 1
        
        if (var_2a0[1].d == 1)
            (**var_2a0)(var_2a0)
            int32_t temp2_1 = *(var_2a0 + 0xc)
            *(var_2a0 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_2a0 + 8))(var_2a0, 1)

int64_t* var_2b0

if ((rsi_1.b & 1) != 0 && var_2b0 != 0)
    var_2b0[1].d -= 1
    
    if (var_2b0[1].d == 1)
        (**var_2b0)(var_2b0)
        int32_t temp3_1 = *(var_2b0 + 0xc)
        *(var_2b0 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_2b0 + 8))(var_2b0, 1)

arg1[2] = *arg7
void* rax_12 = arg7[1]
arg1[3] = rax_12

if (rax_12 != 0)
    *(rax_12 + 8) += 1

void**** rax_13 = sub_140ef7610(&var_2a8)
arg1[4] = *rax_13
void* rcx_11 = rax_13[1]
arg1[5] = rcx_11

if (rcx_11 != 0)
    *(rcx_11 + 8) += 1

if (var_2a0 != 0)
    var_2a0[1].d -= 1
    
    if (var_2a0[1].d == 1)
        (**var_2a0)(var_2a0)
        int32_t temp5_1 = *(var_2a0 + 0xc)
        *(var_2a0 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_2a0 + 8))(var_2a0, 1)

arg1[6] = 0
arg1[7].d = 0
*(arg1 + 0x3c) = 0
sub_140a98020(&arg1[8])
sub_140a98020(&arg1[0xb])

if (arg4[1] != 0)
    sub_140f17cc0(*arg1, *arg4)

if (arg5[1] != 0)
    sub_140f17c30(*arg1, *arg5)

var_2b8 = *arg8
int64_t rax_17 = arg8[1]
arg8[1] = 0
*arg8 = 0
int64_t var_2b0_1 = rax_17
sub_140f15ea0(*arg1, &var_2b8)
sub_140de06c0(arg3)

if (arg4[1] != 0)
    arg4[1] = 0

if (arg5[1] != 0)
    arg5[1] = 0

int64_t* rdi_5 = arg7[1]

if (rdi_5 != 0)
    rdi_5[1].d -= 1
    
    if (rdi_5[1].d == 1)
        (**rdi_5)(rdi_5)
        int32_t temp8_1 = *(rdi_5 + 0xc)
        *(rdi_5 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rdi_5 + 8))(rdi_5, 1)

int64_t* rdi_6 = arg8[1]

if (rdi_6 != 0)
    rdi_6[1].d -= 1
    
    if (rdi_6[1].d == 1)
        (**rdi_6)(rdi_6)
        int32_t temp9_1 = *(rdi_6 + 0xc)
        *(rdi_6 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rdi_6 + 8))(rdi_6, 1)

return arg1
