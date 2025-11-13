// 函数: sub_140ca8dc0
// 地址: 0x140ca8dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg1 == 0 || arg2 == 0 || *(arg1 + 0x58) != *(arg2 + 0x58) || *(arg1 + 0x5c) != *(arg2 + 0x5c))
    result.b = 0
    return result

result.b = 1
int64_t* rbx = *(arg1 + 0x70)
void* rdi = *(arg2 + 0x70)

while (rbx != rdi)
    if (rbx == 0 || rdi == 0 || (arg3 != 0 && rbx[5] != *(rdi + 0x28))
            || *(rbx + 0x3c) * rbx[7].d != *(rdi + 0x3c) * *(rdi + 0x38)
            || *(rbx + 0x4c) != *(rdi + 0x4c))
        result.b = 0
    else
        result.b = (*(*rbx + 0x128))(rbx, rdi).b != 0
    
    if (rbx != 0)
        rbx = rbx[0xb]
    
    if (rdi != 0)
        rdi = *(rdi + 0x58)
    
    if (result.b == 0)
        break

return result
