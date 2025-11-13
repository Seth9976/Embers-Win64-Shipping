// 函数: sub_1423c8d00
// 地址: 0x1423c8d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0xb8) s> 0)
    char arg_8 = 0
    result = sub_1423b8de0(*(arg1 + 0xb0), *(arg1 + 0xb8), 0)
    void* r15_1 = *(arg1 + 0x58)
    int32_t i = 0
    int128_t zmm6 = zx.o(0)
    void* rbp_1 = nullptr
    int128_t zmm0_1
    
    if (r15_1 != 0)
        int64_t* r14_1 = nullptr
        int128_t zmm7
        int128_t var_48_1 = zmm7
        
        while (i s< *(arg1 + 0xb8))
            void* rcx_1 = *(r15_1 + 0x20)
            result = *(arg1 + 0xb0)
            zmm0_1.d = zmm6.d f+ *(rcx_1 + 0x20)
            zmm7 = *(r14_1 + result + 8)
            
            if (zmm0_1.d f<= zmm7.d)
                rbp_1 = r15_1
                zmm6 = zmm0_1
                r15_1 = *(rcx_1 + 0x18)
            else
                void* rbx_1 = *(r14_1 + result)
                
                if (*(rbx_1 + 0xb) != 0)
                    if (*(r14_1 + result + 0xc) != 0)
                        sub_1409740e0(arg1 + 8, rbx_1)
                    
                    void* rax = *(rbx_1 + 0x20)
                    zmm7.d = zmm7.d f- zmm6.d
                    *(rbx_1 + 0xb) = 2
                    *(rax + 0x20) = zmm7.d
                    
                    if (rbp_1 == 0)
                        *(arg1 + 0x58) = rbx_1
                    else
                        *(*(rbp_1 + 0x20) + 0x18) = rbx_1
                    
                    rbp_1 = rbx_1
                    *(*(rbx_1 + 0x20) + 0x18) = r15_1
                    void* rcx_3 = *(r15_1 + 0x20)
                    zmm0_1.d = (*(rcx_3 + 0x20)).d f- *(*(rbx_1 + 0x20) + 0x20)
                    *(rcx_3 + 0x20) = zmm0_1.d
                    result = *(rbx_1 + 0x20)
                    zmm6.d = zmm6.d f+ result[4].d
                
                i += 1
                r14_1 = &r14_1[2]
            
            if (r15_1 == 0)
                break
    
    if (i s< *(arg1 + 0xb8))
        void** r14_3 = sx.q(i) << 4
        
        do
            result = *(arg1 + 0xb0)
            void* rbx_2 = *(r14_3 + result)
            
            if (*(rbx_2 + 0xb) != 0)
                if (*(r14_3 + result + 0xc) != 0)
                    sub_1409740e0(arg1 + 8, rbx_2)
                    result = *(arg1 + 0xb0)
                
                void* rax_4 = *(rbx_2 + 0x20)
                zmm0_1.d = (*(r14_3 + result + 8)).d f- zmm6.d
                *(rbx_2 + 0xb) = 2
                *(rax_4 + 0x20) = zmm0_1.d
                *(*(rbx_2 + 0x20) + 0x18) = 0
                
                if (rbp_1 == 0)
                    *(arg1 + 0x58) = rbx_2
                else
                    *(*(rbp_1 + 0x20) + 0x18) = rbx_2
                
                result = *(rbx_2 + 0x20)
                rbp_1 = rbx_2
                zmm6.d = zmm6.d f+ result[4].d
            
            i += 1
            r14_3 = &r14_3[2]
        while (i s< *(arg1 + 0xb8))
    
    *(arg1 + 0xb8) = 0
    
    if (*(arg1 + 0xbc) s<= 0xffffffff)
        return sub_1405a5410(arg1 + 0xb0, 0)

return result
