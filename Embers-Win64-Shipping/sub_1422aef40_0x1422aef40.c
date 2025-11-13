// 函数: sub_1422aef40
// 地址: 0x1422aef40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** i = *(arg1 + 0xd0)
int64_t result = sx.q(*(arg1 + 0xd8))

for (void* rsi = &i[result]; i != rsi; i = &i[1])
    int64_t* rdi_1 = *i
    
    if (rdi_1 != 0)
        void* rax = sub_142577430()
        void* rcx = rdi_1[2]
        result = sx.q(*(rax + 0x38))
        
        if (result.d s<= *(rcx + 0x38))
            int64_t result_1 = result
            result = *(rcx + 0x30)
            
            if (*(result + (result_1 << 3)) == rax + 0x30)
                result = (*(*rdi_1 + 0x6e8))(rdi_1, result_1)

return result
