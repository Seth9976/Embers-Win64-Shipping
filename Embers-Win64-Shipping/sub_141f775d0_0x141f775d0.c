// 函数: sub_141f775d0
// 地址: 0x141f775d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = arg1[0x88]

if (result == 0 || *(result + 0x50) == 0)
    result.b = 0
    return result

result.b = 1
int32_t rbp = 0
int64_t* r15 = nullptr

do
    int64_t* rcx_1 = *(arg1[0x88] + 0x50)
    
    if (rbp s>= rcx_1[1].d)
        break
    
    int32_t i = 0
    void* rsi_1 = *(r15 + *rcx_1)
    
    if (result.b != 0)
        int64_t rdi_1 = 0
        
        while (i s< *(rsi_1 + 0x30))
            void* rax = *(rsi_1 + 0x28)
            void* rcx_3 = rsi_1 + 0x10
            int64_t r8_1 = *arg1
            
            if (rax != 0)
                rcx_3 = rax
            
            result = (*(r8_1 + 0x548))(arg1, zx.q(*(rcx_3 + rdi_1)), r8_1)
            
            if (result == 0)
                result.b = 0
            else
                result = (*(*result + 0x268))(result)
                void arg_8
                
                if (result == 0)
                    result.b = 0
                else if ((*(*(*result + 0x400))(result, &arg_8) & 1) == 0)
                    result.b = 0
                else
                    result.b = 1
            
            i += 1
            rdi_1 += 0x18
            
            if (result.b == 0)
                break
    
    rbp += 1
    r15 = &r15[1]
while (result.b != 0)

return result
