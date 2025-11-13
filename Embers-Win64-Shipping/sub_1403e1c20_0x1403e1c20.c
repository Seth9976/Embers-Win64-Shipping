// 函数: sub_1403e1c20
// 地址: 0x1403e1c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x11d5) != 2)
    return 

*(arg1 + 0x11d8)
int32_t rax_5 = sub_1403df070(divs.dp.d(sx.q(*(arg1 + 0x11f8) * 0x3e80000), *(arg1 + 0x11d8)))
int32_t rcx_1 = *(arg1 + 0x1288)
int32_t rdx_3 = sx.d(rcx_1.w)
uint64_t rax_7 = zx.q(neg.d(rcx_1))
int32_t rdi_6 = ((((rax_7.d & 0x3fff) << 2) * rdx_3) s>> 0x10) + ((rax_7 << 2).d s>> 0x10) * rdx_3
int32_t rbx_3 = (sx.d((rax_5 - 0x800).w - sub_1403df070(0x3c0000) + 0x800) * zx.d(rdi_6.w)) s>> 0x10
int16_t rax_13 = sub_1403df070(0x3c0000)
int32_t rdx_5 = *(arg1 + 8)
int32_t rsi_3 = rax_5 - 0x800 + sx.d(0x800 + (rax_5 - 0x800).w - rax_13) * (rdi_6 s>> 0x10) + rbx_3
int32_t rax_19 = rdx_5 s>> 8
uint64_t rsi_4 = zx.q(rsi_3 - rax_19)

if (rsi_3 - rax_19 s< 0)
    rsi_4 = zx.q((rsi_4 * 3).d)

if (rsi_4.d s> 0x33)
    rsi_4 = 0x33
else if (rsi_4.d s< 0xffffffcd)
    rsi_4 = 0xffffffcd

int32_t rcx_4 = sx.d(*(arg1 + 0x11cc)) * sx.d(rsi_4.w)
*(arg1 + 8) = (rcx_4 s>> 0x10) * 0x199a + ((zx.d(rcx_4.w) * 0x199a) s>> 0x10) + rdx_5
int32_t rbx_5 = sub_1403df070(0x64) << 8
int32_t rbx_6

if (sub_1403df070(0x3c) << 8 s<= rbx_5)
    int32_t rax_32 = sub_1403df070(0x64) << 8
    
    if (*(arg1 + 8) s> rax_32)
        rbx_6 = sub_1403df070(0x64) << 8
    else
        rbx_6 = *(arg1 + 8)
        
        if (rbx_6 s< sub_1403df070(0x3c) << 8)
            rbx_6 = sub_1403df070(0x3c) << 8
else
    int32_t rax_29 = sub_1403df070(0x3c) << 8
    
    if (*(arg1 + 8) s> rax_29)
        rbx_6 = sub_1403df070(0x3c) << 8
    else
        rbx_6 = *(arg1 + 8)
        
        if (rbx_6 s< sub_1403df070(0x64) << 8)
            rbx_6 = sub_1403df070(0x64) << 8

*(arg1 + 8) = rbx_6
