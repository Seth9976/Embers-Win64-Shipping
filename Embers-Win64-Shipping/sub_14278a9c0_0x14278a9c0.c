// 函数: sub_14278a9c0
// 地址: 0x14278a9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int32_t rax = *(arg2 + 8)
int32_t rdx = arg3[1].d

if (rax s> rdx)
    arg3[1].d = rax
    
    if (rax s> *(arg3 + 0xc))
        sub_1407755b0(arg3)
else if (rax s< rdx && rax != rdx)
    arg3[1].d = rax
    sub_14083ac10(arg3)

int64_t* var_38 = arg3
void** var_30 = &arg_10
void* rax_1 = *(arg1 + 0x710)
void* const var_48 = &data_14278ea10
void* var_28 = arg1
int64_t** var_40 = &var_38
sub_14077b750(*(rax_1 + 8), &var_48, 0)
int32_t rax_2 = *(arg1 + 0x16c)
int32_t rcx_3 = arg4[1].d

if (rax_2 s> rcx_3)
    arg4[1].d = rax_2
    
    if (rax_2 s> *(arg4 + 0xc))
        sub_1405a4cf0(arg4)
else if (rax_2 s< rcx_3 && rax_2 != rcx_3)
    arg4[1].d = rax_2
    sub_1405dac90(arg4)

var_48 = arg4
void** var_40_1 = &arg_10
void* rax_3 = arg_10
var_38 = sub_14278eb50
void* const* var_30_1 = &var_48
sub_14077b750(*(rax_3 + 0x18), &var_38, 0)
uint32_t rax_5 = *(arg_10 + 0xc8) * 3
int32_t rcx_8 = arg5[1].d

if (rax_5 s> rcx_8)
    arg5[1].d = rax_5
    
    if (rax_5 s> *(arg5 + 0xc))
        sub_1405a4cf0(arg5)
else if (rax_5 s< rcx_8 && rax_5 != rcx_8)
    arg5[1].d = rax_5
    sub_1405dac90(arg5)

var_38 = arg5
void** var_30_2 = &arg_10
void* rax_6 = arg_10
var_48 = sub_14278eac0
int64_t** var_40_2 = &var_38
return sub_14077b750(*(rax_6 + 0xc8), &var_48, 0)
