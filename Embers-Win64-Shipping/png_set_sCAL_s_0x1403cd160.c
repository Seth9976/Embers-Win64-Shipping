// 函数: png_set_sCAL_s
// 地址: 0x1403cd160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

if (arg3 - 1 u>= 2)
    png_error(arg1, "Invalid sCAL unit")
    noreturn

if (arg4 == 0)
label_1403cd2fa:
    png_error(arg1, "Invalid sCAL width")
    noreturn

int32_t rax_2 = MultiByteToWideChar(0, 0, arg4, 0xffffffff, nullptr, 0)

if (rax_2 == 0 || *arg4 == 0x2d)
    goto label_1403cd2fa

int64_t rsi_1 = sx.q(rax_2)

if (sub_1403bf610(arg4, rsi_1) == 0)
    goto label_1403cd2fa

if (arg5 == 0)
label_1403cd303:
    png_error(arg1, "Invalid sCAL height")
    noreturn

int32_t rax_4 = MultiByteToWideChar(0, 0, arg5, 0xffffffff, nullptr, 0)

if (rax_4 == 0 || *arg5 == 0x2d)
    goto label_1403cd303

int64_t rdi_1 = sx.q(rax_4)

if (sub_1403bf610(arg5, rdi_1) == 0)
    goto label_1403cd303

*(arg2 + 0x124) = arg3.b
int64_t rax_6 = png_malloc_warn(arg1, rsi_1 + 1)
*(arg2 + 0x128) = rax_6

if (rax_6 == 0)
    return png_warning(arg1, "Memory allocation failed while processing sCAL") __tailcall

memcpy(rax_6, arg4, (rsi_1 + 1).d)
int64_t rax_7 = png_malloc_warn(arg1, rdi_1 + 1)
*(arg2 + 0x130) = rax_7

if (rax_7 == 0)
    png_free(arg1, *(arg2 + 0x128))
    *(arg2 + 0x128) = 0
    return png_warning(arg1, "Memory allocation failed while processing sCAL") __tailcall

memcpy(rax_7, arg5, (rdi_1 + 1).d)
*(arg2 + 9) |= 0x40
*(arg2 + 0xed) |= 1
