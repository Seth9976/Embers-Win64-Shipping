// 函数: sub_14218c0b0
// 地址: 0x14218c0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x40)
int64_t rdi = sx.q(arg2)
int64_t result

for (void* rsi = &i[sx.q(*(arg1 + 0x48))]; i != rsi; i = &i[1])
    result = *i
    
    if (result != 0 && rdi.d s< *(result + 0x48))
        void* rcx = *(*(result + 0x40) + (rdi << 3))
        
        if (rcx != 0)
            int64_t* rcx_1 = *(rcx + 0x48)
            
            if (rcx_1 != 0 && (*(*rcx_1 + 0x380))(rcx_1).b != 0)
                result.b = 1
                return result

result.b = 0
return result
