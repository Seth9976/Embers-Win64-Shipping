// 函数: sub_14280a420
// 地址: 0x14280a420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = data_142d3f660
void*** rbx = nullptr
int128_t var_58 = zmm0
int64_t var_48 = 0
int32_t var_40 = 0
int128_t var_78 = zmm0
int64_t var_68 = 0
int32_t var_60 = 0
int64_t* r15 = nullptr
int64_t r14 = 0
char rax_1 = (*(*arg3 + 0x18))(arg3, "Actors")
int64_t rbp

if (rax_1 != 0)
    char* _String_3
    
    if ((*(*arg3 + 0x10))(arg3, "actor0", &_String_3) == 0)
        rbp.b = 1
    else
        char* _String = _String_3
        char* _EndPtr_1 = _String
        
        if (_String == 0 || *_String == 0)
            rbp.b = 1
        else if (_strtoui64(_String, &_EndPtr_1, 0xa) == 0)
            rbp.b = 1
        else
            int64_t* rax_5 = sub_1427d9880(arg6)
            r15 = rax_5
            
            if (rax_5 != 0)
                rbp.b = 1
            else
                rbp.b = 0
    
    char* _String_2
    char rcx_5
    
    if ((*(*arg3 + 0x10))(arg3, "actor1", &_String_2) == 0)
        rcx_5 = 1
    else
        char* _String_1 = _String_2
        char* _EndPtr = _String_1
        
        if (_String_1 == 0 || *_String_1 == 0)
            rcx_5 = 1
        else if (_strtoui64(_String_1, &_EndPtr, 0xa) == 0)
            rcx_5 = 1
        else
            int64_t rax_9 = sub_1427d9880(arg6)
            r14 = rax_9
            rcx_5 = 0
            
            if (rax_9 != 0)
                rcx_5 = 1
    
    rbp.b &= rcx_5
    (*(*arg3 + 0x48))(arg3)

if (rax_1 == 0 || rbp.b != 0)
    void*** rax_11 = sub_1427f9f80(*arg5, r15, &var_58, r14, &var_78)
    rbx = rax_11
    
    if (rax_11 != 0)
        void** rdx_5 = *rax_11
        int64_t rax_12 = rdx_5[0x19](rax_11, rdx_5)
        int64_t r9_1 = *arg6
        (*(r9_1 + 8))(arg6, rax_12, 0, r9_1)
        (*(*arg1 + 0x28))(arg1, rbx, arg3, arg4, arg5, arg6)

arg2[1] = rbx
*arg2 = "PxFixedJoint"
arg2[2] = rbx
return arg2
