// 函数: sub_140b90960
// 地址: 0x140b90960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = arg1[1]
int64_t* r8 = *arg1
*arg2 = 0
*arg2 = *r8
*r8 = 0
arg2[1].d = r8[1].d
*(arg2 + 0xc) = *(r8 + 0xc)
r8[1] = 0
arg2[2].d = *r9
arg2[3] = *(r9 + 8)
arg2[3] = *(r9 + 8)
arg2[3].d = r9[2]
arg2[3] = *(r9 + 8)
arg2[7].b = 0

if (r9[0xa].b != 0)
    arg2[4] = *(r9 + 0x10)
    void* rax_9 = *(r9 + 0x18)
    arg2[5] = rax_9
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
    
    arg2[6].d = r9[8]
    arg2[7].b = 1

return arg2
