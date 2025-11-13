// 函数: sub_1406b4b70
// 地址: 0x1406b4b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = *arg1
int64_t* rcx = arg1[8]

if (rcx == 0)
    std::_Xbad_function_call()
    noreturn

(*(*rcx + 0x10))(rcx, &arg_8)
_Cnd_do_broadcast_at_thread_exit()
int64_t* rcx_1 = arg1[8]

if (rcx_1 != 0)
    int64_t rdx_1
    rdx_1.b = rcx_1 != &arg1[1]
    (*(*rcx_1 + 0x20))(rcx_1, rdx_1)
    arg1[8] = 0

j_sub_140a74f90(arg1)
return 0
