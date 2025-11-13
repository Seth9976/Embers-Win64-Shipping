// 函数: sub_1405b5d50
// 地址: 0x1405b5d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140d3e110(arg1 + 0xa8)

if (result != 0)
    int64_t* rcx_2 = *(sub_140d3c6e0(arg1 + 0xa8) + 0x2b8)
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x6a0))(rcx_2, *(arg1 + 0x88))
    
    void* rax_2 = sub_140d3c6e0(arg1 + 0xa8)
    int32_t arg_8
    result = sub_1405ba450(&data_143958130, &arg_8, rax_2)
    int64_t rcx_4 = sx.q(arg_8)
    void* const rdx_3
    
    if (rcx_4.d == 0xffffffff)
        rdx_3 = nullptr
    else
        rdx_3 = data_143958130 + rcx_4 * 0x28
    
    int64_t* rbx_1 = rdx_3 + 8
    
    if (rdx_3 == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) -= 1
        
        if (*(rbx_1 + 0xc) s<= 0)
            *(rax_2 + 0x310) = rbx_1[2].b
            
            if (rbx_1[1].b != 0)
                void* rax_4 = sub_14226dd50(rax_2)
                
                if (rax_4 != 0)
                    void* rdx_4 = *(rax_4 + 0x70)
                    
                    if (rdx_4 != 0)
                        *(rdx_4 + 0xac) = *rbx_1
            
            result = sub_1405c2e50(&data_143958130, rax_2)

*(arg1 + 0x88) = 0
*(arg1 + 0xa8) = 0xffffffff
*(arg1 + 0xac) = 0
*(arg1 + 0x84) = 0xffffffff
return result
