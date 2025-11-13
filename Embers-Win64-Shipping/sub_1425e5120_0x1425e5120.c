// 函数: sub_1425e5120
// 地址: 0x1425e5120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg2 + 0x44)) | zx.q(arg2[8].d) | zx.q(*(arg2 + 0x3c)) | zx.q(arg2[7].d)

if (result.d != 0)
    int32_t result_1
    sub_140910250(arg1 + 0x70, &result_1, &arg2[7])
    result = sx.q(result_1)
    void* const rcx_1
    int64_t* rbx_2
    
    if (result.d == 0xffffffff)
        rcx_1 = nullptr
        rbx_2 = nullptr
    else
        uint64_t rdx_1 = result * 5
        result = *(arg1 + 0x70)
        int64_t rbx_1 = result + (rdx_1 << 3)
        
        if (rbx_1 == 0)
            rcx_1 = nullptr
            rbx_2 = nullptr
        else
            rcx_1 = *(rbx_1 + 0x10)
            rbx_2 = *(rbx_1 + 0x18)
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
    
    if (rcx_1 != 0)
        sub_1425e80a0(rcx_1, arg2, arg3)
        result = sub_140599090(arg1 + 0x148)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx_2 + 8))(rbx_2, 1)

return result
