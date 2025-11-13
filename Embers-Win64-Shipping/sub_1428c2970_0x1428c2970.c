// 函数: sub_1428c2970
// 地址: 0x1428c2970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t** rbx = arg2

if (arg1 != 0)
    void* rax_1 = *arg1
    
    if (rax_1 != 0 && *(rax_1 + 0x38) != 0)
        if (arg1[4].d != 4)
            sub_1428a5670(6, 0x92, 0x97, "crypto\evp\pmeth_gn.c", 0x60)
        else if (rbx != 0)
            int64_t* rdx = *arg2
            
            if (rdx != 0)
            label_1428c2a04:
                int32_t rax_5 = (*(*arg1 + 0x38))(arg1, rdx)
                
                if (rax_5 s<= 0)
                    sub_1428965a0(*rbx)
                    *rbx = nullptr
                
                return zx.q(rax_5)
            
            int64_t* rax_3 = sub_1428968f0()
            *rbx = rax_3
            rdx = rax_3
            
            if (rax_3 != 0)
                goto label_1428c2a04
        
        return 0xffffffff

sub_1428a5670(6, 0x92, 0x96, "crypto\evp\pmeth_gn.c", 0x5c)
return 0xfffffffe
