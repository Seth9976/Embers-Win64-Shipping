// 函数: sub_142380ac0
// 地址: 0x142380ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
int32_t rdi = 0
*arg1 = &data_142d44d70
int64_t arg_8

if (data_143de5432 == 0)
    void* rcx = data_143e1a338
    
    if (rcx == 0)
        void* rax_1 = sub_140cde0b0()
        sub_140d19010(rax_1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        arg_8 = 0
        void* rax_3 = sub_140d2dfc0(sub_140baa6d0(), rax_1, 0, 0, 0, 0, 0, 0, 0)
        data_143e1a338 = rax_3
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
            rax_11 =
                *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_3) * 0x18
        
        *(rax_11 + 8) |= 0x40000000
        rcx = data_143e1a338
    
    sub_140b9aa70(rcx, arg1)
    arg1[1].b = 1

void* rcx_7 = &arg1[4]
*arg1 = &data_143336478
arg1[2] = 0
arg1[3] = 0
*(rcx_7 + 0x10) = 0
*(rcx_7 + 0x18) = 0
*(rcx_7 + 0x1c) = 0x80
void* rax_12 = *(rcx_7 + 0x10)

if (rax_12 != 0)
    rcx_7 = rax_12

*rcx_7 = 0
*(rcx_7 + 8) = 0
void* rcx_8 = &arg1[0xe]
arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
arg1[0xa] = 0
arg1[0xb].d = 0
arg1[0xc] = 0
arg1[0xd] = 0
*(rcx_8 + 0x10) = 0
*(rcx_8 + 0x18) = 0
*(rcx_8 + 0x1c) = 0x80
void* rax_13 = *(rcx_8 + 0x10)

if (rax_13 != 0)
    rcx_8 = rax_13

*rcx_8 = 0
*(rcx_8 + 8) = 0
arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
arg1[0x14] = 0
arg1[0x15].d = 0
__builtin_memset(&arg1[0x16], 0, 0x20)
arg1[0x1b] = 0
arg1[0x1c] = 0
sub_140d21fd0()
void*** rax_14 = sub_140a84c80(0, 0x30, 0)
void*** var_28 = rax_14
int32_t var_20 = 3

if (rax_14 != 0)
    rax_14[1] = arg1
    *rax_14 = &data_142d3fe58
    rax_14[2] = TPI1::fIsModifiedClass
    rax_14[4] = sub_140a387b0()
    *rax_14 = &data_142d3feb0
    sub_1408d6c30(&data_1439aad30, &arg_8, &var_28)
    void*** rax_17
    
    if (var_20 == 0)
        rax_17 = var_28
    label_142380cfd:
        
        if (rax_17 != 0)
            sub_140a74f90(rax_17)
    else
        void*** r14_1 = var_28
        
        if (r14_1 != 0)
            (*r14_1)[7](r14_1, 0)
            rax_17 = sub_140a84c80(r14_1, 0, 0)
            goto label_142380cfd

arg1[0x1a].b = 0

if (arg1[0x1b] != u"StreamableManager")
    arg1[0x1c].d = 0
    
    if (*(arg1 + 0xe4) != 0x12)
        sub_1405947f0(&arg1[0x1b], 0x12)
        rdi = arg1[0x1c].d
    
    arg1[0x1c].d = rdi + 0x12
    
    if (rdi + 0x12 s> *(arg1 + 0xe4))
        sub_140594770(&arg1[0x1b])
    
    __builtin_memcpy(arg1[0x1b], u"StreamableManager", 0x24)

return arg1
