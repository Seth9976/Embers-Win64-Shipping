// 函数: sub_141fb6490
// 地址: 0x141fb6490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_1407473e0(arg1 + 0xb50, arg3)
int64_t* rcx_1 = *(arg1 + 0xb30)
int64_t rbx_1

if (rcx_1 != 0)
    rbx_1 = data_143f3d668
    void arg_8
    result = (*(*rcx_1 + 0x18))(rcx_1, &arg_8)

if (rcx_1 == 0 || *result != rbx_1)
    int64_t* i = *(arg1 + 0xb20)
    
    for (void* rbp_3 = &i[sx.q(*(arg1 + 0xb28)) * 2]; i != rbp_3; i = &i[2])
        int64_t* rcx_2 = *i
        int64_t rbx_2 = data_143f3d668
        void arg_20
        result = (*(*rcx_2 + 0x18))(rcx_2, &arg_20)
        
        if (*result == rbx_2)
            goto label_141fb656a
    
    if (*(arg1 + 0xb09) == 0)
        void*** rax_2 = j_sub_140a82f30(0x50)
        
        if (rax_2 == 0)
            return sub_141fa9990(arg1, 0, arg2)
        
        void*** rax_3
        int512_t zmm1
        rax_3, zmm1 = sub_141fa4c40(rax_2, arg1, arg2.o)
        return sub_141fa9990(arg1, rax_3, zmm1)

label_141fb656a:

if (*(arg1 + 0xb58) != 0)
    int64_t* rcx_6 = *(arg1 + 0xb50)
    
    if (rcx_6 != 0)
        result = (*(*rcx_6 + 0x28))(rcx_6)
        
        if (result.b != 0)
            int64_t* rcx_7
            
            if (*(arg1 + 0xb58) == 0)
                rcx_7 = nullptr
            else
                rcx_7 = *(arg1 + 0xb50)
            
            result = (*(*rcx_7 + 0x50))(rcx_7, 0)
    
    if (*(arg1 + 0xb58) != 0)
        int64_t* rcx_8 = *(arg1 + 0xb50)
        
        if (rcx_8 != 0)
            result = (*(*rcx_8 + 0x38))(rcx_8, 0)
            int64_t* rcx_9 = *(arg1 + 0xb50)
            
            if (rcx_9 != 0)
                result = sub_140a84c80(rcx_9, 0, 0)
                *(arg1 + 0xb50) = result
            
            *(arg1 + 0xb58) = 0

return result
