// 函数: sub_1429e3e50
// 地址: 0x1429e3e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg3)
uint64_t r13 = zx.q(arg4)
void* rdi_2 = (rbx << 7) + arg1 + 0x3400
char rbp

if (arg3 != 0)
    rbp = arg2[6]
else
    rbp = arg2[1]

int32_t r8 = *(rdi_2 + 0x18)
int32_t* r12_1 = sx.q((r8 * r13.d + arg5) << 2) + *(rdi_2 + 0x10)

if (*arg2 u< 3 && rbx.d == 0)
    rbp = *(**(arg1 + 0x35a8) + sx.q(arg5 + (r13 << 1).d) * 0xc + 0x14)

int32_t result = sub_142a286e0(arg1 + 0x3400, *(rdi_2 + 0x74), arg6, rbp, r12_1, r8, r12_1, r8, 
    arg5, r13.d, rbx.d)

if (arg2[3] == 0)
    int32_t rbp_1
    int64_t* r8_2
    
    if (rbx.d != 0 || *(arg1 + 0x3658) != rbx.d)
        rbp_1 = 0
        
        if (rbx.d != 0 || *(arg1 + 0x3658) != 0)
            r8_2 = &(&data_143604810)[zx.q(arg6) * 3]
        else
            r8_2 = &(&data_143604870)[(sx.q(rbp_1) + (zx.q(arg6) << 2)) * 3]
    else
        rbp_1 = *((zx.q(rbp) << 2) + 0x143603a90)
        
        if (*(arg1 + 0x3658) != 0)
            r8_2 = &(&data_143604810)[zx.q(arg6) * 3]
        else
            r8_2 = &(&data_143604870)[(sx.q(rbp_1) + (zx.q(arg6) << 2)) * 3]
    
    int32_t* var_58
    var_58.d = sx.d(arg2[4])
    int32_t var_60
    var_60.b = arg6
    int32_t* var_68
    var_68.d = r13.d
    result = sub_142a29a70(arg1, rbx.d, r8_2, arg5, var_68.d, var_60.b, var_58.d)
    
    if (result s> 0)
        var_58.d = result
        return sub_1429e3d00(arg1 + 0x3400, rbx.d, rbp_1, arg6, r12_1, *(rdi_2 + 0x18), var_58.d)

return result
