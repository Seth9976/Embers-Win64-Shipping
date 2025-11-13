// 函数: sub_140cadcf0
// 地址: 0x140cadcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x1d8))(arg1, &data_1439a4b70)
void* arg_8

if ((arg1[5].b & 2) != 0)
    void* rax_1 = sub_140d3c6e0(&arg2[1])
    arg_8 = rax_1
    
    if (rax_1 != 0)
        sub_1409ad9b0(arg1, &arg2[2], arg3)
    else
        uint64_t var_28 = 0
        int64_t var_20_1 = 0
        sub_1409ad9b0(arg1, &var_28, arg3)
        uint64_t rcx_2 = var_28
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
    
    (*(*arg1 + 0x130))(arg1, &arg_8)
    return arg1

sub_1409ad9b0(arg1, &arg2[2], arg3)

if (arg2[3].d == 1)
    int32_t* rax_4 = arg2[2]
    int32_t rcx_5
    rcx_5.b = rax_4[1] == 0
    
    if ((rcx_5.b & sub_140b5b8a0(*rax_4, 0)) != 0)
        arg2[3].d = 0
        
        if (*(arg2 + 0x1c) != 0)
            sub_140638c50(&arg2[2], 0)

if (sub_140b4e7c0(arg1, &data_1439a4b70) s>= 0x1e)
    arg_8 = sub_140d3c6e0(&arg2[1])
    (*(*arg1 + 0x130))(arg1, &arg_8)
    sub_140d3a3a0(&arg2[1], arg_8)
    
    if (arg_8 == 0)
        arg2[3].d = 0
        
        if (*(arg2 + 0x1c) != 0)
            sub_140638c50(&arg2[2], 0)
else if (arg2[3].d == 0)
    sub_140d3a3a0(&arg_8, nullptr)
    arg2[1] = arg_8
else
    void* rax_10 = (*(*arg1 + 0x18))(arg1)
    void* const rbx_2 = rax_10
    
    if (rax_10 == 0 || *(rax_10 + 0x98) != 1)
        rbx_2 = nullptr
    
    void* rax_11 = sub_140cd04d0(arg2, nullptr, 0)
    
    if (rax_11 == 0 && rbx_2 != 0)
        rax_11 = sub_140cd02e0(arg2)
    
    sub_140d3a3a0(&arg2[1], rax_11)

if ((*(arg1 + 0x2a) & 0x20) == 0)
    *arg2 = 0

return arg1
