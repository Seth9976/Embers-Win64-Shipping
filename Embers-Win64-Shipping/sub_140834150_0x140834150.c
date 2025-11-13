// 函数: sub_140834150
// 地址: 0x140834150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x270))(arg2, arg3, &arg1[0x39])
int64_t** rbx = arg1[0x39]
int64_t result = sx.q(arg1[0x3a].d)
void* rdi = &rbx[result]

while (rbx != rdi)
    if ((*(*arg1 + 0x48))(arg1, *rbx) == 0)
        *rbx = sub_14210f630(0)
    
    void arg_8
    result = sub_1421268c0(*rbx, &arg_8, *(arg1 + 0xac))
    rbx = &rbx[1]
    arg1[0x3b] |= *result

return result
