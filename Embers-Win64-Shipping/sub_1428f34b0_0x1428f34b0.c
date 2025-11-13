// 函数: sub_1428f34b0
// 地址: 0x1428f34b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t (* rbp)(int64_t arg1, char arg2) = sub_1428f37a0
uint64_t (* r14)(int64_t, char arg2) = sub_1428f37c0

if (arg4 == 0)
    sub_1428a5670(0xe, 0x70, 0x43, "crypto\conf\conf_lib.c", 0x129)
    return 0

char* result = sub_1428f3650(arg1, arg2, arg3)
char* result_1 = result

if (result == 0)
    return result

if (arg1 != 0)
    void* rcx = *arg1
    int64_t (* rax_1)(int64_t arg1, char arg2) = *(rcx + 0x38)
    
    if (rax_1 != 0)
        rbp = rax_1
    
    uint64_t (* rax_2)(int64_t, char arg2) = *(rcx + 0x40)
    
    if (rax_2 != 0)
        r14 = rax_2

uint64_t rdi_1 = 0

if (rbp(arg1, zx.q(*result_1)) != 0)
    int32_t i
    
    do
        int32_t rax_4 = r14(arg1, zx.q(*result_1))
        
        if (rdi_1.d s> (0x7fffffff - rax_4) s/ 0xa)
            sub_1428a5670(0xe, 0x70, 0x79, "crypto\conf\conf_lib.c", 0x13c)
            return nullptr
        
        uint64_t rdx_5 = zx.q(result_1[1])
        result_1 = &result_1[1]
        rdi_1 = zx.q(rax_4 + ((rdi_1 * 5).d << 1))
        i = rbp(arg1, rdx_5)
    while (i != 0)

*arg4 = rdi_1.d
return 1
