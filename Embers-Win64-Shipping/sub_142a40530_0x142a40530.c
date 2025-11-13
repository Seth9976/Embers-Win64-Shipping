// 函数: sub_142a40530
// 地址: 0x142a40530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = arg2[2]

if (r10 u> 0x400)
    return 

void* const rax = *arg2
void* const rbx_1 = &data_14360da50

if (rax != 0)
    rbx_1 = rax

uint64_t r10_2 = (r10 + 7) u>> 3

if (*(arg1 + 8 + (r10_2 << 3)) == rbx_1)
    return 

uint64_t rdi_1

if (r10_2 u> 1)
    uint64_t r9_1
    
    if (r10_2 u<= 8)
        r9_1.b = r10_2.b + 1
        r9_1.b &= 0xfe
    else if (r10_2 u<= 0x40000)
        uint64_t rflags_1
        char temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse((r10_2 - 1).d)
        r9_1.b = ((r10_2 - 1) u>> (temp0_1 - 2)).b & 3
        r9_1.b -= 3
        r9_1.b += temp0_1 << 2
    else
        r9_1.b = 0x49
    
    void* r8_1 = &arg2[-3]
    uint64_t rdi_4
    
    while (true)
        rdi_4 = (*(r8_1 + 0x10) + 7) u>> 3
        uint64_t rax_1
        
        if (rdi_4 u<= 1)
            rax_1.b = 1
        else if (rdi_4 u<= 8)
            rax_1.b = rdi_4.b + 1
            rax_1.b &= 0xfe
        else if (rdi_4 u<= 0x40000)
            uint64_t rflags_2
            char temp0_2
            temp0_2, rflags_2 = _bit_scan_reverse((rdi_4 - 1).d)
            rax_1.b = ((rdi_4 - 1) u>> (temp0_2 - 2)).b & 3
            rax_1.b -= 3
            rax_1.b += temp0_2 << 2
        else
            rax_1.b = 0x49
        
        if (r9_1.b != rax_1.b)
            break
        
        if (r8_1 u<= arg1 + 0x418)
            break
        
        r8_1 -= 0x18
    
    rdi_1 = rdi_4 + 1
    
    if (rdi_1 u> r10_2)
        rdi_1 = r10_2
else
    rdi_1 = 0

int64_t rcx_6
int64_t rdi_6
rdi_6, rcx_6 = __memfill_u64(arg1 + 8 + (rdi_1 << 3), rbx_1, (((r10_2 - rdi_1) << 3) + 8) u>> 3)
