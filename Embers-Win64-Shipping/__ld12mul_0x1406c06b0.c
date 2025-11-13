// 函数: __ld12mul
// 地址: 0x1406c06b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x698) = 1
*(arg1 + 0x6e8) = 0

if (*(arg1 + 0x140) s>= 0)
    sub_1406c11b0(arg1, *(arg1 + 0x6c8))

if (*(arg1 + 0x144) s>= 0)
    sub_1406c11b0(arg1, *(arg1 + 0x6cc))

if (*(arg1 + 0x14c) s>= 0)
    sub_1406c11b0(arg1, *(arg1 + 0x6c4))

*(arg1 + 0x6c4) = -1
*(arg1 + 0x6cc) = 0xffffffff
int64_t* rcx_2 = *(arg1 + 0x210)

if (rcx_2 != 0)
    (*(*rcx_2 + 0x18))(rcx_2)
    *(arg1 + 0x210) = 0

int64_t* rcx_3 = *(arg1 + 0x1f0)

if (rcx_3 != 0)
    (*(*rcx_3 + 0x18))(rcx_3)
    *(arg1 + 0x1f0) = 0

int64_t* rcx_4 = *(arg1 + 0x1f8)

if (rcx_4 != 0)
    (*(*rcx_4 + 0x18))(rcx_4)
    *(arg1 + 0x1f8) = 0

int64_t* rcx_5 = *(arg1 + 0x200)
int64_t rdx

if (rcx_5 != 0)
    rdx.b = 1
    (*(*rcx_5 + 0x10))(rcx_5, rdx)
    *(arg1 + 0x200) = 0

int64_t* rcx_6 = *(arg1 + 0x208)

if (rcx_6 != 0)
    (*(*rcx_6 + 0x18))(rcx_6)
    *(arg1 + 0x208) = 0

int64_t rcx_7 = *(arg1 + 0x1e8)

if (rcx_7 != 0)
    sws_freeContext(rcx_7)
    *(arg1 + 0x1e8) = 0

int64_t* rcx_8 = *(arg1 + 0x7f0)

if (rcx_8 != 0)
    rdx.b = rcx_8 != arg1 + 0x7b8
    (*(*rcx_8 + 0x20))(rcx_8, rdx)
    *(arg1 + 0x7f0) = 0

void* rax_7 = j_sub_140a82f30(0x58)
void* rbx_1 = rax_7
void* arg_8 = rax_7

if (rax_7 == 0)
    rbx_1 = nullptr
else
    *rax_7 = 0xffffffff
    *(rax_7 + 8) = 0
    *(rax_7 + 0x10) = 0
    *(rax_7 + 0x18) = 0xffffffff
    *(rax_7 + 0x1c) = 0
    *(rax_7 + 0x20) = 0
    __builtin_memset(rax_7 + 0x28, 0, 0x30)
    arg_8 = nullptr
    arg_8 = nullptr

void* rax_8 = j_sub_140a82f30(0x18)
void* r14 = rax_8
arg_8 = rax_8

if (rax_8 == 0)
    r14 = nullptr
else
    *(rax_8 + 8) = 1
    *(rax_8 + 0xc) = 1
    *rax_8 = &data_142d8e230
    *(rax_8 + 0x10) = rbx_1

void* var_38 = rbx_1
void* rsi = r14
void* var_30 = r14

if (arg1 + 0x668 != &var_38)
    *(arg1 + 0x668) = rbx_1
    var_38 = nullptr
    int64_t* rbx_2 = *(arg1 + 0x670)
    
    if (r14 != rbx_2)
        rsi = nullptr
        void* var_30_1 = nullptr
        *(arg1 + 0x670) = r14
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
            
            rsi = var_30_1

if (rsi != 0)
    int32_t temp0_1 = *(rsi + 8)
    *(rsi + 8) -= 1
    
    if (temp0_1 == 1)
        (**rsi)(rsi)
        int32_t temp1_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rsi + 8))(rsi, 1)

void* rax_13 = j_sub_140a82f30(0x58)
void* rbx_3 = rax_13
arg_8 = rax_13

if (rax_13 == 0)
    rbx_3 = nullptr
else
    *rax_13 = 0xffffffff
    *(rax_13 + 8) = 0
    *(rax_13 + 0x10) = 0
    *(rax_13 + 0x18) = 0xffffffff
    *(rax_13 + 0x1c) = 0
    *(rax_13 + 0x20) = 0
    __builtin_memset(rax_13 + 0x28, 0, 0x30)
    arg_8 = nullptr
    arg_8 = nullptr

void* rax_14 = j_sub_140a82f30(0x18)
void* r14_1 = rax_14
arg_8 = rax_14

if (rax_14 == 0)
    r14_1 = nullptr
else
    *(rax_14 + 8) = 1
    *(rax_14 + 0xc) = 1
    *rax_14 = &data_142d8e230
    *(rax_14 + 0x10) = rbx_3

var_38 = rbx_3
void* rsi_1 = r14_1
void* var_30_2 = r14_1

if (arg1 + 0x678 != &var_38)
    *(arg1 + 0x678) = rbx_3
    var_38 = nullptr
    int64_t* rbx_4 = *(arg1 + 0x680)
    
    if (r14_1 != rbx_4)
        rsi_1 = nullptr
        void* var_30_3 = nullptr
        *(arg1 + 0x680) = r14_1
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp7_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
            
            rsi_1 = var_30_3

if (rsi_1 != 0)
    int32_t temp4_1 = *(rsi_1 + 8)
    *(rsi_1 + 8) -= 1
    
    if (temp4_1 == 1)
        (**rsi_1)(rsi_1)
        int32_t temp5_1 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rsi_1 + 8))(rsi_1, 1)

void* rax_19 = j_sub_140a82f30(0x58)
void* rbx_5 = rax_19
arg_8 = rax_19

if (rax_19 == 0)
    rbx_5 = nullptr
else
    *rax_19 = 0xffffffff
    *(rax_19 + 8) = 0
    *(rax_19 + 0x10) = 0
    *(rax_19 + 0x18) = 0xffffffff
    *(rax_19 + 0x1c) = 0
    *(rax_19 + 0x20) = 0
    __builtin_memset(rax_19 + 0x28, 0, 0x30)
    arg_8 = nullptr
    arg_8 = nullptr

void* rax_20 = j_sub_140a82f30(0x18)
void* r14_2 = rax_20
arg_8 = rax_20

if (rax_20 == 0)
    r14_2 = nullptr
else
    *(rax_20 + 8) = 1
    *(rax_20 + 0xc) = 1
    *rax_20 = &data_142d8e230
    *(rax_20 + 0x10) = rbx_5

var_38 = rbx_5
void* rsi_2 = r14_2
void* var_30_4 = r14_2

if (arg1 + 0x688 != &var_38)
    *(arg1 + 0x688) = rbx_5
    var_38 = nullptr
    int64_t* rbx_6 = *(arg1 + 0x690)
    
    if (r14_2 != rbx_6)
        rsi_2 = nullptr
        void* var_30_5 = nullptr
        *(arg1 + 0x690) = r14_2
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t temp11_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
            
            rsi_2 = var_30_5

if (rsi_2 != 0)
    int32_t temp8_1 = *(rsi_2 + 8)
    *(rsi_2 + 8) -= 1
    
    if (temp8_1 == 1)
        (**rsi_2)(rsi_2)
        int32_t temp9_1 = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rsi_2 + 8))(rsi_2, 1)

arg_8 = arg1 + 0xa0
EnterCriticalSection(arg1 + 0xa0)
sub_1406baa80(arg1 + 0x250)
sub_1406baa80(arg1 + 0x320)
sub_1406baa80(arg1 + 0x3f0)
sub_1406bbec0(arg1 + 0x4c0)
sub_1406bbec0(arg1 + 0x518)
sub_1406bbec0(arg1 + 0x570)
sub_1406bfaa0(**(arg1 + 0x18), 0)
sub_1406bfba0(**(arg1 + 0x158), 0)
*(arg1 + 0x140) = -1
*(arg1 + 0x148) = -1
*(arg1 + 0x6d4) = 0
sub_1406bac30(arg1 + 0x50, 0)
sub_1406bac30(arg1 + 0x130, 0)
sub_1406bac30(arg1 + 0x90, 0)
sub_1406bac30(arg1 + 0x190, 0)
*(arg1 + 0xd0) = 0

if (*(arg1 + 0xd4) != 0)
    sub_1405947f0(arg1 + 0xc8, 0)

*(arg1 + 0xf0) = 0
*(arg1 + 0x150) = 0
*(arg1 + 0x1e1) = 0
*(arg1 + 0x1c0) = 0
*(arg1 + 0x7b0) = 0
*(arg1 + 0x6e0) = 0
*(arg1 + 0x6e8) = 0
int32_t result = *(arg1 + 0x704)
*(arg1 + 0x700) = 0

if (result s< 0)
    result = sub_1405c5510(arg1 + 0x6f8, 0)

if (arg1 == -0xa0)
    return result

return LeaveCriticalSection(arg1 + 0xa0)
