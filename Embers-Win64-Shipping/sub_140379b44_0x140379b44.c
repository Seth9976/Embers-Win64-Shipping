// 函数: sub_140379b44
// 地址: 0x140379b44
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* pv = arg3
int32_t rsi = 0
int32_t rax_1 = (*(*arg1 + 0x68))(arg1, arg5, 0)
int32_t r13 = rax_1
int32_t rbx

if (rax_1 s>= 0)
    if (sub_1403794b4(pv) == 0)
        r13 = -0x7ff8ffa9
    
    rbx = r13
    
    if (r13 s>= 0)
        if (arg4 != 0)
            int16_t* pv_1 = sub_140379a3c(pv)
            rsi = 1
            pv = pv_1
            rbx = not.d(sbb.d(rbx, rbx, pv_1 != 0)) & 0x8007000e
        
        if (rbx s< 0)
        label_140379c26:
            
            if (rsi != 0 && pv != 0)
                if (rbx != 0x88970001)
                    CoTaskMemFree(pv)
                else
                    *arg4 = pv
        else
            int64_t r9 = *arg1
            int32_t rax_3 = (*(r9 + 0x68))(arg1, pv, zx.q(rsi), r9)
            rbx = rax_3
            
            if (rax_3 s< 0)
                goto label_140379c26
            
            int32_t rax_4 = sub_140379888(arg1, arg2, pv, rsi)
            rbx = rax_4
            
            if (rax_4 s< 0)
                goto label_140379c26
            
            if (rsi != 0)
                CoTaskMemFree(pv)
else
    rbx = -0x7ff8ffa9

return zx.q(rbx)
