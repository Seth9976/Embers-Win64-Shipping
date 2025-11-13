// 函数: sub_14068b610
// 地址: 0x14068b610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_10 = arg2
int16_t r15 = 0
uint64_t r12 = 0
void* r8 = arg3 - arg2
uint64_t rcx = 0
void* var_48_1 = r8

do
    if (r8 == zx.q(*(rcx + 0x142d8c660)))
        char* r14_1 = *(rcx + &data_142d8c650)
        char* rbx_1 = arg2
        
        if (arg2 == arg3)
            break
        
        while (true)
            if (std::ctype<char>::tolower(*(arg1 + 8)) != std::ctype<char>::tolower(*(arg1 + 8)))
                arg2 = arg_10
                r8 = var_48_1
                break
            
            rbx_1 = &rbx_1[1]
            r14_1 = &r14_1[1]
            
            if (rbx_1 == arg3)
                goto label_14068b6f0
    
    r12 = zx.q(r12.d + 1)
    rcx = r12 * 0x18
while (*(rcx + &data_142d8c650) != 0)

label_14068b6f0:
uint64_t rcx_3 = zx.q(r12.d) * 3

if ((&data_142d8c650)[rcx_3] != 0)
    r15 = *((rcx_3 << 3) + 0x142d8c664)

if (arg4 != 0 && (r15.b & 3) != 0)
    r15 |= 3

return zx.q(r15)
