// 函数: sub_1427b6030
// 地址: 0x1427b6030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2
int128_t* result = sub_140a3c510(arg1 + 0xb0, arg2)

if (*rbx == 0)
    return result

void* rax = rbx[2]
void* rcx_1 = &rbx[4]

if (rax != 0)
    rcx_1 = rax

jump(*(*rcx_1 + 0x10))
