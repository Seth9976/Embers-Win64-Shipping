// 函数: sub_1428652a0
// 地址: 0x1428652a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rsi = 0
uint64_t rbx = zx.q(arg2)

if (arg2 == 0xffffffff)
    if (*(arg1 + 0x38) == 0)
        int64_t* rax_5 = *(arg1 + 0x488)
        int64_t rax_6
        int64_t rdx_2
        rdx_2:rax_6 = muls.dp.q(0x6666666666666667, *rax_5 - rax_5 - 0x20)
        int64_t rdx_3 = rdx_2 s>> 4
        rbx = (rdx_3 u>> 0x3f) + rdx_3
    else
        rbx = 0
        int32_t rcx_2
        
        while (true)
            void* rax_1 = sub_1428541e0(rbx)
            rcx_2 = *(*(*(arg1 + 0xa8) + 0x238) + 0x20)
            
            if ((*(rax_1 + 4) & rcx_2) != 0)
                break
            
            rbx += 1
            
            if (rbx u>= 9)
                return 0
        
        if (rbx.d == 4)
            if (rcx_2 != 0x20)
                int32_t rdx_1 = 6
                int64_t i = 6
                int64_t* rax_4 = *(arg1 + 0x488) + 0x118
                
                do
                    if (*rax_4 != 0)
                        rbx = zx.q(rdx_1)
                        goto label_14286536d
                    
                    rdx_1 -= 1
                    i -= 1
                    rax_4 -= 0x28
                while (i s>= 4)
            
            goto label_142865385

label_14286536d:

if (rbx.d u<= 8)
label_142865385:
    
    if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 2) == 0 && rbx.d == 0)
        return &data_1434dc728
    
    char const (** const result)[0x17] = &data_1434dc750
    
    while (result[1].w != *(&data_1434dcb60 + (sx.q(rbx.d) << 1)))
        rsi += 1
        result = &result[5]
        
        if (rsi u>= 0x1a)
            return 0
    
    int64_t rax_11
    
    if (*(result + 0xc) != 0)
        rax_11 = sub_14285b4c0((result[2].d).b)
    
    if (*(result + 0xc) == 0 || rax_11 != 0)
        return result

return 0
