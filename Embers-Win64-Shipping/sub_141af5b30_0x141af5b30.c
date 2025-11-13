// 函数: sub_141af5b30
// 地址: 0x141af5b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_141f3ba00(arg1) != 2)
    if (sub_141f3ba00(arg1) == 0)
        int64_t* rax_16 = sub_141f3b9f0(arg1)
        
        if (rax_16 != 0)
            sub_141e07a00(rax_16, zx.o(0), nullptr)
            sub_141e0f0c0(rax_16, zx.o(0), 0, 1)
        
        (*(*arg1 + 0x8d8))(arg1, 0)
        sub_141f6f060(arg1)
        sub_1405c6ac0(arg1, 0, 0)
else
    void* rax_1 = sub_141f3b9f0(arg1)
    
    if (rax_1 != 0)
        void* rax_2 = sub_141ae32c0()
        void* rcx_1 = *(rax_1 + 0x10)
        int64_t rdx_1 = sx.q(*(rax_2 + 0x38))
        
        if (rdx_1.d s> *(rcx_1 + 0x38) || *(*(rcx_1 + 0x30) + (rdx_1 << 3)) != rax_2 + 0x30)
            void* rax_9 = sub_140d21950(rax_1, sub_141ae8e30())
            
            if (rax_9 != 0)
                int64_t rdx_6 = *rax_9
                
                if ((*(rdx_6 + 0x20))(rax_9, rdx_6) != 0)
                    int64_t rdx_7 = *rax_9
                    void* rax_11 = (*(rdx_7 + 0x10))(rax_9, rdx_7)
                    
                    if (rax_11 != 0)
                        void* rax_12 = sub_141ae32c0()
                        void* rcx_10 = *(rax_11 + 0x10)
                        int64_t rdx_8 = sx.q(*(rax_12 + 0x38))
                        
                        if (rdx_8.d s> *(rcx_10 + 0x38)
                                || *(*(rcx_10 + 0x30) + (rdx_8 << 3)) != rax_12 + 0x30)
                            arg1[0xca] = rax_11
                        else
                            (*(*rax_9 + 0x18))(rax_9, 0)
        else
            void* rax_5 = sub_140d21950(rax_1, sub_141ae8e30())
            
            if (rax_5 == 0)
                sub_141f365a0(arg1)
            else
                int64_t rdx_3 = *rax_5
                
                if ((*(rdx_3 + 0x20))(rax_5, rdx_3) == 0)
                    sub_141f365a0(arg1)
                else
                    int64_t rdx_4 = *rax_5
                    int64_t rax_7 = (*(rdx_4 + 0x10))(rax_5, rdx_4)
                    
                    if (rax_7 == 0)
                        sub_141f365a0(arg1)
                    else
                        arg1[0xca] = rax_7

void* result

if (arg1[0x15] == 0)
    result = sub_141ee69e0(arg1)

if (arg1[0x15] != 0 || result != 0)
    void* rax_19 = arg1[0x15]
    
    if (rax_19 == 0)
        rax_19 = sub_141ee69e0(arg1)
    
    result = sub_14243ade0(rax_19)
    
    if (result.b == 0)
        return sub_141f58bd0(arg1) __tailcall

return result
