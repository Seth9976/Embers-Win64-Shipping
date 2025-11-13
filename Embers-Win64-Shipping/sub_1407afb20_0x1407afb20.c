// 函数: sub_1407afb20
// 地址: 0x1407afb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r9 = sub_140b5b8a0(*arg3, 0) == 0

if ((arg3[1] != 0 | r9) != 0 && *(arg3 + 8) != 0)
    *(arg1 + 8) = arg2
    sub_140747710(&arg1[4], arg3)
    int64_t* rcx_2 = *(arg1 + 8)
    arg1[0xe] = *(rcx_2 + 0xb4)
    int32_t* rax_3 = (*(*rcx_2 + 0x30))(rcx_2, arg3)
    int32_t rax_4
    
    if (rax_3 == 0)
        rax_4 = -1
    else
        rax_4 = *rax_3
    
    void* rdx_2 = *(arg1 + 8)
    *arg1 = rax_4
    
    if (rax_4 s>= 0 && rax_4 s< *(rdx_2 + 0x48))
        return *(*(rdx_2 + 0x40) + (sx.q(rax_4) << 3))

return 0
