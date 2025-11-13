// 函数: sub_1422abe20
// 地址: 0x1422abe20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1422aa530(arg1, arg3 + 8)
uint64_t result = (*(*arg2 + 0xb40))(arg2, arg3)
int64_t* result_1 = result

if (result != 0)
    int64_t* rax_1 = arg1[2]
    int64_t* rdi_1 = rax_1
    void* r13_2 = arg2[0x45] + 0x250
    void* rbp_3 = &rax_1[sx.q(arg1[3].d) * 2]
    
    if (rax_1 != rbp_3)
        while (true)
            int64_t* rbx_1 = rdi_1[1]
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            int64_t* rcx_1 = *(arg3 + 8)
            char rax_3
            
            if (rcx_1 != 0)
                rax_3 = (**rcx_1)(rcx_1)
            
            int64_t* rsi
            
            if (rcx_1 == 0 || rax_3 == 0)
                rsi.b = 0
            else
                rsi.b = 1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (rsi.b != 0)
                break
            
            rdi_1 = &rdi_1[2]
            
            if (rdi_1 == rbp_3)
                goto label_1422abf31
    
    void** const var_68
    
    if (rax_1 == rbp_3 || ((rdi_1 - rax_1) s>> 4).d == 0xffffffff)
    label_1422abf31:
        
        if (sub_142284d50(&result_1[0x7b], r13_2) == 0xffffffff)
            int64_t var_60_1 = *(arg3 + 8)
            void* rax_8 = *(arg3 + 0x10)
            void* var_58_1 = rax_8
            
            if (rax_8 != 0)
                *(rax_8 + 8) += 1
            
            int64_t rax_9 = *arg2
            var_68 = &data_142e259e0
            int64_t var_50_1 = 0
            int64_t var_48_1 = 0
            (*(rax_9 + 0xb38))(arg2, &var_68)
    
    result = sub_142284d50(&result_1[0x7b], r13_2)
    
    if (result.d == 0xffffffff)
        result = sub_142284d50(&result_1[0x7d], r13_2)
        
        if (result.d == 0xffffffff)
            sub_1422aa530(&arg1[4], arg3 + 8)
            sub_1422aa530(&result_1[0x7f], r13_2 + 8)
            int64_t var_60_2 = *(r13_2 + 8)
            void* rax_11 = *(r13_2 + 0x10)
            void* var_58_2 = rax_11
            
            if (rax_11 != 0)
                *(rax_11 + 8) += 1
            
            int64_t var_50_2 = 0
            var_68 = &data_142e259e0
            int64_t var_48_2 = 0
            return (*(*result_1 + 0xb38))(result_1, &var_68)

return result
