// 函数: sub_142611090
// 地址: 0x142611090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
void* i =
    *(*(arg1 + 0x80) + ((sx.q(arg2 * 0x8da6b343 - arg3 * 0x27e9c7bf) & sx.q(*(arg1 + 0x38))) << 3))

if (i != 0)
    int64_t rdx = 0
    
    do
        void* rax_2 = *(i + 8)
        
        if (rax_2 != 0 && *(rax_2 + 8) == arg2 && *(rax_2 + 0xc) == arg3 && rdx s< sx.q(arg5))
            rbx += 1
            *(arg4 + (rdx << 3)) = i
            rdx += 1
        
        i = *(i + 0x68)
    while (i != 0)

return zx.q(rbx)
