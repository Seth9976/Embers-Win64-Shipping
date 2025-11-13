// 函数: sub_141997ac0
// 地址: 0x141997ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f138f4 == 0)
    return 

arg1[1].d = 3
int64_t rax_1 = data_143f10338
int64_t* rax

if (rax_1 != 0)
    if (data_143de5480 != 0)
        uint32_t rax_2
        rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_2.b == 0)
            goto label_141997b62
        
        rax_1 = data_143f10338
    
    int64_t* rcx = *arg1
    *arg1 = rax_1
    rax = data_143f10338
    
    if (rax != 0)
        rax[9].d += 1
    
    if (rcx != 0)
        rcx[9].d -= 1
        
        if (rcx[9].d == 1)
            return sub_140a2f6e0(rcx) __tailcall
    
    return 

label_141997b62:
int64_t rbx_1 = data_143f10548
int64_t rcx_2

if (data_143de5480 == 0)
    rcx_2 = 0
else
    rcx_2.b = GetCurrentThreadId() != data_143de5470

int32_t r14_1 = *(rbx_1 + (rcx_2 << 2))

if (arg2 == 0)
label_141997d7c:
    int32_t rbx_3 = data_14399e5dc
    void var_30
    void** rax_15 = sub_140a22cb0(&var_30, nullptr, 2)
    *(*rax_15 + 0x10) = rbx_3
    void* rcx_17 = *rax_15
    int32_t r8_3 = rax_15[2].d
    int64_t* rdx_3 = rax_15[1]
    int64_t* rbx_4 = *(rcx_17 + 0x18)
    int64_t* var_78 = rbx_4
    
    if (rbx_4 != 0)
        rbx_4[9].d += 1
    
    sub_1408c3b70(rcx_17, rdx_3, r8_3, 1)
    
    if (arg1 != &var_78)
        int64_t* rcx_18 = *arg1
        *arg1 = rbx_4
        
        if (rcx_18 != 0)
            rcx_18[9].d -= 1
            
            if (rcx_18[9].d == 1)
                sub_140a2f6e0(rcx_18)
    else if (rbx_4 != 0)
        rbx_4[9].d -= 1
        
        if (rbx_4[9].d == 1)
            sub_140a2f6e0(var_78)
    
    return 

TEB* gsbase

if (data_143f1afa0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f1afa0)
    
    if (data_143f1afa0 == 0xffffffff)
        int64_t* rcx_20 = data_143db18d0
        
        if (rcx_20 == 0)
            sub_140a53c40()
            rcx_20 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        data_143f1af98 = (*(*rcx_20 + 0xb0))(rcx_20, u"r.VSync", r8_4)
        _Init_thread_footer(&data_143f1afa0)

if (r14_1 == 0)
    goto label_141997d7c

int64_t* rcx_5 = data_143f1af98

if ((*(*rcx_5 + 0x90))(rcx_5) == 0)
    goto label_141997d7c

if (data_143db7ab0 != 0)
    arg1[1].d = 0

int64_t* var_70
int64_t** rax_9 = sub_140a228d0(&var_70)

if (arg1 != rax_9)
    int64_t* rcx_7 = *arg1
    *arg1 = *rax_9
    *rax_9 = nullptr
    
    if (rcx_7 != 0)
        rcx_7[9].d -= 1
        
        if (rcx_7[9].d == 1)
            sub_140a2f6e0(rcx_7)

int64_t* rcx_8 = var_70

if (rcx_8 != 0)
    rcx_8[9].d -= 1
    
    if (rcx_8[9].d == 1)
        sub_140a2f6e0(rcx_8)

int64_t* rbx_2 = *arg1

if (rbx_2 != 0)
    rbx_2[9].d += 1

int64_t* var_68 = rbx_2

if (rbx_2 != 0)
    rbx_2[9].d += 1

int32_t var_60_1 = r14_1
int64_t** rcx_9
int64_t* rcx_10

if (sub_140a80f40() == 0)
    uint32_t rax_13
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_13.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 == 0 && (data_143de5480 == 0 || rax_13.b != 0))
        int64_t* var_58 = rbx_2
        rcx_9 = &var_58
        int32_t var_50_1 = r14_1
        goto label_141997cb5
    
    void var_48
    void** rax_14 = sub_14199b730(&var_48, nullptr, 0xff)
    void* rcx_12 = *rax_14
    *(rcx_12 + 0x10) = rbx_2
    *(rcx_12 + 0x18) = r14_1
    void* rcx_13 = *rax_14
    int32_t r8_2 = rax_14[2].d
    int64_t* rdx_2 = rax_14[1]
    int64_t* rdi_1 = *(rcx_13 + 0x28)
    int64_t* arg_20 = rdi_1
    void* r14_2 = &rdi_1[9]
    
    if (rdi_1 != 0)
        *r14_2 += 1
        rdi_1 = arg_20
    
    sub_1405e48c0(rcx_13, rdx_2, r8_2, 1)
    
    if (rdi_1 == 0)
        goto label_141997d43
    
    rax = zx.q(*r14_2)
    *r14_2 -= 1
    
    if (rax.d != 1)
        goto label_141997d43
    
    rcx_10 = arg_20
    goto label_141997d3e

rcx_9 = &var_68
label_141997cb5:
sub_141995220(rcx_9, &data_143f02b98, arg3, arg4)

if (rbx_2 == 0)
    return 

rbx_2[9].d -= 1

if (rbx_2[9].d != 1)
    goto label_141997d43

rcx_10 = rbx_2
label_141997d3e:
sub_140a2f6e0(rcx_10)
label_141997d43:

if (rbx_2 == 0)
    return 

rbx_2[9].d -= 1

if (rbx_2[9].d == 1)
    sub_140a2f6e0(rbx_2)
