// 函数: sub_1429711d0
// 地址: 0x1429711d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
int64_t rbp = 0
int64_t* result_2 = arg4
int64_t* result_1 = nullptr
int64_t* r13 = nullptr
int32_t r14 = 0

if (arg2 == 0)
    return zx.q((arg2 + 1).d)

if (arg4 == 0)
    int64_t* result = sub_1428d8d60()
    result_1 = result
    result_2 = result
    
    if (result == 0)
        return result

sub_1428d8e50(result_2)
int64_t* rax_2 = sub_1428d8ba0(result_2)
int64_t* rax_3 = sub_1428d8ba0(result_2)

if (rax_3 != 0)
    int64_t* rax_4 = sub_1428a6730(arg2 << 3)
    r13 = rax_4
    
    if (rax_4 != 0)
        int64_t rdi_1 = 0
        
        if (arg2 != 0)
            do
                void* rax_5 = sub_142890500()
                r13[rdi_1] = rax_5
                
                if (rax_5 == 0)
                    goto label_1429713f8
                
                rdi_1 += 1
            while (rdi_1 u< arg2)
        
        int64_t* rdi_3 = arg3
        int32_t rax_6 = sub_142890300(*(*rdi_3 + 0x20))
        int64_t* rcx_6 = *r13
        bool cond:0_1
        
        if (rax_6 != 0)
            int64_t r9 = *(*arg1 + 0x130)
            int32_t rax_9
            
            if (r9 == 0)
                rax_9 = sub_142890900(rcx_6, 1)
            else
                rax_9 = r9(arg1, rcx_6, result_2)
            
            cond:0_1 = rax_9 == 0
        else
            cond:0_1 = sub_142890040(rcx_6, *(*rdi_3 + 0x20)) == 0
        
        if (not(cond:0_1))
            int64_t r14_1 = 1
            int32_t var_68
            
            if (1 u< arg2)
                void* rdi_2 = &rdi_3[1]
                void* rax_11 = r13 - arg3
                
                do
                    bool cond:1_1
                    
                    if (sub_142890300(*(*rdi_2 + 0x20)) != 0)
                        cond:1_1 = sub_142890040(*(rax_11 + rdi_2), *(rdi_2 - arg3 + r13 - 8)) == 0
                    else
                        var_68.q = result_2
                        cond:1_1 = (*(*arg1 + 0x108))(arg1, *(rax_11 + rdi_2), 
                            *(rax_11 - 8 + rdi_2), *(*rdi_2 + 0x20), var_68) == 0
                    
                    if (cond:1_1)
                        goto label_1429713f2_2
                    
                    r14_1 += 1
                    rdi_2 += 8
                while (r14_1 u< arg2)
                
                rdi_3 = arg3
            
            int64_t* rax_18 = sub_1428da4f0(rax_2, r13[arg2 - 1], arg1[8], result_2)
            
            if (rax_18 != 0)
                int64_t r10_1 = *(*arg1 + 0x120)
                
                if (r10_1 == 0)
                label_14297149e:
                    int64_t i_1 = arg2 - 1
                    
                    if (i_1 != 0)
                        void** rdi_4 = &rdi_3[i_1]
                        int64_t i
                        
                        do
                            if (sub_142890300(*(*rdi_4 + 0x20)) == 0)
                                var_68.q = result_2
                                
                                if ((*(*arg1 + 0x108))(arg1, rax_3, *(rdi_4 + r13 - arg3 - 8), 
                                        rax_2, var_68) == 0)
                                    goto label_1429713f2_2
                                
                                var_68.q = result_2
                                
                                if ((*(*arg1 + 0x108))(arg1, rax_2, rax_2, *(*rdi_4 + 0x20), var_68)
                                        == 0)
                                    goto label_1429713f2_2
                                
                                if (sub_142890040(*(*rdi_4 + 0x20), rax_3) == 0)
                                    goto label_1429713f2_2
                            
                            rdi_4 -= 8
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    int64_t* rdi_6 = arg3
                    int32_t rax_32 = sub_142890300(*(*rdi_6 + 0x20))
                    int64_t* rax_33
                    
                    if (rax_32 == 0)
                        rax_33 = sub_142890040(*(*rdi_6 + 0x20), rax_2)
                    
                    if (rax_32 == 0 && rax_33 == 0)
                    labelid_e:
                        r14 = 0
                    else
                        int64_t r14_2 = 0
                        
                        if (arg2 != 0)
                            do
                                void* rdi_5 = rdi_6[r14_2]
                                
                                if (sub_142890300(*(rdi_5 + 0x20)) == 0)
                                    if ((*(*arg1 + 0x110))(arg1, rax_2, *(rdi_5 + 0x20), result_2, 
                                            var_68) == 0)
                                        goto label_1429713f2_2
                                    
                                    int64_t rdx_17 = *(rdi_5 + 0x10)
                                    var_68.q = result_2
                                    
                                    if ((*(*arg1 + 0x108))(arg1, rdx_17, rdx_17, rax_2, var_68)
                                            == 0)
                                        goto label_1429713f2_2
                                    
                                    var_68.q = result_2
                                    
                                    if ((*(*arg1 + 0x108))(arg1, rax_2, rax_2, *(rdi_5 + 0x20), 
                                            var_68) == 0)
                                        goto label_1429713f2_2
                                    
                                    int64_t rdx_19 = *(rdi_5 + 0x18)
                                    var_68.q = result_2
                                    
                                    if ((*(*arg1 + 0x108))(arg1, rdx_19, rdx_19, rax_2, var_68)
                                            == 0)
                                        goto label_1429713f2_2
                                    
                                    int64_t* rcx_38 = *(rdi_5 + 0x20)
                                    int64_t r9_13 = *(*arg1 + 0x130)
                                    int32_t rax_44
                                    
                                    if (r9_13 == 0)
                                        rax_44 = sub_142890900(rcx_38, 1)
                                    else
                                        rax_44 = r9_13(arg1, rcx_38, result_2)
                                    
                                    if (rax_44 == 0)
                                        goto label_1429713f2_2
                                    
                                    *(rdi_5 + 0x28) = 1
                                
                                rdi_6 = arg3
                                r14_2 += 1
                            while (r14_2 u< arg2)
                        
                        r14 = 1
                else if (r10_1(arg1, rax_2, rax_2, result_2, var_68) == 0)
                label_1429713f2:
                    r14 = 0
                else
                    if ((*(*arg1 + 0x120))(arg1, rax_2, rax_2, result_2) != 0)
                        goto label_14297149e
                    
                label_1429713f2_1:
                    r14 = 0
            else
                sub_1428a5670((&rax_18[2]).d, 0x89, (rax_18 + 3).d, "crypto\ec\ecp_smpl.c", 0x4f6)
            label_1429713f2_2:
                r14 = 0

label_1429713f8:
sub_1428d8a60(result_2)
sub_1428d8ae0(result_1)

if (r13 != 0)
    if (arg2 != 0)
        do
            int64_t* rcx_18 = r13[rbp]
            
            if (rcx_18 == 0)
                break
            
            sub_14288fbf0(rcx_18)
            rbp += 1
        while (rbp u< arg2)
    
    sub_1428a6780(r13)

return zx.q(r14)
