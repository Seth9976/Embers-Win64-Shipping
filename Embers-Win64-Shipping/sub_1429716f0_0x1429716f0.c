// 函数: sub_1429716f0
// 地址: 0x1429716f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = 0
sub_1428d8e50(arg3)
int64_t* rax = sub_1428d8ba0(arg3)
int64_t* rax_1 = sub_1428d8ba0(arg3)
int32_t var_28_1
int32_t r8

if (rax_1 != 0)
    int32_t i
    
    do
        if (sub_1429198c0(rax, arg1[8]) == 0)
            var_28_1 = 0x575
            r8 = 3
            goto label_14297185c
        
        i = sub_142890300(rax)
    while (i != 0)
    int64_t r10_1 = *(*arg1 + 0x120)
    int32_t rax_4
    
    if (r10_1 != 0)
        rax_4 = r10_1(arg1, rax, rax, arg3)
    
    if (r10_1 == 0 || rax_4 != 0)
        int64_t rdx_2 = *(arg2 + 0x20)
        int32_t var_28
        var_28.q = arg3
        
        if ((*(*arg1 + 0x108))(arg1, rdx_2, rdx_2, rax, var_28) != 0
                && (*(*arg1 + 0x110))(arg1, rax_1, rax, arg3) != 0)
            int64_t rdx_4 = *(arg2 + 0x10)
            var_28.q = arg3
            
            if ((*(*arg1 + 0x108))(arg1, rdx_4, rdx_4, rax_1, var_28) != 0)
                var_28.q = arg3
                
                if ((*(*arg1 + 0x108))(arg1, rax_1, rax_1, rax, var_28) != 0)
                    int64_t rdx_6 = *(arg2 + 0x18)
                    var_28.q = arg3
                    
                    if ((*(*arg1 + 0x108))(arg1, rdx_6, rdx_6, rax_1, var_28) != 0)
                        *(arg2 + 0x28) = 0
                        rbp = 1
else
    var_28_1 = 0x56e
    r8 = 0x41
label_14297185c:
    sub_1428a5670(0x10, 0x11f, r8, "crypto\ec\ecp_smpl.c", var_28_1)
sub_1428d8a60(arg3)
return zx.q(rbp)
