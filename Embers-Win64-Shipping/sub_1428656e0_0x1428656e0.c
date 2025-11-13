// 函数: sub_1428656e0
// 地址: 0x1428656e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rbx = arg1[1]

if (rbx == 0 || (rbx.b & 1) != 0)
    return 0

uint64_t rbx_1 = rbx u>> 1
int64_t rax = sub_1428a6730(rbx_1 * 2)

if (rax != 0)
    int64_t r9_1 = 0
    
    if (rbx_1 != 0)
        do
            int64_t r8_2 = arg1[1]
            
            if (r8_2 u< 2)
                break
            
            char* rax_2 = *arg1
            uint16_t rdx_1 = zx.w(rax_2[1])
            uint16_t rcx_3 = zx.w(*rax_2) << 8
            *arg1 = &rax_2[2]
            arg1[1] = r8_2 - 2
            *(rax + (r9_1 << 1)) = rcx_3 | rdx_1
            r9_1 += 1
        while (r9_1 u< rbx_1)
    
    if (r9_1 == rbx_1)
        sub_1428a6780(*arg2)
        *arg2 = rax
        *arg3 = rbx_1
        return 1
    
    sub_1428a6780(rax)
else
    sub_1428a5670((rax + 0x14).d, 0x274, (rax + 0x41).d, "ssl\t1_lib.c", 0x6c7)

return 0
