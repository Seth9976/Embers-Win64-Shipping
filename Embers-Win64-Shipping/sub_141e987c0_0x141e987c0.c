// 函数: sub_141e987c0
// 地址: 0x141e987c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2

if (arg3 s> 0 && arg4 s> 0 && arg2 != 0)
    void* rax_1 = sub_142487de0()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= rdi[7].d && *(rdi[6] + (rax_2 << 3)) == rax_1 + 0x30)
            void* rax_4 = sub_142487de0()
            int64_t rax_5
            
            if (rax_4 != 0)
                rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_4 == 0 || rax_5.d s> rdi[7].d || *(rdi[6] + (rax_5 << 3)) != rax_4 + 0x30)
                rdi = nullptr
            
            void* rax_7 = sub_140cde0b0()
            
            if ((1 & sub_140b5b8a0(0, 0)) != 0)
                sub_140d19010(rax_7, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
            
            void* result = sub_140d2dfc0(rdi, rax_7, 0, 0, 0, 0, 0, 0, 0)
            
            if (result != 0)
                sub_140d3a3a0(result + 0xf8, sub_1423de540(data_143f5b298, arg1, 1))
                sub_1423c21c0(result, zx.q(arg3), zx.q(arg4))
                return result

return nullptr
