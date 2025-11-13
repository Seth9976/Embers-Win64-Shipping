// 函数: sub_1428db570
// 地址: 0x1428db570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t i = 0
void* rdx = *(arg2 + 0x18)
int64_t r14_1

if (rdx != 0)
    r14_1 = *(rdx + 0x18)

if (rdx == 0 || r14_1 == 0)
    r14_1 = 0

int64_t rax = sx.q(*arg2)
int32_t rax_2
int64_t* rcx_3
char* rdx_3
uint64_t r8

if (rax.d u<= 6)
    switch (rax)
        case 0
            int32_t* rdx_2 = *(arg2 + 8)
            rcx_3 = arg1
            
            if (rdx_2 == 0)
                r8 = zx.q(arg3)
                rdx_3 = arg2
                goto label_1428db5ff
            
            rax_2 = sub_1428dbae0(rcx_3, rdx_2)
        label_1428db604:
            
            if (rax_2 == 0)
            label_1428db760:
                sub_1428a5670(0xd, 0x79, 0x41, "crypto\asn1\tasn_new.c", 0x98)
                return 0
        case 1, 6
            if (r14_1 == 0)
            label_1428db6e5:
                int64_t count_1 = sx.q(*(arg2 + 0x20))
                
                if (arg3 == 0)
                    int64_t rax_8 = sub_1428a6a70(count_1)
                    *arg1 = rax_8
                    
                    if (rax_8 == 0)
                        goto label_1428db760
                else
                    memset(*arg1, 0, count_1)
                
                if (sub_14291bca0(arg1, 0, arg2) s< 0)
                    if (arg3 == 0)
                        sub_1428a6780(*arg1)
                        *arg1 = 0
                    
                    goto label_1428db760
                
                sub_14291be00(arg1, arg2)
                void* rbp_1 = *(arg2 + 8)
                
                if (*(arg2 + 0x10) s> 0)
                    do
                        if (sub_1428dbae0(sub_14291bff0(arg1, rbp_1), rbp_1) == 0)
                            sub_1428c3d90(arg1, arg2, arg3)
                            goto label_1428db760
                        
                        rbp_1 += 0x20
                        i += 1
                    while (i s< *(arg2 + 0x10))
                
                if (r14_1 != 0 && r14_1(1, arg1, arg2, 0) == 0)
                    goto label_1428db7cf
            else
                int32_t rax_7 = r14_1(0, arg1, arg2, 0)
                
                if (rax_7 == 0)
                    sub_1428a5670(0xd, 0x79, 0x64, "crypto\asn1\tasn_new.c", 0xa1)
                    return 0
                
                if (rax_7 != 2)
                    goto label_1428db6e5
        case 2
            if (r14_1 == 0)
            label_1428db655:
                uint64_t count = sx.q(*(arg2 + 0x20))
                
                if (arg3 == 0)
                    int64_t rax_5 = sub_1428a6a70(count)
                    *arg1 = rax_5
                    
                    if (rax_5 == 0)
                        goto label_1428db760
                else
                    memset(*arg1, 0, count)
                
                sub_14291c000(arg1, 0xffffffff, arg2)
                
                if (r14_1 != 0 && r14_1(1, arg1, arg2, 0) == 0)
                label_1428db7cf:
                    sub_1428c3d90(arg1, arg2, arg3)
                    sub_1428a5670(0xd, 0x79, 0x64, "crypto\asn1\tasn_new.c", 0xa1)
                    return 0
            else
                int32_t rax_4 = r14_1(0, arg1, arg2, 0)
                
                if (rax_4 == 0)
                    sub_1428a5670(0xd, 0x79, 0x64, "crypto\asn1\tasn_new.c", 0xa1)
                    return 0
                
                if (rax_4 != 2)
                    goto label_1428db655
        case 4
            if (rdx != 0)
                int64_t rax_1 = *(rdx + 8)
                
                if (rax_1 != 0)
                    rax_2 = rax_1(arg1, arg2)
                    goto label_1428db604
        case 5
            r8 = zx.q(arg3)
            rdx_3 = arg2
            rcx_3 = arg1
        label_1428db5ff:
            rax_2 = sub_1428db880(rcx_3, rdx_3, r8)
            goto label_1428db604
return 1
