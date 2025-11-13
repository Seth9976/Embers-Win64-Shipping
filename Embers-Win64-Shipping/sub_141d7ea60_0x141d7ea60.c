// 函数: sub_141d7ea60
// 地址: 0x141d7ea60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x50)
int64_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rax = 0
    void* rdx_1 = &rax[2]
    rax[1] = 0
    *(rdx_1 + 0x10) = 0
    *(rdx_1 + 0x18) = 0
    *(rdx_1 + 0x1c) = 0x80
    void* rax_1 = *(rdx_1 + 0x10)
    
    if (rax_1 != 0)
        rdx_1 = rax_1
    
    *rdx_1 = 0
    *(rdx_1 + 8) = 0
    rbx[6].d = 0xffffffff
    *(rbx + 0x34) = 0
    rbx[8] = 0
    rbx[9].d = 0

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1].d = 1
    *rax_2 = &data_142d86160
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

int64_t* var_48 = rbx
(*(*arg1 + 0x270))(arg1, var_48, rbx)
int64_t var_58 = 0
int64_t var_50 = 0
void*** rax_4 = j_sub_140a82f30(0x40)
void*** rsi = rax_4

if (rax_4 == 0)
    rsi = nullptr
else
    void*** rax_5 = j_sub_140a82f30(0xa8)
    void*** r14_1 = rax_5
    
    if (rax_5 == 0)
        r14_1 = nullptr
    else
        memset(rax_5, 0, 0x90)
        sub_140b4c2a0(r14_1)
        r14_1[0x12] = 0
        *r14_1 = &data_142d6ad48
        r14_1[0x14] = 0
        r14_1[0x13] = &rsi[5]
        sub_140b552b0(r14_1, 1)
        (*r14_1)[0x1b](r14_1, 0)
    
    rsi[1] = r14_1
    rsi[2] = 0
    rsi[3] = 0
    *rsi = &data_142d84f30
    __builtin_memset(&rsi[4], 0, 0x18)
    rsi[7] = &var_58

void*** rax_7 = j_sub_140a82f30(0x18)

if (rax_7 == 0)
    rax_7 = nullptr
else
    rax_7[1].d = 1
    *rax_7 = &data_142d83c20
    *(rax_7 + 0xc) = 1
    rax_7[2] = rsi

void* var_68 = rsi
void* r14_2 = var_68

if (rax_7 != 0)
    rax_7[1].d += 1
    int64_t* rsi_1 = rax_7
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp4_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)

void*** rax_10 = sub_140666b20(&var_48)
var_68 = &rax_10[2]
char rax_11 = sub_140667df0(&var_68, r14_2, 1)

if (rax_10 != 0)
    rax_10[1].d -= 1
    
    if (rax_10[1].d == 1)
        void** rdx_7 = *rax_10
        (*rdx_7)(rax_10, rdx_7)
        int32_t temp3_1 = *(rax_10 + 0xc)
        *(rax_10 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*rax_10)[1](rax_10, 1)

if (rax_11 != 0)
    int64_t var_28
    int64_t* rax_13 = sub_140d21e10(arg1[2], &var_28, 0)
    void* rcx_12 = *rax_13
    int32_t rdx_9 = rax_13[1].d
    int32_t rdx_10 = neg.d(rdx_9)
    *rax_13 = 0
    int32_t r8_2 = rax_13[1].d
    var_68 = rcx_12
    int32_t rcx_13 = *(rax_13 + 0xc)
    int32_t rdx_13 = sbb.d(rdx_10, rdx_10, rdx_9 != 0) + 6 + r8_2
    void*** var_60_1
    var_60_1.d = r8_2
    var_60_1:4.d = rcx_13
    rax_13[1] = 0
    
    if (rdx_13 s> rcx_13)
        sub_1405947f0(&var_68, rdx_13)
    
    sub_140a20ba0(&var_68, u"_Json", 5)
    int64_t rcx_16 = var_28
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    int16_t* var_38
    sub_140a30480(sub_140b455b0(&var_28, &var_58), &var_38, nullptr)
    int64_t rcx_19 = var_28
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    int16_t* const rdx_16 = &data_142d40450
    void* rdi_1 = var_68
    int16_t* r9_1 = &data_142d40450
    int32_t var_30
    
    if (var_30 != 0)
        r9_1 = var_38
    
    if (var_60_1.d != 0)
        rdx_16 = rdi_1
    
    sub_140b00d80(data_143ddb400, rdx_16, u"Data", r9_1, &data_143de57c0)
    sub_140af04f0(data_143ddb400, 0, &data_143de57c0)
    int16_t* rcx_22 = var_38
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)

uint64_t result = sub_140ce6d40(arg1, 0x4000, nullptr, data_143ddb400)
int64_t* rcx_25 = arg1[0xd]

if (rcx_25 != 0)
    result = sub_140ce6d40(rcx_25, 0x4000, nullptr, data_143ddb400)

int64_t* rcx_26 = arg1[0xe]

if (rcx_26 != 0)
    result = sub_140ce6d40(rcx_26, 0x4000, nullptr, data_143ddb400)

if (rax_7 != 0)
    rax_7[1].d -= 1
    
    if (rax_7[1].d == 1)
        result = (**rax_7)(rax_7)
        int32_t temp6_1 = *(rax_7 + 0xc)
        *(rax_7 + 0xc) -= 1
        
        if (temp6_1 == 1)
            result = (*rax_7)[1](rax_7, 1)

int64_t rcx_29 = var_58

if (rcx_29 != 0)
    result = sub_140a74f90(rcx_29)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        result = (**rax_2)(rax_2)
        int32_t temp8_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp8_1 == 1)
            return (*rax_2)[1](rax_2, 1)

return result
