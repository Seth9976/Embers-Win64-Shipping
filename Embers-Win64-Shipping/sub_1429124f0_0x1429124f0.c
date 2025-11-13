// 函数: sub_1429124f0
// 地址: 0x1429124f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t** rax = sub_1428a6a70(0x40)

if (rax == 0)
    sub_1428a5670((&rax[2]).d, 0x11a, (rax + 0x41).d, "crypto\ec\ec_pmeth.c", 0x2e)
    return 0

rax[3].w = 0x1ff
*(arg1 + 0x28) = rax
int64_t* rdi_1 = *(arg2 + 0x28)
int64_t* rcx_1 = *rdi_1
int64_t* rax_2

if (rcx_1 != 0)
    rax_2 = sub_1428bec00(rcx_1)
    *rax = rax_2

if (rcx_1 == 0 || rax_2 != 0)
    rax[1] = rdi_1[1]
    int64_t* rcx_2 = rdi_1[2]
    int64_t* rax_4
    
    if (rcx_2 != 0)
        rax_4 = sub_1428c0b30(rcx_2)
        rax[2] = rax_4
    
    if (rcx_2 == 0 || rax_4 != 0)
        *(rax + 0x19) = *(rdi_1 + 0x19)
        rax[4] = rdi_1[4]
        rax[7] = rdi_1[7]
        int64_t rcx_3 = rdi_1[5]
        
        if (rcx_3 == 0)
            rax[5] = 0
            rax[6] = rdi_1[6]
            return 1
        
        int64_t rax_8 = sub_1428a6af0(rcx_3, rdi_1[6], "crypto\ec\ec_pmeth.c", 0x4f)
        rax[5] = rax_8
        
        if (rax_8 != 0)
            rax[6] = rdi_1[6]
            return 1

return 0
