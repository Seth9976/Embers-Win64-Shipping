// 函数: sub_141de71e0
// 地址: 0x141de71e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140d2b230(arg1 + 0x28)
int64_t* rdi = rax

if (rax != 0)
    sub_1425497a0()
    void* rax_1 = sub_1425497a0()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= rdi[7].d && *(rdi[6] + (rax_2 << 3)) == rax_1 + 0x30)
            void* rax_4 = sub_1425497a0()
            int64_t rax_5
            
            if (rax_4 != 0)
                rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_4 == 0 || rax_5.d s> rdi[7].d || *(rdi[6] + (rax_5 << 3)) != rax_4 + 0x30)
                rdi = nullptr
            
            if ((1 & sub_140b5b8a0(0, 0)) != 0)
                sub_140d19010(arg2, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
            
            void* result = sub_140d2dfc0(rdi, arg2, 0, 0, 0, 0, 0, 0, 0)
            
            if (result == 0)
                return result
            
            (*(*result + 0x270))(result, arg1)
            return result

return 0
