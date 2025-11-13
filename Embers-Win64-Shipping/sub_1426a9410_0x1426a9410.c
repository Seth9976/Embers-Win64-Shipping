// 函数: sub_1426a9410
// 地址: 0x1426a9410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void* const rsi = arg4
int64_t var_38
int64_t* rax = sub_140b63b70(&arg_18, &var_38)
int16_t* const r14 = &data_142d40450
int16_t* const r8

if (rax[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax

int16_t* var_48
sub_140a2e390(&var_48, u"%s_Object", r8)
int32_t var_40

if (var_40 != 0)
    r14 = var_48

uint64_t arg_8
uint64_t arg_20
sub_140d25240(&arg_8, arg2, sub_14272e650(), *sub_140b58260(&arg_20, r14, 1))
int16_t* rcx_4 = var_48

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = var_38

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

uint64_t rbx_1 = arg_8
arg_20 = rbx_1
char rax_3 = sub_140b5b8a0(rbx_1.d, 0)
int32_t rcx_6
rcx_6.b = arg_20:4.d == 0

if ((rcx_6.b & rax_3) != 0)
    sub_140d19010(arg2, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* rax_5 = sub_140d2dfc0(sub_14272e650(), arg2, rbx_1, 0, 0, 0, 0, 0, 0)

if (rsi == 0)
    rsi = nullptr
else
    void* rax_6 = sub_140d41340()
    
    if (rax_6 == 0)
        rsi = nullptr
    else
        int64_t rcx_9 = sx.q(*(rax_6 + 0x38))
        
        if (rcx_9.d s> *(rsi + 0x38) || *(*(rsi + 0x30) + (rcx_9 << 3)) != rax_6 + 0x30)
            rsi = nullptr

*(rax_5 + 0x30) = rsi
int64_t rbx_2 = sx.q(arg1[1].d)
int32_t rax_8 = (rbx_2 + 1).d
arg1[1].d = rax_8

if (rax_8 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

int64_t result = *arg1
*(result + (rbx_2 << 3)) = rax_5
return result
