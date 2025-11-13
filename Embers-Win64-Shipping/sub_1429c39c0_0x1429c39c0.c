// 函数: sub_1429c39c0
// 地址: 0x1429c39c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
__CheckForDebuggerJustMyCode(&data_14427d007)
int32_t r11 = arg4[4]
int64_t r10 = sx.q((rdi * 3).d)
int32_t rdx = 2
void* r9_1 = rdi * 0x58 + arg2
int32_t r8 = -1

if (*(arg1 + (r10 << 2)) == r11)
    r8 = 0
else if (*(arg1 + (r10 << 2) + 4) == r11)
    r8 = 1
else if (*(arg1 + (r10 << 2) + 8) == r11)
    r8 = 2

int64_t r10_1 = sx.q(r8)
int64_t rax_1 = *(r9_1 + (r10_1 << 3) + 0x10)

if (rax_1 != arg4)
    int32_t rax_2
    
    if (rax_1 == 0)
        int32_t rcx = *(r9_1 + 0x4c)
        rax_2 = rcx
        
        if ((rcx.b & 4) != 0 && *(r9_1 + 0x10) == 0 && *(r9_1 + 0x18) == 0 && *(r9_1 + 0x20) == 0)
            int32_t rcx_1 = rcx & 0xfffffff7
            *(r9_1 + 0x4c) = rcx_1
            int32_t rax_3 = arg4[5]
            int32_t rax_4 = neg.d(rax_3)
            rax_2 = (sbb.d(rax_4, rax_4, rax_3 != 0) & 8) | rcx_1
            *(r9_1 + 0x4c) = rax_2
    
    if (rax_1 != 0 || (rax_2 u>> 3 & 1) != arg4[5])
        return 0
    
    *(*(arg4 + 8) + (sx.q(*arg4) << 2)) = rdi.d
    *arg4 += 1
    *(r9_1 + (r10_1 << 3) + 0x10) = arg4
    int32_t rcx_3 = *(r9_1 + (r10_1 << 2))
    
    if (r8 s> 0)
        rdx = r8 - 1
    
    int32_t rdi_1 = *(r9_1 + (sx.q(rdx) << 2))
    
    if (rcx_3 s>= 0)
        sub_1429c39c0(arg1, arg2, zx.q(rcx_3), arg4)
    
    if (rdi_1 s>= 0)
        sub_1429c39c0(arg1, arg2, zx.q(rdi_1), arg4)

return 1
