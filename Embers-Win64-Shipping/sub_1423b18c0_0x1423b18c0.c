// 函数: sub_1423b18c0
// 地址: 0x1423b18c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg2
int64_t r14 = sx.q(*(arg2 + 0xc))
int64_t* r12 = arg2
int64_t rsi = 0xffffffff
int64_t* rcx_1 = result[0x1a] + 0x18
int64_t* arg_20 = rcx_1

if (r14.d s< arg2[2].d)
    int64_t r15_1 = r14 << 3
    int64_t arg_8 = r15_1
    
    do
        int64_t* rbx_2 = *(r15_1 + *rcx_1) + 0x10
        result = sub_140bc9850(rbx_2)
        
        if (result.b == 0)
            result = sub_140bc7f20(rbx_2)
            
            if (result s> 0)
                int16_t* var_78 = nullptr
                int64_t var_70_1 = 0
                int64_t var_58
                int64_t* rax_1 = sub_140bc8510(rbx_2, &var_58)
                result = &var_78
                
                if (&var_78 != rax_1)
                    int16_t* rcx_5 = var_78
                    
                    if (rcx_5 != 0)
                        sub_140a74f90(rcx_5)
                    
                    var_78 = *rax_1
                    *rax_1 = 0
                    var_70_1.d = rax_1[1].d
                    result = zx.q(*(rax_1 + 0xc))
                    var_70_1:4.d = result.d
                    rax_1[1] = 0
                
                int64_t rcx_7 = var_58
                
                if (rcx_7 != 0)
                    result = sub_140a74f90(rcx_7)
                
                if (rsi.d s< 0 || rsi.d s>= *(arg1 + 0xe8))
                    goto label_1423b1a03
                
                void* rdx_1 = arg1 + 0x90
                void* rax_3 = *(rdx_1 + 0x50)
                
                if (rax_3 != 0)
                    rdx_1 = rax_3
                
                void* rbx_4 = rdx_1 + sx.q(rsi.d) * 0x28
                int16_t* const rdx_2 = &data_142d40450
                
                if (var_70_1.d != 0)
                    rdx_2 = var_78
                
                int16_t* const rcx_9
                
                if (*(rbx_4 + 8) == 0)
                    rcx_9 = &data_142d40450
                else
                    rcx_9 = *rbx_4
                
                if (sub_140a54510(rcx_9, rdx_2) != 0)
                    goto label_1423b1a13
                
                result = zx.q(*(rbx_4 + 0x24) + 1)
                
                if (result.d != r14.d)
                    goto label_1423b1a13
                
                *(rbx_4 + 0x24) = r14.d
            label_1423b1a03:
                
                if (rsi.d == 0xffffffff)
                label_1423b1a13:
                    int64_t r12_1 = 0
                    
                    if (data_143de5452 != 0)
                        char rax_7 = sub_140a237d0(&var_78, u".uasset", 1)
                        char rax_8
                        
                        if (rax_7 == 0)
                            rax_8 = sub_140a237d0(&var_78, u".umap", 1)
                        
                        if (rax_7 != 0 || rax_8 != 0)
                            sub_140a464c0()
                            int16_t* rdx_3 = &data_142d40450
                            
                            if (var_70_1.d != 0)
                                rdx_3 = var_78
                            
                            char const (* r8_1)[0x4] = data_14399ea08
                            r12_1 = neg.q((*(r8_1 + 0x108))(&data_14399ea08, rdx_3, r8_1))
                            int64_t var_48
                            int64_t* rax_10 = sub_140b18720(&var_48, &var_78, 0)
                            int16_t* rcx_13 = *rax_10
                            int32_t rdx_5 = rax_10[1].d
                            int32_t rdx_6 = neg.d(rdx_5)
                            *rax_10 = 0
                            int32_t r8_2 = rax_10[1].d
                            int16_t* var_68 = rcx_13
                            int32_t rcx_14 = *(rax_10 + 0xc)
                            int32_t rdx_9 = sbb.d(rdx_6, rdx_6, rdx_5 != 0) + 6 + r8_2
                            rax_10[1] = 0
                            
                            if (rdx_9 s> rcx_14)
                                sub_1405947f0(&var_68, rdx_9)
                            
                            sub_140a20ba0(&var_68, u".uexp", 5)
                            int16_t* rcx_17 = var_78
                            int16_t* rbx_5 = var_68
                            var_68 = nullptr
                            int32_t var_60_1
                            var_60_1.q = 0
                            
                            if (rcx_17 != 0)
                                sub_140a74f90(rcx_17)
                            
                            int64_t rcx_18 = var_48
                            var_78 = rbx_5
                            var_70_1.d = r8_2
                            var_70_1:4.d = rcx_14
                            
                            if (rcx_18 != 0)
                                sub_140a74f90(rcx_18)
                            
                            r15_1 = arg_8
                    
                    void* rbx_6 = arg1 + 0x90
                    rsi = sx.q(*(rbx_6 + 0x58))
                    int32_t rax_11 = (rsi + 1).d
                    *(rbx_6 + 0x58) = rax_11
                    
                    if (rax_11 s> *(rbx_6 + 0x5c))
                        sub_1423b4d80(rbx_6, rsi.d)
                    
                    void* rcx_20 = *(rbx_6 + 0x50)
                    int64_t rdx_12 = rsi * 0x28
                    void* rax_12 = rbx_6
                    
                    if (rcx_20 != 0)
                        rax_12 = rcx_20
                    
                    void* rax_13 = rax_12 + rdx_12
                    __builtin_memset(rax_13, 0, 0x20)
                    *(rax_13 + 0x20) = -1
                    void* rax_14 = *(rbx_6 + 0x50)
                    
                    if (rax_14 != 0)
                        rbx_6 = rax_14
                    
                    result = &var_78
                    int64_t* rbx_7 = rbx_6 + rdx_12
                    
                    if (rbx_7 != &var_78)
                        int64_t rcx_21 = *rbx_7
                        
                        if (rcx_21 != 0)
                            sub_140a74f90(rcx_21)
                        
                        *rbx_7 = var_78
                        var_78 = nullptr
                        rbx_7[1].d = var_70_1.d
                        result = zx.q(var_70_1:4.d)
                        *(rbx_7 + 0xc) = result.d
                        int64_t var_70_2 = 0
                    
                    rbx_7[3] = r12_1
                    r12 = arg2
                    rbx_7[4].d = r14.d
                    *(rbx_7 + 0x24) = r14.d
                
                int16_t* rcx_22 = var_78
                
                if (rcx_22 != 0)
                    result = sub_140a74f90(rcx_22)
        
        rcx_1 = arg_20
        r15_1 += 8
        r14 = zx.q(r14.d + 1)
        arg_8 = r15_1
    while (r14.d s< r12[2].d)

*(arg1 + 8) = 1
return result
