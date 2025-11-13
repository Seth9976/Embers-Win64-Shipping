// 函数: sub_140aad970
// 地址: 0x140aad970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2

if (*arg1 == 0 && *(arg3 + 0x14) != 0)
    sub_140abd990(&arg1[0x18])

sub_140aa4810(arg1)
int32_t rdx = *(arg1 + 0x70)

if (rdx == 0)
    sub_140596d10(result, &arg1[0x58])
    return result

int32_t rcx_4 = *(arg1 + 0xac) * *(arg3 + 0x10)
int32_t r8_1 = *(arg1 + 0xa8) + 1
int64_t var_48 = 0
int32_t r8_2 = r8_1 + rcx_4
int64_t var_40 = 0

if (r8_2 s> 0)
    sub_1405947f0(&var_48, r8_2)
    rdx = *(arg1 + 0x70)

int32_t arg_8 = 0
int32_t i = 0

if (rdx s> 0)
    int64_t r12_1 = 0
    
    do
        int32_t* rdi_1 = *(arg1 + 0x68) + r12_1
        sub_140ab2540()
        int64_t* r14_1 = &rdi_1[6]
        int64_t* rdx_8 = r14_1
        
        if (((data_143db9f2c ^ rdi_1[3]) | (data_143db9f24 ^ rdi_1[1]) | (data_143db9f28 ^ rdi_1[2])
                | (*rdi_1 ^ data_143db9f20)) != 0)
            rdx_8 = nullptr
        
        if (rdx_8 == 0)
            sub_140ab24c0()
            int64_t* rax_6 = r14_1
            
            if (((data_143db9f74 ^ rdi_1[3]) | (data_143db9f6c ^ rdi_1[1])
                    | (data_143db9f70 ^ rdi_1[2]) | (*rdi_1 ^ data_143db9f68)) != 0)
                rax_6 = nullptr
            
            int16_t r14_2
            
            if (rax_6 == 0)
                sub_140ab2440()
                int64_t* r15_1 = r14_1
                
                if (((data_143db9f44 ^ rdi_1[3]) | (data_143db9f3c ^ rdi_1[1])
                        | (data_143db9f40 ^ rdi_1[2]) | (*rdi_1 ^ data_143db9f38)) != 0)
                    r15_1 = nullptr
                
                if (r15_1 == 0)
                    sub_140ab23c0()
                    
                    if (((data_143db9f5c ^ rdi_1[3]) | (data_143db9f54 ^ rdi_1[1])
                            | (data_143db9f58 ^ rdi_1[2]) | (data_143db9f50 ^ *rdi_1)) != 0)
                        r14_1 = nullptr
                    
                    if (r14_1 != 0)
                        int16_t r15_2 = *(*(arg1 + 8) + 0x16)
                        
                        if (r15_2 != 0)
                            int32_t rdx_21 = var_40.d
                            int32_t rdi_7 = rdx_21 - 1
                            
                            if (rdx_21 s<= 0)
                                rdi_7 = 0
                            
                            int32_t rax_31
                            rax_31.b = rdx_21 s<= 0
                            int32_t rax_33 = rax_31 + 1 + rdx_21
                            var_40.d = rax_33
                            
                            if (rax_33 s> var_40:4.d)
                                sub_140594770(&var_48)
                            
                            int64_t rcx_36 = sx.q(rdi_7)
                            *(var_48 + (rcx_36 << 1)) = r15_2
                            *(var_48 + (rcx_36 << 1) + 2) = 0
                        
                        sub_140a20ba0(&var_48, *r14_1, r14_1[1].d)
                else
                    int64_t rcx_19 = *(arg3 + 8)
                    int32_t arg_20 = arg_8
                    int32_t* rax_9 = (*arg3)(rcx_19, r15_1, &arg_20)
                    arg_8 += 1
                    
                    if (rax_9 == 0)
                        int16_t r14_4 = *(*(arg1 + 8) + 0x12)
                        
                        if (r14_4 != 0)
                            int32_t rdx_13 = var_40.d
                            int32_t rdi_5 = rdx_13 - 1
                            
                            if (rdx_13 s<= 0)
                                rdi_5 = 0
                            
                            int32_t rax_17
                            rax_17.b = rdx_13 s<= 0
                            int32_t rax_19 = rax_17 + 1 + rdx_13
                            var_40.d = rax_19
                            
                            if (rax_19 s> var_40:4.d)
                                sub_140594770(&var_48)
                            
                            int64_t rcx_27 = sx.q(rdi_5)
                            *(var_48 + (rcx_27 << 1)) = r14_4
                            *(var_48 + (rcx_27 << 1) + 2) = 0
                        
                        sub_140a20ba0(&var_48, *r15_1, r15_1[1].d)
                        r14_2 = *(*(arg1 + 8) + 0x14)
                        
                        if (r14_2 != 0)
                            goto label_140aadc46
                    else
                        void* rax_10
                        
                        if (i + 1 s>= 0 && i + 1 s< *(arg1 + 0x70))
                            rax_10 = sub_140a91240((sx.q(i) + 1) * 0x58 + *(arg1 + 0x68))
                        
                        if (i + 1 s< 0 || i + 1 s>= *(arg1 + 0x70) || rax_10 == 0)
                            sub_140ac6080(rax_9, *(arg3 + 0x14), *(arg3 + 0x15), &var_48)
                        else
                            int64_t* rcx_24 = *(rax_10 + 0x10)
                            (*(*rcx_24 + 0x10))(rcx_24, rax_9, arg3, &var_48)
                            r12_1 += 0x58
                            i += 1
            else
                r14_2 = *rax_6
                
                if (r14_2 != 0)
                label_140aadc46:
                    int32_t rdx_15 = var_40.d
                    int32_t rdi_6 = rdx_15 - 1
                    
                    if (rdx_15 s<= 0)
                        rdi_6 = 0
                    
                    int32_t rax_23
                    rax_23.b = rdx_15 s<= 0
                    int32_t rax_25 = rax_23 + 1 + rdx_15
                    var_40.d = rax_25
                    
                    if (rax_25 s> var_40:4.d)
                        sub_140594770(&var_48)
                    
                    int64_t rcx_30 = sx.q(rdi_6)
                    *(var_48 + (rcx_30 << 1)) = r14_2
                    *(var_48 + (rcx_30 << 1) + 2) = 0
        else
            sub_140a20ba0(&var_48, *rdx_8, rdx_8[1].d)
        
        i += 1
        r12_1 += 0x58
    while (i s< *(arg1 + 0x70))
    
    result = arg2

*result = var_48
result[1].d = var_40.d
*(result + 0xc) = var_40:4.d
return result
