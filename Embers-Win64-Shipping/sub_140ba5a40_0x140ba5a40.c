// 函数: sub_140ba5a40
// 地址: 0x140ba5a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140bbd8c0()

if (result.b != 0)
    int32_t r15_1 = *(arg1 + 0x290)
    *(arg1 + 0x290) = r15_1 & 0xffefffff
    void* rbx_1 = *(arg2 + 0x40)
    
    if (rbx_1 != 0)
        int64_t rax_2 = sub_140d3cb50(rbx_1)
        
        if (rax_2 != 0)
            int64_t rax_3 = sx.q(*(rax_2 + 0x34c))
            void* rdx
            
            if (rax_3.d != 0xffffffff)
            label_140ba5abb:
                rdx = *((rax_3 << 7) + *(rax_2 + 0x18) + 0x40)
            label_140ba5acc:
                
                if (rdx != 0)
                    int32_t rax_5 = *(rdx + 8)
                    
                    if ((rax_5 & 0x200400) == 0)
                        *(rdx + 8) = rax_5 | 0x400
                
                sub_140ba5a40(rax_2, rbx_1)
            else if (*(rax_2 + 0x348) != 0)
                if (rax_3.d != rax_3.d)
                    goto label_140ba5abb
                
                rdx = *(rbx_1 + 0x118)
                goto label_140ba5acc
    
    sub_140bb7ee0(arg1)
    int64_t* i = *(arg2 + 0x1d8)
    
    for (void* r14_3 = &i[sx.q(*(arg2 + 0x1e0)) * 2]; i != r14_3; i = &i[2])
        void* rcx_5 = *i
        
        if (rcx_5 != 0)
            int64_t rax_7 = sub_140d3cb50(rcx_5)
            
            if (rax_7 != 0 && (*(rax_7 + 0x34c) != 0xffffffff || *(rax_7 + 0x348) != 0))
                if (sub_140bab540(rax_7) != 0)
                    sub_140bb81a0(rax_7, *i)
                
                sub_140ba5a40(rax_7, *i)
    
    sub_140bb8690(arg1, arg2)
    result = sx.q(*(arg1 + 0x34c))
    uint64_t rbx_2
    
    if (result.d != 0xffffffff)
    label_140ba5b97:
        rbx_2 = *((result << 7) + *(arg1 + 0x18) + 0x40)
    label_140ba5ba8:
        *(arg1 + 0x348) = 0
        *(arg1 + 0x34c) = 0xffffffff
        result = sub_140d2b280(arg1)
        
        if (*(arg2 + 0xc8) s>= 0)
            int64_t rdi_2 = *(arg2 + 0x118)
            result = sub_140bb44b0(arg1, arg2, rbx_2)
            
            if (result.b != 0 && rdi_2 == *(arg2 + 0x118))
                *(arg2 + 0x118) = rbx_2
    else if (*(arg1 + 0x348) != 0)
        if (result.d != result.d)
            goto label_140ba5b97
        
        rbx_2 = *(arg2 + 0x118)
        goto label_140ba5ba8
    *(arg1 + 0x290) = r15_1

return result
