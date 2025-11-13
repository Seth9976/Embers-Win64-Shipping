// 函数: sub_140b2d960
// 地址: 0x140b2d960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0

if (*(arg1 + 8) != arg2)
    int32_t rbx_2
    
    if (arg2 == 0 || *arg2 == 0)
        rbx_2 = 0
    else
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        rbx_2 = rbx_1.d + 1
    
    int32_t rdx = 0
    
    if (0 != rbx_2)
        sub_1405947f0(&arg1[2], rbx_2)
        rdx = arg1[4]
    
    int32_t rax_1 = rdx + rbx_2
    arg1[4] = rax_1
    
    if (rax_1 s> arg1[5])
        sub_140594770(&arg1[2])
    
    if (rbx_2 != 0)
        memcpy(*(arg1 + 8), arg2, rbx_2 * 2)

CRITICAL_SECTION* lpCriticalSection = sub_140b3cce0()
EnterCriticalSection(lpCriticalSection)
int32_t rax_2 = sub_140b3d4e0(lpCriticalSection, &arg1[2])
int32_t rbx_3 = rax_2

if (rax_2 == 0xffffffff)
    int32_t arg_8
    
    if (arg4 == 0)
        rbx_3 = lpCriticalSection->__offset(0x80).d
        int64_t r15_1 = sx.q(rbx_3)
        arg_8 = rbx_3
        int32_t rax_3 = (r15_1 + 1).d
        lpCriticalSection->__offset(0x80).d = rax_3
        
        if (rax_3 s> lpCriticalSection->__offset(0x84).d)
            sub_1405a4f90(&lpCriticalSection[3])
        
        rbp = rbx_3
        int64_t* rax_6 = (r15_1 << 4) + lpCriticalSection->__offset(0x78).q
        *rax_6 = 0
        rax_6[1] = 0
        
        if (rbx_3 u< 0x800)
            goto label_140b2da71
    else
        arg_8 = 0
    label_140b2da71:
        int64_t rcx_6 = sx.q(rbp)
        *(rcx_6 + &data_143de7240) = arg3
        sub_140597df0((rcx_6 << 4) + lpCriticalSection->__offset(0x78).q, &arg1[2])
        int64_t var_38
        sub_140b2c840(&lpCriticalSection[1], sub_140a35730(&arg1[2], &var_38), &arg_8)
        int64_t rcx_11 = var_38
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        rbx_3 = arg_8

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

*arg1 = rbx_3
return arg1
