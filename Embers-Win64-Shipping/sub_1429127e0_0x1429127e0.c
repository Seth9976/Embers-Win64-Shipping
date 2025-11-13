// 函数: sub_1429127e0
// 地址: 0x1429127e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* rbx = *(arg1 + 0x28)
int32_t rbp = 0

if (*(rbx + 0x19) == 1)
    return sub_1429131a0(arg1, arg2, arg3)

int64_t rax_1 = *(rbx + 0x38)

if (arg2 == 0)
    *arg3 = rax_1
    return zx.q((arg2 + 1).d)

if (*arg3 == rax_1)
    void* rax_2 = *(arg1 + 0x10)
    
    if (rax_2 != 0 && *(arg1 + 0x18) != 0)
        void* rcx = *(rbx + 0x10)
        
        if (rcx == 0)
            rcx = *(rax_2 + 0x28)
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(sub_1428bef80(sub_142891590(rcx)) + 7)
        int64_t rcx_2 = sx.q((temp1_1 + (temp0_1 & 7)) s>> 3)
        int64_t arg_8 = rcx_2
        int64_t rax_9 = sub_1428a6730(rcx_2)
        
        if (rax_9 == 0)
            sub_1428a5670((rax_9 + 0x10).d, 0x11b, (rax_9 + 0x41).d, "crypto\ec\ec_pmeth.c", 0xce)
            return 0
        
        int32_t rax_10 = sub_1429131a0(arg1, rax_9, &arg_8)
        int64_t rdi_1 = arg_8
        
        if (rax_10 != 0)
            int32_t var_38
            var_38.q = *(rbx + 0x28)
            
            if (sub_14294c550(arg2, *arg3, rax_9, rdi_1, var_38, *(rbx + 0x30), *(rbx + 0x20)) != 0)
                rbp = 1
        
        sub_1428a6890(rax_9, rdi_1, "crypto\ec\ec_pmeth.c", 0xda)
        return zx.q(rbp)
    
    sub_1428a5670(0x10, 0xd9, 0x8c, "crypto\ec\ec_pmeth.c", 0xa0)

return 0
