// 函数: sub_141e8cb60
// 地址: 0x141e8cb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 == 0)
    int64_t result
    result.b = 0
    return result

void* i
i.b = 1
int32_t rax = 0

if (0 == arg1[1].d)
    arg1[1].d = 0
else
    rax = arg1[1].d

uint64_t var_28
__builtin_memset(&var_28, 0, 0x20)
uint64_t var_18

if (sub_141e7f020(arg1, &var_18, &var_28) == 0)
    i.b = 0
else if (rax == 1)
    i = arg1[2]
    
    for (void* rsi_3 = (sx.q(arg1[3].d) << 5) + i; i != rsi_3; i += 0x20)
        int64_t* rcx = *(i + 8)
        
        if (rcx != 0)
            int512_t zmm1
            zmm1.o = zx.o(0)
            (*(*rcx + 0x10))(rcx, zmm1)
            int64_t* rcx_1 = *(i + 8)
            
            if (rcx_1 != 0)
                (**rcx_1)(rcx_1, 1)
            
            *(i + 8) = 0
    
    arg1[1].d -= 1
    i.b = 0
    sub_14086c240(&arg1[4], &arg1[6])
else if (rax == 0)
    sub_141e75860(arg1, &var_18, &var_28)

uint64_t rcx_4 = var_28

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

uint64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return zx.q(i.b)
