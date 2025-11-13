// 函数: sub_142bb4a10
// 地址: 0x142bb4a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = arg3
int16_t* r10 = arg1

if (*arg1 == 0)
    return 

int64_t rax = 0
char* rbx_1 = nullptr
int32_t i_4 = 0
int64_t var_40_1 = 0

do
    int64_t r12_1 = sx.q(*(*(r10 + 0x18) + (sx.q(rax.w) << 1)))
    int32_t i_2 = i_4
    int32_t i_3 = i_2
    int64_t rbp_1 = r12_1
    
    if (rbx_1 s<= r12_1)
        while (rbx_1[arg4] == 0)
            i_4 += 1
            rbx_1 = &rbx_1[1]
            
            if (rbx_1 s> rbp_1)
                break
    
    if (i_4 s<= r12_1.d)
        int32_t i_5 = i_4
        int32_t i_6 = i_4
        i_4 += 1
        rbx_1 = &rbx_1[1]
        
        if (rbx_1 s<= rbp_1)
            do
                if (rbx_1[arg4] != 0)
                    sub_142bb3830(i_6 + 1, i_4 - 1, i_6, i_4, arg3, arg2)
                    i_6 = i_4
                
                i_4 += 1
                rbx_1 = &rbx_1[1]
            while (rbx_1 s<= rbp_1)
            
            r9 = arg3
            r12_1 = zx.q(rbp_1.d)
            i_2 = i_3
            r10 = arg1
        
        if (i_6 != i_5)
            sub_142bb3830(i_6 + 1, r12_1.d, i_6, i_5, r9, arg2)
            
            if (i_5 s> 0)
                sub_142bb3830(i_3, i_5 - 1, i_6, i_5, arg3, arg2)
            
            r10 = arg1
            r9 = arg3
        else
            int64_t i_7 = sx.q(i_6)
            int32_t r8_2 = *(arg2 + (i_7 << 3)) - *(r9 + (i_7 << 3))
            int32_t rdx_3 = *(arg2 + (i_7 << 3) + 4) - *(r9 + (i_7 << 3) + 4)
            
            if (r8_2 != 0 || rdx_3 != 0)
                for (int64_t i = sx.q(i_2); i s< i_7; i += 1)
                    *(arg2 + (i << 3)) += r8_2
                    *(arg2 + (i << 3) + 4) += rdx_3
                
                for (int64_t i_1 = sx.q(i_6 + 1); i_1 s<= rbp_1; i_1 += 1)
                    *(arg2 + (i_1 << 3)) += r8_2
                    *(arg2 + (i_1 << 3) + 4) += rdx_3
    
    rax.w = var_40_1.w + 1
    var_40_1 = rax
while (rax.w s< *r10)
