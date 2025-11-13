// 函数: sub_1428e7a60
// 地址: 0x1428e7a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t r8 = -1

if (arg1 != 0 && arg2 != 0)
    int64_t rax_1 = sx.q(*arg1)
    
    if (rax_1.d == *arg2 && rax_1.d u<= 8)
        switch (rax_1)
            case 0
                int64_t* rdi_1 = *(arg1 + 8)
                
                if (rdi_1 != 0)
                    int64_t* rbx_1 = *(arg2 + 8)
                    
                    if (rbx_1 != 0)
                        int32_t rax_3 = sub_1428f6490(*rdi_1, *rbx_1)
                        r8 = rax_3
                        
                        if (rax_3 == 0)
                            r8 = sub_1428cd190(rdi_1[1], rbx_1[1])
            case 1, 2, 6
                r8 = sub_1428f29b0(*(arg1 + 8), *(arg2 + 8))
            case 3, 5
                r8 = sub_1428cd190(*(arg1 + 8), *(arg2 + 8))
            case 4
                r8 = sub_1428a32a0(*(arg1 + 8), *(arg2 + 8))
            case 7
                r8 = sub_1428e6180(*(arg1 + 8), *(arg2 + 8))
            case 8
                r8 = sub_1428f6490(*(arg1 + 8), *(arg2 + 8))

return zx.q(r8)
