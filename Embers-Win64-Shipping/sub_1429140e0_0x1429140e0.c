// 函数: sub_1429140e0
// 地址: 0x1429140e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rax = sub_1428a6a70(0x50)

if (rax != 0)
    *rax = 0x400
    int32_t rdx_1 = 6
    rax[4] = 2
    
    if (**arg1 != 0x390)
        rdx_1 = 1
    
    rax[7] = rdx_1
    *(rax + 0x30) = -2
    arg1[5] = rax
    arg1[8] = &rax[5]
    arg1[9].d = 2
    int32_t* rdi_1 = *(arg2 + 0x28)
    *rax = *rdi_1
    int64_t* rcx_1 = *(rdi_1 + 8)
    int64_t* rax_3
    
    if (rcx_1 != 0)
        rax_3 = sub_1428900c0(rcx_1)
        *(rax + 8) = rax_3
    
    if (rcx_1 == 0 || rax_3 != 0)
        rax[7] = rdi_1[7]
        *(rax + 0x20) = *(rdi_1 + 0x20)
        *(rax + 0x28) = *(rdi_1 + 0x28)
        
        if (*(rdi_1 + 0x40) == 0)
            return 1
        
        sub_1428a6780(*(rax + 0x40))
        int64_t rax_7 =
            sub_1428a6af0(*(rdi_1 + 0x40), *(rdi_1 + 0x48), "crypto\rsa\rsa_pmeth.c", 0x5c)
        *(rax + 0x40) = rax_7
        
        if (rax_7 != 0)
            *(rax + 0x48) = *(rdi_1 + 0x48)
            return 1

return 0
