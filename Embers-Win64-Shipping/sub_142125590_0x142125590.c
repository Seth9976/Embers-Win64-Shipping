// 函数: sub_142125590
// 地址: 0x142125590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx
int64_t rbx

if (data_143de5480 == 0)
    rbx = 0
    rcx = 0
else
    rbx = 0
    rcx.b = GetCurrentThreadId().d != data_143de5470

int64_t* result

if (*(rcx + arg1 + 0x13a) != 0)
    *arg3 = 0
    result.b = 0
    *arg4 = 0xffffffff
    return result

int32_t i = 0

if (*(arg1 + 0x128) s> 0)
    int64_t r15_1 = 0
    
    do
        int32_t* rdi_2 = *(arg1 + 0x120) + r15_1
        void arg_8
        
        if (*sub_140b4c620(&arg_8, rdi_2) == *arg2 && rdi_2[3] == arg2[1].d
                && rdi_2[2].b == *(arg2 + 0xc))
            *arg3 = *(rdi_2 + 0x10)
            *arg4 = rdi_2[6]
            result.b = 1
            goto label_142125785
        
        i += 1
        r15_1 += 0x30
    while (i s< *(arg1 + 0x128))

int64_t rdi_3

if (*(arg2 + 0xc) != 2)
    rdi_3 = sx.q(sub_14210eb80(arg1 + 0x188, 3, arg2).d)

if (*(arg2 + 0xc) == 2 || rdi_3.d == 0xffffffff)
    if (*(arg1 + 0xd0) != 0)
        if (data_143de5480 != 0)
            GetCurrentThreadId()
        
        int64_t rcx_7
        
        if (data_143de5480 == 0 || data_143de5480 == 0)
            rcx_7 = 0
        else
            rcx_7.b = GetCurrentThreadId() != data_143de5470
        
        *(rcx_7 + arg1 + 0x13a) = 1
        int64_t* rcx_8 = *(arg1 + 0xd0)
        char rax_3 = (*(*rcx_8 + 0x3d8))(rcx_8, arg2, arg3, arg4, arg5)
        
        if (data_143de5480 != 0)
            rbx.b = GetCurrentThreadId() != data_143de5470
        
        *(rbx + arg1 + 0x13a) = 0
        return zx.q(rax_3)
    
    *arg3 = 0
    result.b = 0
    *arg4 = 0xffffffff
else
    result = sub_142111f50(arg1 + 0x188, 3, rdi_3.d, arg5)
    *arg3 = *(*(arg1 + 0x2f8) + (rdi_3 << 3))
    *arg4 = *(*(arg1 + 0x308) + (rdi_3 << 2))

label_142125785:
return result
