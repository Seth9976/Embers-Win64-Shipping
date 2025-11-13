// 函数: sub_142beab70
// 地址: 0x142beab70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[3]
void* rbx = arg2 + 2
int32_t r10 = 0
char rcx = *(rax + 6)
char r13 = *(rax + 4)
char rcx_1 = *(rax + 8)
char rcx_2 = *(rax + 0xa)
char rcx_3 = *(rax + 0xc)
char rax_1 = *(rax + 0xe)

if (rbx u<= arg3)
    uint64_t rsi_3 = zx.q(zx.d(*(rbx - 2)) << 8) | zx.q(*(rbx - 1))
    
    if (zx.q((rsi_3 << 2).d) + rbx u<= arg3)
        int32_t i = 0
        
        if (rsi_3.d != 0)
            do
                uint32_t rdx = zx.d(*rbx)
                uint32_t rax_3 = zx.d(*(rbx + 1))
                int32_t r8 = sx.d(*(rbx + 2))
                int32_t r9 = sx.d(*(rbx + 3))
                rbx += 4
                int32_t rax_4 =
                    sub_142bead10(arg1, rdx << 8 | rax_3, r8 + arg4, r9 + arg6, arg5, arg7 + 1, 0)
                r10 = rax_4
                
                if (rax_4 != 0)
                    break
                
                i += 1
            while (i u< rsi_3.d)
        
        *(arg1[3] + 4) = sx.w(r13)
        *(arg1[3] + 6) = sx.w(rcx)
        *(arg1[3] + 8) = zx.w(rcx_1)
        *(arg1[3] + 0xa) = sx.w(rcx_2)
        *(arg1[3] + 0xc) = sx.w(rcx_3)
        *(arg1[3] + 0xe) = zx.w(rax_1)
        *(arg1[3] + 2) = zx.w(*(arg1[2] + 4))
        *arg1[3] = zx.w(*arg1[2])
        return zx.q(r10)

return 3
