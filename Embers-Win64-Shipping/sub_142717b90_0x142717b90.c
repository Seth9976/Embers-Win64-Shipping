// 函数: sub_142717b90
// 地址: 0x142717b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[5] != 0)
    return 

void* rdi_1 = arg1[4]

if (rdi_1 == 0)
    return 

void* rax_1 = sub_14269bba0()
void* rdx_1 = *(rdi_1 + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

int64_t* i = *(rdi_1 + 0x90)

for (void* rbp_1 = &i[sx.q(*(rdi_1 + 0x98))]; i != rbp_1; i = &i[1])
    void* rdi_2 = *i
    
    if (rdi_2 != 0 && (*(*arg1 + 0x280))(arg1, rdi_2).b != 0)
        sub_1427141c0(arg1, rdi_2, 1)
        break
