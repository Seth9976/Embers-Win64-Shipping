// 函数: sub_14185b9c0
// 地址: 0x14185b9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* r13 = *arg1
int64_t* rbp = *arg2
*arg2 = 0
int32_t i_3 = arg2[1].d
int32_t r15 = *(arg2 + 0xc)
arg2[1] = 0
void var_28

if (r13 + 0x80 == &var_28)
    if (i_3 != 0)
        int64_t* rbx_2 = rbp
        int32_t i
        
        do
            int64_t rcx_2 = *rbx_2
            
            if (rcx_2 != 0)
                arg5 = sub_140a74f90(rcx_2)
            
            rbx_2 = &rbx_2[2]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (rbp != 0)
        arg5 = sub_140a74f90(rbp)
else
    int64_t* rbx_1 = *(r13 + 0x80)
    int32_t i_2 = *(r13 + 0x88)
    
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rcx = *rbx_1
            
            if (rcx != 0)
                arg5 = sub_140a74f90(rcx)
            
            rbx_1 = &rbx_1[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        rbx_1 = *(r13 + 0x80)
    
    if (rbx_1 != 0)
        arg5 = sub_140a74f90(rbx_1)
    
    *(r13 + 0x80) = rbp
    *(r13 + 0x88) = i_3
    *(r13 + 0x8c) = r15

return sub_1405fc0f0(r13, arg5, arg3, arg4) __tailcall
