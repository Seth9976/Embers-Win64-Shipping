// 函数: sub_14243a740
// 地址: 0x14243a740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14_1 = *arg2 & 0x100

if (r14_1 == 0)
    *(arg1 + 8) &= 0xfffffff7

int64_t arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"PersistentLevel", 1)
uint32_t rcx_3
rcx_3.b = (rbx u>> 0x20).d == 0

if ((rcx_3.b & sub_140b5b8a0(rbx.d, 0)) != 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

*(arg1 + 0x30) = sub_140d2dfc0(sub_142527690(), arg1, rbx, 0, 0, 0, 0, 0, 0)
int64_t var_98
int64_t* rax_4 = sub_1423fd810(&var_98, nullptr)
sub_1420e5b70(*(arg1 + 0x30), rax_4)
int64_t var_40

if (var_40 != 0)
    sub_140a74f90(var_40)

int32_t i_2
int32_t i_1 = i_2
int64_t* var_50
int64_t* rbx_1 = var_50

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_9 = *rbx_1
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_50

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t var_60

if (var_60 != 0)
    sub_140a74f90(var_60)

int64_t var_70

if (var_70 != 0)
    sub_140a74f90(var_70)

int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t rcx_14 = var_98

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

void* rbx_2 = *(arg1 + 0x30)
sub_140d19010(rbx_2, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8 = 0
int32_t var_108 = 0
*(*(arg1 + 0x30) + 0xc0) = sub_140d2dfc0(sub_142149b40(), rbx_2, 0, 0, 0, 0, 0, 0, 0)
sub_14214d590(*(*(arg1 + 0x30) + 0xc0), nullptr, 1)
*(*(arg1 + 0x30) + 0xb8) = arg1
char var_af
char var_af_1 = var_af & 0xf0
void* rax_8 = *(arg1 + 0x30)
char var_ae = 0
int128_t var_d0
__builtin_memset(&var_d0, 0, 0x20)

if (r14_1 == 0)
    int32_t var_ac_1 = 0
    *(rax_8 + 8) &= 0xfffffff7
    void* rcx_21 = *(*(arg1 + 0x30) + 0xc0)
    *(rcx_21 + 8) &= 0xfffffff7
else
    int32_t var_ac = 8
    *(rax_8 + 8) |= 8
    void* rcx_20 = *(*(arg1 + 0x30) + 0xc0)
    *(rcx_20 + 8) |= 8

void* rbx_3 = data_143f5b298
char var_b0 = 1
void* const rdx_3

if (*(rbx_3 + 0x158) == 0)
    rdx_3 = nullptr
else
    void* rax_11 = sub_1425bd0d0()
    
    if (rax_11 == 0)
        rdx_3 = nullptr
    else
        rdx_3 = *(rbx_3 + 0x158)
        int64_t rax_12 = sx.q(*(rax_11 + 0x38))
        
        if (rax_12.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
            rdx_3 = nullptr

void* rbx_4 = data_143f5b298
int64_t var_d8 = *(rdx_3 + 0x18)
int64_t* rdx_4

if (*(rbx_4 + 0x158) == 0)
    rdx_4 = nullptr
else
    void* rax_15 = sub_1425bd0d0()
    
    if (rax_15 == 0)
        rdx_4 = nullptr
    else
        rdx_4 = *(rbx_4 + 0x158)
        int64_t rax_16 = sx.q(*(rax_15 + 0x38))
        
        if (rax_16.d s> rdx_4[7].d || *(rdx_4[6] + (rax_16 << 3)) != rax_15 + 0x30)
            rdx_4 = nullptr

var_108.q = &var_d8
void* rax_18 = sub_1420efae0(arg1, rdx_4, nullptr, nullptr, var_108)
void* rbx_5 = *(arg2 + 8)

if (rbx_5 != 0)
    void* rax_19 = sub_1424b14e0()
    
    if (rax_19 != 0)
        int64_t rcx_25 = sx.q(*(rax_19 + 0x38))
        
        if (rcx_25.d s<= *(rbx_5 + 0x38) && *(*(rbx_5 + 0x30) + (rcx_25 << 3)) == rax_19 + 0x30)
            *(rax_18 + 0x268) = rbx_5

sub_1420ee710(*(arg1 + 0x30), rax_18)
int128_t var_a8 = *arg2
sub_142439130(arg1, &var_a8)
return sub_14244a9a0(arg1, 1, 0, nullptr)
