// 函数: sub_1422e5db0
// 地址: 0x1422e5db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_3
int64_t zmm0

if (arg4 == 0)
    zmm0 = *(arg1 + 0x60c)
    rax_3 = *(arg1 + 0x614)
else
    int64_t* rcx = *(arg1 + 8)
    
    if (rcx == 0)
        zmm0 = *(arg1 + 0x60c)
        rax_3 = *(arg1 + 0x614)
    else
        void* rax_2 = (*(*rcx + 0x48))(rcx)
        
        if (0f f== *(rax_2 + 0x28))
            zmm0 = *(arg1 + 0x60c)
            rax_3 = *(arg1 + 0x614)
        else
            int64_t rdx = sx.q(arg3) * 3
            zmm0 = *(rax_2 + (rdx << 2))
            rax_3 = *(rax_2 + (rdx << 2) + 8)

*arg2 = zmm0
arg2[1].d = rax_3
return arg2
