// 函数: sub_140cd82f0
// 地址: 0x140cd82f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = (*(*arg1 + 0x140))()

if (result != 0)
    void* rcx = arg1[0xf]
    void* rbp_1 = *(result + 0x10)
    int64_t rsi
    
    if (rcx == 0 || (*(rcx + 0xcc) u>> 0x1f).b == (*(rbp_1 + 0xcc) u>> 0x1f).b)
        rsi.b = 0
    else
        rsi.b = 1
    
    void* rax_1
    void* rdx_2
    rax_1, rdx_2 = sub_140cbccd0(arg1)
    
    if (rax_1 == 0 || (*(rax_1 + 0x290) & 0x100000) != 0)
        void* rax_2 = sub_140cddbd0()
        rdx_2 = *(result + 0x10)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            void* rax_5 = sub_140cddb10()
            rdx_2 = *(result + 0x10)
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                rdx_2.b = 0
            else
                rdx_2.b = 1
        else
            rdx_2.b = 1
    else
        rdx_2.b = 0
    
    result = arg1[0xf]
    
    if (result != 0)
        void* r8_3 = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s> *(rbp_1 + 0x38))
        label_140cd83d8:
            
            if (rsi.b == 0 && rdx_2.b == 0)
                return (*(*arg1 + 0x148))(arg1, arg2, 0)
        else
            int64_t result_1 = result
            result = *(rbp_1 + 0x30)
            
            if (*(result + (result_1 << 3)) != r8_3)
                goto label_140cd83d8

return result
