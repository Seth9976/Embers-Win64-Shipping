// 函数: sub_14296fc20
// 地址: 0x14296fc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint64_t result_1 = 0
int32_t r12 = 0
bool cond:0_1

if (*(*arg1 + 0x128) == 0)
    int64_t* rax_7
    
    if (arg3 != 0)
        rax_7 = sub_142890040(arg3, *(arg2 + 0x10))
    
    if (arg3 == 0 || rax_7 != 0)
        int64_t* rax_8
        
        if (arg4 != 0)
            rax_8 = sub_142890040(arg4, *(arg2 + 0x18))
        
        if (arg4 == 0 || rax_8 != 0)
            if (arg5 == 0)
                r12 = 1
            else
                cond:0_1 = sub_142890040(arg5, *(arg2 + 0x20)) == 0
            label_14296fd2b:
                
                if (not(cond:0_1))
                    r12 = 1
else
    uint64_t result_2 = arg6
    
    if (result_2 == 0)
        uint64_t result = sub_1428d8d60()
        result_1 = result
        result_2 = result
        
        if (result == 0)
            return result
    
    int32_t rax_2
    
    if (arg3 != 0)
        rax_2 = (*(*arg1 + 0x128))(arg1, arg3, *(arg2 + 0x10), result_2)
    
    if (arg3 == 0 || rax_2 != 0)
        int32_t rax_4
        
        if (arg4 != 0)
            rax_4 = (*(*arg1 + 0x128))(arg1, arg4, *(arg2 + 0x18), result_2)
        
        if (arg4 == 0 || rax_4 != 0)
            if (arg5 != 0)
                cond:0_1 = (*(*arg1 + 0x128))(arg1, arg5, *(arg2 + 0x20), result_2) == 0
                goto label_14296fd2b
            
            r12 = 1
sub_1428d8ae0(result_1)
return zx.q(r12)
