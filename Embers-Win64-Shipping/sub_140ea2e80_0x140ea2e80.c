// 函数: sub_140ea2e80
// 地址: 0x140ea2e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0 = sub_140ea2be0(arg1[0x7e], arg2, arg3)

if (sub_140db3130(&arg1[0x8c]) != 0)
    int64_t* rcx_3 = arg1[0x7e] + 0x2a8
    
    if ((**rcx_3)(rcx_3) s> 1)
        int64_t* rcx_4 = arg1[2]
        int64_t rdx = 0
        
        if (rcx_4 != 0)
            int32_t rax_3 = rcx_4[1].d
            
            if (rax_3 != 0)
                rcx_4[1].d = rax_3 + 1
                rax_3.b = 1
            
            if (rax_3.b == 0)
                rcx_4 = nullptr
            
            if (rcx_4 != 0)
                rdx = arg1[1]
        
        int64_t var_28 = rdx
        sub_140db7a20(&arg1[0x8c], &var_28, 0, zx.o(0), zmm0, 1)
        
        if (rcx_4 != 0)
            rcx_4[1].d -= 1
            
            if (rcx_4[1].d == 1)
                (**rcx_4)(rcx_4)
                int32_t temp3_1 = *(rcx_4 + 0xc)
                *(rcx_4 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rcx_4 + 8))(rcx_4, 1)

if (arg1[0x8a].b != 0)
    sub_140e214e0(arg1[0x88], 0xffffffff)
    arg1[0x8a].b = 0

void* result_1
(*(*arg1 + 0x258))(arg1, &result_1)
void* result = result_1

if (result != 0)
    *(result + 0x3f8) = 0

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp2_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*var_10 + 8))(var_10, 1)

return result
