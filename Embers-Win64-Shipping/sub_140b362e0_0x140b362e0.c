// 函数: sub_140b362e0
// 地址: 0x140b362e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = **(arg1 + 8)

if (rbp == 0)
    int64_t* rax
    rax.b = 0
    return rax

sub_140b30e60(arg2, rbp + 8)
void* rsi = *(arg1 + 8)
*(arg1 + 8) = rbp
int64_t var_48
__builtin_memset(&var_48, 0, 0x20)
int128_t var_18 = zx.o(0)
char var_58 = 2
int64_t var_54 = -1
sub_140b30e60(rbp + 8, &var_58)
void* rcx_2 = var_18:8.q

if (rcx_2 != 0)
    int32_t rax_2 = *(rcx_2 + 8)
    *(rcx_2 + 8) -= 1
    
    if (rax_2 == 1)
        int64_t* rbx_1 = var_18:8.q
        (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t* rcx_4 = var_18:8.q
            (*(*rcx_4 + 8))(rcx_4, zx.q(rdi_1))

int64_t var_38

if (var_38 != 0)
    sub_140a74f90(var_38)

int64_t rcx_6 = var_48

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

if (rsi != 0)
    sub_140b301d0(rsi + 8)
    j_sub_140a74f90(rsi)

char* rax_1
rax_1.b = 1
return rax_1
