// 函数: sub_14225e980
// 地址: 0x14225e980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r9 = *(arg1 + 0x208)
int64_t r8 = sx.q(*(arg1 + 0x210))
char* rax = r9
void* rdx = &r9[r8]

if (r9 != rdx)
    while (*rax != arg2)
        rax = &rax[1]
        
        if (rax == rdx)
            goto label_14225e9ce

if (r9 == rdx || rax.d - r9.d == 0xffffffff)
label_14225e9ce:
    int32_t rax_2 = (r8 + 1).d
    *(arg1 + 0x210) = rax_2
    
    if (rax_2 s> *(arg1 + 0x214))
        sub_1405daba0(arg1 + 0x208)
    
    *(r8 + *(arg1 + 0x208)) = arg2

return sub_14227fbf0(arg1) __tailcall
