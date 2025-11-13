// 函数: sub_142175270
// 地址: 0x142175270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t arg_18 = arg3
int32_t rdi = 0
int32_t i = 0
int32_t arg_8 = 0

if (*(arg1 + 0x98) s> 0)
    int64_t* r12_1 = nullptr
    int64_t rsi
    int64_t var_10_1 = rsi
    
    do
        result = *(arg1 + 0x90)
        void* rbp_1 = *(r12_1 + result)
        
        if (arg3 != rbp_1)
            if (*(arg1 + 0x228) == 0)
                int64_t* rcx = *arg2
                rdi |= 1
                void var_48
                result = sub_142155d40(rbp_1, *(*(*rcx + 0x18))(rcx, &var_48))
            
            if (*(arg1 + 0x228) != 0 || result.b == 0)
                rsi.b = 0
            else
                rsi.b = 1
            
            if ((rdi.b & 1) != 0)
                rdi &= 0xfffffffe
                int64_t* var_40
                
                if (var_40 != 0)
                    var_40[1].d -= 1
                    
                    if (var_40[1].d == 1)
                        result = (**var_40)(var_40)
                        int32_t temp3_1 = *(var_40 + 0xc)
                        *(var_40 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            result = (*(*var_40 + 8))(var_40, 1)
            
            if (rsi.b != 0)
                result = sub_14214b4f0(rbp_1)
                
                if (result != 0)
                    int64_t var_58 = *arg2
                    void* rcx_6 = arg2[1]
                    void* var_50_1 = rcx_6
                    
                    if (rcx_6 != 0)
                        *(rcx_6 + 8) += 1
                    
                    result = (*(*result + 0x310))(result, &var_58)
            
            arg3 = arg_18
        
        i += 1
        r12_1 = &r12_1[1]
    while (i s< *(arg1 + 0x98))

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_2 + 8))

return result
