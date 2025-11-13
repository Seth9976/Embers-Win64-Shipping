// 函数: sub_140a416c0
// 地址: 0x140a416c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r13 = zx.q(arg4)
int64_t* rax = __crt_deferred_errno_cache::get(&data_143db7b00)
int64_t* rax_1 = (*(*rax + 0xc0))(rax, arg2, (arg3 u>> 2).b & 1)

if (rax_1 == 0)
    if ((arg3.b & 1) != 0)
        sub_140af98a0("Unknown", (rax_1 + 0x34).d, u"Failed to read file: %s", arg2)
        sub_140afbb40()
    
    return 0

void*** result = j_sub_140a82f30(0xe0)

if (result == 0)
    return nullptr

int64_t rdx_2 = *rax_1
int64_t rax_3 = (*(rdx_2 + 0x40))(rax_1, rdx_2)
sub_140b4c2a0(result)
*result = &data_142e5de88
result[0x12] = 0
result[0x13] = 0
bool cond:0_1 = arg2 == 0

if (arg2 != 0)
    int16_t temp1_1 = *arg2
    cond:0_1 = temp1_1 == 0
    
    if (temp1_1 != 0)
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (arg2[rdi_1] != 0)
        
        int32_t rdx_3 = 0
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(&result[0x12], rdi_1.d + 1)
            rdx_3 = result[0x13].d
        
        int32_t rax_4 = rdx_3 + rdi_1.d + 1
        result[0x13].d = rax_4
        
        if (rax_4 s> *(result + 0x9c))
            sub_140594770(&result[0x12])
        
        int64_t r8_2 = sx.q(rdi_1.d + 1)
        cond:0_1 = r8_2 == neg.q(r8_2)
        memcpy(result[0x12], arg2, r8_2.d * 2)

uint64_t rflags_1
int32_t rcx_6
rcx_6, rflags_1 = _bit_scan_reverse(r13)
result[0x14] = rax_3
result[0x15] = 0
result[0x16] = 0
result[0x17] = rax_1
__builtin_memset(&result[0x18], 0, 0x18)
uint64_t rcx_7

if (cond:0_1)
    rcx_7 = 0x40
else
    rcx_7 = zx.q(0x3f - rcx_6)

int64_t rcx_9 = rcx_7 << 0x39 s>> 0x3f
uint64_t rflags_2
char r10_1
r10_1, rflags_2 = _bit_scan_reverse(r13 - 1)
char rax_7

if (rcx_9 == 0)
    rax_7 = 0x40
else
    rax_7 = 0x3f - r10_1

rcx_9.b = not.b(rcx_9.b)
rcx_9.b &= 0x40 - rax_7
int64_t rdx_7 = 1 << rcx_9.b
result[0x1b] = rdx_7

if (rdx_7 s> 0)
    sub_140a4fbe0(&result[0x18], rdx_7)

rdx_7.b = 1
(*result)[0x14](result, rdx_7)
int64_t rdx_8
rdx_8.b = 1
(*result)[0x1b](result, rdx_8)
return result
