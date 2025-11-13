// 函数: sub_140a3dc00
// 地址: 0x140a3dc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e5d170
int64_t rcx = arg1[2]
char rbx = arg2.b

if (rcx != 0)
    if (*(arg1 + 0x65) == 0)
        sub_140a74f90(rcx)
    
    arg1[2] = 0

if ((arg1[0x13].d & 0x100) != 0)
    void* rdi_1 = arg1[0x10]
    void* lpCriticalSection = rdi_1 + 0x30
    EnterCriticalSection(lpCriticalSection)
    int64_t rcx_2 = sx.q(*(rdi_1 + 0x28))
    
    if (rcx_2.d != 0)
        int32_t rsi_1 = 0
        int32_t r13_1 = 0
        int64_t r12
        r12.b = **(rdi_1 + 0x20) != arg1
        int64_t rdi_2 = 0
        
        do
            int64_t r9_1 = sx.q(rsi_1)
            rdi_2 += 1
            rsi_1 += 1
            
            if (rdi_2 s< rcx_2)
                int64_t* rcx_3 = *(rdi_1 + 0x20) + (rdi_2 << 3)
                
                do
                    int32_t rax_3
                    rax_3.b = *rcx_3 != arg1
                    
                    if (zx.d(r12.b) != rax_3)
                        break
                    
                    rsi_1 += 1
                    rdi_2 += 1
                    rcx_3 = &rcx_3[1]
                while (rdi_2 s< rcx_2)
            
            int32_t r15_2 = rsi_1 - r9_1.d
            
            if (r12.b != 0)
                if (r13_1 != r9_1.d)
                    int64_t rcx_4 = *(rdi_1 + 0x20)
                    memmove(rcx_4 + (sx.q(r13_1) << 3), rcx_4 + (r9_1 << 3), r15_2 << 3)
                
                r13_1 += r15_2
            
            r12.b ^= 1
        while (rdi_2 s< rcx_2)
        
        *(rdi_1 + 0x28) = r13_1
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)
    
    rbx = arg2.b

void* rcx_7 = arg1[0xd]
arg1[0x10] = 0
*arg1 = &data_142e5d118

if (rcx_7 != 0)
    arg2.b = 1
    sub_140a433d0(rcx_7, arg2.b)
    int64_t* rcx_8 = arg1[0xd]
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0x10))(rcx_8, 1)

sub_140a3c4a0(arg1)

if ((rbx & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
