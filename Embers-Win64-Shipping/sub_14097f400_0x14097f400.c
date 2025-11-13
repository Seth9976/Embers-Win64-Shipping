// 函数: sub_14097f400
// 地址: 0x14097f400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* rdx = arg1
int32_t i_1 = 0

if (*(arg1 + 0x68) s> 0)
    int64_t* r9_1 = nullptr
    int64_t* var_68_1 = nullptr
    int32_t i
    
    do
        int64_t rax = *(rdx + 0x60)
        int64_t* rdi_1 = *(r9_1 + rax + 8)
        void* r13_1 = *(r9_1 + rax)
        void* rcx = r13_1
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            rcx = *(r9_1 + rax)
        
        int64_t* rbx_1 = *(rcx + 0x10)
        int64_t* r14_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t rax_1 = rbx_1[1].d
            
            if (rax_1 == 0)
                rbx_1 = nullptr
            else
                rbx_1[1].d = rax_1 + 1
                
                if (rbx_1 != 0)
                    r14_1 = *(rcx + 8)
                    rbx_1[1].d += 1
        
        void* r12_1 = *(rdx + 0x70)
        int64_t rax_3 = sx.q(*(rdx + 0x78))
        void* rbp_1 = r12_1
        void* r15_1 = r12_1 + rax_3 * 0x18
        int32_t rsi_2
        
        if (r12_1 == r15_1)
        label_14097f513:
            rsi_2 = -1
        else
            while (true)
                int64_t* rcx_2 = *(rbp_1 + 8)
                
                if (rcx_2 != 0)
                    rax_3 = (*(*rcx_2 + 0x28))(rcx_2)
                
                char rsi_1
                
                if (rcx_2 == 0 || rax_3.b == 0)
                    rsi_1 = 0
                else
                    rsi_1 = 1
                
                if (r14_1 != 0)
                    rax_3 = (*(*r14_1 + 0x28))(r14_1)
                
                if (r14_1 == 0 || rax_3.b == 0)
                    rax_3.b = 0
                else
                    rax_3.b = 1
                
                if (rsi_1 == rax_3.b)
                    if (rsi_1 != 0)
                        int64_t* rcx_4 = *(rbp_1 + 8)
                        rax_3 = (**rcx_4)(rcx_4, r14_1)
                    
                    if (rsi_1 == 0 || rax_3.b != 0)
                        rsi_2 = ((rbp_1 - r12_1) s/ 0x18).d
                        break
                
                rbp_1 += 0x18
                
                if (rbp_1 == r15_1)
                    goto label_14097f513
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
            
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        void* var_58_1 = r13_1
        void** const var_60 = &data_142e25968
        int64_t* var_50_1 = rdi_1
        
        if (rsi_2 != 0xffffffff)
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            var_60 = &data_142e259e0
            int64_t var_48_2 = 0
            int64_t var_40_2 = 0
            result = (*(*arg3 + 0xb20))(arg3, &var_60)
        else
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            var_60 = &data_142e259e0
            int64_t var_48_1 = 0
            int64_t var_40_1 = 0
            result = (*(*arg3 + 0xb28))(arg3, &var_60)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                result = (**rdi_1)(rdi_1)
                int32_t temp5_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*rdi_1 + 8))(rdi_1, 1)
        
        i = i_1 + 1
        rdx = arg1
        r9_1 = &var_68_1[3]
        i_1 = i
        var_68_1 = r9_1
    while (i s< *(rdx + 0x68))

return result
