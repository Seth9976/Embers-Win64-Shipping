// 函数: sub_1425e4100
// 地址: 0x1425e4100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143449c00
arg1[2] = &data_143449c48

if (sub_1425e61d0(&arg1[2]) != 0)
    sub_140b19e60()
    sub_140b25ff0(&data_1439a8bd0, arg1)
    int64_t* var_10 = nullptr
    int64_t var_18
    
    if (&arg1[0xc] != &var_18)
        arg1[0xc] = 0
        var_18 = 0
        sub_1405aeff0(&arg1[0xd], &var_10)
        int64_t* rcx_3 = var_10
        
        if (rcx_3 != 0)
            rcx_3[1].d -= 1
            
            if (rcx_3[1].d == 1)
                int64_t* rbx_1 = var_10
                (**rbx_1)(rbx_1)
                int32_t rax_3 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_3 == 1)
                    int64_t* rcx_5 = var_10
                    (*(*rcx_5 + 8))(rcx_5, 1)

int64_t* rbx_2 = arg1[0xd]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rax_7 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rcx_8 = arg1[0xb]

if (rcx_8 != 0)
    int32_t rsi_1 = *(rcx_8 + 0xc)
    *(rcx_8 + 0xc) -= 1
    
    if (rsi_1 == 1 && rcx_8 != 0)
        (*(*rcx_8 + 8))(rcx_8, zx.q(rsi_1))

DeleteCriticalSection(&arg1[5])
int64_t rcx_10 = arg1[3]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

arg1[2] = &data_142d5ee90

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
