// 函数: sub_142bc6550
// 地址: 0x142bc6550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1
int32_t rax = sub_142b97060(arg2, arg3 + arg4, arg5)

if (rax == 0)
    uint64_t rbx_1 = zx.q(arg6)
    rax = sub_142b96500(arg2, rbx_1.d)
    
    if (rax == 0)
        char* rdx_2 = arg2[7]
        void* r8 = &rdx_2[rbx_1]
        
        if (rbx_1.d == 0 || *rdx_2 s>= rax.b)
            int32_t rax_18 = sub_142bc6730(rsi, rdx_2, r8)
            sub_142b96620(arg2)
            return zx.q(rax_18)
        
        void* rax_1 = *(rsi + 0x28)
        uint64_t rdi_1 = zx.q(*(rsi + 0x18))
        int32_t rax_2 = sub_142bc6210(rsi, rdx_2, r8)
        sub_142b96620(arg2)
        int32_t arg_20
        int32_t rax_3
        
        if (rax_2 == 0)
            rax_3 = *(rsi + 0x18)
            arg_20 = rax_2
        
        if (rax_2 != 0 || rax_3 == rdi_1.d)
            return zx.q(rax_2)
        
        uint64_t rbp_2 = rdi_1 * 0x18
        
        while (true)
            int64_t rcx_4 = *(rsi + 0x20)
            int64_t rdi_2 = sx.q(*(rax_1 + 0x1a))
            rax = sub_142bc6550(rsi, arg2, zx.q(arg3), zx.q(*(rcx_4 + rbp_2 + 0x10)), 
                *(rcx_4 + rbp_2 + 0x14))
            int32_t r8_2 = rax
            
            if (rax != 0)
                break
            
            int32_t* rbx_4 = *(rsi + 0x20) + rbp_2
            uint64_t i_2 = zx.q(sx.d(*(rax_1 + 0x1a)) - rdi_2.d)
            
            if (*rbx_4 != 0x10000 || rbx_4[1] != 0x10000)
                int32_t* rdi_3 = *(rax_1 + 0x20) + (rdi_2 << 3)
                
                if (i_2.d s> 0)
                    uint64_t i_3 = zx.q(i_2.d)
                    uint64_t i
                    
                    do
                        int32_t rax_12 = sub_142b93e80(*rdi_3, *rbx_4) + rbx_4[2]
                        int32_t rcx_9 = rdi_3[1]
                        *rdi_3 = rax_12
                        rdi_3[1] = sub_142b93e80(rcx_9, rbx_4[1]) + rbx_4[3]
                        rdi_3 = &rdi_3[2]
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                    rsi = arg1
                    r8_2 = rax
            else
                int32_t* rax_9 = *(rax_1 + 0x20) + (rdi_2 << 3)
                
                if (i_2.d s> 0)
                    uint64_t i_1
                    
                    do
                        *rax_9 += rbx_4[2]
                        rax_9 = &rax_9[2]
                        rax_9[-1] += rbx_4[3]
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
            
            rbp_2 += 0x18
            int32_t rax_16 = arg_20 + 1
            arg_20 = rax_16
            
            if (rax_16 u>= rax_3 - rdi_1.d)
                return r8_2

return rax
