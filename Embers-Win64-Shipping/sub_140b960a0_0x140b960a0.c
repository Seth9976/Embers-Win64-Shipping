// 函数: sub_140b960a0
// 地址: 0x140b960a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

InitializeCriticalSection(arg1)
SetCriticalSectionSpinCount(arg1, 0xfa0)
arg1->__offset(0x28).q = arg2
void* __offset(_RTL_CRITICAL_SECTION, 0x60) rcx_1 = arg1 + 0x60
arg1->__offset(0x30).q = 0
arg1->__offset(0x38).q = 0
__builtin_memset(arg1 + 0x40, 0, 0x20)
(rcx_1 - 0x60)->__offset(0x70).q = 0
(rcx_1 - 0x60)->__offset(0x78).d = 0
(rcx_1 - 0x60)->__offset(0x7c).d = 0x80
void* rax = (rcx_1 - 0x60)->__offset(0x70).q

if (rax != 0)
    rcx_1 = rax

(rcx_1 - 0x60)->__offset(0x60).q = 0
(rcx_1 - 0x60)->__offset(0x68).q = 0
void* __offset(_RTL_CRITICAL_SECTION, 0xb0) rcx_2 = arg1 + 0xb0
arg1->__offset(0x80).d = 0xffffffff
arg1->__offset(0x84).d = 0
arg1->__offset(0x90).q = 0
arg1->__offset(0x98).d = 0
arg1->__offset(0xa0).q = 0
arg1->__offset(0xa8).q = 0
(rcx_2 - 0xb0)->__offset(0xc0).q = 0
(rcx_2 - 0xb0)->__offset(0xc8).d = 0
(rcx_2 - 0xb0)->__offset(0xcc).d = 0x80
void* rax_1 = (rcx_2 - 0xb0)->__offset(0xc0).q

if (rax_1 != 0)
    rcx_2 = rax_1

(rcx_2 - 0xb0)->__offset(0xb0).q = 0
(rcx_2 - 0xb0)->__offset(0xb8).q = 0
arg1->__offset(0xd0).d = 0xffffffff
arg1->__offset(0xd4).d = 0
arg1->__offset(0xe0).q = 0
arg1->__offset(0xe8).d = 0
int64_t* var_28
int64_t* rax_3 = sub_140a7c300(sub_140a752e0(), &var_28, arg3)

if (arg1 + 0x30 != rax_3)
    int32_t i_2 = arg1->__offset(0x38).d
    int64_t* rbx_1 = arg1->__offset(0x30).q
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_4 = *rbx_1
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rbx_1 = &rbx_1[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int64_t rcx_5 = arg1->__offset(0x30).q
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    arg1->__offset(0x30).q = *rax_3
    *rax_3 = 0
    arg1->__offset(0x38).d = rax_3[1].d
    arg1->__offset(0x3c).d = *(rax_3 + 0xc)
    rax_3[1] = 0

int32_t i_4
int32_t i_3 = i_4
int64_t* rbx_2 = var_28

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_6 = *rbx_2
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_2 = var_28

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

return arg1
