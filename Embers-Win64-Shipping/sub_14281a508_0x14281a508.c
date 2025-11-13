// 函数: sub_14281a508
// 地址: 0x14281a508
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2
void* rcx = *arg1
int64_t i = *(rcx + 0xc8)
class std::wostream* result = sub_14281e6ec(rcx)

if (rdi != 0)
    void* rcx_1 = *arg1
    
    if (*(rcx_1 + 0xd0) == 0 && *(rcx_1 + 0xd2) == 0)
        if (result != 0)
            sub_14281f460(&arg1[1], &data_14370209c, 1)
        
        wchar16* rdx
        
        if (arg1[8].b != 0)
            rdx = &data_14370209c
            goto label_14281a58b
        
        while (arg1[7] u< i)
            char arg_10 = 0x20
            rdx = &arg_10
        label_14281a58b:
            sub_14281f460(&arg1[1], rdx, 1)
        
        result, arg2 = sub_14281f460(&arg1[1], U"?&=", 1)
    
    if (rdi s> 0)
        if (rdi s<= 3)
            arg2.b = 1
            return sub_14281ba8c(arg1, arg2.b, i + 1)
        
        if (rdi == 4)
        label_14281a5c0:
            result = *arg1
            
            if (result->__offset(0xd0).b != 0 || result->__offset(0xd2).b != 0)
                return sub_14281f460(&arg1[1], &data_14370209c, 1)
        else
            if (rdi == 5)
                arg2.b = 1
                return sub_14281ba8c(arg1, arg2.b, i + 1)
            
            if (rdi == 6)
                goto label_14281a5c0

return result
