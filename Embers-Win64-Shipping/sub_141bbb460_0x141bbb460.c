// 函数: sub_141bbb460
// 地址: 0x141bbb460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141bca720(arg1, arg2)
int64_t* rdi = nullptr
void* result_1 = result

if (arg1[0x92].d != 0)
    int64_t* rcx = arg1[0x91]
    
    if (rcx != 0)
        int64_t rdx = *rcx
        result = (*(rdx + 0x28))(rcx, rdx)
        
        if (result.b != 0)
            int64_t* rcx_1
            
            if (arg1[0x92].d == 0)
                rcx_1 = nullptr
            else
                rcx_1 = arg1[0x91]
            
            result = (*(*rcx_1 + 0x48))(rcx_1)
            arg1[0x90].d = result.d

int32_t rsi = arg1[0x90].d

if (rsi != 0)
    arg1[0xd0] = result_1
    int32_t rax_1 = *(arg3 + 0xc)
    arg1[0xec].b = 1
    arg1[0xdd] = result_1
    arg1[0xde].d = rax_1
    sub_140f89930(arg1)
    
    if (rsi == 3)
        int16_t rax_2 = *(arg3 + 8)
        int16_t rcx_3 = rax_2 & 0xc
        
        if ((rsi.b & rax_2.b) != 0)
            if (rcx_3 == 0)
                (*(arg1[0x9f] + 0x30))(&arg1[0x9f])
            
            (*(arg1[0x9f] + 0x38))(&arg1[0x9f], result_1)
            goto label_141bbb5e1
        
        if (rcx_3 != 0)
        label_141bbb5e1:
            void* rcx_8 = &arg1[0x9f]
            return (*(*rcx_8 + 0x40))(rcx_8, 1)
    
    int64_t r9_1
    result, r9_1 = sub_1419e1590(&arg1[0xc6], 0)
    
    if (arg1[0x92].d != 0)
        int64_t* rcx_5 = arg1[0x91]
        
        if (rcx_5 != 0)
            result, r9_1 = (*(*rcx_5 + 0x28))(rcx_5)
            
            if (result.b != 0)
                if (arg1[0x92].d != 0)
                    rdi = arg1[0x91]
                
                result, r9_1 = (*(*rdi + 0x48))(rdi)
                arg1[0x90].d = result.d
    
    if (arg1[0x90].d != 0)
        r9_1.b = 1
        (*(arg1[0x9f] + 0x28))(&arg1[0x9f], result_1, 1, r9_1)
        return (*(arg1[0x9f] + 0x40))(&arg1[0x9f], 1)

return result
