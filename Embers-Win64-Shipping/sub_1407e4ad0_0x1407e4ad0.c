// 函数: sub_1407e4ad0
// 地址: 0x1407e4ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142dc38e8
arg1[0xf1] = 0
*(arg1 + 0x34) = data_143dbb1f8.q
int32_t rax = data_143dbb200
*(arg1 + 0x3c) = rax
arg1[5] = *(arg1 + 0x34)
arg1[6].d = rax
arg1[8].b = 0
sub_1408400b0(arg1 + 0x80)
sub_1408400b0(&arg1[0x7d])
void* rcx_2 = arg1[0xe5]

if (rcx_2 != 0)
    sub_1408400b0(rcx_2 + 0x58)

int32_t i = 0

if (arg1[0xe7].d s> 0)
    do
        sub_1408400b0(sx.q(i) * 0x368 + &arg1[0xe6][5])
        i += 1
    while (i s< arg1[0xe7].d)

int32_t* rsi = arg1[0xe5]

if (rsi == 0)
    int64_t* rbx_2 = arg1[0xef]
    
    if (rbx_2 != 0)
        sub_1407e48f0(rbx_2)
        j_sub_140a74f90(rbx_2)
        arg1[0xef] = 0
else
    void* const rbx = arg1[0x121]
    
    if (rbx == 0 || *(rbx + 8) != 0)
        rbx = nullptr
    
    int64_t* rbp_1 = arg1[0xef]
    int32_t* var_60_1 = rsi
    
    if (sub_140a80f40() == 0)
        uint32_t rax_5
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_5.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_5.b == 0))
            void var_38
            void** rax_6 = sub_1407eafb0(&var_38, nullptr, 0xff)
            void* rcx_13 = *rax_6
            *(rcx_13 + 0x10) = rbx.o
            *(rcx_13 + 0x20) = rbp_1
            void* rcx_14 = *rax_6
            int32_t r8_2 = rax_6[2].d
            int64_t* rdx_5 = rax_6[1]
            int64_t* rbx_1 = *(rcx_14 + 0x30)
            int64_t* arg_10 = rbx_1
            int32_t* rsi_1 = &rbx_1[9]
            
            if (rbx_1 != 0)
                *rsi_1 += 1
                rbx_1 = arg_10
            
            sub_140778000(rcx_14, rdx_5, r8_2, 1)
            
            if (rbx_1 != 0)
                int32_t rax_7 = *rsi_1
                *rsi_1 -= 1
                
                if (rax_7 == 1)
                    sub_140a2f6e0(arg_10)
            
            arg1[0xe5] = 0
        else
            int128_t var_50 = rbx.o
            int64_t* var_40_1 = rbp_1
            sub_1407e5480(&var_50)
            arg1[0xe5] = 0
    else
        if (rbx != 0)
            sub_140837e70(rbx, rsi, rbp_1)
        
        sub_140846b00(rsi)
        j_sub_140a74f90(rsi)
        
        if (rbp_1 == 0)
            arg1[0xe5] = 0
        else
            sub_1407e48f0(rbp_1)
            j_sub_140a74f90(rbp_1)
            arg1[0xe5] = 0
    
    arg1[0xef] = 0

int64_t* rbx_3 = arg1[0x12a]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

sub_1407e45c0(&arg1[0x126])
sub_1407e4440(&arg1[0x122])
sub_14081ccd0(&arg1[0x10a])

if (*(arg1 + 0x84c) != 0)
    *(arg1 + 0x84c) = 0

int64_t rcx_23 = arg1[0x103]

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t rcx_24 = arg1[0x101]

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

sub_1405ae100(&arg1[0xf7])
int64_t rcx_26 = arg1[0xf5]

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t rcx_27 = arg1[0xf3]

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

int64_t rcx_28 = arg1[0xed]

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

int32_t i_2 = arg1[0xe7].d
void* rbx_4 = arg1[0xe6]

if (i_2 != 0)
    int32_t i_1
    
    do
        sub_140846e80(rbx_4)
        rbx_4 += 0x368
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rbx_4 = arg1[0xe6]

if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

sub_140846e80(&arg1[0x78])
uint64_t result = sub_140846e80(&arg1[0xb])
int64_t rcx_33 = arg1[9]

if (rcx_33 == 0)
    return result

return sub_140a74f90(rcx_33)
