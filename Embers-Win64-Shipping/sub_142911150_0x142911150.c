// 函数: sub_142911150
// 地址: 0x142911150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax = sub_1428a6a70(0x60)

if (rax != 0)
    *rax = 0x400
    rax[3] = 0xffffffff
    rax[1] = 2
    rax[0xc].b = 1
    *(arg1 + 0x40) = &rax[0xa]
    *(arg1 + 0x28) = rax
    *(arg1 + 0x48) = 2
    int32_t* rdi_1 = *(arg2 + 0x28)
    *rax = *rdi_1
    rax[3] = rdi_1[3]
    rax[1] = rdi_1[1]
    rax[2] = rdi_1[2]
    rax[4] = rdi_1[4]
    *(rax + 0x18) = *(rdi_1 + 0x18)
    rax[8] = rdi_1[8]
    rax[9] = rdi_1[9]
    rax[0xc].b = rdi_1[0xc].b
    int64_t* rax_12 = sub_1428f64c0(*(rdi_1 + 0x38))
    *(rax + 0x38) = rax_12
    
    if (rax_12 != 0)
        *(rax + 0x40) = *(rdi_1 + 0x40)
        int64_t rcx_2 = *(rdi_1 + 0x48)
        
        if (rcx_2 == 0)
            *(rax + 0x58) = *(rdi_1 + 0x58)
            return 1
        
        int64_t rax_14 = sub_1428a6af0(rcx_2, *(rdi_1 + 0x50), "crypto\dh\dh_pmeth.c", 0x66)
        *(rax + 0x48) = rax_14
        
        if (rax_14 != 0)
            *(rax + 0x50) = *(rdi_1 + 0x50)
            *(rax + 0x58) = *(rdi_1 + 0x58)
            return 1
else
    sub_1428a5670((rax + 5).d, (rax + 0x7d).d, (rax + 0x41).d, "crypto\dh\dh_pmeth.c", 0x36)

return 0
