// 函数: sub_141b31990
// 地址: 0x141b31990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a4b70)
int32_t rax_1

if ((arg2[5].b & 1) != 0)
    rax_1, arg3 = sub_140b4e7c0(arg2, &data_1439a4b70)

void* arg_8

if ((arg2[5].b & 1) == 0 || rax_1 s>= 8)
    (*(*arg2 + 0x110))(arg2, arg1)
else
    int64_t rax_2 = *arg2
    arg_8 = nullptr
    (*(rax_2 + 0x130))(arg2, &arg_8)
    int64_t var_28
    arg3 = sub_140d15b50(&var_28, arg_8)
    *arg1 = var_28
    int64_t var_20
    
    if (&arg1[1] == &var_20)
        int64_t rcx_5 = var_20
        
        if (rcx_5 != 0)
            arg3 = sub_140a74f90(rcx_5)
    else
        int64_t rcx_4 = arg1[1]
        
        if (rcx_4 != 0)
            arg3 = sub_140a74f90(rcx_4)
        
        arg1[1] = var_20
        int32_t var_18
        arg1[2].d = var_18
        int32_t var_14
        *(arg1 + 0x14) = var_14

(*(*arg2 + 8))(arg2, sx.q(arg1[4].d), sx.q(*(arg1 + 0x24)))
int32_t rax_9

if ((arg2[5].b & 1) == 0)
    rax_9 = arg1[4].d
else
    rax_9 = 0

int64_t* rcx_8 = arg2[1]
arg_8.d = rax_9
int32_t* rdx_4 = *rcx_8

if (&rdx_4[1] u> rcx_8[1])
    void** rdx_5 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_5, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_5, 4)
else
    arg_8.d = *rdx_4
    *rcx_8 += 4

int32_t rcx_12 = arg_8.d
uint32_t rax_11

if (rcx_12 != 0)
    rax_11 = zx.d(*(arg2 + 0x29))
    
    if ((rax_11.b & 1) == 0 && rcx_12 s> 0 && ((*(arg2 + 0x2b) & 8) == 0 || rcx_12 s<= 0x1000000))
        arg1[4].d = rcx_12
        
        if ((arg2[5].b & 1) != 0)
            sub_1405da9e0(&arg1[3], rcx_12, *(arg1 + 0x24))
            rcx_12 = arg1[4].d
        
        (*(*arg2 + 0x150))(arg2, arg1[3], sx.q(rcx_12))
        int64_t rax_15
        rax_15.b = 1
        return rax_15
    
    rax_11.b |= 1
    *(arg2 + 0x29) = rax_11.b
else if ((arg2[5].b & 1) != 0)
    arg1[4].d = rcx_12
    
    if (*(arg1 + 0x24) != rcx_12)
        sub_1405c5510(&arg1[3], 0)
        int64_t rax_13
        rax_13.b = 1
        return rax_13

rax_11.b = 1
return rax_11
