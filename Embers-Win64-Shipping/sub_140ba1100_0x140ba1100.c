// 函数: sub_140ba1100
// 地址: 0x140ba1100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg2 + 8)
int64_t result

if (((r8 u>> 4).b & 1) == 0)
    void* var_18 = arg1
    void* var_10_1 = arg2
    
    if (((r8 u>> 0x12).b & 1) != 0)
        return sub_140b98d70(&var_18, *(arg2 + 0x20))
    
    if (((r8 u>> 0x16).b & 1) != 0)
        void* rbx = *(arg2 + 0x20)
        
        if (rbx != 0)
            void* rax_4 = sub_140bdf2e0()
            void* rdx_2 = *(rbx + 0x10)
            result = sx.q(*(rax_4 + 0x38))
            
            if (result.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (result << 3)) == rax_4 + 0x30)
                return sub_140b98d70(&var_18, *(rbx + 0x118))
        
        result.b = 0
        return result
else
    for (int64_t* i = *(arg1 + 0xa8); i != &i[sx.q(*(arg1 + 0xb0))]; i = &i[1])
        if (*i == arg2)
            goto label_140ba115b
    
    void arg_10
    
    if (*sub_140ba6ce0(arg1 + 0x58, &arg_10, arg2) != 0xffffffff)
        result.b = 1
        return result

label_140ba115b:
result.b = 0
return result
