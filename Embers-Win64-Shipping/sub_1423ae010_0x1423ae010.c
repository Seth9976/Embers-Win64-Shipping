// 函数: sub_1423ae010
// 地址: 0x1423ae010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_142389810(arg1[1])
void* r9 = arg1[1]
void* rdx = *(r9 + 0x120)
void* rbx = r9 + 0x110

if (rdx != 0)
    rbx = rdx

void* rsi = rbx + (sx.q(*(r9 + 0x128)) << 3)

if (rbx != rsi)
    do
        int64_t* rcx_2 = *rbx
        (*(*rcx_2 + 0x20))(rcx_2)
        rbx += 8
    while (rbx != rsi)
    
    r9 = arg1[1]

int64_t result = sub_142389c30(r9, rax)

if (arg1 == 0)
    return result

return (*(*arg1 + 0x10))(arg1, 1)
