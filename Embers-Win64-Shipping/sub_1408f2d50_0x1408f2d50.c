// 函数: sub_1408f2d50
// 地址: 0x1408f2d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[9] == 0
*arg1 = &data_142e14f08

if (not(cond:0))
    EnterCriticalSection(&arg1[4])
    int64_t* rcx_1 = arg1[9]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1)
        void arg_8
        int64_t* rax_3 = sub_140fc6160(sub_140b58260(&arg_8, u"WINDOWS", 1))
        int64_t r8_1 = *rax_3
        (*(r8_1 + 0x38))(rax_3, arg1[9], r8_1)
        arg1[9] = 0
        *(arg1 + 0x54) = 0
    
    if (arg1 != -0x20)
        LeaveCriticalSection(&arg1[4])

DeleteCriticalSection(&arg1[4])
int64_t* rcx_7 = arg1[2]

if (rcx_7 != 0)
    int32_t temp0_1 = *(rcx_7 + 0xc)
    *(rcx_7 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_7 + 8))(rcx_7, 1)

*arg1 = &data_142d573b8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
