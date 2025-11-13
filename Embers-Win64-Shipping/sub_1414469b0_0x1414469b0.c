// 函数: sub_1414469b0
// 地址: 0x1414469b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg8)
int64_t rax_1

if (*(arg1 + 0x36288) != 0)
    rax_1 = 0
    
    if (*(arg6 + 8) s>= 3)
        rax_1 = 0x12

int64_t result

if (*(arg1 + 0x36288) == 0 || (not.b((&data_143e8e980)[rax_1 + rbx].b) & 1) != 0
        || (*(arg4 + 0x12) & 0x40) == 0 || arg7 == 0)
    *(arg1 + (rbx << 2) + 0x36240) += zx.d(arg4[3].w)
    void* rbx_4 = arg1 + 0x2d120 + rbx * 0x810
    int64_t rdi_2 = sx.q(*(rbx_4 + 0x808))
    int32_t rax_12 = (rdi_2 + 1).d
    *(rbx_4 + 0x808) = rax_12
    
    if (rax_12 s> *(rbx_4 + 0x80c))
        sub_140b632b0(rbx_4, rdi_2.d)
    
    void* rax_13 = *(rbx_4 + 0x800)
    
    if (rax_13 != 0)
        rbx_4 = rax_13
    
    result = arg5
    *(rbx_4 + (rdi_2 << 3)) = result
else
    result = sub_14141ff40(arg4, rbx.d)
    
    if (result.d s>= 0)
        int64_t* rdi_1 = *(arg3 + 0x28) + sx.q(result.d) * 0x14
        void* rbx_2 = zx.q(rbx.d) * 0x2810 + arg1
        int32_t rdx_1 = *(rbx_2 + 0x2808)
        int32_t rcx_2 = rdx_1 + 1
        *(rbx_2 + 0x2808) = rcx_2
        
        if (rcx_2 s> *(rbx_2 + 0x280c))
            sub_141460d60(rbx_2, rdx_1)
            rcx_2 = *(rbx_2 + 0x2808)
        
        void* rax_7 = *(rbx_2 + 0x2800)
        int64_t r9 = sx.q(*(rdi_1 + 0xc))
        
        if (rax_7 != 0)
            rbx_2 = rax_7
        
        void* rdx_2 = rbx_2 + sx.q(rcx_2) * 0x28
        int64_t r8_1
        
        if (r9.d s< 0)
            r8_1 = sx.q(rdi_1[1].d) * 0xe8 + *(((rbx + 0x24) << 6) + arg6)
        else
            r8_1 = r9 * 0xf8 + *(arg6 + rbx * 0x48 + 0x3f0)
        
        int32_t rcx_6 = rdi_1[2].d
        result = *rdi_1
        *(rdx_2 - 8) &= 0xffffffc0
        *(rdx_2 - 0x28) = r8_1
        *(rdx_2 - 8) |= rcx_6 s>> 6 & 0x3f
        *(rdx_2 - 0x18) = arg2
        *(rdx_2 - 0x14) = arg2
        *(rdx_2 - 0x10) = 0xffffffff
        *(rdx_2 - 0xc) = r9.d
        *(rdx_2 - 0x20) = result

return result
