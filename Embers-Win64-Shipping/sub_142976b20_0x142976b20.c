// 函数: sub_142976b20
// 地址: 0x142976b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint32_t i_1 = arg3
int32_t rbp = 0
void* r12 = arg2
int32_t* rax = sub_14289a060(arg1)
int64_t* rax_1 = sub_14289a660(arg1)

if (rax != 0 && rax_1 != 0)
    sub_142899cc0(arg1, 0xf)
    
    if (rax[4] != 1)
        int32_t* rcx_2 = *(rax + 0x20)
        rax[4] = 1
        *rax = 0
        rax[2] = 0
        sub_142907c90(rcx_2)
    
    if (rax[1] s>= 0x5de)
        sub_1428bc530()
        noreturn
    
    int32_t rdi_1 = *rax
    
    if (rdi_1 s> 0x5de)
        sub_1428bc530()
        noreturn
    
    int32_t rax_2 = rax[1]
    
    if (rdi_1 s< rax_2)
        sub_1428bc530()
        noreturn
    
    int32_t rax_3
    
    for (int32_t i = rdi_1 - rax_2; i s> 0; i -= rax_3)
        rax_3 = sub_14289aa40(rax_1, sx.q(rax[1]) + 0x28 + rax, i)
        
        if (rax_3 s<= 0)
            sub_142899cd0(arg1)
            return zx.q(rax_3)
        
        if (rax_3 s> i)
            sub_1428bc530()
            noreturn
        
        rax[1] += rax_3
        int32_t rax_4 = rax[1]
        
        if (rax_4 s> 0x5de)
            sub_1428bc530()
            noreturn
        
        if (*rax s< rax_4)
            sub_1428bc530()
            noreturn
    
    *rax = 0
    
    if (r12 != 0 && i_1 s> 0)
        do
            uint32_t count = i_1
            
            if (i_1 s> 0x400)
                count = 0x400
            
            if (not(test_bit(sub_14289a9f0(arg1, 0xffffffff), 8)))
                if (sub_142907ca0(*(rax + 0x20), &rax[0xa], rax, r12, count) == 0)
                    if (rbp == 0)
                        rbp = -1
                    
                    break
                
                int32_t rax_14 = *rax
                
                if (rax_14 s> 0x5de)
                    sub_1428bc530()
                    noreturn
                
                if (rax_14 s< rax[1])
                    sub_1428bc530()
                    noreturn
                
                rbp += count
            else
                int32_t rcx_11 = rax[2]
                
                if (rcx_11 s<= 0)
                    if (count s< 3)
                        memcpy(rax + 0x606, r12, count)
                        rax[2] = count
                        return zx.q(rbp + count)
                    
                    count = count s/ 3 * 3
                    int32_t rax_12 = sub_142907be0(&rax[0xa], r12, count)
                    *rax = rax_12
                    
                    if (rax_12 s> 0x5de)
                        sub_1428bc530()
                        noreturn
                    
                    if (rax_12 s< rax[1])
                        sub_1428bc530()
                        noreturn
                    
                    rbp += count
                else
                    if (rcx_11 s> 3)
                        sub_1428bc530()
                        noreturn
                    
                    count = i_1
                    
                    if (3 - rcx_11 s<= i_1)
                        count = 3 - rcx_11
                    
                    memcpy(rax + 0x606 + sx.q(rcx_11), r12, count)
                    rbp += count
                    int32_t r8_10 = rax[2] + count
                    rax[2] = r8_10
                    
                    if (r8_10 s< 3)
                        break
                    
                    int32_t rax_8 = sub_142907be0(&rax[0xa], rax + 0x606, r8_10)
                    *rax = rax_8
                    
                    if (rax_8 s> 0x5de)
                        sub_1428bc530()
                        noreturn
                    
                    if (rax_8 s< rax[1])
                        sub_1428bc530()
                        noreturn
                    
                    rax[2] = 0
            
            i_1 -= count
            r12 += sx.q(count)
            rax[1] = 0
            int32_t j = *rax
            
            while (j s> 0)
                int32_t rax_16 = sub_14289aa40(rax_1, sx.q(rax[1]) + 0x28 + rax, j)
                
                if (rax_16 s<= 0)
                    sub_142899cd0(arg1)
                    
                    if (rbp == 0)
                        rbp = rax_16
                    
                    return zx.q(rbp)
                
                if (rax_16 s> j)
                    sub_1428bc530()
                    noreturn
                
                rax[1] += rax_16
                j -= rax_16
                int32_t rax_17 = rax[1]
                
                if (rax_17 s> 0x5de)
                    sub_1428bc530()
                    noreturn
                
                if (*rax s< rax_17)
                    sub_1428bc530()
                    noreturn
            
            *rax = 0
        while (i_1 s> 0)
        
        return zx.q(rbp)

return 0
