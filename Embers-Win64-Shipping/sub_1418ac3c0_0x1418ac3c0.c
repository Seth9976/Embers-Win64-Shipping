// 函数: sub_1418ac3c0
// 地址: 0x1418ac3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = nullptr
int32_t i_1 = 0
int32_t arg_8 = 0
void* var_98 = nullptr
int32_t i_2 = 0
int64_t rbx = sx.q(arg2)
EnterCriticalSection(&arg1[1])

if ((*(*arg1 + 8))(arg1) == 0)
    arg1[6].d = rbx.d
    int16_t* rdi = (&data_1439c6860)[rbx]
    
    if (arg1[7] != rdi)
        int32_t rbx_2
        
        if (rdi == 0 || *rdi == 0)
            rbx_2 = 0
        else
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (rdi[rbx_1] != 0)
            
            rbx_2 = rbx_1.d + 1
        
        int32_t rdx = 0
        arg1[8].d = 0
        
        if (*(arg1 + 0x44) != rbx_2)
            sub_1405947f0(&arg1[7], rbx_2)
            rdx = arg1[8].d
        
        int32_t rax_2 = rdx + rbx_2
        arg1[8].d = rax_2
        
        if (rax_2 s> *(arg1 + 0x44))
            sub_140594770(&arg1[7])
        
        if (rbx_2 != 0)
            memcpy(arg1[7], rdi, rbx_2 * 2)
    
    int64_t r8_2 = -1
    
    do
        r8_2 += 1
    while (*(arg3 + (r8_2 << 1)) != 0)
    
    sub_140a20ba0(&arg1[7], arg3, r8_2.d)
    int64_t var_88
    int32_t rax_4
    int64_t rdx_4
    int32_t rbx_3
    int64_t rdi_1
    
    if (arg4 == 0)
        rax_4 = 0
        int64_t var_78_1 = 0
        int32_t var_70_1 = 0
        rdi_1 = 0
        rbx_3 = 2
        rdx_4 = 0
    else
        sub_140a2e390(&var_88, u"-%u", zx.q(arg4))
        rdx_4 = var_88
        rbx_3 = 1
        int32_t var_80
        rax_4 = var_80
        int64_t var_78
        rdi_1 = var_78
    
    int32_t r8_4 = rax_4 - 1
    
    if (rax_4 == 0)
        r8_4 = 0
    
    sub_140a20ba0(&arg1[7], rdx_4, r8_4)
    
    if ((rbx_3.b & 2) != 0)
        rbx_3 &= 0xfffffffd
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
    
    if ((rbx_3.b & 1) != 0)
        int64_t rcx_9 = var_88
        rbx_3 &= 0xfffffffe
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
    
    int64_t* var_60
    int64_t* rdx_6
    int32_t rdi_2
    
    if (sub_140ab3dc0(arg5) == 0)
        int64_t var_68 = *arg5
        int64_t* rax_8 = arg5[1]
        var_60 = rax_8
        
        if (rax_8 != 0)
            rax_8[1].d += 1
        
        rdx_6 = &var_68
        int32_t var_58_1 = arg5[2].d
        rdi_2 = 8
    else
        void var_50
        rdx_6 = sub_1418a3a50(&var_50, arg1[6].d)
        rdi_2 = 4
    
    int32_t rdi_3 = rdi_2 | rbx_3
    int64_t rcx_12 = arg1[9]
    arg1[9] = *rdx_6
    *rdx_6 = rcx_12
    int64_t rcx_13 = arg1[0xa]
    arg1[0xa] = rdx_6[1]
    rdx_6[1] = rcx_13
    arg1[0xb].d = rdx_6[2].d
    
    if ((rdi_3.b & 8) != 0)
        rdi_3 &= 0xfffffff7
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t rax_15 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (rax_15 == 1)
                    (*(*var_60 + 8))(var_60, 1)
    
    int64_t* var_48
    
    if ((rdi_3.b & 4) != 0 && var_48 != 0)
        var_48[1].d -= 1
        
        if (var_48[1].d == 1)
            (**var_48)(var_48)
            int32_t rax_19 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (rax_19 == 1)
                (*(*var_48 + 8))(var_48, 1)
    
    sub_14189c550(&arg1[0xd], &var_98)
    (*(*arg1 + 0x10))(arg1)
    i_1 = i_2
    rsi = var_98

int32_t result = LeaveCriticalSection(&arg1[1])
void* rbx_6 = rsi
void* rbp_3 = (sx.q(i_1) << 6) + rsi

if (rsi != rbp_3)
    do
        void* rax_22 = *(rbx_6 + 0x10)
        void* rcx_21 = rbx_6 + 0x20
        
        if (rax_22 != 0)
            rcx_21 = rax_22
        
        result = (*rbx_6)((*(*rcx_21 + 8))(rcx_21))
        rbx_6 += 0x40
    while (rbx_6 != rbp_3)

if (i_1 != 0)
    void* rbx_7 = rsi + 0x10
    int32_t i
    
    do
        if (*(rbx_7 - 0x10) != 0)
            void* rax_25 = *rbx_7
            void* rcx_23 = rbx_7 + 0x10
            
            if (rax_25 != 0)
                rcx_23 = rax_25
            
            result = (*(*rcx_23 + 0x10))(rcx_23)
        
        rbx_7 += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rsi != 0)
    result = sub_140a74f90(rsi)

int64_t* rbx_8 = arg5[1]

if (rbx_8 != 0)
    result = rbx_8[1].d
    rbx_8[1].d -= 1
    
    if (result == 1)
        result = (**rbx_8)(rbx_8)
        int32_t r14_1 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (r14_1 == 1)
            return (*(*rbx_8 + 8))(rbx_8, zx.q(r14_1))

return result
