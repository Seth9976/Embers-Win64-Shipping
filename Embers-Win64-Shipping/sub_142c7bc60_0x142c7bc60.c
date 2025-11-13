// 函数: sub_142c7bc60
// 地址: 0x142c7bc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int32_t i = 0
int32_t* r14 = *(rax + 0x250)

if (r14 == 0 || arg1[0xde] == 0)
    return 0

if (arg2 != 0)
    sub_142c65340(arg1, 1)
    i = arg2
else if (*(rax + 0x609) == 0 && *(rax + 0x5e9) != 0 && *(rax + 0x7f8) != 0)
    int64_t* rax_1
    int64_t rbx
    
    if (r14[8].b != 0 || *(rax + 0x4e68) == 0)
        rax_1 = data_143ccb8b0(".\r\n")
        rbx = 3
    else
        rax_1 = data_143ccb8b0("\r\n.\r\n")
        rbx = 5
    
    if (rax_1 == 0)
        return zx.q((rax_1 + 0x1b).d)
    
    int64_t arg_8
    int64_t* var_38_1 = &arg_8
    int32_t rax_3 = sub_142c64d60(arg1, arg1[0x8b], arg4, rax_1)
    
    if (rax_3 != 0)
        data_143ccb8a0(rax_1)
        return zx.q(rax_3)
    
    int64_t rax_4 = arg_8
    
    if (rax_4 == rbx)
        uint64_t var_28[0x2]
        arg4.o = *sub_142c59600(&var_28)
        *(arg1 + 0x6d8) = arg4.o
        data_143ccb8a0(rax_1)
    else
        arg1[0xda] = rbx
        arg1[0xd9] = rbx - rax_4
        arg1[0xd8] = rax_1
    
    i = 0
    arg1[0xe1].d = 0xb
    
    if (arg1[0xe1].d != 0)
        while (i == 0)
            int32_t i_1
            i_1, arg3 = sub_142c8f150(&arg1[0xd3], 1, arg3)
            i = i_1
            
            if (arg1[0xe1].d == 0)
                break

data_143ccb8a0(*(r14 + 8))
*(r14 + 8) = 0
*r14 = 0
return zx.q(i)
