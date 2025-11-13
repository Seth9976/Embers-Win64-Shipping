// 函数: sub_14221cbf0
// 地址: 0x14221cbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x258)

if (rcx == 0 || rcx[0x4a] != 0)
    return 

sub_141f9d080(rcx, arg1, arg2)
int64_t* rbx_1 = *(arg1 + 0x258)

if (rbx_1 == 0)
    return 

void* rax_1 = sub_14256a090()
void* rcx_1 = rbx_1[2]
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rax << 3)) == rax_1 + 0x30
        && rbx_1[0x59].b != 0 && *(rbx_1[0x57] + 0xe50) == *(arg1 + 0x258))
    (*(*rbx_1 + 0xd18))(rbx_1, arg1)
