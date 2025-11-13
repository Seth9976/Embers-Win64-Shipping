// 函数: sub_140968440
// 地址: 0x140968440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t* rcx = *(arg1 + 0x58)
int32_t arg_8 = 0
int64_t* rax_1 = (*(*rcx + 0x378))(rcx)
int64_t r8 = *rax_1
int64_t* var_68
(*(r8 + 0x90))(rax_1, &var_68, r8)
int64_t* rcx_2 = *(arg1 + 0x1a30)

if (rcx_2 != 0)
    (*(*rcx_2 + 0x88))(rcx_2, var_68)

int32_t rax_3 = *(arg1 + 0x134)
wchar16 const* const rsi

if (rax_3 == 2)
    rsi = u"Pending"
else if (rax_3 != 3)
    rsi = u"Invalid"
    
    if (rax_3 == 1)
        rsi = u"Closed"
else
    rsi = u"Open"

int64_t* rcx_3 = *(arg1 + 0x168)
int16_t* const r14 = &data_142d40450
char rax_5
int64_t r8_1

if (rcx_3 != 0)
    rax_5, r8_1 = (*(*rcx_3 + 0x28))(rcx_3)

int64_t var_38
int16_t* const r12

if (rcx_3 == 0 || rax_5 == 0)
    r12 = u"nullptr"
else
    int64_t* rcx_4 = *(arg1 + 0x168)
    int64_t* rax_7
    rax_7, r8_1 = (*(*rcx_4 + 0x38))(rcx_4, &var_38)
    
    if (rax_7[1].d == 0)
        r12 = &data_142d40450
        rbx = 1
    else
        r12 = *rax_7
        rbx = 1

int64_t* rcx_5 = *(arg1 + 0x110)
int64_t var_48

if (rcx_5 != 0)
    r8_1.b = 1
    rbx |= 2
    wchar16** rax_9
    rax_9, r8_1 = (*(*rcx_5 + 0x78))(rcx_5, &var_48, r8_1)
    
    if (rax_9[1].d != 0)
        *rax_9

int64_t* rcx_6 = var_68
r8_1.b = 1
int64_t var_58
int64_t* rax_11 = (*(*rcx_6 + 0x78))(rcx_6, &var_58, r8_1)
int16_t* const rax_12

if (rax_11[1].d == 0)
    rax_12 = &data_142d40450
else
    rax_12 = *rax_11

if (*(arg1 + 0xc0) != 0)
    r14 = *(arg1 + 0xb8)

wchar16 const* const var_78 = rsi
int16_t* const var_80 = r12
int16_t* const var_88 = rax_12
sub_140a2e390(arg2, u"url=%s remote=%s local=%s uniqueid=%s state: %s", r14)
int64_t rcx_8 = var_58

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

if ((rbx.b & 2) != 0)
    int64_t rcx_9 = var_48
    rbx &= 0xfffffffd
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

if ((rbx.b & 1) != 0)
    int64_t rcx_10 = var_38
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t temp1_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_60 + 8))(var_60, 1)

return arg2
