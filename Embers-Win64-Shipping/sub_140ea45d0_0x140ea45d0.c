// 函数: sub_140ea45d0
// 地址: 0x140ea45d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = nullptr
int32_t arg_10 = 0
void* var_38
int64_t* var_30

if (arg2 != *(arg1 + 0x2fc))
    int32_t rax_2 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
    int32_t rcx_1 = *(arg1 + 0x2fc)
    int64_t rdx = *(arg1 + 0x2a8)
    int32_t rdi_1 = rax_2 - 1
    
    if (rcx_1 s<= rdi_1)
        rdi_1 = rcx_1
    
    int32_t rax_4 = (*rdx)(arg1 + 0x2a8, rdx) - 1
    
    if (arg2 s<= rax_4)
        rax_4 = arg2
    
    *(arg1 + 0x2fc) = rax_4
    sub_140ebe530(arg1, &var_38)
    
    if ((**(arg1 + 0x2a8))(arg1 + 0x2a8) s> 0)
        void* r13_1 = var_38
        
        if (r13_1 != 0)
            int64_t var_58
            int64_t* var_50
            int128_t var_48
            int128_t* rcx_5
            int64_t rdx_2
            int32_t r14_1
            
            if (rdi_1 != 0xffffffff)
                int64_t* rax_9 = (sx.q(rdi_1) << 4) + *(arg1 + 0x2b8)
                int64_t* rcx_6 = rax_9[1]
                rdx_2 = *rax_9
                var_58 = rdx_2
                var_50 = rcx_6
                
                if (rcx_6 != 0)
                    rcx_6[1].d += 1
                
                rcx_5 = &var_58
                r14_1 = 2
            else
                rcx_5 = &var_48
                var_48 = zx.o(0)
                r14_1 = 1
                rdx_2 = 0
            
            int64_t* rax_10 = *(rcx_5 + 8)
            *(rcx_5 + 8) = 0
            *rcx_5 = 0
            int64_t var_68 = rdx_2
            
            if ((r14_1.b & 2) != 0)
                r14_1 &= 0xfffffffd
                
                if (var_50 != 0)
                    var_50[1].d -= 1
                    
                    if (var_50[1].d == 1)
                        (**var_50)(var_50)
                        int32_t temp8_1 = *(var_50 + 0xc)
                        *(var_50 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*var_50 + 8))(var_50, 1)
            
            if ((r14_1.b & 1) != 0)
                int64_t* rbx_3 = var_48:8.q
                r14_1 &= 0xfffffffe
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp9_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
            
            int64_t rax_15 = sx.q(*(arg1 + 0x2fc))
            int128_t* rcx_11
            int64_t rdx_3
            int32_t rdi_2
            
            if (rax_15.d != 0xffffffff)
                int64_t* rax_17 = (rax_15 << 4) + *(arg1 + 0x2b8)
                int64_t* rcx_12 = rax_17[1]
                rdx_3 = *rax_17
                var_58 = rdx_3
                var_50 = rcx_12
                
                if (rcx_12 != 0)
                    rcx_12[1].d += 1
                
                rcx_11 = &var_58
                rdi_2 = 8
            else
                rcx_11 = &var_48
                var_48 = zx.o(0)
                rdx_3 = 0
                rdi_2 = (rax_15 + 5).d
            
            int64_t* rax_18 = *(rcx_11 + 8)
            int32_t rdi_3 = rdi_2 | r14_1
            *(rcx_11 + 8) = 0
            int64_t var_78 = rdx_3
            *rcx_11 = 0
            
            if ((rdi_3.b & 8) != 0)
                rdi_3 &= 0xfffffff7
                
                if (var_50 != 0)
                    var_50[1].d -= 1
                    
                    if (var_50[1].d == 1)
                        (**var_50)(var_50)
                        int32_t temp12_1 = *(var_50 + 0xc)
                        *(var_50 + 0xc) -= 1
                        
                        if (temp12_1 == 1)
                            (*(*var_50 + 8))(var_50, 1)
            
            if ((rdi_3.b & 4) != 0)
                int64_t* rbx_5 = var_48:8.q
                
                if (rbx_5 != 0)
                    rbx_5[1].d -= 1
                    
                    if (rbx_5[1].d == 1)
                        (**rbx_5)(rbx_5)
                        int32_t temp14_1 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (temp14_1 == 1)
                            (*(*rbx_5 + 8))(rbx_5, 1)
            
            int64_t* rbx_6 = *(r13_1 + 0x3f0)
            
            if (rbx_6 != 0)
                int32_t rax_23 = rbx_6[1].d
                
                if (rax_23 != 0)
                    rbx_6[1].d = rax_23 + 1
                    rax_23.b = 1
                
                if (rax_23.b == 0)
                    rbx_6 = nullptr
                
                if (rbx_6 != 0)
                    rsi = *(r13_1 + 0x3e8)
            
            int64_t* rcx_17 = **(rsi + 0xd8)
            (*(*rcx_17 + 0x20))(rcx_17, &var_78, &var_68)
            
            if (rbx_6 != 0)
                rbx_6[1].d -= 1
                
                if (rbx_6[1].d == 1)
                    (**rbx_6)(rbx_6)
                    int32_t temp16_1 = *(rbx_6 + 0xc)
                    *(rbx_6 + 0xc) -= 1
                    
                    if (temp16_1 == 1)
                        (*(*rbx_6 + 8))(rbx_6, 1)
            
            sub_140ebd660()
            int64_t* rcx_21 = **(data_143e2a070 + 0xd8)
            (*(*rcx_21 + 0x20))(rcx_21, &var_78, &var_68)
            
            if (rax_18 != 0)
                rax_18[1].d -= 1
                
                if (rax_18[1].d == 1)
                    (**rax_18)(rax_18)
                    int32_t temp18_1 = *(rax_18 + 0xc)
                    *(rax_18 + 0xc) -= 1
                    
                    if (temp18_1 == 1)
                        (*(*rax_18 + 8))(rax_18, 1)
            
            if (rax_10 != 0)
                rax_10[1].d -= 1
                
                if (rax_10[1].d == 1)
                    (**rax_10)(rax_10)
                    int32_t temp19_1 = *(rax_10 + 0xc)
                    *(rax_10 + 0xc) -= 1
                    
                    if (temp19_1 == 1)
                        (*(*rax_10 + 8))(rax_10, 1)
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp4_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_30 + 8))(var_30, 1)

sub_140ed4670(arg1)
int64_t result = sx.q(*(arg1 + 0x2fc))

if (result.d != 0xffffffff)
    int64_t* rax_37 = sub_140f03670(*(*(arg1 + 0x2b8) + result * 0x10), &var_38)
    int64_t* rdi_4 = rax_37[1]
    int64_t rsi_1 = *rax_37
    
    if (rdi_4 != 0)
        rdi_4[1].d += 1
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp1_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    result = sub_140ebd660()
    
    if (rsi_1 != 0 && rsi_1 == data_143e2a070)
        int64_t* rbx_13 = (sx.q(*(arg1 + 0x2fc)) << 4) + *(arg1 + 0x2b8)
        sub_140ebd660()
        result = sub_140ede260(data_143e2a070, rbx_13)
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            result = (**rdi_4)(rdi_4)
            int32_t temp5_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp5_1 == 1)
                return (*(*rdi_4 + 8))(rdi_4, 1)

return result
