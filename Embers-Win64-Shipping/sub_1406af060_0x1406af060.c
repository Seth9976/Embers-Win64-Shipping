// 函数: sub_1406af060
// 地址: 0x1406af060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_1 = *(arg1 + 0x70)
*(arg1 + 0x70) = 0

if (i_1 == 0)
    return 

int64_t* i

do
    i = i_1[1]
    int64_t* var_18
    (*(*i_1 + 0x10))(i_1, &var_18)
    
    if (*(arg1 + 8) != 4 || i_1[4].b != 0)
        sub_1406af1f0(var_18, i_1)
    else
        int64_t* rcx_1 = var_18
        
        if (*(arg1 + 0x10) == 0)
            void* rdx_2
            rdx_2.b = 1
            (*(*rcx_1 + 8))(rcx_1, rdx_2, 0, 0, &rcx_1[2])
            (**i_1)(i_1, 1)
        else
            int64_t r9_1
            r9_1.b = 1
            (*(*rcx_1 + 8))(rcx_1, 1, 1, r9_1, arg1 + 0x10)
            (**i_1)(i_1, 1)
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t rax = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (rax == 1)
                (*(*var_10 + 8))(var_10)
    
    i_1 = i
while (i != 0)
