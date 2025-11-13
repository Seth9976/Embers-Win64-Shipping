// 函数: sub_1406bced0
// 地址: 0x1406bced0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x74) == 0xffffffff)
    return 0

void* rax_1 = av_frame_alloc()
void* arg_8 = rax_1

if (rax_1 == 0)
    return 0xfffffff4

*(rax_1 + 0x74) = 0xffffffff
int32_t rax_3 = av_hwframe_transfer_data(arg_8, arg2, 0)

if (rax_3 s< 0)
    av_log(arg1, 0x10, "Failed to transfer data to output frame: %d.\n", zx.q(rax_3))
    av_frame_free(&arg_8)
    return zx.q(rax_3)

int32_t rax_5 = av_frame_copy_props(arg_8, arg2)

if (rax_5 s< 0)
    av_frame_unref(arg_8)
    av_frame_free(&arg_8)
    return zx.q(rax_5)

av_frame_unref(arg2)
av_frame_move_ref(arg2, arg_8)
av_frame_free(&arg_8)
return 0
