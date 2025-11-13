// 函数: sub_140d79290
// 地址: 0x140d79290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78
uint32_t rax
int32_t* r8
rax, r8 = sub_140d78730(&var_78, arg2)

if (data_143de5480 == 0)
    rax.b = 1
else
    rax, r8 = GetCurrentThreadId()
    rax.b = rax == data_143de5470

int64_t rcx_1 = *(arg1 + 0x10)

if (rax.b == 0)
    int64_t var_48_1 = rcx_1
    int64_t var_40
    __builtin_memset(&var_40, 0, 0x21)
    int64_t var_18_1 = 0
    int32_t var_10_1 = 0
    int32_t var_50 = 3
    sub_140d734c0(&var_40, &var_78)
    var_18_1 = arg4
    void* rbx_1 = *(arg1 + 8)
    var_18_1.d = arg3
    int64_t rdi_1 = sx.q(*(rbx_1 + 0xb0))
    int32_t rax_2 = (rdi_1 + 1).d
    *(rbx_1 + 0xb0) = rax_2
    
    if (rax_2 s> *(rbx_1 + 0xb4))
        sub_140775520(rbx_1 + 0xa8)
    
    sub_140d70160(*(rbx_1 + 0xa8) + rdi_1 * 0x48, &var_50)
    sub_140a3c0a0(&var_40)
else
    int64_t var_80_1 = arg5
    int64_t var_88_1 = arg4
    sub_140d80af0(*(arg1 + 8), rcx_1, r8)

int32_t i_2
int32_t i_1 = i_2
int64_t* var_68
int64_t* rbx_2 = var_68

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_8 = *rbx_2
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        rbx_2 = &rbx_2[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t rcx_10 = var_78

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return 0
