// 函数: sub_1419586a0
// 地址: 0x1419586a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14081d930(arg1 + 0x8a0, arg2)
void* rbx = *(arg1 + 0x15ba0)
*(arg1 + 0x8a8) = 0

if (wglGetCurrentContext() != *(rbx + 0x40))
    void* rbx_1 = *(arg1 + 0x15ba0)
    *(arg1 + 0x8a8) = 1
    
    if (wglGetCurrentContext() != 0)
        data_143effa18()
    
    HDC param0
    
    if (*(rbx_1 + 0x68) != 1)
        param0 = *(rbx_1 + 0x38)
    else
        param0 = *(**(rbx_1 + 0x60) + 8)
    
    if (wglMakeCurrent(param0, *(rbx_1 + 0x40)) == 0)
        wglMakeCurrent(nullptr, nullptr)

int64_t var_28

if (arg3 == 0)
    var_28 = *(*(arg1 + 0x8a0) + 0x40)
else
    var_28 = arg3

int32_t var_20 = 0
int32_t var_1c = 0xffffffff
int16_t var_18 = 0x101
return sub_1419154b0(arg1, 1, &var_28, nullptr)
