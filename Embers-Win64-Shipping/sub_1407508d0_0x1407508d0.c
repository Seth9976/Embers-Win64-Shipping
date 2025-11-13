// 函数: sub_1407508d0
// 地址: 0x1407508d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x200)

if (result == 0)
    return 0

void* r8 = arg1[0x81]
int64_t r8_1

if (r8 == 0)
    int64_t arg_10 = 0
    r8_1 = 0
else
    r8_1 = *(r8 + 0x18)

sub_1422883b0(result, arg1, r8_1)
*result = &data_142d9a920
result[0x2b].d = 0xffffffff
*(result + 0x15c) = 4
result[0x2a] = &data_142d99570
result[0x2c].d = 2
__builtin_memset(&result[0x2d], 0, 0x30)
result[0x33].b = 1
result[0x34] = 0
result[0x3e] = 0
void* rbp = arg1[0xa5]

if (rbp != 0)
    sub_140750570(result, arg1)
    result[0x34] = *(rbp + 0x6f0)
    
    if (data_143ce42cc != 0)
        int64_t rcx_2 = *(arg1[0x81] + 0x38)
        
        if (rcx_2 != 0)
            int64_t rax_2 = rcx_2 + 0xe4
            
            if (*(rcx_2 + 0xec) == 0)
                rax_2 = 0
            
            result[0x3e] = rax_2
            return result
    
    result[0x3e] = 0

return result
