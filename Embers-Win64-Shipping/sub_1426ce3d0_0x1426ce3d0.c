// 函数: sub_1426ce3d0
// 地址: 0x1426ce3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg2 + 0xb8)

if (rcx == 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t rax_1 = sub_1426a2600(rcx, *(arg1 + 0x88))
int64_t rdi = rax_1

if (rax_1 != 0 && *(arg1 + 0x90) != 0)
    rax_1 = sub_140d41340()
    
    if (rax_1 != 0)
        void* rdx_1 = *(arg1 + 0x90)
        int64_t r9_1 = rax_1 + 0x30
        rax_1 = sx.q(*(rax_1 + 0x38))
        int64_t r8_1 = sx.q(*(rdx_1 + 0x38))
        
        if (rax_1.d s<= r8_1.d && *(*(rdx_1 + 0x30) + (rax_1 << 3)) == r9_1 && rdx_1 != 0)
            rax_1 = *(rdi + 0x10) + 0x30
            
            if (r8_1.d s<= *(rax_1 + 8) && *(*rax_1 + (r8_1 << 3)) == rdx_1 + 0x30)
                rax_1.b = 1
                return rax_1

rax_1.b = 0
return rax_1
