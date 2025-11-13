// 函数: sub_1427a6300
// 地址: 0x1427a6300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x20)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    *(rax + 0xc) = 0
    *(rax + 0x14) = 0
    *rdi = &data_1434b5a28
    rdi[1].d = 0xffffffff
    *(rdi + 0xc) = 0
    rdi[2].d = 0xffffffff
    *(rdi + 0x14) = 0
    rdi[3] = 0

sub_140d3a3a0(&rdi[1], arg1 - 0x28)
sub_140d3a3a0(&rdi[2], (*(*(arg1 - 0x28) + 0x2a0))(arg1 - 0x28, 1))

if (&rdi[3] != arg3)
    int64_t* rcx_3 = rdi[3]
    rdi[3] = *arg3
    *arg3 = 0
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x38))(rcx_3, 1)

int64_t* rcx_4 = *(arg1 + 0x50)
void*** arg_8 = rdi
int64_t result = (*(*rcx_4 + 0x28))(rcx_4, arg2, &arg_8, arg4)
int64_t* rcx_5 = *arg3

if (rcx_5 == 0)
    return result

jump(*(*rcx_5 + 0x38))
