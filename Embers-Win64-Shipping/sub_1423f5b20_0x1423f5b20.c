// 函数: sub_1423f5b20
// 地址: 0x1423f5b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2168)
void var_2178
int64_t rax_1 = __security_cookie ^ &var_2178
int64_t var_2118
sub_1423fd810(&var_2118, nullptr)
sub_1424171b0(&var_2118, u"DefaultPlayer", &data_143de5830)
int16_t var_2038
memset(&var_2038, 0, 0x2000)
int16_t* const rbx = &data_142d40450
int16_t* const var_2138 = &data_142d40450

if (sub_140b297e0(&var_2138, &var_2038, 0x1000, 0) == 0 || var_2038 == 0x2d)
    int64_t* rax_3 = sub_141520bd0()
    void* r15_1 = rax_3[0x23]
    
    if (r15_1 == 0)
        int64_t rdx_1 = *rax_3
        (*(rdx_1 + 0x390))(rax_3, rdx_1)
        r15_1 = rax_3[0x23]
    
    int64_t var_2130
    int64_t* rax_4 = sub_14151ffb0(&var_2130)
    int32_t r14_1 = *(r15_1 + 0x30)
    uint64_t rdi_2 = 0
    int32_t rax_5 = rax_4[1].d
    uint64_t rsi_1
    bool cond:1_1
    
    if (rax_5 s> 1)
        int32_t rsi_2 = r14_1 - 1
        
        if (r14_1 == 0)
            rsi_2 = 0
        
        int32_t r8_3
        
        if (rax_5 == 0)
            r8_3 = rax_5 + 1
        
        if (rax_5 != 0 || rsi_2 == 0)
            r8_3 = 0
        
        uint64_t rax_6 = *rax_4
        *rax_4 = 0
        int32_t rcx_8 = rax_4[1].d
        uint64_t var_2158 = rax_6
        int32_t rax_7 = *(rax_4 + 0xc)
        rax_4[1] = 0
        int32_t rdx_6 = rsi_2 + r8_3 + rcx_8
        int32_t var_214c_1 = rax_7
        
        if (rdx_6 s> rax_7)
            sub_1405947f0(&var_2158, rdx_6)
        
        sub_140a20ba0(&var_2158, *(r15_1 + 0x28), rsi_2)
        rsi_1 = var_2158
        var_2158 = 0
        int32_t var_2150_1
        var_2150_1.q = 0
        rdi_2 = rsi_1
        cond:1_1 = rcx_8 != 0
    else
        int64_t r15_2 = *(r15_1 + 0x28)
        rsi_1 = 0
        uint64_t var_2148 = 0
        cond:1_1 = r14_1 != 0
        
        if (r14_1 != 0)
            sub_1405a4c70(&var_2148, r14_1, 0)
            rsi_1 = var_2148
            memcpy(rsi_1, r15_2, r14_1 * 2)
            rdi_2 = rsi_1
            cond:1_1 = r14_1 != 0
    
    if (cond:1_1)
        rbx = rdi_2
    
    int64_t rcx_11 = &var_2038 - rbx
    int16_t i
    
    do
        i = *rbx
        *(rbx + rcx_11) = i
        rbx = &rbx[1]
    while (i != 0)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    int64_t rcx_13 = var_2130
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)

int64_t var_20a8
sub_1423fb9e0(&var_20a8, &var_2118, &var_2038, 1)
int64_t var_2080
sub_140b18720(arg1, &var_2080, 1)
int64_t var_2050

if (var_2050 != 0)
    sub_140a74f90(var_2050)

int32_t i_6
int32_t i_3 = i_6
int64_t* var_2060
int64_t* rbx_1 = var_2060

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_17 = *rbx_1
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_1 = var_2060

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t var_2070

if (var_2070 != 0)
    sub_140a74f90(var_2070)

int64_t rcx_20 = var_2080

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t var_2098

if (var_2098 != 0)
    sub_140a74f90(var_2098)

int64_t rcx_22 = var_20a8

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t var_20c0

if (var_20c0 != 0)
    sub_140a74f90(var_20c0)

int32_t i_5
int32_t i_4 = i_5
int64_t* var_20d0
int64_t* rbx_2 = var_20d0

if (i_4 != 0)
    int32_t i_2
    
    do
        int64_t rcx_24 = *rbx_2
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        rbx_2 = &rbx_2[2]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
    rbx_2 = var_20d0

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

int64_t var_20e0

if (var_20e0 != 0)
    sub_140a74f90(var_20e0)

int64_t var_20f0

if (var_20f0 != 0)
    sub_140a74f90(var_20f0)

int64_t var_2108

if (var_2108 != 0)
    sub_140a74f90(var_2108)

int64_t rcx_29 = var_2118

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

__security_check_cookie(rax_1 ^ &var_2178)
return arg1
