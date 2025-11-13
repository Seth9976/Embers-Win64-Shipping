// 函数: sub_142977450
// 地址: 0x142977450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rdi = 1
int32_t* rax = sub_14289a060(arg1)
int64_t* rax_1 = sub_14289a660(arg1)

if (rax == 0 || rax_1 == 0)
    return 0

if (arg2 - 1 u<= 0x64)
    switch (arg2)
        case 1
            rax[6] = 1
            rax[5] = 1
            rax[4] = 0
        case 2
            if (rax[6] s<= 0)
                return rdi
        case 0xa
            int32_t rdi_2 = *rax
            int32_t rax_9 = rax[1]
            
            if (rdi_2 s< rax_9)
                sub_1428bc530()
                noreturn
            
            rdi = rdi_2 - rax_9
            goto label_142977570
        case 0xb
            while (true)
                while (*rax != rax[1])
                    int32_t rax_8 = sub_142976b20(arg1, nullptr, 0)
                    
                    if (rax_8 s< 0)
                        return rax_8
                
                if (not(test_bit(sub_14289a9f0(arg1, 0xffffffff), 8)))
                    if (rax[4] == 0)
                        break
                    
                    if (sub_1406938b0(*(rax + 0x20)) == 0)
                        break
                    
                    int32_t* rcx_11 = *(rax + 0x20)
                    rax[1] = 0
                    sub_142907c10(rcx_11, &rax[0xa], rax)
                else
                    int32_t r8_3 = rax[2]
                    
                    if (r8_3 == 0)
                        break
                    
                    *rax = sub_142907be0(&rax[0xa], rax + 0x606, r8_3)
                    *(rax + 4) = 0
        case 0xc
            return rdi
        case 0xd
            int32_t rdi_1 = *rax
            int32_t rax_6 = rax[1]
            
            if (rdi_1 s< rax_6)
                sub_1428bc530()
                noreturn
            
            rdi = rdi_1 - rax_6
            
            if (rdi_1 != rax_6)
            label_142977570:
                
                if (rdi s> 0)
                    return rdi
            else if (rax[4] != rdi && sub_1406938b0(*(rax + 0x20)) != 0)
                return 1
        case 0x65
            sub_142899cc0(arg1, 0xf)
            int32_t rax_15 = sub_142899cf0(rax_1, arg2, arg3, arg4)
            sub_142899cd0(arg1)
            return rax_15

return sub_142899cf0(rax_1, arg2, arg3, arg4)
