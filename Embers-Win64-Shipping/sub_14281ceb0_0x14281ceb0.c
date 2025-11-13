// 函数: sub_14281ceb0
// 地址: 0x14281ceb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t* arg_8 = arg3
int64_t* rdx = *(arg1 + 0x88)

if (rdx == *(arg1 + 0x90))
    sub_14281c5ec(arg1 + 0x80, rdx, &arg_10, &arg_8)
else
    *rdx = arg2
    rdx[1] = arg3
    *(arg1 + 0x88) += 0x10

if (***arg2 != 0)
    int64_t* result = *arg3
    
    if (**result != 0)
        return result

arg_8 = arg3
void* rdx_1 = *(arg1 + 0x98)
arg_10 = arg2
return sub_14281c420(arg1 + 0x98, rdx_1, &arg_10, &arg_8)
