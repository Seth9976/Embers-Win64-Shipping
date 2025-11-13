// 函数: sub_1424408c0
// 地址: 0x1424408c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_141dc9840(arg2)
int64_t* rcx_1 = *(result + 0x98)
int64_t* r9 = rcx_1
void* rdx = &rcx_1[sx.q(*(result + 0xa0))]

if (rcx_1 != rdx)
    do
        if (*r9 == arg2)
            int32_t r9_2 = ((r9 - rcx_1) s>> 3).d
            
            if (r9_2 != 0xffffffff)
                result = *(result + 0x98)
                *(result + (sx.q(r9_2) << 3)) = 0
            
            break
        
        r9 = &r9[1]
    while (r9 != rdx)

if (arg2 != 0)
    void* rcx_3 = data_143f5b298
    
    if (rcx_3 != 0 && arg1 != 0)
        result = sub_1423de4b0(rcx_3, arg1)
        
        if (result != 0)
            int64_t* i = *(result + 0x220)
            
            for (void* rdi_3 = &i[sx.q(*(result + 0x228)) * 2]; i != rdi_3; i = &i[2])
                void* rcx_4 = *i
                
                if (rcx_4 != 0)
                    result = sub_142175040(rcx_4, arg2)

return result
