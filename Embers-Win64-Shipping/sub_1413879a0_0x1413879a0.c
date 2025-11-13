// 函数: sub_1413879a0
// 地址: 0x1413879a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(**(arg1 + 8) + (sx.q(arg2) << 3))
void** const var_28 = &data_142f6d300
void* var_20 = rbx
int64_t* rax_1 = *(rbx + 0xd0)

if (rax_1 != 0)
    rax_1[1].d += 1

int64_t* rcx_1 = *(rbx + 8)
int64_t result = (*(*rcx_1 + 0x20))(rcx_1, &var_28)
int32_t rdx_1 = *(rbx + 0x50)

if (*(rbx + 0x54) != rdx_1)
    result = sub_140a05f70(rbx + 0x48, rdx_1)

int32_t rdx_2 = *(rbx + 0x40)

if (*(rbx + 0x44) != rdx_2)
    result = sub_1405c55e0(rbx + 0x38, rdx_2)

if (rax_1 != 0)
    rax_1[1].d -= 1
    
    if (rax_1[1].d == 1)
        return (**rax_1)(rax_1, 1)

return result
