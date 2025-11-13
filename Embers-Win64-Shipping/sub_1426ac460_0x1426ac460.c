// 函数: sub_1426ac460
// 地址: 0x1426ac460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2
void* rax = sub_1423de540(data_143f5b298, arg1, 1)

if (rax != 0 && rdi != 0)
    void* rax_1 = sub_14273ed60()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= rdi[7].d && *(rdi[6] + (rax_2 << 3)) == rax_1 + 0x30)
            void* rax_4 = sub_14273ed60()
            int64_t rax_5
            
            if (rax_4 != 0)
                rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_4 == 0 || rax_5.d s> rdi[7].d || *(rdi[6] + (rax_5 << 3)) != rax_4 + 0x30)
                rdi = nullptr
            
            if ((1 & sub_140b5b8a0(0, 0)) != 0)
                sub_140d19010(rax, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
            
            return sub_140d2dfc0(rdi, rax, 0, 0, 0, 0, 0, 0, 0)

return 0
