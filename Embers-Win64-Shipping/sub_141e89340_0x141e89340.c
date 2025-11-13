// 函数: sub_141e89340
// 地址: 0x141e89340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t r13 = sx.q(arg3)
int32_t i = r13.d

if (r13.d s< arg2[1].d)
    int64_t r14_1 = r13 << 3
    int128_t zmm6
    int128_t var_38_1 = zmm6
    
    do
        int64_t* rbp_1 = *(r14_1 + *arg2)
        void* rax_1 = rbp_1[0x18]
        *(rax_1 + 0x183) |= 8
        int32_t result_1
        sub_140865c40(arg1 + 0x160, &result_1, rbp_1)
        result = sx.q(result_1)
        
        if (result.d != 0xffffffff)
            void* rdx_1 = result * 3
            result = *(arg1 + 0x160)
            void* rbx_1 = &result[rdx_1]
            
            if (rbx_1 != 0)
                void* rbx_2 = *(rbx_1 + 8)
                
                if (rbx_2 != 0)
                    *(rbx_2 + 0x3c) = *(arg1 + 0xa8)
                    sub_141e632a0(rbp_1)
                    int32_t zmm0_2
                    zmm0_2, result, zmm6 = sub_141e5f830(rbp_1)
                    zmm6.d = zmm6.d f* zmm0_2
                    
                    if (not(zmm6.d f<= 0f))
                        result = zx.q(*(arg1 + 0xa8))
                        *(rbx_2 + 0x40) = result.d
        
        i += 1
        r14_1 += 8
    while (i s< arg2[1].d)

int64_t rdi = 0
int32_t i_1 = 0

if (*(arg1 + 0x148) s> 0)
    int64_t* r15_1 = nullptr
    
    do
        result = *(arg1 + 0x140)
        int64_t* rbx_3 = *(r15_1 + result)
        void* rbp_2 = rbx_3[2]
        
        if (rbp_2 != 0)
            if (sub_141e6c030(rbp_2) != 0 || sx.q(*(rbx_3 + 0x3c)) != *(arg1 + 0xa8))
                char rax_7 = (*(*rbx_3 + 0x48))(rbx_3)
                int64_t rdx_5 = *rbx_3
                
                if (rax_7 != 0)
                    result = (*(rdx_5 + 0x28))(rbx_3, rdx_5)
                else
                    result = (*(rdx_5 + 0x38))(rbx_3, rdx_5)
            else
                char rdx_4
                int32_t zmm0_3
                rdx_4, zmm0_3 = sub_141e6bc60(rbx_3, (*(rbp_2 + 0x100) u>> 0xc).b & 1)
                sub_141e65760(rbx_3, zmm0_3, rdx_4)
                result = (*(*rbx_3 + 0x28))(rbx_3)
        
        i_1 += 1
        r15_1 = &r15_1[1]
    while (i_1 s< *(arg1 + 0x148))

if (r13 s> 0)
    do
        result = sub_141e6c360(*(*arg2 + (rdi << 3)))
        rdi += 1
    while (rdi s< r13)

return result
