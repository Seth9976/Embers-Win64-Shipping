// 函数: sub_1410ab9f0
// 地址: 0x1410ab9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0 && arg5 == 0)
    return 

char arg_20 = 0
void*** (* var_f8)() = j_sub_140597fc0
char* var_f0_1 = &arg_20
int64_t* rax_2 = sub_140a756e0(&var_f8, &data_143958018) + 0x10
int64_t* var_e8 = rax_2
int64_t rcx_1 = *rax_2
int64_t rcx_2 = rax_2[2]
char var_d0_1 = 0
int64_t rcx_3 = rax_2[3]
rax_2[3] = &var_e8
int64_t* rax_3 = var_e8
rax_3[4].d += 1
void var_88
sub_141385550(&var_88, arg2, arg3)
void var_c0
void var_58
sub_1412ff950(&var_c0, arg2, &var_58, arg3)
int64_t var_98

if (arg4 != 0)
    char* var_f0_2 = &arg_20
    arg_20 = 0
    var_f8 = j_sub_140597fc0
    void*** rax_5 = sub_14081d830(0xc0, sub_140a756e0(&var_f8, &data_143958018) + 0x10, 1, 0)
    void*** rdi_1
    
    if (rax_5 == 0)
        rdi_1 = nullptr
    else
        rdi_1 = sub_1410eab00(rax_5, 0)
    
    int64_t* var_b8
    int64_t r14_1 = sx.q(var_b8[1].d)
    int32_t rax_7 = (r14_1 + 1).d
    var_b8[1].d = rax_7
    
    if (rax_7 s> *(var_b8 + 0xc))
        sub_1405a4d70(var_b8)
    
    *(*var_b8 + (r14_1 << 3)) = rdi_1
    (*rdi_1)[3](rdi_1, 0, &var_98)
    var_f8 = rdi_1
    var_f0_2.d = 0
    var_98.o = var_f8.o

if (arg5 != 0)
    if (*(data_143e2de98 + 4) != 1)
        sub_14108f6e0(&var_f8, arg2, &var_c0, arg5)
    else if (*(arg3 + 0x1548) s>= 3)
        int32_t rcx_10 = *(data_143e2de08 + 4)
        
        if (rcx_10 s>= 1 && rcx_10 s>= 2 && data_143f0f1c5 != 0)
            sub_14108f6e0(&var_f8, arg2, &var_c0, arg5)

int64_t rbx_2 = var_98
var_f8 = nullptr
int64_t var_f0_3 = 1
sub_1405a4d70(&var_f8)
*var_f8 = rbx_2
sub_1413a1370(&var_88, &var_f8)
void*** (* rcx_14)() = var_f8

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

sub_141386800(&var_88)

if (var_d0_1 != 0)
    return 

int64_t* rax_13 = var_e8
char var_d0_2 = 1
rax_13[4].d -= 1
int64_t* rcx_16 = var_e8

if (rcx_2 != rcx_16[2])
    sub_140b16b40(rcx_16, rcx_2)
    rcx_16 = var_e8

*rcx_16 = rcx_1
var_e8[3] = rcx_3
