// 函数: sub_140895c70
// 地址: 0x140895c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm3
zmm3.o = *arg1
(*(arg1 + 0x38))(&arg1[0xa], &arg1[6], &arg1[2], zmm3)
_Cnd_do_broadcast_at_thread_exit()
int64_t rcx_1 = *(arg1 + 0x28)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = *(arg1 + 0x18)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 8)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

j_sub_140a74f90(arg1)
return 0
