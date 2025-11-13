// 函数: sub_14289b510
// 地址: 0x14289b510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char* rdi = arg1

if (arg1 == 0)
    sub_1428a5670(0x20, 0x7e, 0x73, "crypto\bio\bss_mem.c", 0x59)
    return 0

uint64_t rbx_1

if (arg2 s>= 0)
    rbx_1 = sx.q(arg2)
else
    int32_t i = 0
    
    if (*arg1 != 0)
        while (i u< 0x80000000)
            arg1 = &arg1[1]
            i += 1
            
            if (*arg1 == 0)
                break
    
    rbx_1 = zx.q(i) & 0x7fffffff

int64_t* result = sub_14289a500(&data_1434ea7b0)

if (result == 0)
    return result

uint64_t** rcx = result[7]
uint64_t* rax_2 = *rcx
*rax_2 = rbx_1
rax_2[2] = rbx_1
rax_2[1] = rdi
uint64_t* rax_3 = *rcx
int128_t* rcx_1 = rcx[1]
*rcx_1 = *rax_3
rcx_1[1] = *(rax_3 + 0x10)
result[5].d |= 0x200
result[6].d = 0
return result
