// 函数: sub_142890d10
// 地址: 0x142890d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rdi = sx.q(arg2)

if (rdi.d s> *(arg1 + 0xc))
    if (rdi.d s> 0x7fffff)
        sub_1428a5670(3, 0x78, 0x72, "crypto\bn\bn_lib.c", 0xd6)
        return 0
    
    char rax_2 = (*(arg1 + 0x14)).b
    
    if ((rax_2 & 2) != 0)
        sub_1428a5670(3, 0x78, 0x69, "crypto\bn\bn_lib.c", 0xda)
        return 0
    
    int64_t rcx_1 = rdi << 3
    int64_t rax_3
    
    if ((rax_2 & 8) == 0)
        rax_3 = sub_1428a6a70(rcx_1)
    else
        rax_3 = sub_1428a71d0(rcx_1)
    
    if (rax_3 == 0)
        sub_1428a5670(3, 0x78, (rax_3 + 0x41).d, "crypto\bn\bn_lib.c", 0xe2)
        return 0
    
    int64_t rax_5 = sx.q(arg1[1].d)
    
    if (rax_5.d s> 0)
        memcpy(rax_3, *arg1, (rax_5 << 3).d)
    
    int64_t rcx_3 = *arg1
    
    if (rcx_3 != 0)
        sub_1428b8960(rcx_3, sx.q(*(arg1 + 0xc)) << 3)
        int64_t rcx_4 = *arg1
        
        if ((*(arg1 + 0x14) & 8) == 0)
            sub_1428a6780(rcx_4)
        else
            sub_1428a7190(rcx_4)
    
    *arg1 = rax_3
    *(arg1 + 0xc) = rdi.d

return arg1
