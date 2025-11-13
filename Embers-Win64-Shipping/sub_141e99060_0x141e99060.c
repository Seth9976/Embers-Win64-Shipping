// 函数: sub_141e99060
// 地址: 0x141e99060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || sub_140d23dc0(arg1, 0x30) != 0)
    return 

int32_t rax_1 = *(arg1 + 0xc)
void* const rax_8

if (rax_1 s>= data_143e1d9b4)
    rax_8 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_1)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_1
    rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18

if (((*(rax_8 + 8) u>> 0x1d).b & 1) != 0)
    return 

uint64_t rbx_1 = *(arg2 + 0x90)
uint32_t rcx_6
rcx_6.b = (rbx_1 u>> 0x20).d == 0

if ((rcx_6.b & sub_140b5b8a0(rbx_1.d, 0)) != 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

int32_t var_a8_1 = 0
void* rax_12 = sub_140d2dfc0(sub_1425b5450(), arg1, rbx_1, 0, 0, 0, 0, 0, 0)
*(rax_12 + 0x8c) = 2
int64_t r14_1 = sx.q(*(arg1 + 0x208))
int32_t rcx_9 = (r14_1 + 1).d
*(arg1 + 0x208) = rcx_9

if (rcx_9 s> *(arg1 + 0x20c))
    sub_1405a4d70(arg1 + 0x200)

*(*(arg1 + 0x200) + (r14_1 << 3)) = rax_12
sub_141ef67d0(rax_12)
sub_1423f0980(rax_12, arg1)
sub_1423efc10(rax_12, *(arg2 + 0x98))
sub_1423f0af0(rax_12, *(arg2 + 0x28))
sub_1423f0b40(rax_12, *(arg2 + 0x2c))
void* rax_14 = sub_141b719f0(*(arg1 + 0x10), *(arg2 + 0x90))

if (rax_14 != 0)
    int64_t r9_1 = *rax_14
    (*(r9_1 + 0x148))(rax_14, sx.q(*(rax_14 + 0x4c)) + arg1, rax_12, r9_1)

int32_t i = 0
int128_t var_48
int32_t j_1
int128_t var_38

if (*(arg2 + 0x38) s> 0)
    int64_t r14_2 = 0
    
    do
        int64_t r15_1 = *(arg2 + 0x30)
        
        if (*(r14_2 + r15_1 + 0x20) != 0)
            int128_t var_78
            sub_140d3a3a0(&var_78, nullptr)
            int64_t rbx_2 = *(r14_2 + r15_1 + 0x18)
            int64_t var_70_1 = 0
            sub_140d3a3a0(&var_78, arg1)
            int64_t var_70_2 = rbx_2
            sub_141f89790(*(r14_2 + r15_1 + 0x20) + 0x30, &var_48)
            int32_t j = j_1
            
            while (j s>= 0)
                int64_t* rdx_13 = var_48.q
                
                if (j s>= rdx_13[1].d)
                    break
                
                var_38 = var_78
                sub_1423d19e0(rax_12, *(sx.q(j) * 0x1c + *rdx_13 + 4), &var_38)
                j = j_1 + 1
                j_1 = j
        
        i += 1
        r14_2 += 0x28
    while (i s< *(arg2 + 0x38))

int32_t i_1 = 0

if (*(arg2 + 0x48) s> 0)
    int64_t rbx_4 = 0
    
    do
        int64_t r14_3 = *(arg2 + 0x40)
        
        if (*(rbx_4 + r14_3 + 0x20) != 0)
            sub_140d3a3a0(&var_48, nullptr)
            int64_t rax_18 = *(rbx_4 + r14_3 + 8)
            int64_t r9_2 = *(rbx_4 + r14_3 + 0x18)
            int64_t rdx_14 = *(rbx_4 + r14_3 + 0x20)
            j_1.q = 0
            var_38 = var_48
            var_a8_1.q = rax_18
            sub_1423d1ad0(rax_12, rdx_14, &var_38, r9_2, 0)
        
        i_1 += 1
        rbx_4 += 0x28
    while (i_1 s< *(arg2 + 0x48))

int32_t i_2 = 0

if (*(arg2 + 0x58) s> 0)
    int64_t rbx_5 = 0
    
    do
        int64_t r14_4 = *(arg2 + 0x50)
        
        if (*(rbx_5 + r14_4 + 0x20) != 0)
            sub_140d3a3a0(&var_48, nullptr)
            int64_t rax_19 = *(rbx_5 + r14_4 + 8)
            int64_t r9_3 = *(rbx_5 + r14_4 + 0x18)
            int64_t rdx_15 = *(rbx_5 + r14_4 + 0x20)
            j_1.q = 0
            var_38 = var_48
            var_a8_1.q = rax_19
            sub_1423d1cf0(rax_12, rdx_15, &var_38, r9_3, 0)
        
        i_2 += 1
        rbx_5 += 0x28
    while (i_2 s< *(arg2 + 0x58))

int32_t i_3 = 0

if (*(arg2 + 0x68) s> 0)
    int64_t rbx_6 = 0
    
    do
        int64_t r14_5 = *(arg2 + 0x60)
        
        if (*(rbx_6 + r14_5 + 0x20) != 0)
            sub_140d3a3a0(&var_48, nullptr)
            int64_t rax_20 = *(rbx_6 + r14_5 + 8)
            int64_t r9_4 = *(rbx_6 + r14_5 + 0x18)
            int64_t rdx_16 = *(rbx_6 + r14_5 + 0x20)
            j_1.q = 0
            var_38 = var_48
            var_a8_1.q = rax_20
            sub_1423d1be0(rax_12, rdx_16, &var_38, r9_4, 0)
        
        i_3 += 1
        rbx_6 += 0x28
    while (i_3 s< *(arg2 + 0x68))

int128_t var_68
sub_140d3a3a0(&var_68, nullptr)
int64_t rbx_7 = *(arg2 + 0xa0)
int64_t var_60_1 = 0
sub_140d3a3a0(&var_68, arg1)
int64_t var_60_2 = rbx_7
var_38 = var_68
sub_1423f0b50(rax_12, &var_38)
int128_t var_58
sub_140d3a3a0(&var_58, nullptr)
int64_t rbx_8 = *(arg2 + 0xa8)
int64_t var_50_1 = 0
sub_140d3a3a0(&var_58, arg1)
int64_t var_50_2 = rbx_8
var_38 = var_58
sub_1423f0ac0(rax_12, &var_38)
sub_141ef1390(rax_12)
uint8_t rax = *(arg2 + 0x2d)

if ((rax & 1) != 0)
    *(rax_12 + 0x89) |= 0x80
    sub_1423ea7e0(rax_12)
    rax = *(arg2 + 0x2d)

if ((rax & 2) != 0)
    sub_1423efee0(rax_12, 1)
    rax = *(arg2 + 0x2d)

if ((rax & 4) != 0)
    sub_141ef6150(rax_12, 1)
    rax = *(arg2 + 0x2d)

if ((rax & 8) != 0)
    sub_1423efe40(rax_12, 1)
