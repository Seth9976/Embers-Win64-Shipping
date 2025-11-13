// 函数: sub_1428f6370
// 地址: 0x1428f6370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rdi = 0
int32_t rax_1

if (arg2[2].d != 0)
    rax_1 = sub_14289aa40(arg1, &data_142d8bc68, 1)

if (arg2[2].d == 0 || rax_1 == 1)
    int32_t rax_3 = sub_142890300(arg2)
    int32_t rax_4
    
    if (rax_3 != 0)
        rax_4 = sub_14289aa40(arg1, &(*U""\tv 0")[4], 1)
    
    if (rax_3 == 0 || rax_4 == 1)
        int32_t rax_5 = arg2[1].d
        int64_t rsi = sx.q(rax_5 - 1)
        
        if (rax_5 - 1 s>= 0)
            int64_t temp2_1
            
            do
                int32_t rbx_1 = 0x3c
                int32_t temp1_1
                
                do
                    uint32_t rdx_2 = (*(*arg2 + (rsi << 3)) u>> rbx_1.b).d
                    
                    if (rdi != 0 || (rdx_2.b & 0xf) != 0)
                        int32_t rax_7 =
                            sub_14289aa40(arg1, (zx.q(rdx_2) & 0xf) + "0123456789ABCDEF", 1)
                        
                        if (rax_7 != 1)
                            return 0
                        
                        rdi = rax_7
                    
                    temp1_1 = rbx_1
                    rbx_1 -= 4
                while (temp1_1 - 4 s>= 0)
                temp2_1 = rsi
                rsi -= 1
            while (temp2_1 - 1 s>= 0)
        
        return 1

return 0
