// 函数: sub_14281a8f0
// 地址: 0x14281a8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg2
void* rcx = *arg1
void* i = *(rcx + 0xc8)
class std::wostream* result = sub_14281e72c(rcx)
char rbx = 0
void* r15 = i + result

if (rbp != 0)
    void* rcx_1 = *arg1
    void* rsi_1
    
    if (*(rcx_1 + 0xd0) != 0 || *(rcx_1 + 0xd2) != 0)
        rsi_1 = &arg1[1]
    else
        wchar16* rdx
        
        if (sub_14281e6ec(rcx_1) != 0 || arg1[8].b != 0)
            rsi_1 = &arg1[1]
            rdx = &data_14370209c
            goto label_14281a971
        
        rsi_1 = &arg1[1]
        
        while (*(rsi_1 + 0x30) u< i)
            char arg_10 = 0x20
            rdx = &arg_10
        label_14281a971:
            sub_14281f460(rsi_1, rdx, 1)
        
        result, arg2 = sub_14281f460(rsi_1, U"-", 1)
    
    if (rbp s> 0)
        if (rbp s<= 3)
        label_14281a9d8:
            void* rax_1 = *arg1
            
            if (*(rax_1 + 0xd0) != 0 || *(rax_1 + 0xd2) != 0)
                rbx = 1
            
            arg2.b = rbx
            return sub_14281ba8c(arg1, arg2.b, r15)
        
        if (rbp == 4)
            return sub_14281f460(rsi_1, &data_14370209c, 1)
        
        if (rbp == 5)
            goto label_14281a9d8
        
        if (rbp == 6)
            result = *arg1
            
            if (result->__offset(0xd0).b != 0 || result->__offset(0xd2).b != 0 || arg1[8].b != 0)
                return sub_14281f460(rsi_1, &data_14370209c, 1)

return result
