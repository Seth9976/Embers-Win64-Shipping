// 函数: sub_14263c880
// 地址: 0x14263c880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = sub_1405949a0()

if ((*arg4 & 1) != 0)
    return zx.q(rsi)

int64_t* rbx = *(arg1 + 0xc0)
int64_t rdi_1 = 0
uint64_t r14_1 = sx.q(*(arg1 + 0xc8)) << 3 u>> 3

if (rbx u> &rbx[sx.q(*(arg1 + 0xc8))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* r10_1 = *rbx
        
        if (r10_1 != 0)
            int32_t rax_1 = *(r10_1 + 0xc)
            void* const rax_5
            
            if (rax_1 s>= data_143e1d9b4)
                rax_5 = nullptr
            else
                uint32_t rdx = zx.d(rax_1.w)
                
                if (rax_1 s< 0)
                    rax_1 += 0xffff
                    rdx -= 0x10000
                
                rax_5 = *(data_143e1d9a0 + (sx.q(rax_1 s>> 0x10) << 3)) + sx.q(rdx) * 0x18
            
            if (((*(rax_5 + 8) u>> 0x1d).b & 1) == 0)
                rsi |= sub_141f98ab0(arg2, r10_1, arg3, arg4)
        
        rbx = &rbx[1]
        rdi_1 += 1
    while (rdi_1 != r14_1)

return zx.q(rsi)
