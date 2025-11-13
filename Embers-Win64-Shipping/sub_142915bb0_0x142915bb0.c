// 函数: sub_142915bb0
// 地址: 0x142915bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char* rbx = arg3

if (rbx == 0)
    sub_1428a5670(0x34, 0x68, 0x66, "crypto\kdf\scrypt.c", 0xb7)
    return 0

int32_t rdi = 0
int64_t rcx = 0

while (true)
    char rax_2 = arg2[rcx]
    rcx += 1
    
    if (rax_2 != data_14351f300[0x13][rcx])
        break
    
    if (rcx == 5)
        return sub_1428bcf80(arg1, 0x1008, rbx) __tailcall

int64_t rcx_3 = 0

while (true)
    char rax_4 = arg2[rcx_3]
    rcx_3 += 1
    
    if (rax_4 != *(rcx_3 + 0x14351f31f))
        break
    
    if (rcx_3 == 8)
        return sub_1428bce00(arg1, 0x1008, rbx) __tailcall

int64_t rcx_6 = 0

while (true)
    char rax_6 = arg2[rcx_6]
    rcx_6 += 1
    
    if (rax_6 != data_14351f320[7][rcx_6])
        break
    
    if (rcx_6 == 5)
        return sub_1428bcf80(arg1, 0x1009, rbx) __tailcall

int64_t rcx_9 = 0

while (true)
    char rax_8 = arg2[rcx_9]
    rcx_9 += 1
    
    if (rax_8 != *(rcx_9 + 0x14351f32f))
        break
    
    if (rcx_9 == 8)
        return sub_1428bce00(arg1, 0x1009, rbx) __tailcall

if (*arg2 == 0x4e && arg2[1] == 0)
    return sub_142915ff0(arg1, 0x100a, rbx) __tailcall

if (*arg2 == 0x72 && arg2[1] == 0)
    return sub_142915ff0(arg1, 0x100b, rbx) __tailcall

if (*arg2 == 0x70 && arg2[1] == 0)
    char rcx_16 = *rbx
    int64_t r8_13 = 0
    
    if (rcx_16 != 0)
        while (true)
            if (rcx_16 - 0x30 u<= 9)
                int64_t rdx_6 = r8_13 * 0xa
                uint64_t rax_21 = zx.q(sx.d(rcx_16) - 0x30)
                int64_t r9_7 = rax_21 + rdx_6
                
                if (r9_7 u>= zx.q(rax_21.d) && rdx_6 u/ 0xa == r8_13)
                    rcx_16 = rbx[1]
                    rbx = &rbx[1]
                    r8_13 = r9_7
                    
                    if (rcx_16 == 0)
                        break
                    
                    continue
            
            sub_1428a5670(0x34, 0x69, 0x6c, "crypto\kdf\scrypt.c", 0xad)
            return 0
    
    if (r8_13 u>= 1)
        *(arg1[5] + 0x30) = r8_13
        rdi = 1
    
    return zx.q(rdi)

if (strcmp(arg2, "maxmem_bytes") != 0)
    sub_1428a5670(0x34, 0x68, 0x67, "crypto\kdf\scrypt.c", 0xd4)
    return 0xfffffffe

char rcx_19 = *rbx
int64_t r8_14 = 0

if (rcx_19 != 0)
    while (true)
        if (rcx_19 - 0x30 u<= 9)
            int64_t rdx_9 = r8_14 * 0xa
            uint64_t rax_30 = zx.q(sx.d(rcx_19) - 0x30)
            int64_t r9_8 = rax_30 + rdx_9
            
            if (r9_8 u>= zx.q(rax_30.d) && rdx_9 u/ 0xa == r8_14)
                rcx_19 = rbx[1]
                rbx = &rbx[1]
                r8_14 = r9_8
                
                if (rcx_19 == 0)
                    break
                
                continue
        
        sub_1428a5670(0x34, 0x69, 0x6c, "crypto\kdf\scrypt.c", 0xad)
        return 0

if (r8_14 u>= 1)
    *(arg1[5] + 0x38) = r8_14
    rdi = 1

return zx.q(rdi)
