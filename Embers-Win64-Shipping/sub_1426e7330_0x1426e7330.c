// 函数: sub_1426e7330
// 地址: 0x1426e7330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int64_t result
    result.b = 0
    return result

int32_t rbx = 0
int64_t* var_38 = nullptr
int32_t var_30 = 0
int64_t var_28 = 0
int64_t var_20 = 0

if (sub_1426e7220(arg1, arg2, &var_38) != 0 && var_38 != 0)
    void* rax_1 = sub_14273b6f0()
    
    if (rax_1 != 0)
        int64_t* rdx = var_38
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= rdx[7].d && *(rdx[6] + (rax_2 << 3)) == rax_1 + 0x30 && rdx != 0)
            void* rax_4 = sub_14273b0e0()
            int64_t* rdx_1 = var_38
            void* const rax_8
            
            if (rdx_1 == 0)
                rax_8 = nullptr
            else
                void* rax_5 = sub_14273b6f0()
                rdx_1 = var_38
                
                if (rax_5 == 0)
                    rax_8 = nullptr
                else
                    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                    
                    if (rax_6.d s> rdx_1[7].d)
                        rax_8 = nullptr
                    else
                        rax_8 = rdx_1
                        
                        if (*(rdx_1[6] + (rax_6 << 3)) != rax_5 + 0x30)
                            rax_8 = nullptr
            
            if (rax_4 != 0)
                int64_t rcx_2 = sx.q(*(rax_4 + 0x38))
                
                if (rcx_2.d s<= *(rax_8 + 0x38)
                        && *(*(rax_8 + 0x30) + (rcx_2 << 3)) == rax_4 + 0x30)
                    int64_t* rsi_3
                    
                    if (rdx_1 == 0)
                        rsi_3 = nullptr
                    else
                        void* rax_10 = sub_14273b6f0()
                        
                        if (rax_10 == 0)
                            rsi_3 = nullptr
                        else
                            rsi_3 = var_38
                            int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                            
                            if (rax_11.d s> rsi_3[7].d
                                    || *(rsi_3[6] + (rax_11 << 3)) != rax_10 + 0x30)
                                rsi_3 = nullptr
                    
                    int64_t* r14_1 = rsi_3[0x23]
                    
                    if (r14_1 == 0)
                        (*(*rsi_3 + 0x390))(rsi_3)
                        r14_1 = rsi_3[0x23]
                    
                    int32_t rax_14 = var_30
                    int16_t rbp_1 = r14_1[5].w
                    int64_t rsi_4 = var_28
                    
                    if (rax_14 s> *(arg3 + 0xc))
                        sub_140638c50(arg3, rax_14)
                        rax_14 = var_30
                    
                    if (rax_14 s> 0)
                        do
                            int64_t rax_16 = (*(*r14_1 + 0x288))(r14_1, rsi_4)
                            
                            if (rax_16 != 0)
                                int64_t rbp_2 = sx.q(arg3[1].d)
                                int32_t rcx_7 = (rbp_2 + 1).d
                                arg3[1].d = rcx_7
                                
                                if (rcx_7 s> *(arg3 + 0xc))
                                    sub_1405a4d70(arg3)
                                
                                *(*arg3 + (rbp_2 << 3)) = rax_16
                            
                            rsi_4 += zx.q(rbp_1)
                            rbx += 1
                        while (rbx s< var_30)

rbx.b = arg3[1].d s> 0

if (var_28 != 0)
    sub_140a74f90(var_28)

return zx.q(rbx.b)
