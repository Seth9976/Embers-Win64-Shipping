// 函数: sub_1408301c0
// 地址: 0x1408301c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0x28)
int32_t r9 = arg2.d

if (rax != 0)
    int32_t i_2 = rax[1].d
    int32_t r10_1 = 0
    int64_t rbx_1 = *rax
    int32_t i = i_2
    int32_t r8 = arg2:4.d
    
    if (i_2 s> 0)
        do
            int32_t rcx_1 = i & 0x80000001
            
            if (rcx_1 s< 0)
                rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
            
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = sx.q(i)
            int32_t i_1 = (temp4_1 - temp3_1) s>> 1
            i = i_1
            int32_t rax_4 = i_1 + r10_1
            int64_t rcx_4 = sx.q(rax_4) * 3
            int32_t rax_6 = *(rbx_1 + (rcx_4 << 3))
            rax = zx.q(rax_6 - r9)
            
            if (rax_6 == r9)
                rax = zx.q(*(rbx_1 + (rcx_4 << 3) + 4) - r8)
            
            if (rax.d s< 0)
                r10_1 = rax_4 + rcx_1
        while (i s> 0)
    
    if (r10_1 s< i_2)
        int64_t rcx_5 = sx.q(r10_1)
        rax = rcx_5 * 3
        int32_t r9_1 = r9 - *(rbx_1 + (rax << 3))
        
        if (r9 == *(rbx_1 + (rax << 3)))
            r9_1 = r8 - *(rbx_1 + (rax << 3) + 4)
        
        if (r9_1 s>= 0 && r10_1 != 0xffffffff)
            int16_t** rdi_2 = rbx_1 + 8 + rcx_5 * 0x18
            
            if (rdi_2 != 0)
                int16_t* const rbx_2 = &data_142d40450
                int64_t rbp
                rbp.b = 0
                int16_t* rcx_6
                
                if (rdi_2[1].d == 0)
                    rcx_6 = &data_142d40450
                else
                    rcx_6 = *rdi_2
                
                char rax_8 = sub_140ab3ae0(rcx_6)
                
                if (rax_8 != 0)
                    void var_38
                    sub_140a96170(&var_38)
                    
                    if (rdi_2[1].d != 0)
                        rbx_2 = *rdi_2
                    
                    if (sub_140abc1e0(rbx_2, &var_38, 0, 0, 0) != 0)
                        rbp.b = 1
                        sub_140597df0(arg3, sub_140ac6680(&var_38))
                    
                    int64_t* var_30
                    
                    if (var_30 != 0)
                        var_30[1].d -= 1
                        
                        if (var_30[1].d == 1)
                            (**var_30)(var_30)
                            int32_t rsi_1 = *(var_30 + 0xc)
                            *(var_30 + 0xc) -= 1
                            
                            if (rsi_1 == 1)
                                (*(*var_30 + 8))(var_30, zx.q(rsi_1))
                
                if (rax_8 == 0 || rbp.b == 0)
                    sub_140597df0(arg3, rdi_2)
                
                wchar16* rax_9
                rax_9.b = 1
                return rax_9

rax.b = 0
return rax
