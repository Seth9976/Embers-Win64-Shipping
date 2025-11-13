// 函数: sub_142975e60
// 地址: 0x142975e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint64_t rdi = 0
char* rsi = -ffffffffffffffff
int32_t arg_10 = 0
uint64_t rbx = zx.q(arg2)

if (arg2 == 0xffffffff)
    rbx = -1
    
    do
        rbx += 1
    while (*(rbx + arg1) != 0)

int32_t r15 = 0
int32_t i = 0

if (rbx.d s> 0)
    do
        int32_t rax_1 = sub_1429342f0(sx.q(i) + arg1, rbx.d - i, &arg_10)
        
        if (rax_1 s< 0)
            if (rbx.d == 0xffffffff)
                do
                    rsi = &rsi[1]
                while (rsi[arg1] != 0)
                
                rbx = zx.q(rsi.d)
            
            int32_t rbx_1 = rbx.d * 2
            int64_t rsi_1 = sx.q(rbx_1)
            uint8_t* rax_3 = sub_1428a6730(rsi_1 + 2)
            
            if (rax_3 == 0)
                sub_1428a5670((&rax_3[0x23]).d, (&rax_3[0x79]).d, (&rax_3[0x41]).d, 
                    "crypto\pkcs12\p12_utl.c", 0x1a)
                return nullptr
            
            if (rbx_1 s> 0)
                void* rcx_7 = &rax_3[1]
                uint64_t j_1 = zx.q(((rbx_1 - 1) u>> 1) + 1)
                uint64_t j
                
                do
                    *(rcx_7 - 1) = 0
                    int64_t rax_6 = rdi s>> 1
                    rcx_7 += 2
                    rdi += 2
                    *(rcx_7 - 2) = *(rax_6 + arg1)
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            *(rsi_1 + rax_3) = 0
            
            if (arg4 != 0)
                *arg4 = rbx_1 + 2
            
            if (arg3 != 0)
                *arg3 = rax_3
            
            return rax_3
        
        int32_t rdx_2 = arg_10
        
        if (rdx_2 u> 0x10ffff)
            return nullptr
        
        int32_t rcx_2 = 2
        
        if (rdx_2 u>= 0x10000)
            rcx_2 = 4
        
        i += rax_1
        r15 += rcx_2
    while (i s< rbx.d)

uint8_t* rax_2 = sub_1428a6730(sx.q(r15 + 2))

if (rax_2 == 0)
    sub_1428a5670((&rax_2[0x23]).d, 0x81, (&rax_2[0x41]).d, "crypto\pkcs12\p12_utl.c", 0x76)
    return nullptr

uint8_t* rsi_2 = rax_2

if (rbx.d s> 0)
    do
        int32_t rax_8 = sub_1429342f0(sx.q(rdi.d) + arg1, rbx.d - rdi.d, &arg_10)
        int32_t rdx_10 = arg_10
        char* r8_7 = &rsi_2[1]
        
        if (rdx_10 u< 0x10000)
            *rsi_2 = (rdx_10 u>> 8).b
            *r8_7 = arg_10.b
        else
            arg_10 = rdx_10 - 0x10000
            *rsi_2 = ((((rdx_10 - 0x10000) u>> 0xa) + 0xd800) u>> 8).b
            *r8_7 = (((rdx_10 - 0x10000) u>> 0xa) + 0xd800).b
            r8_7[1] = ((((rdx_10 - 0x10000) & 0x3ff) + 0xdc00) u>> 8).b
            r8_7 = &r8_7[2]
            *r8_7 = (((rdx_10 - 0x10000) & 0x3ff) + 0xdc00).b
        
        rdi = zx.q(rdi.d + rax_8)
        rsi_2 = &r8_7[1]
    while (rdi.d s< rbx.d)

*rsi_2 = 0

if (arg4 != 0)
    *arg4 = r15 + 2

if (arg3 != 0)
    *arg3 = rax_2

return rax_2
