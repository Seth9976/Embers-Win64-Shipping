// 函数: sub_1403dadb0
// 地址: 0x1403dadb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x464)

if (rax != 0)
    if (rax == 1)
        return sub_1403d8880(arg1, arg3) __tailcall
    
    *(arg1 + 0x464) = rax - 1
    
    if (rax == 2)
        png_warning(arg1, "No space in chunk cache for tEXt")
        return sub_1403d8880(arg1, arg3) __tailcall

int32_t rax_3 = *(arg1 + 0x154)

if ((rax_3.b & 1) == 0)
    png_error(arg1, "Missing IHDR before tEXt")
    noreturn

if ((rax_3.b & 4) != 0)
    *(arg1 + 0x154) = rax_3 | 8

png_free(arg1, *(arg1 + 0x4a0))
void* rax_5 = png_malloc_warn(arg1, zx.q(arg3 + 1))
*(arg1 + 0x4a0) = rax_5
char* rdx_7

if (rax_5 == 0)
    rdx_7 = "No memory to process text chunk"
else
    uint64_t rbx_1 = zx.q(arg3)
    sub_1403cc480(arg1, rax_5, rbx_1)
    sub_1403be770(arg1, rax_5, rbx_1.d)
    int32_t rax_6 = sub_1403d8880(arg1, 0)
    int64_t rdi_2 = *(arg1 + 0x4a0)
    int64_t result
    uint64_t rcx_8
    int64_t rdx_6
    
    if (rax_6 != 0)
        rcx_8 = arg1
        rdx_6 = rdi_2
    label_1403dae82:
        result = png_free(rcx_8, rdx_6)
        *(arg1 + 0x4a0) = 0
        return result
    
    *(rdi_2 + rbx_1) = 0
    int64_t rcx_11 = 0
    int64_t rax_8 = 0
    bool cond:0_1
    
    do
        rax_8 -= 1
        cond:0_1 = *(rdi_2 + rcx_11) != 0
        rcx_11 += 1
    while (cond:0_1)
    uint8_t* lpMultiByteStr_1 = rdi_2 - rax_8
    uint8_t* lpMultiByteStr = &lpMultiByteStr_1[-1]
    
    if (not.q(rbx_1) != rax_8)
        lpMultiByteStr = lpMultiByteStr_1
    
    int32_t* rax_9 = png_malloc_warn(arg1, 0x38)
    
    if (rax_9 == 0)
        png_warning(arg1, "Not enough memory to process text chunk")
        rdx_6 = *(arg1 + 0x4a0)
        rcx_8 = arg1
        goto label_1403dae82
    
    *rax_9 = 0xffffffff
    *(rax_9 + 8) = rdi_2
    __builtin_memset(&rax_9[8], 0, 0x18)
    *(rax_9 + 0x10) = lpMultiByteStr
    *(rax_9 + 0x18) = sx.q(MultiByteToWideChar(0, 0, lpMultiByteStr, 0xffffffff, nullptr, 0))
    int32_t rax_12 = sub_1403cd840(arg1, arg2, rax_9, 1)
    png_free(arg1, *(arg1 + 0x4a0))
    *(arg1 + 0x4a0) = 0
    result = png_free(arg1, rax_9)
    
    if (rax_12 == 0)
        return result
    
    rdx_7 = "Insufficient memory to process text chunk"

return png_warning(arg1, rdx_7) __tailcall
