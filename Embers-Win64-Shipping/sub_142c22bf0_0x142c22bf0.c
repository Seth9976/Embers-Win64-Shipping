// 函数: sub_142c22bf0
// 地址: 0x142c22bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg3)
uint64_t r10 = rsi * 5
int32_t rax = sx.d(*(arg1 + (r10 << 2) + 0x10))
void* rbx = arg1 + (r10 << 2)
char r8 = *(rbx + 0x12)

if (rax != 0)
    uint64_t rdi_1 = zx.q(rax + rsi.d)
    *(rbx + 0x10) = 0
    
    if (rdi_1.d u< arg2)
        sub_142c22bf0(arg5, arg2, zx.q(rdi_1.d))
        
        if ((r8 & 2) != 0)
            uint64_t rax_1 = rdi_1 * 5
            
            if ((arg4 & 0xfffffffe) != 4)
                *(rbx + 8) += *(arg1 + (rax_1 << 2) + 8)
                return rax_1
            
            *(rbx + 0xc) += *(arg1 + (rax_1 << 2) + 0xc)
            return rax_1
        
        uint64_t rcx_2 = rdi_1 * 5
        int32_t* rdx = arg1 + (rcx_2 << 2)
        *(rbx + 8) += *(arg1 + (rcx_2 << 2) + 8)
        rax = *(rbx + 0xc) + rdx[3]
        *(rbx + 0xc) = rax
        
        if ((arg4 & 0xfffffffd) != 4)
            uint64_t rdi_2 = zx.q(rdi_1.d + 1)
            
            if (rdi_2.d u< rsi.d + 1)
                int32_t r8_2 = *(rbx + 8)
                int64_t rdx_1 = arg1 + rdi_2 * 0x14
                uint64_t i_2 = zx.q(rsi.d + 1 - rdi_2.d)
                uint64_t i
                
                do
                    r8_2 += *rdx_1
                    rdx_1 += 0x14
                    *(rbx + 8) = r8_2
                    rax += *(rdx_1 - 0x10)
                    *(rbx + 0xc) = rax
                    i = i_2
                    i_2 -= 1
                while (i != 1)
        else if (rdi_1.d u< rsi.d)
            int32_t rcx_3 = *(rbx + 8)
            uint64_t i_3 = zx.q(rsi.d - rdi_1.d)
            uint64_t i_1
            
            do
                rcx_3 -= *rdx
                rdx = &rdx[5]
                *(rbx + 8) = rcx_3
                rax -= rdx[-4]
                *(rbx + 0xc) = rax
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)

return rax
