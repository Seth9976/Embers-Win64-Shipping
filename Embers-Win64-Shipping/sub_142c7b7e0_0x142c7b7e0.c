// 函数: sub_142c7b7e0
// 地址: 0x142c7b7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
int32_t rdi = 0
int32_t* rax = *(rsi + 0x250)

if (arg2 != 0x2b)
    arg1[0xe1].d = 0
    return 0x38

arg1[0xe2] = 2
arg1[0xe3] = 2

if (*rax == 0)
    int512_t zmm2 = sub_142c68d40(arg1, 0, -1, 0, arg3, 0, 0xffffffff, nullptr)
    int64_t rdx = arg1[0xd3]
    
    if (rdx != 0)
        if (*(rsi + 0x5e8) == 0)
            int32_t rax_1 = sub_142c7acf0(arg1, rdx, arg1[0xd4], zmm2)
            rdi = rax_1
            
            if (rax_1 != 0)
                return rax_1
        
        data_143ccb8a0(arg1[0xd3])
        arg1[0xd3] = 0
        arg1[0xd4] = 0

arg1[0xe1].d = 0
return rdi
