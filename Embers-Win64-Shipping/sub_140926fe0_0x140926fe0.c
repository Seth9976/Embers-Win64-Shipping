// 函数: sub_140926fe0
// 地址: 0x140926fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = &arg1[0x44]
int32_t r14 = 0x3e5
struct IDelegateInstance::VTable** i_1 = 8
struct IDelegateInstance::VTable** i

do
    *rbx = rand()
    rbx = &rbx[1]
    i = i_1
    i_1 -= 1
while (i != 1)
struct IDelegateInstance::VTable** i_3 = i_1
struct IDelegateInstance::VTable** i_5 = sub_140a84c80(0, zx.q((&i_1[6]).d), 0)
i_3 = i_5
void*** i_12 = i_5
int32_t var_40 = 3

if (i_5 != 0)
    *i_5 = &IDelegateInstance::`vftable'
    *i_12 = &data_142d3fe58
    i_12[2] = sub_14092bc60
    i_12[1] = arg1
    i_12[4] = sub_140a387b0()
    *i_12 = &data_142d3feb0

struct IDelegateInstance::VTable** i_2 = i_1
struct IDelegateInstance::VTable** i_6 = sub_140a84c80(0, 0x30, 0)
i_2 = i_6
void*** i_13 = i_6
int32_t var_50 = 3

if (i_6 != 0)
    *i_6 = &IDelegateInstance::`vftable'
    *i_13 = &data_142d3fe58
    i_13[2] = sub_14092b9f0
    i_13[1] = arg1
    i_13[4] = sub_140a387b0()
    *i_13 = &data_142d3feb0

struct IDelegateInstance::VTable** i_4 = i_1
int32_t var_2c = i_1.d
char var_24 = i_1.b
int32_t var_30 = i_1.d
sub_1405c5510(&i_4, 0x400)
int64_t rbx_1 = sx.q(var_30)
int32_t rax_4 = (rbx_1 + 0x400).d
int32_t var_30_1 = rax_4

if (rax_4 s> var_2c)
    sub_1405daba0(&i_4)

memset(rbx_1 + i_4, 0, 0x400)
sub_14093d850(&arg1[0x3e], &i_4, arg1[0x44])

if (sub_140943910(&arg1[0x3e], &i_4, &i_3, &i_2) == 0)
    r14 = -1
    
    if (arg1[0x43].d == 2)
        sub_140944100(&arg1[0x3e])
    
    sub_1409389a0(arg1)
    *(arg1[0x64] + 0x18) = 3
    (*(*arg1 + 0x198))(arg1, 0)

struct IDelegateInstance::VTable** i_9 = i_4

if (i_9 != 0)
    sub_140a74f90(i_9)

struct IDelegateInstance::VTable** i_7

if (var_50 == i_1.d)
    i_7 = i_2
label_1409271dc:
    
    if (i_7 != 0)
        sub_140a74f90(i_7)
else
    struct IDelegateInstance::VTable** i_10 = i_2
    
    if (i_10 != 0)
        (*i_10)->`scalar deleting destructor'(i_10, 0)
        i_7 = i_2
        
        if (i_7 != 0)
            i_7 = sub_140a84c80(i_7, 0, 0)
            i_2 = i_7
        
        int32_t var_50_1 = i_1.d
        goto label_1409271dc
struct IDelegateInstance::VTable** i_8

if (var_40 == i_1.d)
    i_8 = i_3
label_140927222:
    
    if (i_8 != 0)
        sub_140a74f90(i_8)
else
    struct IDelegateInstance::VTable** i_11 = i_3
    
    if (i_11 != 0)
        (*i_11)->`scalar deleting destructor'(i_11, 0)
        i_8 = i_3
        
        if (i_8 != 0)
            i_8 = sub_140a84c80(i_8, 0, 0)
            i_3 = i_8
        
        int32_t var_40_1 = i_1.d
        goto label_140927222
return zx.q(r14)
