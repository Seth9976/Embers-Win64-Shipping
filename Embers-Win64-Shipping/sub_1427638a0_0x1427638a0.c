// 函数: sub_1427638a0
// 地址: 0x1427638a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t i = 0
uint64_t r8 = zx.q(*rax)
int64_t rsi = *(arg1 + 0x70)
*(arg1 + 0x10) = &rax[1]
uint32_t r15 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint32_t r9 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
int64_t rdx = *(arg1 + 0x50)
int32_t rcx = *(arg1 + 0x80)
int64_t rax_4 = r8 * 0x70
uint64_t r8_2 = zx.q(r9 * rcx)
int64_t* r12 = *(rax_4 + rdx + 0x18)
int32_t rdx_1 = *(rax_4 + rdx + 0x14)
int64_t result = *(arg1 + 0x60)
int32_t* rsi_1 = rsi + r8_2
int32_t arg_8 = rdx_1
int64_t* rbx = result + zx.q(r8.d) * 0x18

if (*(arg1 + 0x40) s> 0)
    do
        int32_t rax_5 = *rsi_1
        int64_t rdi_1 = sx.q(*(rsi_1 + zx.q(r15 * rcx) - r8_2))
        
        if (rax_5 != 0xffffffff)
            result = *r12
            *(result + (rdi_1 << 2)) = rdx_1 + rax_5
            
            if (rbx[2].d s>= rdi_1.d)
                rdi_1 = zx.q(rbx[2].d)
            
            rbx[2].d = rdi_1.d
        else
            int64_t rbp_1 = sx.q(rbx[1].d)
            int32_t rax_6 = (rbp_1 + 1).d
            rbx[1].d = rax_6
            
            if (rax_6 s> *(rbx + 0xc))
                sub_1405a4cf0(rbx)
            
            result = *rbx
            *(result + (rbp_1 << 2)) = rdi_1.d
        
        rdx_1 = arg_8
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 0x40))

return result
