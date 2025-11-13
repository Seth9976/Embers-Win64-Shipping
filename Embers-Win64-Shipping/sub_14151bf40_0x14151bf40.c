// 函数: sub_14151bf40
// 地址: 0x14151bf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg2 + 0x2f) u<= 0)
    return 

do
    int32_t r9 = *(arg3 + 4)
    void* rbx_1 = *(*(arg2 + 0x38) + (sx.q(i) << 3))
    int32_t rax_4 = sub_141507390(rbx_1 + 0x20, arg1, i.b, r9 & 0xffffff, (r9 u>> 0x18).b & 0xf)
    
    if (rax_4 != 0xffffffff)
        int32_t rdx_1 = *(rbx_1 + 0x4c)
        uint64_t rsi_1 = zx.q(rax_4.w)
        int32_t rbp_3 = (zx.d(*(*(rbx_1 + 0x90) + (rsi_1 << 3) + 7)) & 0xf) + (arg4 << 4)
        
        if (*(rbx_1 + 0x48) == rdx_1)
            int32_t rdx_2 = rdx_1 * 2
            
            if (rdx_2 u<= 0x20)
                rdx_2 = 0x20
            
            sub_141512980(rbx_1 + 0x48, rdx_2)
        
        int32_t temp0_1 = *(rbx_1 + 0x50)
        
        if (rsi_1.d u>= temp0_1)
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse((rsi_1 + 1).d)
            int32_t rcx_3
            
            if (rsi_1.d == temp0_1)
                rcx_3 = 0x20
            else
                rcx_3 = 0x1f - temp0_2
            
            int32_t rcx_5 = rcx_3 << 0x1a s>> 0x1f
            uint64_t rflags_2
            char temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rsi_1.d)
            char rdx_3
            
            if (rcx_5 == 0)
                rdx_3 = 0x20
            else
                rdx_3 = 0x1f - temp0_3
            
            int32_t rdx_4 = 1 << ((not.d(rcx_5)).b & (0x20 - rdx_3))
            
            if (rdx_4 u<= 0x20)
                rdx_4 = 0x20
            
            sub_141512a20(rbx_1 + 0x48, rdx_4)
        
        uint64_t rdx_5 = zx.q(*(rbx_1 + 0x48))
        int64_t rax_11 = *(rbx_1 + 0x58)
        *(rbx_1 + 0x48) += 1
        *(rax_11 + (rdx_5 << 1)) = rsi_1.w
        *(*(rbx_1 + 0x60) + (rsi_1 << 2)) = rbp_3
        *(*(rbx_1 + 0x68) + (rsi_1 << 1)) = rdx_5.w
        sub_14151c590(rbx_1 + 0x48, rdx_5.w)
    
    i += 1
while (i u< zx.d(*(arg2 + 0x2f)))
