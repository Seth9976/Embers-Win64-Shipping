// 函数: sub_140aabe40
// 地址: 0x140aabe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
EnterCriticalSection(arg1)
int64_t* rdx_5

if (arg1->__offset(0x30).d == arg1->__offset(0x5c).d)
label_140aabece:
    rdx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* __offset(_RTL_CRITICAL_SECTION, 0x60) r8 = arg1 + 0x60
    void* rcx_1 = (r8 - 0x60)->__offset(0x68).q
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(arg1->__offset(0x70).d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_140aabece_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_4) << 5) + arg1->__offset(0x28).q
            
            if (*rdx_5 == arg3)
                break
            
            rax_4 = rdx_5[3].d
            
            if (rax_4 == 0xffffffff)
                goto label_140aabece_2
        
        if (rax_4 == 0xffffffff)
        label_140aabece_2:
            rdx_5 = nullptr

void* rax_5 = &rdx_5[1]
int32_t var_30 = 0

if (rdx_5 == 0)
    rax_5 = nullptr

int64_t* var_38
int64_t* rcx_2
int64_t* rbx_1
int32_t rbp
int32_t rdi

if (rax_5 == 0)
    rbx_1 = nullptr
    rbp = 0
    var_38 = nullptr
    rdi = 2
    rcx_2 = var_38
else
    rcx_2 = nullptr
    var_38 = nullptr
    
    if (rax_5 != &var_38 && *(rax_5 + 8) != 0)
        int64_t* r8_2 = *rax_5
        
        if (r8_2 != 0)
            (*(*r8_2 + 0x40))(r8_2, &var_38)
            rcx_2 = var_38
    
    rbp = var_30
    rdi = 1
    rbx_1 = var_38

*arg2 = 0
arg2[1].d = 0

if (&var_38 != arg2 && var_30 != 0)
    int64_t* r8_3 = var_38
    
    if (r8_3 != 0)
        (*(*r8_3 + 0x40))(r8_3, arg2)
        rcx_2 = var_38

if ((rdi.b & 2) != 0)
    rdi &= 0xfffffffd
    
    if (rbp == 0)
        goto label_140aabfa4
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x38))(rbx_1, 0)
        int64_t* rax_9 = sub_140a84c80(rbx_1, 0, 0)
        rcx_2 = var_38
        rbx_1 = rax_9
    label_140aabfa4:
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
            rcx_2 = var_38

if ((rdi.b & 1) != 0)
    if (var_30 == 0)
    label_140aac000:
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
    else if (rcx_2 != 0)
        (*(*rcx_2 + 0x38))(rcx_2, 0)
        rcx_2 = var_38
        
        if (rcx_2 != 0)
            int64_t* rax_11 = sub_140a84c80(rcx_2, 0, 0)
            rcx_2 = rax_11
            var_38 = rax_11
        
        int32_t var_30_1 = 0
        goto label_140aac000

if (arg1 != 0)
    LeaveCriticalSection(arg1)

return arg2
