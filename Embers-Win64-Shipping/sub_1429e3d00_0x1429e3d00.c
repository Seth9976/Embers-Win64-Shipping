// 函数: sub_1429e3d00
// 地址: 0x1429e3d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg2) << 7
int16_t* rdi = *(result + arg1)
int32_t rbx_1

if (*(arg1 + 0x258) == 0)
    uint32_t rcx_1 = zx.d(arg4)
    
    if (arg4 == 0)
        rbx_1 = arg7
        sub_142a24c00(arg3, rdi, arg5, arg6, rbx_1)
        goto label_1429e3ddc
    
    if (rcx_1 == 1)
        rbx_1 = arg7
        sub_142a24c40(zx.q(arg3), rdi, arg5, zx.q(arg6), rbx_1)
        goto label_1429e3ddc
    
    if (rcx_1 == 2)
        rbx_1 = arg7
        sub_142a24bc0(arg3, rdi, arg5, arg6, rbx_1)
        goto label_1429e3ddc
    
    if (rcx_1 == 3)
        rbx_1 = arg7
        sub_142a24b60(rdi, arg5, zx.q(arg6), zx.q(rbx_1))
        goto label_1429e3ddc
else
    rbx_1 = arg7
    int32_t zmm4[0x4]
    int32_t zmm5[0x4]
    sub_142a24c90(rdi, arg5, zx.q(arg6), rbx_1, zmm4, zmm5)
label_1429e3ddc:
    
    if (rbx_1 != 1)
        uint64_t count
        
        if (arg3 == 0 && arg4 u<= 2 && rbx_1 s<= 0xa)
            count = sx.q(4 << arg4 << 2) * 2
        else if (arg4 != 3 || rbx_1 s> 0x22)
            count = sx.q(0x10 << (arg4 * 2)) * 2
        else
            count = 0x200
        
        return memset(rdi, 0, count)
    
    result = 0
    *rdi = 0
return result
