// 函数: sub_1419a21e0
// 地址: 0x1419a21e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f19c == 0)
    return 

data_143f0fdf4 += 1

if (data_143f138f4 == 0)
    int64_t* rax_1 = sub_140a242a0()
    int64_t r8_1 = *rax_1
    
    if ((*(r8_1 + 0x20))(rax_1, 2, r8_1) == 0)
        int64_t* rax_3 = sub_140a242a0()
        int64_t r8_2 = *rax_3
        
        if ((*(r8_2 + 0x20))(rax_3, 0x102, r8_2) == 0)
            int64_t* rax_5 = sub_140a242a0()
            int64_t r8_3 = *rax_5
            (*(r8_3 + 0x30))(rax_5, 2, r8_3)
            int64_t* rax_6 = sub_140a242a0()
            int64_t r8_4 = *rax_6
            (*(r8_4 + 0x30))(rax_6, 0x102, r8_4)

char arg_10 = arg1

if (sub_140a80f40() == 0)
    uint32_t rax_8
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_8.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_8.b == 0))
        void var_38
        int64_t* rax_9 = sub_14199b880(&var_38, nullptr, 0xff)
        *(*rax_9 + 0x10) = arg1
        void* rcx_8 = *rax_9
        int32_t r8_5 = rax_9[2].d
        int64_t* rdx_1 = rax_9[1]
        int64_t* rbx_1 = *(rcx_8 + 0x18)
        int64_t* var_50_1 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = var_50_1
        
        sub_1405a5890(rcx_8, rdx_1, r8_5, 1)
        
        if (rbx_1 != 0)
            int32_t rax_10 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_10 == 1)
                sub_140a2f6e0(var_50_1)
    else
        char arg_18 = arg1
        sub_1419950a0(&arg_18, &data_143f02b98)
else
    sub_1419950a0(&arg_10, &data_143f02b98)

int64_t* var_58
sub_14199b0f0(&data_143f10678, &var_58, 2)
int128_t entry_zmm2
int128_t entry_zmm3

if (var_58 != 0)
    entry_zmm2, entry_zmm3 = sub_1419a2790(&var_58, 3, 0)
    int64_t* rax_11 = var_58
    
    if (rax_11 != 0)
        rax_11[9].d -= 1
        
        if (rax_11[9].d == 1)
            sub_140a2f6e0(var_58)

int64_t* rax_12 = sub_1419a2d10()
int32_t i = 0
int64_t* var_48 = nullptr
sub_141997ac0(&var_48, 0, entry_zmm2, entry_zmm3)
sub_1419ba820(&var_48, 0)

if (rax_12 != 0)
    if (rax_12[1].d s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            int64_t* rcx_15 = *(rsi_1 + *rax_12)
            
            if (rcx_15 != 0)
                (**rcx_15)(rcx_15, 1)
            
            i += 1
            rsi_1 = &rsi_1[1]
        while (i s< rax_12[1].d)
    
    int64_t rcx_16 = *rax_12
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    j_sub_140a74f90(rax_12)

int64_t* rax = var_48

if (rax != 0)
    rax[9].d -= 1
    
    if (rax[9].d == 1)
        sub_140a2f6e0(var_48)

data_143f0fdf4 -= 1
