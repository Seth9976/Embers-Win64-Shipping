// 函数: sub_14092aac0
// 地址: 0x14092aac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg3 + 0x98)
*(arg3 + 0xe0) = 2

if (rsi == 0 || arg4 == 0)
    return 0xffffffff

void* rbx = *(arg4 + 0x98)

if (rbx == 0)
    return 0xffffffff

sub_140597df0(rsi + 0x30, rbx + 0x30)
*(rsi + 0x40) = *(rbx + 0x40)
int64_t* rcx_1 = *(rbx + 8)
void var_28
int64_t* rax_2 = (*(*rcx_1 + 0x98))(rcx_1, &var_28)
int64_t* rcx_2 = rax_2[1]

if (rcx_2 != 0)
    rcx_2[1].d += 1

void var_18

if (rsi + 8 == &var_18)
label_14092ab7c:
    
    if (rcx_2 != 0)
        rcx_2[1].d -= 1
        
        if (rcx_2[1].d == 1)
            (**rcx_2)(rcx_2)
            int32_t temp2_1 = *(rcx_2 + 0xc)
            *(rcx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_2 + 8))(rcx_2, 1)
else
    *(rsi + 8) = *rax_2
    int64_t* rbx_1 = *(rsi + 0x10)
    
    if (rcx_2 == rbx_1)
        goto label_14092ab7c
    
    *(rsi + 0x10) = rcx_2
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp4_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

return 0
