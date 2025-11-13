// 函数: sub_14296f800
// 地址: 0x14296f800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* r12 = arg1[8]
int32_t r15 = 0
int64_t* rdi = arg2
int64_t* rbp = nullptr
int64_t* rax_1

if (arg2 == 0)
    rax_1 = sub_1428d8d60()
    rbp = rax_1
    rdi = rax_1

if (arg2 != 0 || rax_1 != 0)
    sub_1428d8e50(rdi)
    int64_t* rax_2 = sub_1428d8ba0(rdi)
    int64_t* rax_3 = sub_1428d8ba0(rdi)
    int64_t* rax_4 = sub_1428d8ba0(rdi)
    int64_t* rax_5 = sub_1428d8ba0(rdi)
    
    if (sub_1428d8ba0(rdi) != 0)
        int64_t* rdx = arg1[0xc]
        int64_t r10_1 = *(*arg1 + 0x128)
        bool cond:0_1
        
        if (r10_1 == 0)
            if (sub_142890040(rax_2, rdx) != 0)
                cond:0_1 = sub_142890040(rax_3, arg1[0xd]) == 0
            label_14296f919:
                
                if (not(cond:0_1))
                    int32_t rax_13 = sub_142890300(rax_2)
                    int32_t rax_14 = sub_142890300(rax_3)
                    
                    if (rax_13 != 0)
                        goto label_14296f9d6
                    
                    if (rax_14 != 0)
                        r15 = 1
                    else if (sub_1429083a0(rax_4, rax_2, r12, rdi) != 0)
                        int32_t var_38
                        var_38.q = rdi
                        
                        if (sub_1429082e0(rax_5, rax_4, rax_2, r12, var_38) != 0
                                && sub_1428f5510(rax_4, rax_5, 2) != 0
                                && sub_1429083a0(rax_5, rax_3, r12, rdi) != 0
                                && sub_1428f5360(rax_5, 0x1b) != 0)
                            var_38.q = rdi
                            
                            if (sub_1429080f0(rax_2, rax_4, rax_5, r12, var_38) != 0)
                                rax_14 = sub_142890300(rax_2)
                            label_14296f9d6:
                                
                                if (rax_14 == 0)
                                    r15 = 1
        else if (r10_1(arg1, rax_2, rdx, rdi) != 0)
            cond:0_1 = (*(*arg1 + 0x128))(arg1, rax_3, arg1[0xd], rdi) == 0
            goto label_14296f919
    
    if (rdi != 0)
        sub_1428d8a60(rdi)
else
    sub_1428a5670((&rax_1[2]).d, 0xa5, 0x41, "crypto\ec\ecp_smpl.c", 0xfd)

sub_1428d8ae0(rbp)
return zx.q(r15)
