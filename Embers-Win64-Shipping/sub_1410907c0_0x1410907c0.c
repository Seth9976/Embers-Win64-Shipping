// 函数: sub_1410907c0
// 地址: 0x1410907c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int32_t r15 = arg4
void*** rbx = nullptr
data_143ec4e38 = 1
void*** rax = j_sub_140a82f30(0xc0)
void*** r13

if (rax == 0)
    r13 = nullptr
else
    r13 = sub_141346640(rax, *(arg3 + 0x10) + 0x5030)

int64_t* rsi = *(arg3 + 8)
int64_t r14 = sx.q(rsi[1].d)
int32_t rax_2 = (r14 + 1).d
rsi[1].d = rax_2

if (rax_2 s> *(rsi + 0xc))
    sub_1405a4d70(rsi)

*(*rsi + (r14 << 3)) = r13
int32_t r12
r12.b = *(data_143e2d878 + 4) s> 0
int64_t rsi_1 = *(*(arg3 + 0x10) + 0x15a8)
void*** var_48
char arg_18

if (r15 == 2)
    void*** (* var_58)() = j_sub_140597fc0
    char* var_50_1 = &arg_18
    arg_18 = 0
    void*** rax_7 = sub_14081d830(0xd0, sub_140a756e0(&var_58, &data_143958018) + 0x10, 1, 0)
    rbx = rax_7
    
    if (rax_7 == 0)
        rbx = nullptr
    else
        rax_7[1].d = 0
        rax_7[2] = 0
        rax_7[3].d = 0
        rax_7[4] = 0
        rax_7[5].d = 0
        rax_7[6] = 1
        __builtin_memset(&rax_7[7], 0, 0x18)
        rax_7[0xa] = 1
        rax_7[0xb].w = 1
        *(rax_7 + 0x5c) = 0
        *(rax_7 + 0x64) = 0
        rax_7[0xd].w = 0
        rbx[0xe] = u"UnknownTexture"
        rbx[0xf].w = 1
        *(rbx + 0x7a) = 0
        rbx[0x10] = 0
        rbx[0x11].d = 0
        __builtin_memset(&rbx[0x12], 0, 0x39)
        *rbx = &data_142f12568
        *(rbx + 0xcc) = r12 + 1
    
    int64_t* rsi_2 = *(arg3 + 8)
    int64_t r14_1 = sx.q(rsi_2[1].d)
    int32_t rax_8 = (r14_1 + 1).d
    rsi_2[1].d = rax_8
    
    if (rax_8 s> *(rsi_2 + 0xc))
        sub_1405a4d70(rsi_2)
    
    *(*rsi_2 + (r14_1 << 3)) = rbx
    void*** r14_2 = nullptr
    var_48 = *(arg3 + 0x20)
    int64_t var_40
    var_40.d = 0
    (*rbx)[3](rbx, 0, &var_48)
    (*rbx)[4](rbx, arg3 + 0x28)
    
    if (*(data_143e2dad8 + 4) == 1)
        arg_18 = 0
        char* var_40_1 = &arg_18
        var_48 = j_sub_140597fc0
        void*** rax_15 = sub_14081d830(0xd0, sub_140a756e0(&var_48, &data_143958018) + 0x10, 1, 0)
        
        if (rax_15 != 0)
            r14_2 = sub_14108bda0(rax_15, *(arg3 + 0x10), r12 + 1, 2)
        
        int64_t* rsi_3 = *(arg3 + 8)
        int64_t r15_1 = sx.q(rsi_3[1].d)
        int32_t rax_17 = (r15_1 + 1).d
        rsi_3[1].d = rax_17
        
        if (rax_17 s> *(rsi_3 + 0xc))
            sub_1405a4d70(rsi_3)
        
        int64_t rax_18 = *rsi_3
        var_48 = rbx
        var_40_1.d = 0
        *(rax_18 + (r15_1 << 3)) = r14_2
        (*r14_2)[3](r14_2, 0, &var_48)
        void** rax_20 = *r14_2
        var_48 = r13
        var_40_1.d = 0
        rax_20[3](r14_2, 1, &var_48)
        r15 = arg_20
        rbx = r14_2

if (rsi_1 != 0 && *(data_143e2d988 + 4) == 1)
    var_48 = j_sub_140597fc0
    char* var_40_2 = &arg_18
    arg_18 = 0
    void*** rax_23 = sub_14081d830(0x1e8, sub_140a756e0(&var_48, &data_143958018) + 0x10, 1, 0)
    void*** rsi_4
    
    if (rax_23 == 0)
        rsi_4 = nullptr
    else
        int64_t rdx_10 = *(arg3 + 0x10)
        rsi_4 = sub_14108be50(rax_23, rdx_10, r12 + 1, rdx_10 + 0x4e78, rsi_1 + 0x9b8, r15)
    
    int64_t* r14_3 = *(arg3 + 8)
    int64_t r15_2 = sx.q(r14_3[1].d)
    int32_t rax_25 = (r15_2 + 1).d
    r14_3[1].d = rax_25
    
    if (rax_25 s> *(r14_3 + 0xc))
        sub_1405a4d70(r14_3)
    
    *(*r14_3 + (r15_2 << 3)) = rsi_4
    r15 = arg_20
    
    if (r15 != 1)
        var_48 = rbx
    else
        arg_20.b = 0
        var_40_2 = &arg_20
        var_48 = j_sub_140597fc0
        void*** rax_28 = sub_14081d830(0xc0, sub_140a756e0(&var_48, &data_143958018) + 0x10, 1, 0)
        
        if (rax_28 != 0)
            rax_28 = sub_141346640(rax_28, &data_143ec4d28)
        
        var_48 = sub_14107ee00(*(arg3 + 8), rax_28)
    
    var_40_2.d = 0
    (*rsi_4)[3](rsi_4, 0, &var_48)
    rbx = rsi_4

arg_20.b = 0
int32_t* var_40_3 = &arg_20
var_48 = j_sub_140597fc0
void*** rax_32 = sub_14081d830(0xd0, sub_140a756e0(&var_48, &data_143958018) + 0x10, 1, 0)
void*** rsi_5

if (rax_32 == 0)
    rsi_5 = nullptr
else
    rsi_5 = sub_14108bf80(rax_32, *(arg3 + 0x10), r12 + 1, r15)

int64_t* r14_4 = *(arg3 + 8)
int64_t r15_3 = sx.q(r14_4[1].d)
int32_t rax_34 = (r15_3 + 1).d
r14_4[1].d = rax_34

if (rax_34 s> *(r14_4 + 0xc))
    sub_1405a4d70(r14_4)

int64_t rax_35 = *r14_4
var_48 = rbx
var_40_3.d = 0
*(rax_35 + (r15_3 << 3)) = rsi_5
(*rsi_5)[3](rsi_5, 0, &var_48)
var_48 = *(arg3 + 0x20)
var_40_3.d = 0
(*rsi_5)[3](rsi_5, 1, &var_48)
var_48 = rsi_5
var_40_3.d = 0
int128_t zmm0 = var_48.o
*arg1 = rsi_5
arg1[1].d = 0
*(arg3 + 0x28) = zmm0
return arg1
