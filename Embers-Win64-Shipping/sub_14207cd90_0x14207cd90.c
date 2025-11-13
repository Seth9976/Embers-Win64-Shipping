// 函数: sub_14207cd90
// 地址: 0x14207cd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void var_148
int64_t rax_2 = __security_cookie ^ &var_148
int64_t** r14_1 = arg2

if (sub_141dce740(arg3).b == 0)
    void* rbp_1 = nullptr
    int64_t* var_50_1 = nullptr
    int32_t var_48_1 = 0
    int32_t var_44_1 = 0x18
    void* rax_3 = sub_1425881f0()
    
    if (rax_3 != 0)
        void* rax_4 = sub_142459c10()
        
        if (rax_4 != 0)
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s<= *(rax_3 + 0x38) && *(*(rax_3 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
                rbp_1 = rax_3
    
    void var_110
    void* r8 = &var_110
    
    if (rbp_1 != sub_142459c10())
        sub_1419f71f0(arg3, rax_3, r8)
    else
        sub_1419f6fe0(arg3, rax_3, r8)
    
    int32_t i = 0
    int32_t i_1 = 0
    
    if (r14_1[1].d s> 0)
        int64_t* rdx_2 = nullptr
        int64_t* var_120_1 = nullptr
        
        do
            int32_t r12_1 = 0
            int64_t rbp_2 = *(rdx_2 + *r14_1)
            
            if (var_48_1 s> 0)
                int64_t r13_1 = 0
                
                do
                    int64_t* rax = &var_110
                    
                    if (var_50_1 != 0)
                        rax = var_50_1
                    
                    int64_t* r14_2 = *(rax + r13_1)
                    
                    if ((r14_2[0x11].b & 1) != 0)
                        void* rax_8 = sub_142577430()
                        void* rdx_3 = r14_2[2]
                        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                        
                        if (rax_9.d s> *(rdx_3 + 0x38)
                                || *(*(rdx_3 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                            void* rax_14 = sub_14249b500()
                            void* rdx_8 = r14_2[2]
                            rax = sx.q(*(rax_14 + 0x38))
                            
                            if (rax.d s<= *(rdx_8 + 0x38)
                                    && (*(rdx_8 + 0x30))[rax] == rax_14 + 0x30)
                                rax = (*(*r14_2 + 0x540))(r14_2, rdx_8)
                                int32_t rbx_3 = 0
                                int32_t r15_2 = rax.d
                                
                                if (rax.d s> 0)
                                    do
                                        int64_t r8_5 = *r14_2
                                        rax = (*(r8_5 + 0x548))(r14_2, zx.q(rbx_3), r8_5)
                                        int64_t* rsi_4 = rax
                                        
                                        if (rax != 0)
                                            if (rax == rbp_2)
                                            label_14207d038:
                                                int64_t rsi_5 = sx.q(arg1[1].d)
                                                int32_t rax_17 = (rsi_5 + 1).d
                                                arg1[1].d = rax_17
                                                
                                                if (rax_17 s> *(arg1 + 0xc))
                                                    sub_1405a4df0(arg1)
                                                
                                                rax = *arg1 + rsi_5 * 0x18
                                                
                                                if (rax != 0)
                                                    *rax = 0
                                                    rax[1] = r14_2
                                                    rax[2].d = rbx_3
                                            else
                                                void* rax_16 = sub_142542e20()
                                                void* rdx_10 = rsi_4[2]
                                                rax = sx.q(*(rax_16 + 0x38))
                                                
                                                if (rax.d s<= *(rdx_10 + 0x38)
                                                        && (*(rdx_10 + 0x30))[rax] == rax_16 + 0x30
                                                        && rsi_4[0x1a] == rbp_2)
                                                    goto label_14207d038
                                        
                                        rbx_3 += 1
                                    while (rbx_3 s< r15_2)
                        else
                            rax = (*(*r14_2 + 0x6a0))(r14_2, rdx_3)
                            int32_t rbx_2 = 0
                            int32_t r15_1 = rax.d
                            
                            if (rax.d s> 0)
                                do
                                    int64_t r8_2 = *r14_2
                                    rax = (*(r8_2 + 0x548))(r14_2, zx.q(rbx_2), r8_2)
                                    int64_t* rsi_2 = rax
                                    
                                    if (rax != 0)
                                        if (rax == rbp_2)
                                        label_14207cf58:
                                            int64_t rsi_3 = sx.q(arg1[1].d)
                                            int32_t rax_13 = (rsi_3 + 1).d
                                            arg1[1].d = rax_13
                                            
                                            if (rax_13 s> *(arg1 + 0xc))
                                                sub_1405a4df0(arg1)
                                            
                                            void** rdx_7 = &(*arg1)[rsi_3 * 3]
                                            
                                            if (rdx_7 != 0)
                                                *rdx_7 = r14_2
                                                rdx_7[1] = 0
                                                rdx_7[2].d = rbx_2
                                        else
                                            void* rax_12 = sub_142542e20()
                                            void* rdx_5 = rsi_2[2]
                                            rax = sx.q(*(rax_12 + 0x38))
                                            
                                            if (rax.d s<= *(rdx_5 + 0x38)
                                                    && (*(rdx_5 + 0x30))[rax] == rax_12 + 0x30
                                                    && rsi_2[0x1a] == rbp_2)
                                                goto label_14207cf58
                                    
                                    rbx_2 += 1
                                while (rbx_2 s< r15_1)
                    
                    r12_1 += 1
                    r13_1 += 8
                while (r12_1 s< var_48_1)
                
                i = i_1
                rdx_2 = var_120_1
                r14_1 = arg2
            
            i += 1
            rdx_2 = &rdx_2[1]
            i_1 = i
            var_120_1 = rdx_2
        while (i s< r14_1[1].d)
    
    if (var_50_1 != 0)
        sub_140a74f90(var_50_1)

__security_check_cookie(rax_2 ^ &var_148)
