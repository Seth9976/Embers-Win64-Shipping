// 函数: sub_140ac2bf0
// 地址: 0x140ac2bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(*arg2 + 8)

if ((rdi[5].b & 2) != 0)
    char arg_8 = 1
    int64_t* rdx = rdi[1]
    char* r8_1 = *rdx
    
    if (&r8_1[1] u> rdx[1])
        (*(*rdi + 0x150))(rdi, &arg_8, 1)
    else
        arg_8 = *r8_1
        int64_t* rax_3 = rdi[1]
        *rax_3 += 1

char rax_5 = rdi[5].b
int64_t* rsi_1

if ((rax_5 & 2) != 0)
    void var_20
    arg3 = sub_140ab1ed0(arg1 + 0x10, &var_20)
    int64_t* rcx_2 = *(*arg2 + 8)
    (*(*rcx_2 + 0x138))(rcx_2, &var_20)
    int64_t* var_18
    rsi_1 = var_18
    
    if (rsi_1 != 0)
    label_140ac2d57:
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t rdi_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, zx.q(rdi_1))
else if ((rax_5 & 1) != 0)
    sub_1405d9400()
    int64_t var_38 = data_143cd6fd8
    int64_t* rcx_4 = data_143cd6fe0
    
    if (rcx_4 != 0)
        rcx_4[1].d += 1
    
    int32_t var_28_1 = 0
    int64_t* rcx_5 = *(*arg2 + 8)
    (*(*rcx_5 + 0x138))(rcx_5, &var_38)
    char* var_48
    char** rax_10
    rax_10, arg3 = sub_140a96390(&var_48, &var_38)
    char* rdx_6 = *(arg1 + 0x10)
    *(arg1 + 0x10) = *rax_10
    *rax_10 = rdx_6
    int64_t rdx_7 = *(arg1 + 0x18)
    *(arg1 + 0x18) = rax_10[1]
    rax_10[1] = rdx_7
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t rax_13 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rax_13 == 1)
                (*(*var_40 + 8))(var_40, 1)
    
    rsi_1 = rcx_4
    
    if (rsi_1 != 0)
        goto label_140ac2d57
sub_140a9a670(arg2, arg1 + 0x20, arg3)
void* result = *arg2

if ((*(*(result + 8) + 0x28) & 1) == 0)
    return result

int64_t rcx_15 = *(arg1 + 0x60)

if (rcx_15 != 0)
    *(arg1 + 0x60) = sub_140a84c80(rcx_15, 0, 0)

*(arg1 + 0x68) = 0
return sub_140aa4d20(arg1 + 0x20, *(arg1 + 0x28) - *(arg1 + 0x54), 0) __tailcall
