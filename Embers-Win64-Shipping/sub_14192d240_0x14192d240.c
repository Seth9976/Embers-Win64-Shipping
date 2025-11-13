// 函数: sub_14192d240
// 地址: 0x14192d240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = *arg1
void* rax_1 = arg1[4]
void* rcx = &arg1[6]

if (rax_1 != 0)
    rcx = rax_1

void* rax_4 = arg1[2]((*(*rcx + 8))(rcx), &arg_8)
void* rcx_2 = *arg1
int64_t* r8 = *(rcx_2 + 0x40)
*(rcx_2 + 0x40) = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

if (r8 != 0)
    r8[1].d -= 1
    
    if (r8[1].d == 1)
        (**r8)(r8, 1)

void* result = *arg1
void* rcx_4 = *(result + 0x40)
*(rcx_4 + 8) += 1
return result
