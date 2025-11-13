// 函数: sub_142913370
// 地址: 0x142913370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t** rax = sub_1428a6a70(0x28)

if (rax == 0)
    sub_1428a5670((rax + 0x35).d, (rax + 0x6f).d, (rax + 0x41).d, "crypto\sm2\sm2_pmeth.c", 0x25)
    return 0

*(arg1 + 0x28) = rax
int64_t* rbx_1 = *(arg2 + 0x28)
int64_t* rcx_1 = *rbx_1
int64_t* rax_2

if (rcx_1 != 0)
    rax_2 = sub_1428bec00(rcx_1)
    *rax = rax_2

if (rcx_1 == 0 || rax_2 != 0)
    if (rbx_1[2] == 0)
        goto label_14291346d
    
    int64_t rax_3 = sub_1428a6730(rbx_1[3])
    rax[2] = rax_3
    
    if (rax_3 != 0)
        memcpy(rax_3, rbx_1[2], (rbx_1[3]).d)
    label_14291346d:
        rax[3] = rbx_1[3]
        rax[4].d = rbx_1[4].d
        rax[1] = rbx_1[1]
        return 1
    
    sub_1428a5670((rax_3 + 0x35).d, (rax_3 + 0x73).d, (rax_3 + 0x41).d, "crypto\sm2\sm2_pmeth.c", 
        0x4b)

sub_142913300(arg1)
return 0
