// 函数: sub_14296faa0
// 地址: 0x14296faa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* result_2 = arg6
int64_t* result_1 = nullptr
int32_t r12 = 0

if (result_2 == 0)
    int64_t* result = sub_1428d8d60()
    result_1 = result
    result_2 = result
    
    if (result == 0)
        return result

if (arg3 == 0)
label_14296fb3d:
    
    if (arg4 == 0)
    label_14296fb85:
        
        if (arg5 == 0)
            r12 = 1
        else if (sub_1429084c0(*(arg2 + 0x20), arg5, arg1[8], result_2) != 0)
            int32_t rax_8 = sub_1428902b0(*(arg2 + 0x20))
            void* rax_9 = *arg1
            int64_t r10_3 = *(rax_9 + 0x120)
            int32_t rax_11
            
            if (r10_3 != 0)
                int64_t rax_10
                
                if (rax_8 != 0)
                    rax_10 = *(rax_9 + 0x130)
                
                if (rax_8 == 0 || rax_10 == 0)
                    int64_t rdx_6 = *(arg2 + 0x20)
                    rax_11 = r10_3(arg1, rdx_6, rdx_6, result_2)
                else
                    rax_11 = rax_10(arg1, *(arg2 + 0x20), result_2)
            
            if (r10_3 == 0 || rax_11 != 0)
                *(arg2 + 0x28) = rax_8
                r12 = 1
    else if (sub_1429084c0(*(arg2 + 0x18), arg4, arg1[8], result_2) != 0)
        int64_t r10_2 = *(*arg1 + 0x120)
        
        if (r10_2 == 0)
            goto label_14296fb85
        
        int64_t rdx_3 = *(arg2 + 0x18)
        
        if (r10_2(arg1, rdx_3, rdx_3, result_2) != 0)
            goto label_14296fb85
else if (sub_1429084c0(*(arg2 + 0x10), arg3, arg1[8], result_2) != 0)
    int64_t r10_1 = *(*arg1 + 0x120)
    
    if (r10_1 == 0)
        goto label_14296fb3d
    
    int64_t rdx_1 = *(arg2 + 0x10)
    
    if (r10_1(arg1, rdx_1, rdx_1, result_2) != 0)
        goto label_14296fb3d

sub_1428d8ae0(result_1)
return zx.q(r12)
