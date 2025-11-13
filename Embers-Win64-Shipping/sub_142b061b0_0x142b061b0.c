// 函数: sub_142b061b0
// 地址: 0x142b061b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 8) != 0)
    return sub_142a91ba0("GBK", arg3) __tailcall

int64_t* rax_1
int512_t zmm1_1
rax_1, zmm1_1 = sub_142a84e10("GBK", arg3)

if (*arg3 s<= 0)
    *(arg1 + 0x48) = 0
    *(arg1 + 0x50) = 0
    void* rax_2 = sub_142a7dc60(1, 0x18)
    *(arg1 + 0x10) = rax_2
    
    if (rax_2 != 0)
        *rax_2 = rax_1
        return rax_2
    
    rax_1 = sub_142a84ad0(rax_1, zmm1_1)
    *arg3 = 7

return rax_1
