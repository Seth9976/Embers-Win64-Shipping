// 函数: sub_141d8b200
// 地址: 0x141d8b200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1[8]
int64_t* rbx = rsi

if (rsi != 0)
    int32_t rax_1 = rsi[1].d
    
    if (rax_1 != 0)
        rsi[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rsi = nullptr
        rbx = nullptr

if (rbx != 0)
    void* rcx = arg1[7]
    
    if (rcx != 0)
        sub_1405a46b0(rcx + 0x988, &arg1[-2])
        
        if (rbx != 0)
            rbx[1].d -= 1
            rsi = nullptr
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp2_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx + 8))(rbx, 1)

(*(*arg1 + 0x48))(arg1)
(*(*arg1 + 0x50))(arg1, 0)

if (sub_140a80f40() == 0)
    uint32_t rax_7
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_7.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_7.b == 0))
        void var_58
        void** rax_8 = sub_141d87850(&var_58, nullptr, 0xff)
        *(*rax_8 + 0x10) = &arg1[-2]
        void* rcx_10 = *rax_8
        int32_t r8_1 = rax_8[2].d
        int64_t* rdx_2 = rax_8[1]
        int64_t* rdi_1 = *(rcx_10 + 0x20)
        int64_t* arg_10 = rdi_1
        int32_t* r12_1 = &rdi_1[9]
        
        if (rdi_1 != 0)
            *r12_1 += 1
            rdi_1 = arg_10
        
        sub_1405a5630(rcx_10, rdx_2, r8_1, 1)
        
        if (rdi_1 != 0)
            int32_t rax_9 = *r12_1
            *r12_1 -= 1
            
            if (rax_9 == 1)
                sub_140a2f6e0(arg_10)
    else
        void* arg_18 = &arg1[-2]
        sub_1417f5d40(&arg1[-2])
else
    sub_1417f5d40(&arg1[-2])

arg1[0x27].b = 0
sub_1405a46b0(&data_14399fce8, &arg1[-2])
sub_1405a46b0(&data_1439aa958, &arg1[-2])
sub_1405a46b0(&data_1439aa970, &arg1[-2])
void var_a8

if (&arg1[9] != &var_a8)
    arg1[9] = 0
    int64_t* rbx_2 = arg1[0xa]
    
    if (rbx_2 != 0)
        arg1[0xa] = 0
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

void var_98

if (&arg1[0xb] != &var_98)
    arg1[0xb] = 0
    int64_t* rbx_3 = arg1[0xc]
    
    if (rbx_3 != 0)
        arg1[0xc] = 0
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp7_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)

void var_88

if (&arg1[7] != &var_88)
    arg1[7] = 0
    int64_t* rcx_16 = arg1[8]
    arg1[8] = 0
    
    if (rcx_16 != 0)
        int32_t temp6_1 = *(rcx_16 + 0xc)
        *(rcx_16 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rcx_16 + 8))(rcx_16, 1)

void var_78

if (&arg1[0xd] != &var_78)
    arg1[0xd] = 0
    int64_t* rbx_4 = arg1[0xe]
    
    if (rbx_4 != 0)
        arg1[0xe] = 0
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp9_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)

int32_t i_3 = arg1[4].d

if (i_3 != 0)
    int64_t* rdi_3 = arg1[3] + 8
    int32_t i
    
    do
        int64_t* rbx_5 = *rdi_3
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp13_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        rdi_3 = &rdi_3[2]
        i = i_3
        i_3 -= 1
    while (i != 1)

arg1[4].d = 0

if (*(arg1 + 0x24) != 0)
    sub_1405a5410(&arg1[3], 0)

void var_68

if (&arg1[5] != &var_68)
    arg1[5] = 0
    int64_t* rbx_6 = arg1[6]
    
    if (rbx_6 != 0)
        arg1[6] = 0
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp15_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)

int128_t var_d8
__builtin_memset(&var_d8, 0, 0x1c)
int32_t var_b8 = 0xbf800000
int32_t var_b4 = 0x101
int16_t var_b0 = 0
int64_t* result = sub_141d85dd0(&arg1[0x14], &var_d8)
int32_t i_4
int32_t i_2 = i_4
int64_t* var_c8
int64_t* rbx_7 = var_c8

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_25 = *rbx_7
        
        if (rcx_25 != 0)
            result = sub_140a74f90(rcx_25)
        
        rbx_7 = &rbx_7[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (var_c8 != 0)
    result = sub_140a74f90(var_c8)

int64_t* rbx_8 = var_d8:8.q

if (rbx_8 != 0)
    rbx_8[1].d -= 1
    
    if (rbx_8[1].d == 1)
        result = (**rbx_8)(rbx_8)
        int32_t temp17_1 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (temp17_1 == 1)
            result = (*(*rbx_8 + 8))(rbx_8, 1)

char* rcx_29 = arg1[0x11]

if (rcx_29 != 0)
    sub_141d87ae0(rcx_29)
    result = EnterCriticalSection(&arg1[0x28])
    char* r15_2 = arg1[0x11]
    
    if (r15_2 != 0)
        sub_141d87ae0(r15_2)
        int64_t* rdi_4 = *(r15_2 + 0x28)
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t r13_1 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (r13_1 == 1)
                    (*(*rdi_4 + 8))(rdi_4, zx.q(r13_1))
        
        result = j_sub_140a74f90(r15_2)
    
    arg1[0x11] = 0
    
    if (arg1 != -0x140)
        result = LeaveCriticalSection(&arg1[0x28])

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        result = (**rsi)(rsi)
        int32_t temp19_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp19_1 == 1)
            return (*(*rsi + 8))(rsi, 1)

return result
