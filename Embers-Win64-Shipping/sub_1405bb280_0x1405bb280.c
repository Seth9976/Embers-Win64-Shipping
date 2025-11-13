// 函数: sub_1405bb280
// 地址: 0x1405bb280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1

if (*data_143cd5f28 != 0)
    rax_1 = 0x440

if (*data_143cd5f28 == 0 || (arg1[1].b & 0x30) != 0)
    rax_1 = 0x270

int64_t* rsi = *(arg1 + rax_1)
void* r14 = &rsi[sx.q(*(arg1 + rax_1 + 8))]

if (rsi == r14)
    return nullptr

do
    void* result = *rsi
    
    if (result != 0)
        void* const rax_6
        
        if (arg2 == 0)
            rax_6 = nullptr
        else
            void* rax_3 = sub_1405c7aa0()
            
            if (rax_3 == 0)
                rax_6 = nullptr
            else
                int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_4.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                    rax_6 = nullptr
                else
                    rax_6 = arg2
        
        void* rdx_1 = *(result + 0x10)
        int64_t rax_7 = sx.q(*(rax_6 + 0x38))
        
        if (rax_7.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30
                && (arg3 == 0 || *(result + 0x2c) == arg3))
            return result
    
    rsi = &rsi[1]
while (rsi != r14)

return nullptr
