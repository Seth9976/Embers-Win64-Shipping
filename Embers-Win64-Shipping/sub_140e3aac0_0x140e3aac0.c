// 函数: sub_140e3aac0
// 地址: 0x140e3aac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x348)

if (rax != 0)
    *(arg1 + 0x348) = rax - 1
    return rax - 1

int32_t i = *(arg1 + 0x264)
int64_t r8 = sx.q(arg2)
void* rdx = *(arg1 + (r8 << 3) + 0x328)
int32_t rcx = *(rdx + 0x18)
int64_t result = sx.q(rcx * arg3)
int64_t r14_2 = sx.q(*(rdx + 8) * rcx * arg4) + result + *rdx
int32_t rbx

for (; i s<= *(arg1 + 0x268); i = rbx + 1)
    int32_t r9 = *(arg1 + 0x24f8)
    int64_t r8_1 = *(arg1 + (sx.q(*(arg1 + (r8 << 2) + 0x254)) << 3) + 0x2c8)
    int64_t rdi_1 = sx.q(*(r8_1 + (zx.q(r9) u>> 0x18 << 2) + 4))
    uint32_t rax_13
    
    if (rdi_1.d s>= 0)
        rax_13 = zx.d(*(rdi_1 + r8_1 + 0x804))
    else
        int32_t rdx_1 = 0x17
        
        do
            int64_t rcx_3 = 0x241 - sx.q((r9 u>> rdx_1.b & 1) + rdi_1.d)
            rdx_1 -= 1
            rdi_1 = zx.q(*(r8_1 + (rcx_3 << 2)))
        while (rdi_1.d s< 0)
        
        rax_13 = 0x1f - rdx_1
    
    result = sub_140e3cc80(arg1, rax_13, arg5)
    int32_t rcx_6 = rdi_1.d s>> 4
    uint64_t rdi_2 = zx.q(rdi_1.d) & 0xf
    
    if (rdi_2.d == 0)
        if (rcx_6 != 0xf)
            int32_t rax_16 = 1 << rcx_6.b
            *(arg1 + 0x348) = rax_16
            
            if (rcx_6 != 0)
                rax_16 = sub_140e3cc80(arg1, rcx_6, arg5) + *(arg1 + 0x348)
            
            result = zx.q(rax_16 - 1)
            *(arg1 + 0x348) = result.d
            break
        
        rbx = i + rcx_6
        
        if (rbx s> 0x3f)
            sub_140e43530(arg1, 0xffffff1a)
            noreturn
    else
        rbx = i + rcx_6
        
        if (rbx s> 0x3f)
            sub_140e43530(arg1, 0xffffff1a)
            noreturn
        
        int32_t rax_14 = sub_140e3cc80(arg1, rdi_2.d, arg5)
        int32_t rdx_4 = rax_14
        
        if (rax_14 s< *((rdi_2 << 2) + 0x142ed66b0))
            rdx_4 += *((rdi_2 << 2) + 0x142ed66f0)
        
        rdx_4.w <<= (*(arg1 + 0x26c)).b
        result = sx.q(*((sx.q(rbx) << 2) + &data_1439b36b0))
        *(r14_2 + (result << 1)) = rdx_4.w

return result
