// 函数: sub_140bdef80
// 地址: 0x140bdef80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg1[0x24]

if (result != 0)
    return result

void* rax = arg1[0x25]

if (rax != 0)
    int32_t rdx_1 = *(rax + 0x5c)
    int64_t rax_3 = sub_140a82f30(sx.q((*(rax + 0x58) - 1 + rdx_1) & neg.d(rdx_1)), rdx_1)
    void* rcx_5 = arg1[0x25]
    arg1[0x24] = rax_3
    int64_t* rcx_6 = *(rcx_5 + 0xb8)
    int64_t r8_1 = *rcx_6
    (*(r8_1 + 0x18))(rcx_6, rax_3, r8_1)
    
    if (arg1[0x24] != 0)
        int64_t rax_5 = (*(*arg1 + 0x380))(arg1)
        int64_t* rcx_8 = arg1[8]
        void* const rax_6
        
        if (rcx_8 == 0)
            rax_6 = nullptr
        else
            int64_t rdx_3 = *rcx_8
            rax_6 = (*(rdx_3 + 0x148))(rcx_8, rdx_3)
        
        if (rax_5 != 0)
            for (int64_t* i = *(rax_6 + 0x70); i != 0; i = i[0xb])
                int64_t rcx_9 = sx.q(*(i + 0x4c))
                int64_t r10_2 = arg1[0x24] + rcx_9
                int64_t rdx_4 = rcx_9 + rax_5
                
                if (r10_2 != rdx_4)
                    if (not(test_bit(zx.q(i[8].d), 0x1e)))
                        (*(*i + 0xb0))(i, r10_2, rdx_4, zx.q(i[7].d))
                    else
                        memcpy(r10_2, rdx_4, *(i + 0x3c) * i[7].d)

return arg1[0x24]
