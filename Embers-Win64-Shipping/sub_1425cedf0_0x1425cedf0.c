// 函数: sub_1425cedf0
// 地址: 0x1425cedf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3[1].d

if (i_1 != 0)
    int64_t* rbx_1 = *arg3 + 0x10
    int32_t i
    
    do
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx_1 = &rbx_1[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg3[1].d = 0

if (*(arg3 + 0xc) != 0)
    sub_1405c5660(arg3, 0)

int64_t* result = sub_1425cebc0(arg1)

if (result == 0)
    return result

int64_t r9_1 = *result
return (*(r9_1 + 0x268))(result, arg2, arg3, r9_1)
