// 函数: sub_140b44ed0
// 地址: 0x140b44ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = sub_140b3cce0()
EnterCriticalSection(lpCriticalSection)
int32_t rax = sub_140b3d4e0(lpCriticalSection, arg1)
int32_t rbx = rax

if (rax == 0xffffffff)
    int32_t arg_20
    
    if (arg3 == 0)
        rbx = lpCriticalSection->__offset(0x80).d
        int64_t rbp_1 = sx.q(rbx)
        arg_20 = rbx
        int32_t rax_1 = (rbp_1 + 1).d
        lpCriticalSection->__offset(0x80).d = rax_1
        
        if (rax_1 s> lpCriticalSection->__offset(0x84).d)
            sub_1405a4f90(&lpCriticalSection[3])
        
        int64_t* rax_4 = (rbp_1 << 4) + lpCriticalSection->__offset(0x78).q
        *rax_4 = 0
        rax_4[1] = 0
        
        if (rbx u< 0x800)
            goto label_140b44f74
    else
        rbx = 0
        arg_20 = 0
    label_140b44f74:
        int64_t rcx_3 = sx.q(rbx)
        *(rcx_3 + &data_143de7240) = arg2
        sub_140597df0((rcx_3 << 4) + lpCriticalSection->__offset(0x78).q, arg1)
        int64_t var_28
        sub_140b2c840(&lpCriticalSection[1], sub_140a35730(arg1, &var_28), &arg_20)
        int64_t rcx_8 = var_28
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        rbx = arg_20

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return zx.q(rbx)
