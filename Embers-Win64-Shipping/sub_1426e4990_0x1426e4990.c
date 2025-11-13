// 函数: sub_1426e4990
// 地址: 0x1426e4990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
arg3[1] = data_143b58058.q
int32_t result = data_143b58060
arg3[2].d = result
*(arg3 + 0x14) = 0
int64_t* r14 = *(arg2 + 0xc0)
void* rbp = *(arg2 + 0xb8)

if (r14 == 0 || rbp == 0)
    return result

void* const rbx_1

if (*(arg1 + 0x88) == 0)
    rbx_1 = nullptr
else
    void* rax = sub_14272ef20()
    
    if (rax == 0)
        rbx_1 = nullptr
    else
        rbx_1 = *(arg1 + 0x88)
        int64_t rax_1 = sx.q(*(rax + 0x38))
        
        if (rax_1.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_1 << 3)) != rax + 0x30)
            rbx_1 = nullptr

int64_t rax_3 = sub_14272e650()
char r8 = *(arg1 + 0x90)
int64_t (* var_38)(void* arg1, void* arg2, char arg3)
int64_t (* var_28)(void* arg1, void* arg2, char arg3)

if (rbx_1 != rax_3)
    sub_1426a2930(rbp, &var_38, r8)
    int64_t rax_8 = *r14
    uint64_t r8_3 = zx.q(*(arg1 + 0x98))
    var_28 = var_38
    int32_t var_30
    int32_t var_20_1 = var_30
    (*(rax_8 + 0x7d8))(r14, &var_28, r8_3)
    arg3[1] = var_38
    arg3[2].d = var_30
else
    void* rax_4 = sub_1426a2600(rbp, r8)
    
    if (rax_4 != 0)
        void* rax_5 = sub_142452380()
        void* rdx_2 = *(rax_4 + 0x10)
        int64_t r8_1 = sx.q(*(rax_5 + 0x38))
        
        if (r8_1.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (r8_1 << 3)) == rax_5 + 0x30)
            (*(*r14 + 0x7e0))(r14, rax_4, zx.q(*(arg1 + 0x98)))
            *arg3 = rax_4
            *(arg3 + 0x14) = 1

char rsi_1 = *(arg1 + 0x90)
var_38 = sub_1426e4d50
int32_t var_30_1 = 0
var_28 = nullptr
int32_t var_20_2 = 0
void*** rax_9 = sub_1405978f0(0x30, &var_28)

if (rax_9 != 0)
    *rax_9 = &data_143477f88
    sub_140d3a3a0(&rax_9[1], arg1)
    *(rax_9 + 0x10) = var_38.o
    rax_9[5] = sub_140a387b0()

void arg_10
return sub_1426bbe90(rbp, &arg_10, rsi_1, arg1, &var_28)
