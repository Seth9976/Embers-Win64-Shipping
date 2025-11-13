// 函数: sub_1429131a0
// 地址: 0x1429131a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* r9 = *(arg1 + 0x10)

if (r9 != 0)
    void* r8 = *(arg1 + 0x18)
    
    if (r8 != 0)
        int64_t* rbx = *(*(arg1 + 0x28) + 0x10)
        
        if (rbx == 0)
            rbx = *(r9 + 0x28)
        
        if (arg2 != 0)
            int64_t rax_8 = sub_1427ec4a0(*(r8 + 0x28))
            int32_t rax_9 = sub_14291a070(arg2, *arg3, rax_8, rbx, 0)
            
            if (rax_9 s<= 0)
                return 0
            
            *arg3 = sx.q(rax_9)
        else
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(sub_1428bef80(sub_142891590(rbx)) + 7)
            *arg3 = sx.q((temp1_1 + (temp0_1 & 7)) s>> 3)
        
        return 1

sub_1428a5670(0x10, 0xd9, 0x8c, "crypto\ec\ec_pmeth.c", 0xa0)
return 0
