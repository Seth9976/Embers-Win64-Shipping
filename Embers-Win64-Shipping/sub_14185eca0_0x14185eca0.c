// 函数: sub_14185eca0
// 地址: 0x14185eca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x10)
void* rcx = arg2 + 0x20

if (rax != 0)
    rcx = rax

int64_t* var_18
int64_t* rax_3 = (*arg2)(&var_18, (*(*rcx + 8))(rcx))
int64_t* rcx_2 = *rax_3
*rax_3 = 0
int64_t* var_28 = rcx_2
int32_t i_5 = rax_3[1].d
int32_t rcx_3 = *(rax_3 + 0xc)
rax_3[1] = 0
int32_t i_4
int32_t i_2 = i_4
int64_t* rbx_1 = var_18
int32_t var_1c = rcx_3

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_4 = *rbx_1
        
        if (rcx_4 != 0)
            arg5 = sub_140a74f90(rcx_4)
        
        rbx_1 = &rbx_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx_1 = var_18

if (rbx_1 != 0)
    arg5 = sub_140a74f90(rbx_1)

int64_t result = sub_14185b9c0(arg1, &var_28, arg3, arg4, arg5)
int32_t i_3 = i_5
int64_t* rsi_1 = var_28
int64_t* rbx_2 = rsi_1

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_7 = *rbx_2
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (rsi_1 == 0)
    return result

return sub_140a74f90(rsi_1)
