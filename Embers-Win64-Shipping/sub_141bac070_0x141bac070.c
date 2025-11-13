// 函数: sub_141bac070
// 地址: 0x141bac070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x638)

for (void* rbp = &i[sx.q(*(arg1 + 0x640))]; i != rbp; i = &i[1])
    void* result = *i
    void* const rax_4
    
    if (arg2 == 0)
        rax_4 = nullptr
    else
        void* rax_1 = sub_141c08960()
        
        if (rax_1 == 0)
            rax_4 = nullptr
        else
            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rax_2.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                rax_4 = nullptr
            else
                rax_4 = arg2
    
    void* rdx_1 = *(result + 0x10)
    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_5.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
        return result

return nullptr
