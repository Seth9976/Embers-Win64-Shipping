// 函数: sub_141090370
// 地址: 0x141090370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
*arg3
char var_f0 = 0
char var_f8 = 1
int64_t rcx_1 = data_143ec4fdc
int16_t var_70 = 0
int32_t r12
r12.b = *(data_143e2d878 + 4) s> 0
int128_t var_a8 = data_1439c7b08
int32_t var_8c = 0
int32_t var_84 = 0x10000
int64_t var_7c = 0xd
char var_5e = 0
int32_t var_94 = divs.dp.d(sx.q(r12 + rcx_1.d), r12 + 1)
int32_t var_98 = data_1439c7b18
int32_t var_90 = divs.dp.d(sx.q(r12 + (rcx_1 u>> 0x20).d), r12 + 1)
int32_t var_74 = 1
wchar16 const* const var_68 = u"UnknownTexture2D"
int32_t rax_12 = 1
int32_t var_88 = 1
int16_t var_80 = 1
int16_t var_60 = 1

if (data_143ec5030 s>= 3)
    rax_12 = 0x10001

int32_t var_74_1 = rax_12
sub_1419a0ce0(&data_1439c9260, arg2, &var_a8, &data_143ec4d30, ScreenSpaceGTAODepths", 1, var_f8, 
    var_f0)
var_7c.d = 0x28
sub_1419a0ce0(&data_1439c9260, arg2, &var_a8, &data_143ec4d28, u"ScreenSpaceGTAOHorizons", 1, 1, 0)
void*** rax_13 = j_sub_140a82f30(0xc0)
void*** r15

if (rax_13 == 0)
    r15 = nullptr
else
    r15 = sub_141346640(rax_13, arg3[2] + 0x5030)

int64_t* rbx = arg3[1]
int64_t rdi_1 = sx.q(rbx[1].d)
int32_t rax_15 = (rdi_1 + 1).d
rbx[1].d = rax_15

if (rax_15 s> *(rbx + 0xc))
    sub_1405a4d70(rbx)

int64_t rax_16 = *rbx
char var_e8 = 0
*(rax_16 + (rdi_1 << 3)) = r15
void*** var_e0
char* var_d8
void*** rbx_1
void*** (* var_d0)()

if (arg4 != 2)
    var_d8 = &var_e8
    var_e0 = j_sub_140597fc0
    void*** rax_25 = sub_14081d830(0x160, sub_140a756e0(&var_e0, &data_143958018) + 0x10, 1, 0)
    rbx_1 = rax_25
    
    if (rax_25 == 0)
        rbx_1 = nullptr
    else
        sub_14108afb0(rax_25)
        rbx_1[0x2a].d = arg4
        *rbx_1 = &data_142f12600
        *(rbx_1 + 0x154) = 0
        rbx_1[0x2b].d = r12 + 1
    
    int64_t* rdi_3 = arg3[1]
    int64_t r13_1 = sx.q(rdi_3[1].d)
    int32_t rax_26 = (r13_1 + 1).d
    rdi_3[1].d = rax_26
    
    if (rax_26 s> *(rdi_3 + 0xc))
        sub_1405a4d70(rdi_3)
    
    *(*rdi_3 + (r13_1 << 3)) = rbx_1
    var_d0 = arg3[4]
    int64_t var_c8
    var_c8.d = 0
    (*rbx_1)[3](rbx_1, 0, &var_d0)
    void** rax_30 = *rbx_1
    var_d0 = r15
    var_c8.d = 0
    rax_30[3](rbx_1, 1, &var_d0)
    
    if (*(data_143e2dad8 + 4) == 1)
        var_e8 = 0
        var_d8 = &var_e8
        var_e0 = j_sub_140597fc0
        void*** rax_33 = sub_14081d830(0xd0, sub_140a756e0(&var_e0, &data_143958018) + 0x10, 1, 0)
        void*** rdi_4
        
        if (rax_33 == 0)
            rdi_4 = nullptr
        else
            rdi_4 = sub_14108bda0(rax_33, arg3[2], r12 + 1, arg4)
        
        int64_t* r14_2 = arg3[1]
        int64_t r13_2 = sx.q(r14_2[1].d)
        int32_t rax_35 = (r13_2 + 1).d
        r14_2[1].d = rax_35
        
        if (rax_35 s> *(r14_2 + 0xc))
            sub_1405a4d70(r14_2)
        
        int64_t rax_36 = *r14_2
        var_e0 = rbx_1
        *(rax_36 + (r13_2 << 3)) = rdi_4
        var_d8.d = 0
        (*rdi_4)[3](rdi_4, 0, &var_e0)
        void** r9_1 = *rdi_4
        var_e0 = r15
        var_d8.d = 0
        r9_1[3](rdi_4, 1, &var_e0, r9_1)
        rbx_1 = rdi_4
else
    char* var_c8_1 = &var_e8
    var_d0 = j_sub_140597fc0
    void*** rax_18 =
        sub_14081d830(0x158, sub_140a756e0(&var_d0, &data_143958018) + 0x10, arg4 - 1, 0)
    rbx_1 = rax_18
    
    if (rax_18 == 0)
        rbx_1 = nullptr
    else
        sub_14108afb0(rax_18)
        rbx_1[0x2a].d = arg4
        *rbx_1 = &data_142f124d0
        *(rbx_1 + 0x154) = r12 + 1
    
    int64_t* rdi_2 = arg3[1]
    int64_t r14_1 = sx.q(rdi_2[1].d)
    int32_t rax_19 = (r14_1 + 1).d
    rdi_2[1].d = rax_19
    
    if (rax_19 s> *(rdi_2 + 0xc))
        sub_1405a4d70(rdi_2)
    
    var_d8.d = 0
    *(*rdi_2 + (r14_1 << 3)) = rbx_1
    var_e0 = arg3[4]
    (*rbx_1)[3](rbx_1, 0, &var_e0)
    void** rax_23 = *rbx_1
    var_e0 = r15
    var_d8.d = 0
    rax_23[3](rbx_1, 1, &var_e0)
var_e0 = rbx_1
var_d8.d = 0
*(arg3 + 0x28) = var_e0.o
*arg1 = rbx_1
arg1[1].d = 0
__security_check_cookie(rax_1 ^ &var_128)
return arg1
