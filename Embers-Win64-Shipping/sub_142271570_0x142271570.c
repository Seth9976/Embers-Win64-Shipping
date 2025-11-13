// 函数: sub_142271570
// 地址: 0x142271570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x298)
char rsi = 0
int32_t arg_8 = 0
int64_t result

if (rbx != 0)
    void* rax = sub_142531230()
    void* rcx = *(rbx + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (result << 3)) == rax + 0x30 && arg2 != 0)
        void* var_38
        sub_1420fc090(rbx, &var_38, arg3)
        void* const rdi
        
        if (var_38 == 0)
            rdi.b = 0
        else
            rsi = 1
            void var_18
            int64_t* rax_1 = sub_142029ad0(arg2, &var_18)
            int64_t var_28 = *rax_1
            void* rcx_4 = rax_1[1]
            void* var_20_1 = rcx_4
            
            if (rcx_4 != 0)
                *(rcx_4 + 8) += 1
            
            if (sub_140e6b440(var_38, &var_28, arg3).b == 0)
                rdi.b = 0
            else
                rdi = 1
        
        int64_t* var_10
        
        if ((rsi & 1) != 0 && var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t temp3_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)
        
        int64_t* var_30
        
        if (rdi.b != 0)
            if (var_30 != 0)
                var_30[1].d -= 1
                
                if (var_30[1].d == 1)
                    (**var_30)(var_30)
                    int32_t temp5_1 = *(var_30 + 0xc)
                    *(var_30 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*var_30 + 8))(var_30, 1)
            
            result.b = 1
            return result
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t temp4_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_30 + 8))(var_30, 1)

result.b = 0
return result
