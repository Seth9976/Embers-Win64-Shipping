// 函数: sub_14074d860
// 地址: 0x14074d860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg2 != 0)
    void* rax = sub_1408714d0()
    void* rdx = *(arg2 + 0x10)
    int64_t rax_1 = sx.q(*(rax + 0x38))
    
    if (rax_1.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_1 << 3)) == rax + 0x30)
        int64_t* rcx_1 = *(arg2 + 0x28)
        *(arg2 + 0x30) = *(arg1 + 0x30)
        (*(*rcx_1 + 0x40))(rcx_1, *(arg1 + 0x30))
    
    void* rax_5 = sub_140871e60()
    void* rdx_2 = *(arg2 + 0x10)
    result = sx.q(*(rax_5 + 0x38))
    
    if (result.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (result << 3)) == rax_5 + 0x30)
        *(arg2 + 0x38) = *(arg1 + 0x38)
        *(arg2 + 0x3c) = *(arg1 + 0x3c)
        *(arg2 + 0x40) = *(arg1 + 0x40)
        *(arg2 + 0x44) = *(arg1 + 0x44)
        
        if (((*(arg2 + 8) u>> 4).b & 1) == 0)
            sub_140779750(*(arg2 + 0x28), *(arg1 + 0x3c), *(arg1 + 0x40), *(arg1 + 0x38))
            sub_140779870(*(arg2 + 0x28), *(arg1 + 0x44))

result.b = 1
return result
