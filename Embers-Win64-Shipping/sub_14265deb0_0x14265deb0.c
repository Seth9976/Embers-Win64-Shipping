// 函数: sub_14265deb0
// 地址: 0x14265deb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1423de540(data_143f5b298, arg1, 1)
int64_t* rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    rbx_1 = *(rax + 0x120)
    
    if (rbx_1 == 0)
        rbx_1 = nullptr
    else
        void* rax_1 = sub_14269bba0()
        void* rdx_1 = rbx_1[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbx_1 = nullptr

*arg3 = *arg2
arg3[1].d = arg2[1].d
int64_t var_28
uint64_t result
int32_t rax_4

if (rbx_1 != 0)
    rax_4 = data_143dbb200
    var_28 = data_143dbb1f8.q
    int64_t var_18_1 = 0
    
    if (arg4 == 0)
        result = sub_142657070(rbx_1, 0)
    else
        result = arg4

if (rbx_1 == 0 || result == 0)
    result.b = 0
else
    void var_38
    result =
        sub_142663310(rbx_1, arg2, &var_28, arg6, arg4, sub_14265ad90(&var_38, result, arg1, arg5))
    *arg3 = var_28
    arg3[1].d = rax_4

return result
