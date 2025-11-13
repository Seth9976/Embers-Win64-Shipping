// 函数: sub_142345a50
// 地址: 0x142345a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

char arg_18
sub_141ff4780(&arg_18, arg2, 0, 0xd6)
uint32_t var_48
int32_t rbp_1
int64_t r12
int64_t r15
uint32_t var_44

if ((arg2[5].b & 2) == 0 || arg2[0xe] != 0 || (arg2[6].d & 0x1000) == 0)
    int64_t* rcx_5 = arg2[1]
    rbp_1 = 0
    int64_t rdx_4 = *rcx_5
    bool cond:0_1
    
    if (rdx_4 + 4 u> rcx_5[1])
        int64_t rax_11 = *arg2
        var_44 = 0
        (*(rax_11 + 0x150))(arg2, &var_44, 4)
        cond:0_1 = var_44 != 0
    else
        cond:0_1 = *rdx_4 != 0
        *rcx_5 = rdx_4 + 4
    
    int64_t* rcx_7 = arg2[1]
    r15.b = cond:0_1
    int64_t rdx_6 = *rcx_7
    bool cond:1_1
    
    if (rdx_6 + 4 u> rcx_7[1])
        var_48 = zx.d(r15.b)
        (*(*arg2 + 0x150))(arg2, &var_48, 4)
        cond:1_1 = var_48 != 0
    else
        cond:1_1 = *rdx_6 != 0
        *rcx_7 = rdx_6 + 4
    
    r12.b = cond:1_1
    arg1[0x81].d &= 0xfffffffe
    arg1[0x81].d |= zx.d(r12.b)
else
    rbp_1 = 0
    char rbx_1 = arg1[0x81].b & 1
    uint32_t rcx_1
    
    if ((arg6 u>> 1 & 1) != 0)
        rcx_1 = 1
    
    if ((arg6 u>> 1 & 1) == 0 || rbx_1 == 0)
        rcx_1 = 0
    
    int64_t* rdx = arg2[1]
    int64_t r8 = *rdx
    bool cond:4_1
    
    if (r8 + 4 u> rdx[1])
        int64_t rax_4 = *arg2
        var_48 = rcx_1
        (*(rax_4 + 0x150))(arg2, &var_48, 4)
        cond:4_1 = var_48 != 0
    else
        cond:4_1 = *r8 != 0
        *rdx = r8 + 4
    
    int64_t* rcx_3 = arg2[1]
    r15.b = cond:4_1
    int64_t rdx_2 = *rcx_3
    
    if (rdx_2 + 4 u> rcx_3[1])
        var_44 = zx.d(rbx_1)
        (*(*arg2 + 0x150))(arg2, &var_44, 4)
        r12.b = var_44 != 0
    else
        bool cond:3_1 = *rdx_2 != 0
        *rcx_3 = rdx_2 + 4
        r12.b = cond:3_1
TEB* gsbase

if (data_143f58d58 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f58d58)
    
    if (data_143f58d58 == 0xffffffff)
        int64_t* rcx_45 = data_143db18d0
        
        if (rcx_45 == 0)
            sub_140a53c40()
            rcx_45 = data_143db18d0
        
        int64_t r8_11
        r8_11.b = 1
        int64_t* rax_35 = (*(*rcx_45 + 0xb0))(rcx_45, u"r.FreeSkeletalMeshBuffers", r8_11)
        int64_t rax_33
        
        if (rax_35 == 0)
            rax_33 = 0
        else
            int64_t rdx_36 = *rax_35
            rax_33 = (*(rdx_36 + 0x58))(rax_35, rdx_36)
        
        data_143f58d50 = rax_33
        _Init_thread_footer(&data_143f58d58)

void* rbx_2 = data_143f58d50

if (rbx_2 == 0)
    rbx_2.b = 1
else if (data_143de5480 == 0)
    rbx_2.b = *rbx_2 == 0
else
    int64_t rcx_11
    rcx_11.b = GetCurrentThreadId() != data_143de5470
    rbx_2.b = *(rbx_2 + (rcx_11 << 2)) == 0

char r14_1 = rbx_2.b

if ((arg_18 & 2) == 0)
    if (rbx_2.b != 0)
        r14_1 = 1
    else
        char rax_20
        rax_20, arg5 = sub_1423448e0(*(arg3 + 0x58), data_1439c7a08)
        
        if (rax_20 != 0)
            r14_1 = 1
        else if (sub_142319630(arg3, arg4) != 0)
            r14_1 = 1

sub_141f05480(arg2, &arg1[0x7a], arg5)

if ((arg_18 & 2) != 0 || r15.b != 0)
    return 

int512_t zmm1 = sub_14232c830(arg2, arg1, arg5)
sub_141f05480(arg2, &arg1[0x78], zmm1)
int64_t* rcx_17 = arg2[1]
int32_t* rdx_13 = *rcx_17

if (&rdx_13[1] u<= rcx_17[1])
    arg1[0x7c].d = *rdx_13
    int64_t* rax_24 = arg2[1]
    *rax_24 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[0x7c], zmm1)
else
    (*(*arg2 + 0x150))(arg2, &arg1[0x7c], 4)

if (r12.b == 0)
    int32_t var_50_1 = 1
    sub_140bcfa90(&arg1[0x7d], arg2, arg3, zmm1, arg4.b, 0)
    uint8_t rax_28 = sub_140bc9840(&arg1[0x7d])
    arg1[0x81].d &= 0xfffffffd
    arg1[0x81].d |= zx.d(rax_28) * 2
    uint64_t rax
    int512_t zmm1_3
    rax, zmm1_3 = sub_140bc7f20(&arg1[0x7d])
    
    if (rax != 0)
        sub_1422abb30(&arg1[2], arg2, zx.q(r14_1))
        
        if ((arg6 & 1) == 0)
            sub_1422abb30(&arg1[4], arg2, zx.q(r14_1))
        
        sub_1422d1490(&arg1[6], arg2, zmm1_3)
        sub_1422aba70(&arg1[0x17], arg2, zmm1_3)
        sub_1422aba70(&arg1[0x1f], arg2, zmm1_3)
        
        if ((arg2[5].b & 1) != 0)
            arg1[0x2b].b = r14_1
            arg1[0x34].b = r14_1
        
        int512_t zmm1_4 = sub_1422d1460(&arg1[0x27], arg2, zmm1_3)
        int32_t rcx_40 = arg1[1].d
        
        if (rcx_40 s> 0)
            int32_t* rax_32 = *arg1 + 0x20
            
            do
                if (*rax_32 s> 0)
                    sub_1422d0f90(&arg1[0x38], arg2, zmm1_4)
                    break
                
                rbp_1 += 1
                rax_32 = &rax_32[0x3a]
            while (rbp_1 s< rcx_40)
        
        sub_141e48dd0(&arg1[0x60], arg2, zmm1_4)
        sub_141e43d90(&arg1[0x60], &arg1[0x27])
        
        if ((arg2[5].b & 1) != 0 && data_143a2d2a0 == 1)
            sub_141e45680(&arg1[0x60], arg3, arg4)
    else
        arg1[0x7c].d = 0
else
    sub_141ff4780(&var_48, arg2, 0, 0xd6)
    sub_1422ab420(&arg1[2], arg2, zx.q(r14_1))
    
    if ((arg2[5].b & 1) != 0)
        arg1[0x2b].b = r14_1
        arg1[0x34].b = r14_1
    
    sub_1422ab580(&arg1[0x17], arg2, r14_1, zmm1)
    int512_t zmm1_2 = sub_1422b7bd0(arg2, &arg1[0x27], sub_1422d0e90(&arg1[6], arg2, r14_1, zmm1))
    
    if ((*(arg3 + 0x13f) & 8) != 0)
        sub_1422ab240(&arg1[0x1f], arg2, rbx_2.b, zmm1_2)
    
    if ((var_48:1.b & 1) == 0)
        sub_1422ab420(&arg1[4], arg2, zx.q(rbx_2.b))
    
    int32_t rcx_26 = arg1[1].d
    
    if (rcx_26 s> 0)
        int32_t* rax_27 = *arg1 + 0x20
        
        do
            if (*rax_27 s> 0)
                sub_1422b78a0(arg2, &arg1[0x38], zmm1_2)
                break
            
            rbp_1 += 1
            rax_27 = &rax_27[0x3a]
        while (rbp_1 s< rcx_26)
    
    sub_141e39390(arg2, &arg1[0x60], zmm1_2)
    sub_141e43d90(&arg1[0x60], &arg1[0x27])
    
    if ((arg2[5].b & 1) != 0 && data_143a2d2a0 == 1)
        sub_141e45680(&arg1[0x60], arg3, arg4)
    
    arg1[0x81].d &= 0xfffffffd
