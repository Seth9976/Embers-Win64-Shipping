// 函数: sub_1428c2c20
// 地址: 0x1428c2c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t** rbx = arg2

if (arg1 != 0)
    void* rax_1 = *arg1
    
    if (rax_1 != 0 && *(rax_1 + 0x28) != 0)
        if (arg1[4].d != 2)
            sub_1428a5670(6, 0x94, 0x97, "crypto\evp\pmeth_gn.c", 0x2e)
        else if (rbx != 0)
            int64_t* rdx = *arg2
            
            if (rdx == 0)
                int64_t* rax_3 = sub_1428968f0()
                *rbx = rax_3
                rdx = rax_3
                
                if (rax_3 == 0)
                    sub_1428a5670((rax_3 + 6).d, 0x94, (rax_3 + 0x41).d, "crypto\evp\pmeth_gn.c", 
                        0x39)
                    return 0xffffffff
            
            int32_t rax_6 = (*(*arg1 + 0x28))(arg1, rdx)
            
            if (rax_6 s<= 0)
                sub_1428965a0(*rbx)
                *rbx = nullptr
            
            return zx.q(rax_6)
        
        return 0xffffffff

sub_1428a5670(6, 0x94, 0x96, "crypto\evp\pmeth_gn.c", 0x29)
return 0xfffffffe
