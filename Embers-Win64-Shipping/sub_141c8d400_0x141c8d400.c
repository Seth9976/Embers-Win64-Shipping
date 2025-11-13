// 函数: sub_141c8d400
// 地址: 0x141c8d400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r10 = sub_140b5b8a0(*arg4, 0) == 0
char rax_2
int64_t* rcx_1

if ((arg4[1] != 0 | r10) != 0)
    rcx_1 = *(arg1 + 0x38)
    
    if (rcx_1 != 0)
        rax_2 = (*(*rcx_1 + 0x10))(rcx_1, arg3, arg4)

if ((arg4[1] != 0 | r10) == 0 || (rcx_1 != 0 && rax_2 == 0))
    *arg2 = nullptr
    arg2[1] = 0
else
    void*** rax_3 = j_sub_140a82f30(0x28)
    void*** rbx_1 = rax_3
    
    if (rax_3 == 0)
        rbx_1 = nullptr
    else
        rbx_1[1].b = 1
        *rbx_1 = &data_14320f708
        *(rbx_1 + 0xc) = *arg4
        *(rbx_1 + 0x14) = *arg5
        rbx_1[3] = *arg3
        void* rax_7 = arg3[1]
        rbx_1[4] = rax_7
        
        if (rax_7 != 0)
            *(rax_7 + 0xc) += 1
    
    void*** rax_8 = j_sub_140a82f30(0x18)
    
    if (rax_8 == 0)
        rax_8 = nullptr
    else
        rax_8[1].d = 1
        *rax_8 = &data_142e22f48
        *(rax_8 + 0xc) = 1
        rax_8[2] = rbx_1
    
    uint128_t zmm1 = rbx_1.o
    void* rbx_2 = *(arg1 + 0x28)
    void* (* var_48)(void* arg1, int64_t* arg2) = sub_141c89180
    int32_t var_40_1 = 0
    int128_t zmm0_1 = var_48.o
    var_48.o = zmm1
    void* rax_9 = _mm_bsrli_si128(zmm1, 8).q
    int128_t var_38 = zmm0_1
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
    
    void var_28
    int64_t* rax_10 = sub_141c7fb60(&var_28, rbx_2, &var_38, &var_48)
    
    if (sub_141c87730(rbx_2 + 0x110, rax_10) != 0)
        int64_t* rcx_5 = *(rbx_2 + 0x158)
        int64_t rdx_4 = *rcx_5
        (*(rdx_4 + 0x10))(rcx_5, rdx_4)
    
    sub_140745b20(rax_10)
    *arg2 = rbx_1
    arg2[1] = rax_8
    
    if (rax_8 != 0)
        rax_8[1].d += 1
        
        if (rax_8 != 0)
            rax_8[1].d -= 1
            
            if (rax_8[1].d == 1)
                (**rax_8)(rax_8)
                int32_t rdi_2 = *(rax_8 + 0xc)
                *(rax_8 + 0xc) -= 1
                
                if (rdi_2 == 1)
                    (*rax_8)[1](rax_8, zx.q(rdi_2))

return arg2
