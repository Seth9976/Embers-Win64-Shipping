// 函数: sub_140abd7c0
// 地址: 0x140abd7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int32_t rax = wcsncmp(arg1, u"TEXT", 4)
int64_t rsi
rsi.b = rax == 0
void* result_1 = nullptr

if (rax == 0)
    int16_t i = *(rbx + 8)
    void* rcx = rbx + 8
    
    if (i != 0)
        while (i == 9 || i == 0x20)
            i = *(rcx + 2)
            rcx += 2
            
            if (i == 0)
                break
    
    void* rax_1 = nullptr
    
    if (*rcx == 0x28)
        rax_1 = rcx
    
    rbx = rax_1 + 2
    
    if (rax_1 == 0)
        rbx = rax_1

if (rax != 0 || rbx != 0)
    int32_t arg_18 = 0
    
    if (j_sub_140b08930(rbx, arg2, &arg_18) != 0)
        void* result = rbx + (sx.q(arg_18) << 1)
        
        if (rsi.b != 0)
            int16_t i_1 = *result
            
            if (i_1 != 0)
                while (i_1 == 9 || i_1 == 0x20)
                    i_1 = *(result + 2)
                    result += 2
                    
                    if (i_1 == 0)
                        break
            
            if (*result == 0x29)
                result_1 = result
            
            result = result_1 + 2
            
            if (result_1 == 0)
                result = result_1
        
        if (rsi.b == 0 || result != 0)
            return result

return nullptr
