// 函数: sub_14263a170
// 地址: 0x14263a170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = arg2

if (arg1 != 0)
    *(arg1 + 0xb8) += 1

int32_t i = 0

if (*(arg1 + 0xd8) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* rdi_1 = *(rsi_1 + *(arg1 + 0xd0))
        
        if (rdi_1 != 0)
            char rax_2
            
            if (*(rdi_1 + 0x50) != 0)
                rax_2, arg2 = sub_140d3e110(rdi_1 + 0x48)
            
            int64_t rax_3
            
            if (*(rdi_1 + 0x50) == 0 || rax_2 == 0)
                rax_3 = 0
            else
                rax_3 = *(rdi_1 + 0x50)
            
            if (rax_3 == r14)
                int64_t* r8_1 = *(rsi_1 + *(arg1 + 0xd0))
                
                if (*(r8_1 + 0x39) != 4)
                    *(r8_1 + 0x3c) |= 0x80
                    int32_t rax_5 = *(r8_1 + 0xc)
                    void* const rax_9
                    
                    if (rax_5 s>= data_143e1d9b4)
                        rax_9 = nullptr
                    else
                        uint32_t rdx = zx.d(rax_5.w)
                        
                        if (rax_5 s< 0)
                            rax_5 += 0xffff
                            rdx -= 0x10000
                        
                        rax_9 = *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(rdx) * 0x18
                    
                    if (((*(rax_9 + 8) u>> 0x1d).b & 1) != 0)
                        *(r8_1 + 0x39) = 4
                    else
                        arg2.b = 1
                        (*(*r8_1 + 0x2a0))(r8_1, arg2)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 0xd8))

int32_t result = *(arg1 + 0xb8) - 1
bool cond:0 = *(arg1 + 0xe8) == 0
*(arg1 + 0xb8) = result

if (not(cond:0) && (*(arg1 + 0xbc) & 1) == 0 && result == 0)
    return sub_14263c400(arg1) __tailcall

return result
