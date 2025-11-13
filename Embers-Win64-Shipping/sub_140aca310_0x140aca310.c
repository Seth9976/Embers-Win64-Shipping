// 函数: sub_140aca310
// 地址: 0x140aca310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
int64_t* rax_1 = (*(*rcx + 0x28))(rcx)
int64_t* rcx_1 = *arg2
int64_t r9 = *rcx_1
int64_t* rax_2 = (*(r9 + 0x10))(rcx_1, arg4, arg5, r9)
int32_t* const rdx_2
int32_t r8_3
int64_t var_18

if (((arg2[2].d u>> 1).b & 1) == 0)
    int64_t* rcx_7 = *arg2
    char result = (*(*rax_1 + 0x40))(rax_1, arg1, (*(*rcx_7 + 0x18))(rcx_7, &var_18))
    
    if (result != 0)
        return result
    
    if (arg3 == 0)
        int32_t rax_7 = rax_2[1].d
        r8_3 = rax_7 - 1
        
        if (rax_7 == 0)
            r8_3 = 0
        
        rdx_2 = *rax_2
    else
        sub_140a20ba0(arg1, &data_142d4056c, 1)
        int64_t* rax_6 = sub_140a30480(rax_2, &var_18, nullptr)
        int32_t rcx_11 = rax_6[1].d
        int32_t r8_2 = rcx_11 - 1
        
        if (rcx_11 == 0)
            r8_2 = 0
        
        sub_140a20ba0(arg1, *rax_6, r8_2)
        int64_t rcx_13 = var_18
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        r8_3 = 1
        rdx_2 = &data_142d4056c
else
    sub_140a20ba0(arg1, u"INVTEXT("", 9)
    int64_t* rax_3 = sub_140a30480(rax_2, &var_18, nullptr)
    int32_t rcx_4 = rax_3[1].d
    int32_t r8 = rcx_4 - 1
    
    if (rcx_4 == 0)
        r8 = 0
    
    sub_140a20ba0(arg1, *rax_3, r8)
    int64_t rcx_6 = var_18
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    r8_3 = 2
    rdx_2 = &data_142e6463c
return sub_140a20ba0(arg1, rdx_2, r8_3)
