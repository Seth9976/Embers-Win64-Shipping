// 函数: sub_142915ff0
// 地址: 0x142915ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char r10 = *arg3
int32_t rbx = 0
int64_t r9 = 0

if (r10 != 0)
    while (true)
        if (r10 - 0x30 u<= 9)
            int64_t rdx = r9 * 0xa
            uint64_t rax_4 = zx.q(sx.d(r10) - 0x30)
            int64_t r10_1 = rax_4 + rdx
            
            if (r10_1 u>= zx.q(rax_4.d) && rdx u/ 0xa == r9)
                arg3 = &arg3[1]
                r9 = r10_1
                r10 = *arg3
                
                if (r10 == 0)
                    break
                
                continue
        
        sub_1428a5670(0x34, 0x69, 0x6c, "crypto\kdf\scrypt.c", 0xad)
        return 0

int64_t* rdi_1 = *(arg1 + 0x28)

if (arg2 - 0x1008 u> 5)
    rbx = -2
else
    switch (arg2)
        case 0x1008
            int64_t rcx_3 = *rdi_1
            
            if (rcx_3 != 0)
                sub_1428a6890(rcx_3, rdi_1[1], "crypto\kdf\scrypt.c", 0x64)
            
            int64_t rax_9 = sub_1428a6730(1)
            *rdi_1 = rax_9
            
            if (rax_9 != 0)
                rdi_1[1] = 0
                return 1
            
            sub_1428a5670(0x34, 0x6b, 0x41, "crypto\kdf\scrypt.c", 0x6c)
            return 0
        case 0x1009
            int64_t rcx_4 = rdi_1[2]
            
            if (rcx_4 != 0)
                sub_1428a6890(rcx_4, rdi_1[3], "crypto\kdf\scrypt.c", 0x64)
            
            int64_t rax_12 = sub_1428a6730(1)
            rdi_1[2] = rax_12
            
            if (rax_12 != 0)
                rdi_1[3] = 0
                return 1
            
            sub_1428a5670(0x34, 0x6b, 0x41, "crypto\kdf\scrypt.c", 0x6c)
            return 0
        case 0x100a
            if (r9 u> 1 && (r9 & (r9 - 1)) == 0)
                rdi_1[4] = r9
                return 1
        case 0x100b
            if (r9 u>= 1)
                rdi_1[5] = r9
                return 1
        case 0x100c
            if (r9 u>= 1)
                rdi_1[6] = r9
                return 1
        case 0x100d
            if (r9 u>= 1)
                rdi_1[7] = r9
                return 1

return zx.q(rbx)
