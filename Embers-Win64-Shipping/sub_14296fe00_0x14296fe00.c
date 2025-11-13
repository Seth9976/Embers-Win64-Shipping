// 函数: sub_14296fe00
// 地址: 0x14296fe00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t* result_2 = nullptr
int32_t var_48 = 0

if (sub_1428bf8a0(arg1, arg2) != 0)
    sub_1428a5670(0x10, 0xa7, 0x6a, "crypto\ec\ecp_smpl.c", 0x1fb)
    return 0

int64_t* result_1 = arg5

if (result_1 == 0)
    int64_t* result = sub_1428d8d60()
    result_2 = result
    result_1 = result
    
    if (result == 0)
        return result

sub_1428d8e50(result_1)
int64_t* r12_1 = sub_1428d8ba0(result_1)
int64_t* rax_3 = sub_1428d8ba0(result_1)
int64_t* rax_4 = sub_1428d8ba0(result_1)
int64_t* rax_5 = sub_1428d8ba0(result_1)

if (rax_5 != 0)
    int64_t r10_1 = *(*arg1 + 0x128)
    int64_t* rcx_6 = arg2[4]
    
    if (r10_1 == 0)
        r12_1 = rcx_6
    label_14296ff0d:
        int32_t rax_11
        
        if (sub_1428902b0(r12_1) == 0)
            int64_t* rax_14 = sub_1428da4f0(rax_3, r12_1, arg1[8], result_1)
            
            if (rax_14 != 0)
                void* rax_15 = *arg1
                int32_t rax_16
                
                if (*(rax_15 + 0x120) != 0)
                    rax_16 = sub_1429083a0(rax_4, rax_3, arg1[8], result_1)
                else
                    rax_16 = (*(rax_15 + 0x110))(arg1, rax_4, rax_3, result_1)
                
                if (rax_16 != 0)
                    int32_t var_58
                    int32_t rax_18
                    
                    if (arg3 != 0)
                        var_58.q = result_1
                        rax_18 = (*(*arg1 + 0x108))(arg1, arg3, arg2[2], rax_4, var_58)
                    
                    if (arg3 == 0 || rax_18 != 0)
                        if (arg4 == 0)
                            var_48 = 1
                        else
                            void* rax_19 = *arg1
                            var_58.q = result_1
                            int32_t rax_20
                            
                            if (*(rax_19 + 0x120) != 0)
                                rax_20 = sub_1429082e0(rax_5, rax_4, rax_3, arg1[8], var_58)
                            else
                                rax_20 = (*(rax_19 + 0x108))(arg1, rax_5, rax_4, rax_3, var_58)
                            
                            if (rax_20 != 0)
                                var_58.q = result_1
                                rax_11 = (*(*arg1 + 0x108))(arg1, arg4, arg2[3], rax_5, var_58)
                                goto label_14297009f
            else
                sub_1428a5670((&rax_14[2]).d, 0xa7, (rax_14 + 3).d, "crypto\ec\ecp_smpl.c", 0x22e)
        else
            int64_t r10_2 = *(*arg1 + 0x128)
            bool cond:0_1
            
            if (r10_2 == 0)
                int64_t* rax_12
                
                if (arg3 != 0)
                    rax_12 = sub_142890040(arg3, arg2[2])
                
                if (arg3 == 0 || rax_12 != 0)
                    if (arg4 == 0)
                        var_48 = 1
                    else
                        cond:0_1 = sub_142890040(arg4, arg2[3]) == 0
                    label_1429700a1:
                        
                        if (not(cond:0_1))
                            var_48 = 1
            else
                int32_t rax_9
                
                if (arg3 != 0)
                    rax_9 = r10_2(arg1, arg3, arg2[2], result_1)
                
                if (arg3 == 0 || rax_9 != 0)
                    if (arg4 != 0)
                        rax_11 = (*(*arg1 + 0x128))(arg1, arg4, arg2[3], result_1)
                    label_14297009f:
                        cond:0_1 = rax_11 == 0
                        goto label_1429700a1
                    
                    var_48 = 1
    else if (r10_1(arg1, r12_1, rcx_6, result_1) != 0)
        goto label_14296ff0d

sub_1428d8a60(result_1)
sub_1428d8ae0(result_2)
return zx.q(var_48)
