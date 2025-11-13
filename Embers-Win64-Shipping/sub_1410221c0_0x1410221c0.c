// 函数: sub_1410221c0
// 地址: 0x1410221c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)

if (rcx != 0)
    sub_141022080(rcx, arg1 + 0x28)
    void* rcx_1 = *(arg1 + 0x10)
    sub_141032d20(*(rcx_1 + 0x138), rcx_1)
    *(arg1 + 0x10) = 0

void*** rbx = *(arg1 + 0x18)

if (rbx == 0)
    return 

int32_t i_1 = *(arg1 + 0x20)

if (i_1 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_1)
    int32_t r14_2 = temp0_1
    
    if (i_1 != 0)
        int32_t i
        
        do
            void* rcx_4 = *(*(arg1 + 0x18) + (zx.q(r14_2) << 3) + 0x140)
            *(arg1 + 0x10) = rcx_4
            sub_141022080(rcx_4, arg1 + 0x28)
            void* r13_1 = *(arg1 + 0x10)
            void* rdi_1 = *(r13_1 + 0x138)
            EnterCriticalSection(rdi_1 + 0x6f8)
            int64_t r15_1 = sx.q(*(rdi_1 + 0x6f0))
            int32_t rax_1 = (r15_1 + 1).d
            *(rdi_1 + 0x6f0) = rax_1
            
            if (rax_1 s> *(rdi_1 + 0x6f4))
                sub_1405a4d70(rdi_1 + 0x6e8)
            
            *(*(rdi_1 + 0x6e8) + (r15_1 << 3)) = r13_1
            
            if (rdi_1 != -0x6f8)
                LeaveCriticalSection(rdi_1 + 0x6f8)
            
            *(arg1 + 0x10) = 0
            i = not.d(1 << r14_2.b) & i_1
            r14_2 = 0x20
            i_1 = i
            
            if (i != 0)
                uint64_t rflags_2
                int32_t temp0_2
                temp0_2, rflags_2 = _bit_scan_forward(i)
                r14_2 = temp0_2
        while (i != 0)
        rbx = *(arg1 + 0x18)

if (rbx != 0)
    *rbx = &data_142ef2bd8
    sub_1405d1550(&rbx[0x22])
    j_sub_140a74f90(rbx)

*(arg1 + 0x18) = 0
