// 函数: sub_140b2ec90
// 地址: 0x140b2ec90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = &arg1[2]
*arg1 = 0
arg1[1] = 0
r10[2] = 0
r10[3].d = 0
*(r10 + 0x1c) = 0x80
int64_t* rax = r10[2]

if (rax != 0)
    r10 = rax

*r10 = 0
r10[1] = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
arg1[0xa] = *arg2
void* rax_2 = arg2[1]
arg1[0xb] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[0xc].b = 1
__builtin_memset(arg1 + 0x64, 0, 0x24)

if (arg4 s> 0)
    int32_t rax_3 = arg1[0xe].d
    
    if (arg4 s> rax_3)
        arg1[0xe].d = arg4
        
        if (arg4 s> *(arg1 + 0x74))
            sub_1405daba0(&arg1[0xd])
    else if (arg4 s< rax_3 && arg4 != rax_3)
        arg1[0xe].d = arg4
        sub_1405dac10(&arg1[0xd])
    
    if (arg5 != 0)
        int32_t rax_4 = arg1[0x10].d
        
        if (arg4 s> rax_4)
            arg1[0x10].d = arg4
            
            if (arg4 s> *(arg1 + 0x84))
                sub_1405daba0(&arg1[0xf])
        else if (arg4 s< rax_4 && arg4 != rax_4)
            arg1[0x10].d = arg4
            sub_1405dac10(&arg1[0xf])

arg1[0x14].b = arg3
arg1[0x11] = 0x80
arg1[0x12] = -1
arg1[0x13] = -1
*(arg1 + 0xa1) = 1
__builtin_memset(&arg1[0x15], 0, 0x20)
return arg1
