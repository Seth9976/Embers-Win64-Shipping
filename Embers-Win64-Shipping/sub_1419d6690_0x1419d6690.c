// 函数: sub_1419d6690
// 地址: 0x1419d6690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(*(arg1 + 0x20))
int32_t rsi = 0

if (r15 s> 0)
    int64_t rbx_1 = 0
    
    do
        if (*(*(arg1 + 0x18) + (rbx_1 << 3)) != 0)
            int64_t* rcx = **(arg1 + 0x40)
            int32_t rax_4 = (*(*rcx + 0x28))(rcx, zx.q(*(arg1 + 0x48)), zx.q(rsi))
            void* rbp_1 = *(arg1 + 0x40)
            int64_t r12_1 = sx.q(rax_4)
            int32_t rcx_2 = r12_1.d & 0x8000001f
            
            if (rcx_2 s< 0)
                rcx_2 = ((rcx_2 - 1) | 0xffffffe0) + 1
            
            int64_t r14_1 = sx.q(rcx_2) << 3
            AcquireSRWLockExclusive(rbp_1 + 0x28 + r14_1)
            int64_t rcx_7 = r12_1 << 3
            void* rdx_3 = *(rcx_7 + *(rbp_1 + 8))
            
            if (rdx_3 != 0)
                int32_t rax_6 = 0
                
                if (0 == *(rdx_3 + 8))
                    *(rdx_3 + 8) = 0
                else
                    rax_6 = *(rdx_3 + 8)
                
                if (rax_6 == 2)
                    sub_1405d16e0(rcx_7 + *(rbp_1 + 8), nullptr)
            
            ReleaseSRWLockExclusive(rbp_1 + 0x28 + r14_1)
        
        rsi += 1
        rbx_1 += 1
    while (rbx_1 s< r15)

int64_t* rcx_11 = **(arg1 + 0x40)
(*(*rcx_11 + 0x50))(rcx_11, zx.q(*(arg1 + 0x48)))
return sub_1419d64e0(arg1) __tailcall
