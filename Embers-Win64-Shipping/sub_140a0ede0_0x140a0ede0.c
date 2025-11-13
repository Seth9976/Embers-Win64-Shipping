// 函数: sub_140a0ede0
// 地址: 0x140a0ede0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xe8)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142e4cf68
result[2] = &data_142e4d130
result[3] = &data_142e4d1f8
result[4] = &data_142e4d210
result[5] = &data_142e4d228
result[6] = &data_142e4d288
result[7] = &data_142e4d2f0
result[8] = 0
result[9] = 0
result[0xa] = arg1
void*** rax = sub_140a0ed70()
result[0xb] = &rax[2]
result[0xc] = rax

if (rax != 0)
    rax[1].d += 1
    
    if (rax != 0)
        rax[1].d -= 1
        
        if (rax[1].d == 1)
            (**rax)(rax)
            int32_t rax_5 = *(rax + 0xc)
            *(rax + 0xc) -= 1
            
            if (rax_5 == 1)
                (*rax)[1](rax, 1)

__builtin_memset(&result[0xd], 0, 0x64)
*(result + 0xcc) = -1
result[0x1b] = 0
result[0x1c].w = 0
return result
