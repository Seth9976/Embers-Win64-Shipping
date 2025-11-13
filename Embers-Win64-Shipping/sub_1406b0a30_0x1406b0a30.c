// 函数: sub_1406b0a30
// 地址: 0x1406b0a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = arg3
int64_t r8 = arg1[3]
void* var_38
void* var_28

if (r8 u< arg2)
    int64_t rcx = *arg1
    void* rcx_1
    
    if (r8 s>= 0 || neg.q(r8) == 0)
        rcx_1 = rcx + (r8 u>> 5 << 2)
    else
        rcx_1 = rcx - ((not.q(r8) u>> 5 << 2) + 4)
    
    var_28 = rcx_1
    uint64_t var_20_1 = zx.q(r8.d) & 0x1f
    sub_1406adf70(arg1, &var_38, &var_28, arg2 - r8, &arg_18)
    return 

if (r8 u<= arg2)
    return 

int64_t r9_2 = *arg1

if (r8 s>= 0 || neg.q(r8) == 0)
    var_38 = r9_2 + (r8 u>> 5 << 2)
else
    var_38 = r9_2 - ((not.q(r8) u>> 5 << 2) + 4)

uint64_t var_30_1 = zx.q(r8.d) & 0x1f

if (arg2 s>= 0 || neg.q(arg2) == 0)
    var_28 = r9_2 + (arg2 u>> 5 << 2)
else
    var_28 = r9_2 - ((not.q(arg2) u>> 5 << 2) + 4)

var_38.o = var_38.o
uint64_t var_20_2 = zx.q(arg2.d) & 0x1f
var_28.o = var_28.o
void* var_18
sub_1406b04b0(arg1, &var_18, &var_28, &var_38)
