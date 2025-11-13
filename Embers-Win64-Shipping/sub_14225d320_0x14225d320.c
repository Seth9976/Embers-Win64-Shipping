// 函数: sub_14225d320
// 地址: 0x14225d320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x9e] = arg2
int128_t* result = arg1[0x9c]
int128_t* result_1

if (arg2 != 0)
    if (result != 0)
        result_1 = result
        void* rax_1 = arg1[0x9d]
        void* var_20_1 = rax_1
        
        if (rax_1 != 0)
            *(rax_1 + 8) += 1
        
        return sub_14201bab0(arg2, &result_1)
    
    jump(*(*arg1 + 0xca8))

if (result != 0)
    void* rbp_1 = arg1[0x53]
    int128_t var_18
    
    if (rbp_1 != 0)
        void* rax_3 = sub_142531230()
        void* rdx_1 = *(rbp_1 + 0x10)
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30
                && *(rbp_1 + 0x70) != 0)
            int64_t* rbx_1 = arg1[0x9d]
            result_1 = arg1[0x9c]
            int64_t* var_20_2 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            var_18 = result_1.o
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            int64_t* rcx_2 = *(rbp_1 + 0x70)
            (*(*rcx_2 + 0x290))(rcx_2, &var_18)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
    
    (*(*arg1 + 0xbe8))(arg1)
    result = &var_18
    
    if (&arg1[0x9c] != &var_18)
        result = nullptr
        arg1[0x9c] = 0
        int64_t* rbx_2 = arg1[0x9d]
        
        if (rbx_2 != 0)
            arg1[0x9d] = 0
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp1_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    return (*(*rbx_2 + 8))(rbx_2, 1)

return result
