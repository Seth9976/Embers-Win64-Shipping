// 函数: sub_1406571f0
// 地址: 0x1406571f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
__builtin_memset(&var_38, 0, 0x18)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* var_48 = nullptr
int32_t i_5 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rsi = &var_48
void* var_58 = nullptr
int32_t i_4 = 0

if (rax_3 != 0)
    rsi = rax_3

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_58, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* r8_6 = &var_58

if (rax_5 != 0)
    r8_6 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
int64_t var_20 = var_38
int128_t var_30
int64_t var_18 = var_30.q
void* rax_9 = var_30:8.q
*(arg2 + 0x20) = rdi + rax_6
void* var_10 = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

void* result = sub_14063db00(&var_20, rsi, r8_6)
int32_t i_2 = i_4

if (i_2 != 0)
    void* rdi_3 = var_58 + 0x10
    int32_t i
    
    do
        int64_t* rbx_1 = *(rdi_3 + 0x20)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t rcx_6 = *rdi_3
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *(rdi_3 - 0x10)
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
        
        rdi_3 += 0x40
        i = i_2
        i_2 -= 1
    while (i != 1)

void* rcx_8 = var_58

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int32_t i_3 = i_5

if (i_3 != 0)
    void* rdi_5 = var_48 + 0x20
    int32_t i_1
    
    do
        int64_t rcx_9 = *(rdi_5 + 8)
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        int64_t* rbx_2 = *rdi_5
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp7_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
        
        int64_t rcx_12 = *(rdi_5 - 0x20)
        
        if (rcx_12 != 0)
            result = sub_140a74f90(rcx_12)
        
        rdi_5 += 0x40
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

void* rcx_13 = var_48

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t* rbx_3 = var_30:8.q

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp4_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp4_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
