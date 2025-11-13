// 函数: sub_141ba0eb0
// 地址: 0x141ba0eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1

if (arg1 != 0)
    void* rax_1 = sub_141bfbd80()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= rsi[7].d && *(rsi[6] + (rax_2 << 3)) == rax_1 + 0x30)
            void* rax_4 = sub_141bfbd80()
            int64_t rax_5
            
            if (rax_4 != 0)
                rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_4 == 0 || rax_5.d s> rsi[7].d || *(rsi[6] + (rax_5 << 3)) != rax_4 + 0x30)
                rsi = nullptr
            
            void* rax_7 = sub_140cde0b0()
            
            if ((1 & sub_140b5b8a0(0, 0)) != 0)
                sub_140d19010(rax_7, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
            
            return sub_140d2dfc0(rsi, rax_7, 0, 0, 0, 0, 0, 0, 0)

void* rax_10 = sub_140cde0b0()
sub_140d19010(rax_10, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
return sub_140d2dfc0(sub_141bfbd80(), rax_10, 0, 0, 0, 0, 0, 0, 0)
