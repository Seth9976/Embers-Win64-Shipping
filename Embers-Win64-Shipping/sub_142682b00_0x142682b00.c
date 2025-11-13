// 函数: sub_142682b00
// 地址: 0x142682b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
*(arg1 + 0x298) = 0

if (*(arg1 + 0x29c) s<= 0xffffffff)
    sub_140775cf0(arg1 + 0x290, 0)

int32_t rax = *(arg1 + 0x2bc)
*(arg1 + 0x2b8) = 0

if (rax s< 0 && rax != 0)
    sub_140775cf0(arg1 + 0x2b0, 0)

int32_t rax_1 = *(arg1 + 0x2ac)
*(arg1 + 0x2a8) = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405dadb0(arg1 + 0x2a0, 0)

int32_t rax_2 = *(arg1 + 0x2cc)
*(arg1 + 0x2c8) = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405dadb0(arg1 + 0x2c0, 0)

int32_t rbp_1 = *(arg1 + 0x2d8) - *(arg1 + 0x304)
sub_142679810(arg1 + 0x2d0, rbp_1)
int32_t rax_7

if (rbp_1 u< 4)
    rax_7 = 1
else
    uint32_t rax_4 = rbp_1 u>> 1
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(rax_4 + 8)
    int32_t rcx_5
    
    if (rax_4 == 0xfffffff8)
        rcx_5 = 0x20
    else
        rcx_5 = 0x1f - temp0_2
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_4 + 7)
    
    if (rax_4 == 0xfffffff9)
        rax_7 = 1
    else
        rax_7 = 1 << ((not.d(rcx_5 << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_3)))

int32_t rcx_10

if (rbp_1 s> 0)
    rcx_10 = *(arg1 + 0x318)

void* result

if (rbp_1 s> 0 && (rcx_10 == 0 || rcx_10 s< rax_7 || rcx_10 s> rax_7))
    *(arg1 + 0x318) = rax_7
    result = sub_140afdae0(arg1 + 0x2d0)
else
    result = zx.q(*(arg1 + 0x318))
    
    if (result.d s> 0)
        uint64_t i_1 = zx.q(result.d)
        uint64_t i
        
        do
            void* result_1 = *(arg1 + 0x310)
            result = arg1 + 0x308
            int64_t rdx_4 = (sx.q(*(arg1 + 0x318)) - 1) & rbx
            
            if (result_1 != 0)
                result = result_1
            
            rbx += 1
            *(result + (rdx_4 << 2)) = 0xffffffff
            i = i_1
            i_1 -= 1
        while (i != 1)

*(arg1 + 0x320) = 0xffffffff
return result
