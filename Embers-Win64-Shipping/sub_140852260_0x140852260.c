// 函数: sub_140852260
// 地址: 0x140852260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg1 + 0x20)

if (rax != 0)
    int64_t* i = *(rax + 0x78)
    void* arg_8 = arg2
    
    for (; i != &i[sx.q(*(rax + 0x80))]; i = &i[1])
        void* rax_2 = *i
        
        if (rax_2 != 0 && arg2 == *(rax_2 + 0x28))
            break

int64_t* result = sub_140865dd0(*(arg1 + 0x38))

if (result == 0)
    return result

return sub_140865e30(result, arg2) __tailcall
