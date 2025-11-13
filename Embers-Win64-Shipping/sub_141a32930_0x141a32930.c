// 函数: sub_141a32930
// 地址: 0x141a32930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_1407453e0(&var_38, arg1)
void* var_28
int32_t i_1

for (int32_t i = i_1; i s< *(var_28 + 0x18); i = i_1)
    void* rdi_2 = sx.q(i) * 0x38 + *var_38
    char rax_3 = *(rdi_2 + 0x28)
    
    if ((rax_3 & 1) != 0)
        void* rcx_1 = rdi_2 + 8
        
        if ((rax_3 & 2) == 0)
            rcx_1 = *(rdi_2 + 8)
        
        *(rdi_2 + 0x28) = rax_3 & 0xfe
        (**rcx_1)(rcx_1, 0)
        
        if ((*(rdi_2 + 0x28) & 2) == 0)
            sub_140a74f90(*(rdi_2 + 8))
    
    int32_t var_2c
    int32_t var_20 = var_20 & not.d(var_2c)
    void var_30
    sub_14059bdd0(&var_30)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_140679b80(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
void* result = sub_14059a8e0(&arg1[2], 0)
int64_t rcx_6 = arg1[4]

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = *arg1

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7) __tailcall
