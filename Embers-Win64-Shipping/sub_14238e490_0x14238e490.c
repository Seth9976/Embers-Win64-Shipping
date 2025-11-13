// 函数: sub_14238e490
// 地址: 0x14238e490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbp = arg5
*arg3 = 1
*arg4 = 0
*rbp = 1
*arg6 = 1

if (*(arg1 + 0x168) s<= 0)
    *arg4 = 1
    *rbp = 0
    *arg6 = 0
    return 

int32_t i = 0
int64_t rdi = 0

do
    int64_t* rcx_1 = *(arg1 + 0x160) + rdi
    int32_t rax_3 = *(*(*rcx_1 + 8))(rcx_1, &arg5, arg2)
    
    if (rax_3 != 0)
        *arg4 = 1
    
    if (rax_3 u> 1)
        *rbp = 0
    
    if (rax_3 != 2)
        *arg3 = 0
    
    if (rax_3 != 3)
        *arg6 = 0
    
    i += 1
    rdi -= -0x80
while (i s< *(arg1 + 0x168))
