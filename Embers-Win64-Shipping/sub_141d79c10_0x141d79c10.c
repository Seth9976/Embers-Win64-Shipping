// 函数: sub_141d79c10
// 地址: 0x141d79c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d += 1

void var_18

if (arg1 == &var_18)
label_141d79c7d:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)
else
    *arg1 = *arg2
    int64_t* rsi_1 = arg1[1]
    
    if (rbx == rsi_1)
        goto label_141d79c7d
    
    arg1[1] = rbx
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp4_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)

int64_t* rcx_5 = *arg2 + 0xd0
void arg_8
int32_t* rax_5 = (*(*rcx_5 + 0x10))(rcx_5, &arg_8)
int32_t rcx_6 = *rax_5
arg1[2].d = rcx_6
int32_t rdx_1 = rax_5[1]
*(arg1 + 0x14) = rdx_1

if (rcx_6 == data_143dbb180.d && rdx_1 == data_143dbb180:4.d)
    arg1[2].d = data_143a30330
    int32_t rax_7 = data_143a30334
    int32_t rdx_2 = arg1[2].d
    *(arg1 + 0x14) = rax_7
    sub_142347ba0(*arg2, rdx_2, rax_7)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
