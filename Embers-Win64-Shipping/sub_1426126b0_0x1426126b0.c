// 函数: sub_1426126b0
// 地址: 0x1426126b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg2 != 0)
    char rbx_1 = (*(arg1 + 0xa0)).b
    char rdx = (*(arg1 + 0x9c)).b
    int32_t r9_3 = ((1 << rdx).d - 1) & (arg2 u>> rbx_1).d
    
    if (r9_3 u< *(arg1 + 0x30))
        int32_t* r9_5 = zx.q(r9_3) * 0xb0 + *(arg1 + 0x90)
        
        if (*r9_5 == ((arg2 u>> (rdx + rbx_1)).d & ((1 << (*(arg1 + 0x98)).b).d - 1)))
            result = *(r9_5 + 8)
            
            if (result != 0 && (((1 << rbx_1).d - 1) & arg2.d) u< *(result + 0x18))
                result.b = 1
                return result

result.b = 0
return result
