// 函数: sub_140587400
// 地址: 0x140587400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[7] = 0
void* rax = &arg1[5]

if (arg1[8] u>= 0x10)
    rax = arg1[5]

*rax = 0
sub_140588b40(arg1)
int64_t* rcx = **arg1

if (rcx != 0)
    sub_140587550(rcx)
    **arg1 = 0

int64_t result = sub_14058a280(arg1, 0)
arg1[0xd].b = 0
void* rcx_2 = arg1[0xa]
arg1[0xb] = rcx_2
arg1[9].b = 0

if (rcx_2 == 0)
    goto label_1405874a5

if (((arg1[0xc] - rcx_2) & 0xfffffffffffffff0) u< 0x1000)
    goto label_140587494

void* r8_1 = *(rcx_2 - 8)

if (rcx_2 - r8_1 - 8 u<= 0x1f)
    rcx_2 = r8_1
label_140587494:
    result = j_sub_140a74f90(rcx_2)
    __builtin_memset(&arg1[0xa], 0, 0x18)
label_1405874a5:
    int64_t rdx_4 = arg1[8]
    
    if (rdx_4 u< 0x10)
        goto label_1405874dc
    
    void* rcx_4 = arg1[5]
    
    if (rdx_4 + 1 u< 0x1000)
        goto label_1405874d7
    
    void* r8_2 = *(rcx_4 - 8)
    
    if (rcx_4 - r8_2 - 8 u<= 0x1f)
        rcx_4 = r8_2
    label_1405874d7:
        result = j_sub_140a74f90(rcx_4)
    label_1405874dc:
        arg1[7] = 0
        arg1[8] = 0xf
        arg1[5].b = 0
        void* rcx_6 = *arg1
        
        if (rcx_6 == 0)
            return result
        
        if (((arg1[2] - rcx_6) & 0xfffffffffffffff8) u< 0x1000)
            goto label_140587520
        
        void* r8_3 = *(rcx_6 - 8)
        
        if (rcx_6 - r8_3 - 8 u<= 0x1f)
            rcx_6 = r8_3
        label_140587520:
            result = j_sub_140a74f90(rcx_6)
            __builtin_memset(arg1, 0, 0x18)
            return result

_invalid_parameter_noinfo_noreturn()
noreturn
