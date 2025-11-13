// 函数: sub_1422df1e0
// 地址: 0x1422df1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(**arg1 + (sx.q(*arg2) << 3))
void* rax_1 = rbx[2]
void* rcx_1 = &rbx[4]

if (rax_1 != 0)
    rcx_1 = rax_1

int64_t result = (*rbx)((*(*rcx_1 + 8))(rcx_1))

if (*rbx == 0)
    return result

void* rax_4 = rbx[2]
void* rcx_3 = &rbx[4]

if (rax_4 != 0)
    rcx_3 = rax_4

jump(*(*rcx_3 + 0x10))
