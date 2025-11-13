// 函数: sub_14220af60
// 地址: 0x14220af60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
    &arg1[8])
char rax

if (arg2 == 0 || *(arg2 + 0x14f) != 2)
    rax = 1
else
    rax = 0

*arg1 = rax

if (arg2 != 0)
    void* rax_1 = sub_142591550()
    void* rdx = *(arg2 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        arg1[1] = 1
        return arg1

arg1[1] = 0
return arg1
