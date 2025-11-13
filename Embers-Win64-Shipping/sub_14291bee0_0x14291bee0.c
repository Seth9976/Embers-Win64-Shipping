// 函数: sub_14291bee0
// 地址: 0x14291bee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rdi = sx.q(arg3)

if (arg1 != 0)
    int64_t rcx = *arg1
    
    if (rcx != 0)
        void* rax_1 = *(arg4 + 0x18)
        
        if (rax_1 != 0 && (*(rax_1 + 8) & 2) != 0)
            int64_t rbx_1 = sx.q(*(rax_1 + 0x20))
            int64_t* rbx_2 = rbx_1 + rcx
            
            if (rbx_1 != neg.q(rcx))
                sub_1428a6780(*rbx_2)
                int64_t rax_2 = sub_1428a6730(rdi)
                *rbx_2 = rax_2
                
                if (rax_2 == 0)
                    sub_1428a5670((rax_2 + 0xd).d, (rax_2 + 0x73).d, (rax_2 + 0x41).d, 
                        "crypto\asn1\tasn_utl.c", 0x94)
                    return 0
                
                memcpy(rax_2, arg2, rdi.d)
                rbx_2[1].d = rdi.d
                *(rbx_2 + 0xc) = 0

return 1
