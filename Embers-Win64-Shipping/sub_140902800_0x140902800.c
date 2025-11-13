// 函数: sub_140902800
// 地址: 0x140902800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16* rax = sub_140908510(arg2)
int32_t rbp = 0

if (*arg3 != rax)
    int32_t rbx_2
    
    if (rax == 0 || *rax == 0)
        rbx_2 = 0
    else
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rax[rbx_1] != 0)
        
        rbx_2 = rbx_1.d + 1
    
    int32_t rdx = 0
    arg3[1].d = 0
    
    if (*(arg3 + 0xc) != rbx_2)
        sub_1405947f0(arg3, rbx_2)
        rdx = arg3[1].d
    
    int32_t rax_1 = rdx + rbx_2
    arg3[1].d = rax_1
    
    if (rax_1 s> *(arg3 + 0xc))
        sub_140594770(arg3)
    
    if (rbx_2 != 0)
        memcpy(*arg3, rax, rbx_2 * 2)

void arg_18
int32_t* rax_2 = sub_1409086c0(arg2, &arg_18)
arg3[2].d = *rax_2
*(arg3 + 0x14) = rax_2[1]

if (arg3[3] != &data_142e1b178)
    arg3[4].d = 0
    
    if (*(arg3 + 0x24) != 4)
        sub_1405947f0(&arg3[3], 4)
        rbp = arg3[4].d
    
    arg3[4].d = rbp + 4
    
    if (rbp + 4 s> *(arg3 + 0x24))
        sub_140594770(&arg3[3])
    
    *arg3[3] = 0x5200580045

arg3[5] = *sub_140908700(arg2, &arg_18, &data_143988978)
arg3[6].b = 0
int32_t result = sub_140908850(arg2)
arg3[7] = sx.q(result)

if (result == 0)
    result.b = 0
else
    int32_t result_1 = *(arg3 + 0x14)
    result = arg3[2].d
    
    if (result s<= result_1)
        result_1 = result
    
    if (result_1 s<= 0)
        result.b = 0
    else
        result.b = 1

return result
