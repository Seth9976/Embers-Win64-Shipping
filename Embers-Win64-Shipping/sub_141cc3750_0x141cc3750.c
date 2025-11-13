// 函数: sub_141cc3750
// 地址: 0x141cc3750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_78)
int64_t var_50[0x5]
sub_140b56c10(&var_50, 1, u"UGameplayTagsManager::InitializeManager", 0, 2)
int64_t arg_8 = 0
void* rax = sub_140cde0b0()

if ((1 & sub_140b5b8a0(0, 0)) != 0)
    sub_140d19010(rax, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* rax_3 = sub_140d2dfc0(sub_141cc7de0(), rax, 0, 0, 0, 0, 0, 0, 0)
data_143f35848 = rax_3
int32_t rax_4 = *(rax_3 + 0xc)
void* const rax_11

if (rax_4 s>= data_143e1d9b4)
    rax_11 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_4)
    uint32_t rdx_3 = zx.d(temp0_1)
    int32_t rax_6 = temp1_1 + rdx_3
    rax_11 = *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_3) * 0x18

*(rax_11 + 8) |= 0x40000000
int64_t* rax_12 = sub_141cc79c0()
void* rsi = rax_12[0x23]

if (rsi == 0)
    int64_t rdx_5 = *rax_12
    (*(rdx_5 + 0x390))(rax_12, rdx_5)
    rsi = rax_12[0x23]

void* rcx_9 = data_143ddb400
int64_t* var_b8 = nullptr
int32_t var_b0 = 0
int64_t* rdx_6
int512_t zmm1
rdx_6, zmm1 = sub_140af2c50(rcx_9, GameplayTags", +GameplayTagTableList", &var_b8, &data_143de5780)
int64_t rbx_1 = sx.q(var_b0)
int64_t* rdi_1 = var_b8

if (rbx_1.d s> 0)
    void* r15_3 = &rdi_1[rbx_1 * 2]
    
    if (rdi_1 != r15_3)
        do
            int64_t var_a8
            __builtin_memset(&var_a8, 0, 0x18)
            void var_60
            int128_t var_88 = *sub_140a1dfc0(rdi_1, &var_60)
            zmm1 = sub_140d2c760(&var_a8, &var_88)
            int64_t* r12_1 = *(rsi + 0x70)
            int64_t* rbx_2 = r12_1
            void* r14_1 = &r12_1[sx.q(*(rsi + 0x78)) * 3]
            int64_t rdx_11
            
            if (r12_1 != r14_1)
                while (sub_140d16af0(rbx_2, &var_a8) == 0)
                    rbx_2 = &rbx_2[3]
                    
                    if (rbx_2 == r14_1)
                        goto label_141cc3962
                
                int64_t rax_16
                int64_t rdx_10
                rdx_10:rax_16 = muls.dp.q(0x2aaaaaaaaaaaaaab, rbx_2 - r12_1)
                rdx_11 = rdx_10 s>> 2
            
            int64_t var_a0_1
            
            if (r12_1 == r14_1 || (rdx_11 + (rdx_11 u>> 0x3f)).d == 0xffffffff)
            label_141cc3962:
                int64_t rbx_4 = sx.q(*(rsi + 0x78))
                int32_t rax_19 = (rbx_4 + 1).d
                *(rsi + 0x78) = rax_19
                
                if (rax_19 s> *(rsi + 0x7c))
                    sub_1405a4df0(rsi + 0x70)
                
                rdx_6 = *(rsi + 0x70) + rbx_4 * 0x18
                *rdx_6 = var_a8
                rdx_6[1] = 0
                rdx_6[1] = var_a0_1
                var_a0_1 = 0
                int64_t var_98_1
                rdx_6[2].d = var_98_1.d
                *(rdx_6 + 0x14) = var_98_1:4.d
                int64_t var_98_2 = 0
            
            if (var_a0_1 != 0)
                rdx_6, zmm1 = sub_140a74f90(var_a0_1)
            
            rdi_1 = &rdi_1[2]
        while (rdi_1 != r15_3)
        
        rbx_1 = zx.q(var_b0)
        rdi_1 = var_b8

if (rbx_1.d != 0)
    int32_t i
    
    do
        int64_t rcx_17 = *rdi_1
        
        if (rcx_17 != 0)
            rdx_6, zmm1 = sub_140a74f90(rcx_17)
        
        rdi_1 = &rdi_1[2]
        i = rbx_1.d
        rbx_1 = zx.q(rbx_1.d - 1)
    while (i != 1)
    rdi_1 = var_b8

if (rdi_1 != 0)
    rdx_6, zmm1 = sub_140a74f90(rdi_1)

rdx_6.b = 1
int32_t rdx_13 = sub_141cc3e90(data_143f35848, rdx_6.b, zmm1)
sub_141cbfee0(data_143f35848, rdx_13)
void* rdi_2 = data_143f35848
void*** rax_25 = sub_140a84c80(0, 0x30, 0)

if (rax_25 != 0)
    *rax_25 = &data_142d57800
    sub_140d3a3a0(&rax_25[1], rdi_2)
    rax_25[2] = sub_141cc1b30
    rax_25[4] = sub_140a387b0()
    *rax_25 = &data_142d57858

if (rax_25 != 0)
    sub_140599630(&data_14399fca0, 1)
    (*rax_25)[6](rax_25, &arg_8)
    int64_t rdi_3 = sx.q(data_14399fca8)
    int32_t rax_28 = (rdi_3 + 1).d
    bool cond:0_1 = rax_28 s<= data_14399fcac
    data_14399fca8 = rax_28
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_14399fca0)
    
    void**** rax_31 = (rdi_3 << 4) + data_14399fca0
    *rax_31 = rax_25
    rax_31[1].d = 3

sub_140b56d00(&var_50)
return pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_78)
