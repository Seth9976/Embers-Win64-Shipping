// 函数: sub_14149f8f0
// 地址: 0x14149f8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg3[1]
int64_t r10 = sx.q(*(rbp + 0x20))
uint64_t result

if (r10.d == 0)
label_14149f9a0:
    int32_t rcx_3 = *(arg3 + 0x34)
    int64_t rbx
    
    if (data_1439b709c == 0 || ((rcx_3 u>> 5).b & 1) == 0)
        rbx.b = 0
    else
        rbx.b = 1
    
    result = sub_1414a5f50(*arg3, *(rbp + 8), (rcx_3 u>> 3).b & 1)
    
    if ((*(arg3 + 0x34) & 1) != 0 && (arg4 == 0 || (*(*(rbp + 8) + 0x37) & 8) != 0))
        void* const rcx_5
        
        if (((rcx_3 u>> 6).b & 1) != 0)
            rcx_5.b = 1
            return sub_141484cd0(arg1, arg2, arg3, rbx.b, rcx_5.b, arg5, arg6)
        
        if (rbx.b != 0)
            if (result.b != 0)
                rcx_5.b = 1
                return sub_141484cd0(arg1, arg2, arg3, rbx.b, rcx_5.b, arg5, arg6)
            
            return sub_141484cd0(arg1, arg2, arg3, rbx.b, nullptr.b, arg5, arg6)
        
        if (result.b != 0)
            rcx_5.b = 1
            return sub_141484cd0(arg1, arg2, arg3, rbx.b, rcx_5.b, arg5, arg6)
else
    void* r9_1 = *(arg1 + 8)
    void* const rcx_2
    
    if (*(r9_1 + 0x1d10) == *(r9_1 + 0x1d3c))
    label_14149f980:
        rcx_2 = nullptr
    else
        void* r8 = r9_1 + 0x1d40
        void* rcx = *(r8 + 8)
        
        if (rcx != 0)
            r8 = rcx
        
        int32_t rax_2 = *(r8 + (((sx.q(*(r9_1 + 0x1d50)) - 1) & r10) << 2))
        
        if (rax_2 == 0xffffffff)
        label_14149f980_1:
            rcx_2 = nullptr
        else
            int64_t r8_1 = *(r9_1 + 0x1d08)
            
            while (true)
                int64_t rdx_3 = sx.q(rax_2) * 5
                rcx_2 = r8_1 + (rdx_3 << 3)
                
                if (*(r8_1 + (rdx_3 << 3)) == r10.d)
                    break
                
                rax_2 = *(rcx_2 + 0x20)
                
                if (rax_2 == 0xffffffff)
                    goto label_14149f980_2
            
            if (rax_2 == 0xffffffff)
            label_14149f980_2:
                rcx_2 = nullptr
    
    void* rax_3 = *(rcx_2 + 8)
    
    if (rax_3 == 0)
        goto label_14149f9a0
    
    result = *(rax_3 + 8)
    
    if ((*(result + 0x3a) & 0x40) == 0)
        goto label_14149f9a0

return result
