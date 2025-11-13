// 函数: sub_140ac1cd0
// 地址: 0x140ac1cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(*arg2 + 8)
char* r8

if ((rdi[5].b & 2) != 0)
    char arg_8 = 3
    int64_t* rdx = rdi[1]
    r8 = *rdx
    
    if (&r8[1] u> rdx[1])
        (*(*rdi + 0x150))(rdi, &arg_8, 1)
    else
        arg_8 = *r8
        int64_t* rax_3 = rdi[1]
        *rax_3 += 1

char rax_5 = rdi[5].b
int32_t rdi_1 = 0
int64_t* r14_1

if ((rax_5 & 2) != 0)
    void var_30
    arg3 = sub_140ab1ed0(arg1 + 0x10, &var_30)
    int64_t* rcx_2 = *(*arg2 + 8)
    (*(*rcx_2 + 0x138))(rcx_2, &var_30)
    int64_t* var_28
    r14_1 = var_28
    
    if (r14_1 != 0)
    label_140ac1e33:
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t rsi_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*r14_1 + 8))(r14_1, zx.q(rsi_1))
else if ((rax_5 & 1) != 0)
    sub_1405d9400()
    int64_t var_48 = data_143cd6fd8
    int64_t* rcx_4 = data_143cd6fe0
    
    if (rcx_4 != 0)
        rcx_4[1].d += 1
    
    int32_t var_38_1 = 0
    int64_t* rcx_5 = *(*arg2 + 8)
    (*(*rcx_5 + 0x138))(rcx_5, &var_48)
    char* var_58
    char** rax_10
    rax_10, r8, arg3 = sub_140a96390(&var_58, &var_48)
    char* rdx_6 = *(arg1 + 0x10)
    *(arg1 + 0x10) = *rax_10
    *rax_10 = rdx_6
    int64_t rdx_7 = *(arg1 + 0x18)
    *(arg1 + 0x18) = rax_10[1]
    rax_10[1] = rdx_7
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t rax_13 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (rax_13 == 1)
                (*(*var_50 + 8))(var_50, 1)
    
    r14_1 = rcx_4
    
    if (r14_1 != 0)
        goto label_140ac1e33
int32_t arg_10 = *(arg1 + 0x28)
int64_t* r9 = *(*arg2 + 8)
int64_t* rcx_13 = r9[1]
int32_t* rdx_9 = *rcx_13

if (&rdx_9[1] u> rcx_13[1])
    int32_t* rdx_10 = &arg_10
    
    if ((*(r9 + 0x29) & 0x20) != 0)
        sub_140b54070(r9, rdx_10, arg3)
    else
        (*(*r9 + 0x150))(r9, rdx_10, 4)
else
    arg_10 = *rdx_9
    int64_t* rax_22 = r9[1]
    *rax_22 += 4

int64_t* result = *arg2

if ((*(result[1] + 0x28) & 1) != 0)
    r8.b = 1
    result, arg3 = sub_140ac4f80(arg1 + 0x20, arg_10, r8.b)

if (arg_10 s> 0)
    do
        result, arg3 = sub_140a9a140(arg2, (sx.q(rdi_1) << 6) + *(arg1 + 0x20), arg3)
        rdi_1 += 1
    while (rdi_1 s< arg_10)

return result
