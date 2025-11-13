// 函数: sub_142826880
// 地址: 0x142826880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
sub_142824334(arg1 + 0x10, &var_28, arg3)
void* var_18
int64_t* rdx_2

if (*(var_18 + 0x19) == 0)
    if (sub_142824260(arg3, var_18 + 0x20) != 0 || var_18 == *(arg1 + 0x10))
        goto label_1428268db
    
    rdx_2 = var_18 + 0x40
    goto label_142826908

label_1428268db:

if (sub_14060ab10(arg3, "!!") == 0)
    rdx_2 = arg3
label_142826908:
    arg2[1].q = 0
    *(arg2 + 0x18) = 0
    sub_140593830(arg2, rdx_2)
else
    arg2[1].q = 0
    *(arg2 + 0x18) = 0xf
    *arg2 = 0
    SimpleString::operator=(arg2, "tag:yaml.org,2002:")

return arg2
