// 函数: sub_1428a0120
// 地址: 0x1428a0120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2 == arg3)
    sub_1428ae8e0(arg2, 0xffffffff, 0)
    return zx.q(arg2[0x1a].d u>> 0xd) & 1

int32_t rax_3 = sub_1428ae7f0(arg3, arg2)
int32_t rbp = rax_3

if (rax_3 == 0)
    sub_1428ae8e0(arg2, zx.q(rax_3 - 1), 0)
    
    if ((arg2[0x1a].d & 0x2000) != 0)
        int32_t rax_4 = sub_142898c70(*(arg1 + 0x98))
        
        if (rax_4 == 1)
            return rax_4
    
    int32_t rbx_1 = 0
    
    if (sub_142898c70(*(arg1 + 0x98)) s> 0)
        while (true)
            int64_t* rax_6 = sub_142898ea0(*(arg1 + 0x98), rbx_1)
            
            if (rax_6 != arg3 && sub_1428a3740(rax_6, arg3) != 0)
                rbx_1 += 1
                
                if (rbx_1 s>= sub_142898c70(*(arg1 + 0x98)))
                    break
                
                continue
            
            rbp = 0x37
            break

int32_t r14
r14.b = rbp == 0
return r14
