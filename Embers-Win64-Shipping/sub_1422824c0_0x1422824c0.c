// 函数: sub_1422824c0
// 地址: 0x1422824c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t* rbx_1 = arg2
uint64_t i_1 = zx.q(arg3)
uint64_t i

do
    int32_t* rax = *(*rbx_1 + 0x10)
    
    if (rax != 0 && *rax == 1)
        int64_t rdx = *(rax + 8)
        
        if (rdx != 0)
            arg3.b = 1
            rax, arg3 = sub_14225ea10(*(arg1 + 8), rdx, arg3.b)
    
    rbx_1 = &rbx_1[1]
    i = i_1
    i_1 -= 1
while (i != 1)
