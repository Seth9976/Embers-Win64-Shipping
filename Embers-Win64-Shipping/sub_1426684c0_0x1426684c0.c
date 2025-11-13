// 函数: sub_1426684c0
// 地址: 0x1426684c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = zx.d(arg2)
int32_t rcx = *(arg1 + 0x120)
uint64_t result = zx.q(rcx) & 1

if (result.d != r8)
    void* rax_1 = *(arg1 + 0xa8)
    *(arg1 + 0x120) = (rcx & 0xfffffffe) | r8
    
    if (rax_1 == 0)
        rax_1 = sub_141ee69e0(arg1)
    
    if (rax_1 != 0)
        void* rdi_1 = *(rax_1 + 0x120)
        
        if (rdi_1 != 0)
            void* rax_2 = sub_14269bba0()
            void* rcx_4 = *(rdi_1 + 0x10)
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if (rax_3.d s<= *(rcx_4 + 0x38) && *(*(rcx_4 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
                sub_14266c330(rdi_1, arg1 + 0xe0)
    
    if (*(arg1 + 0xa8) == 0)
        result = sub_141ee69e0(arg1)
    
    if (*(arg1 + 0xa8) != 0 || result != 0)
        void* rax_6 = *(arg1 + 0xa8)
        
        if (rax_6 == 0)
            rax_6 = sub_141ee69e0(arg1)
        
        void* rdi_2 = *(rax_6 + 0x188)
        void* rdi_3
        
        if (rdi_2 == 0)
            rdi_3 = *(rax_6 + 0x300)
        else
            rdi_3 = *(rdi_2 + 0xc0)
        
        if (sub_1423dce10(rdi_3, arg1 + 0x188) != 0)
            sub_1423e60e0(rdi_3, *(arg1 + 0x188))
        
        *(arg1 + 0x188) = 0
        int32_t rcx_10 = *(arg1 + 0x120)
        result = zx.q(rcx_10) & 3
        
        if (result.b == 3)
            return sub_142649f70(arg1)
        
        if ((rcx_10.b & 1) == 0 && (rcx_10.b & 4) != 0)
            return sub_142649f70(arg1)

return result
