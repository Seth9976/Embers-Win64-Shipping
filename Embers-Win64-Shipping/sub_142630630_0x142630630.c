// 函数: sub_142630630
// 地址: 0x142630630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 9) != 0)
    (*(*arg1 + 0x20))(arg1, 0x1a)

int64_t rax_2 = data_143b502a8(zx.q(arg2[2] * 2), 1)
int64_t rax_3 = sx.q(arg2[2])
int32_t* rbx

if (rax_2 != 0)
    memset(rax_2, 0xff, rax_3 * 2)
    void* arg_10 = nullptr
    int32_t arg_8 = 0
    
    if (sub_14261baa0(arg1, arg2, arg3, zx.q(arg5), rax_2, &arg_10, &arg_8) != 0)
        int32_t rsi_1 = arg_8
        int32_t* var_38_1
        var_38_1.d = rsi_1
        void* rdi_1 = arg_10
        rbx = zx.q(sub_14261f3e0(arg1, arg2, arg3, arg4, rax_2, rdi_1, var_38_1.d, arg6))
        sub_142632660(rdi_1, zx.q(rsi_1))
        
        if (rbx.b != 0)
            if (*(arg1 + 9) != 0)
                (*(*arg1 + 0x28))(arg1, 0x1a)
            
            rbx.b = 1
    else
        sub_142632660(arg_10, zx.q(arg_8))
        rbx.b = 0
else
    sub_14262d160(arg1, (rax_2 + 3).d, "rcBuildHeightfieldLayers: Out of memory 'srcReg' (%d).", 
        zx.q(rax_3.d))
    rbx.b = 0

if (rax_2 != 0)
    data_143b502b0(rax_2)

return zx.q(rbx.b)
