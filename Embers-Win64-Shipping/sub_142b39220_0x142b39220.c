// 函数: sub_142b39220
// 地址: 0x142b39220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 1

if (*(arg1 + 9) == 0 && *arg1 == 1 && (arg1[2].b & 0x70) == 0)
    rbx = 0

if (arg3 == 0)
    if (rbx != 0 && arg1[2].b s< 0)
        rbx = -1
    
    int32_t r8
    
    if (*(arg2 + 9) != 0 || *arg2 != 1 || (arg2[2].b & 0x70) != 0)
        r8 = 1
        
        if (arg2[2].b s< 0)
            r8 = -1
    else
        r8 = 0
    
    if (rbx s> r8)
        return 1
    
    if (rbx s< r8)
        return -1
    
    if (rbx == 0)
        return 0
    
    goto label_142b392bb

if (*(arg2 + 9) != 0 || *arg2 != 1 || (arg2[2].b & 0x70) != 0)
    if (rbx == 0)
        return 0xffffffff
    
label_142b392bb:
    char r9_1 = arg2[2].b
    char r8_1 = arg1[2].b
    
    if (((r9_1 | r8_1) & 0x40) == 0)
        if (arg1[1] s> arg2[1])
            int32_t* rax_8 = arg1
            rbx = neg.d(rbx)
            arg1 = arg2
            arg2 = rax_8
        
        int64_t r9_2 = sx.q(*arg2)
        
        if (r9_2.d s<= 0x31)
            r9_2 = zx.q(*(r9_2 + &data_14366c490))
        
        int64_t r10_1 = sx.q(*arg1)
        
        if (r10_1.d s<= 0x31)
            r10_1 = zx.q(*(r10_1 + &data_14366c490))
        
        int32_t result = sub_142b3b450(arg1 + 9, r10_1.d, arg2 + 9, r9_2.d, arg2[1] - arg1[1])
        
        if (result != 0x80000000)
            return result * rbx
        
        return result
    
    if ((r9_1 & 0x40) != 0)
        if ((r8_1 & 0x40) != 0)
            return 0
        
        rbx = neg.d(rbx)

return zx.q(rbx)
