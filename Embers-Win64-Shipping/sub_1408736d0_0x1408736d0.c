// 函数: sub_1408736d0
// 地址: 0x1408736d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg1

if (rbx == 0)
    return 

sub_140d20910()
sub_140745800(rbx)
*rbx = &data_142daec98
rbx[6] = 0
rbx[7] = 0
rbx[0xa].d |= 1
rbx[8].d = 0
*(rbx + 0x44) = 0x3f800000
rbx[9].d = 0x3f800000
void** const rax = j_sub_140a82f30(0xf0)
void*** rdi_1 = rax

if (rax == 0)
    rdi_1 = nullptr
else
    memset(rax, 0, 0xf0)
    sub_140744780(rdi_1)
    *rdi_1 = &data_142daec58
    __builtin_memset(&rdi_1[0x1b], 0, 0x14)

int64_t* rcx_3 = rbx[5]

if (rcx_3 == rdi_1)
    return 

rbx[5] = rdi_1

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 1)
