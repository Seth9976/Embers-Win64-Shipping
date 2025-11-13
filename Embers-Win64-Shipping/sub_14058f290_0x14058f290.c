// 函数: sub_14058f290
// 地址: 0x14058f290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 8)
*(arg1 + 8) = 0
int64_t arg_8

if (rax != 0)
    arg_8 = rax
    avcodec_free_context(&arg_8)

int64_t rax_1 = *(arg1 + 0x28)
*(arg1 + 0x28) = 0

if (rax_1 != 0)
    arg_8 = rax_1
    av_frame_free(&arg_8)

int64_t result = *(arg1 + 0x38)

if (result != 0 && *(result + 0x20) != 0)
    result = avio_closep(result + 0x20)

int64_t rcx_3 = *(arg1 + 0x38)
*(arg1 + 0x38) = 0

if (rcx_3 != 0)
    result = avformat_free_context(rcx_3)

*(arg1 + 0x149) = 0
return result
