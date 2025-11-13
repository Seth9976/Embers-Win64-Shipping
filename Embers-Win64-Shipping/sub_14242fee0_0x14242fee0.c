// 函数: sub_14242fee0
// 地址: 0x14242fee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
void* rbp = nullptr
int64_t arg_10 = 0
void* result = sub_140d2dfc0(sub_1425ba5c0(), rax, 0, 0, 0, 0, 0, 0, 0)

if (result == 0)
    return result

if ((*(result + 0xe4) & 1) != 0)
    sub_1424404b0(&data_143a307b0, result + 0xc8)
    *(result + 0xe4) &= 0xfe

int64_t* rcx_2 = *(arg1 + 0x258)

if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
    int64_t* rcx_3 = *(arg1 + 0x258)
    char rax_5
    
    if (rcx_3 != 0)
        rax_5 = (*(*rcx_3 + 0x28))(rcx_3)
    
    int32_t rax_9
    
    if (rcx_3 == 0 || rax_5 == 0)
        rax_9 = -1
    else
        int64_t* rdi_1 = *(arg1 + 0x258)
        int32_t rax_7 = (*(*rdi_1 + 0x20))(rdi_1)
        int64_t rdx_2 = *rdi_1
        rax_9 = sub_140a6af60((*(rdx_2 + 0x18))(rdi_1, rdx_2), rax_7)
    
    sub_1424277f0(&data_143a307b0, rax_9, arg1 + 0x250)
    sub_142434fb0(&data_143a307b0, &arg_10, arg1 + 0x250)
    int64_t rax_10 = sx.q(arg_10.d)
    
    if (rax_10.d != 0xffffffff)
        rbp = data_143a307b0 + rax_10 * 0x28
    
    *(rbp + 0x18) = result
    sub_142429d60(result + 0xc8, arg1 + 0x250)
    *(result + 0xe4) |= 1

return result
