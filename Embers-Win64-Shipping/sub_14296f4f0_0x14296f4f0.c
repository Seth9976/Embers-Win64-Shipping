// 函数: sub_14296f4f0
// 地址: 0x14296f4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t r14 = 0
int64_t* result_2 = nullptr

if (sub_142890560(arg2) s> 2 && sub_142890290(arg2) != 0)
    int64_t* result_1 = arg5
    
    if (result_1 == 0)
        int64_t* result = sub_1428d8d60()
        result_2 = result
        result_1 = result
        
        if (result == 0)
            return result
    
    sub_1428d8e50(result_1)
    int64_t* rax_2 = sub_1428d8ba0(result_1)
    
    if (rax_2 != 0 && sub_142890040(arg1[8], arg2) != 0)
        sub_1428908e0(arg1[8], 0)
        
        if (sub_1429084c0(rax_2, arg3, arg2, result_1) != 0)
            int64_t* rcx_7 = arg1[0xc]
            int64_t r10_1 = *(*arg1 + 0x120)
            bool cond:0_1
            
            if (r10_1 == 0)
                cond:0_1 = sub_142890040(rcx_7, rax_2) == 0
            else
                cond:0_1 = r10_1(arg1, rcx_7, rax_2, result_1) == 0
            
            if (not(cond:0_1) && sub_1429084c0(arg1[0xd], arg4, arg2, result_1) != 0)
                int64_t r10_2 = *(*arg1 + 0x120)
                int32_t rax_10
                
                if (r10_2 != 0)
                    int64_t rdx_5 = arg1[0xd]
                    rax_10 = r10_2(arg1, rdx_5, rdx_5, result_1)
                
                if ((r10_2 == 0 || rax_10 != 0) && sub_1428f4ee0(rax_2, 3) != 0)
                    r14.b = sub_14288fc80(rax_2, arg1[8]) == 0
                    arg1[0xe].d = r14
                    r14 = 1
    
    sub_1428d8a60(result_1)
    sub_1428d8ae0(result_2)
    return zx.q(r14)

sub_1428a5670(0x10, 0xa6, 0x67, "crypto\ec\ecp_smpl.c", 0x8f)
return 0
