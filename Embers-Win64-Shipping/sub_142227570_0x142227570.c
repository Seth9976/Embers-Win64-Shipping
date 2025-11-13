// 函数: sub_142227570
// 地址: 0x142227570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0xa0)
void* i_1 = arg1

for (; i != 0; i = *(i + 0xa0))
    i_1 = i

char result = __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(i_1 + 0xf0)

if (result != 0)
    result = sub_140d3e110(i_1 + 0x100)
    
    if (result != 0)
        void* i_3 = *(i_1 + 0xa0)
        void* i_2
        int64_t* var_10 = &i_2
        i_2 = i_1
        
        if (i_3 == 0)
            i_3 = i_1
        
        uint32_t (* var_18)(int64_t* arg1) = j_sub_14220e690
        sub_14226a4e0(i_3 + 0xf0, &var_18)
        return sub_1422272c0(i_1) __tailcall

return result
