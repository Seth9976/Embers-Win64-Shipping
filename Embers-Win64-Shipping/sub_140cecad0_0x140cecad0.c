// 函数: sub_140cecad0
// 地址: 0x140cecad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg1

if (rbx == 0)
    return 

sub_140d15db0(rbx, arg1)
rbx[6].d = 1
rbx[9] = 0
rbx[0xe].d = 0x1010000
*rbx = &data_142eaa4b0
int64_t rax_2 = rbx[7] & 0xffffffffbffffdff
int32_t arg_8 = 1
rbx[7] = rax_2 | 0x1000000000
int64_t rax
rax.b = 0
*(rbx + 0x34) = 1
rbx[0xe].w = 1
char rdx_2

do
    rdx_2 = *(&arg_8 + zx.q(rax.b))
    *(rbx + 0x72) = rdx_2
    
    if (rdx_2 != 0)
        break
    
    rax.b += 1
    *(rbx + 0x71) = rax.b
while (rax.b u< 1)

*(rbx + 0x73) = rdx_2
