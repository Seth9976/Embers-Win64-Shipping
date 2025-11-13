// 函数: sub_140aa99f0
// 地址: 0x140aa99f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg4[1].d
sub_140ac6080(arg2, *(arg3 + 0x14), *(arg3 + 0x15), arg4)
int32_t rax_1 = arg4[1].d
int32_t rcx_1 = rax_1 - 1

if (rax_1 == 0)
    rcx_1 = 0

int32_t result = rbx - 1

if (rbx == 0)
    result = 0

if (result != rcx_1)
    uint64_t r8_1 = zx.q(*(*arg4 + (sx.q(rcx_1) << 1) - 2))
    
    if (0x5400 + r8_1.w u> 0x2ba3)
        result = (r8_1 - 0x30).d
    
    if (0x5400 + r8_1.w u<= 0x2ba3 || result.w u<= 9)
        int64_t rdx_5
        int32_t r8_2
        
        if (zx.d(r8_1.w) - 0xac00 == (zx.d(r8_1.w) - 0xac00) s/ 0x1c * 0x1c
                && (r8_1.w u> 0x38 || not(test_bit(0x1cb000000000000, r8_1))))
            r8_2 = *(arg1 + 0x30)
            rdx_5 = *(arg1 + 0x28)
        else if (*(arg1 + 0x48) != 1)
            r8_2 = *(arg1 + 0x10)
            rdx_5 = *(arg1 + 8)
        else if ((zx.d(r8_1.w) - 0xac00) s% 0x1c == 8 || r8_1.w == 0x31)
            r8_2 = *(arg1 + 0x30)
            rdx_5 = *(arg1 + 0x28)
        else
            r8_1.w -= 0x37
            
            if (r8_1.w u> 1)
                r8_2 = *(arg1 + 0x10)
                rdx_5 = *(arg1 + 8)
            else
                r8_2 = *(arg1 + 0x30)
                rdx_5 = *(arg1 + 0x28)
        
        return sub_140a20ba0(arg4, rdx_5, r8_2)

return result
