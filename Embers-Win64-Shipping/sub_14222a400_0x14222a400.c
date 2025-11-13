// 函数: sub_14222a400
// 地址: 0x14222a400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1423ba590(arg1)
arg1[2].b = 0
arg1[1] = &data_142d44d70

if (data_143de5432 == 0)
    void* rcx = data_143e1a338
    
    if (rcx == 0)
        void* rax_1 = sub_140cde0b0()
        sub_140d19010(rax_1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        int64_t arg_8 = 0
        void* rax_3 = sub_140d2dfc0(sub_140baa6d0(), rax_1, 0, 0, 0, 0, 0, 0, 0)
        data_143e1a338 = rax_3
        int32_t rax_4 = *(rax_3 + 0xc)
        void* const rax_11
        
        if (rax_4 s>= data_143e1d9b4)
            rax_11 = nullptr
        else
            int16_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(rax_4)
            uint32_t rdx_2 = zx.d(temp1_1)
            int32_t rax_6 = temp2_1 + rdx_2
            rax_11 =
                *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_2) * 0x18
        
        *(rax_11 + 8) |= 0x40000000
        rcx = data_143e1a338
    
    sub_140b9aa70(rcx, &arg1[1])
    arg1[2].b = 1

void* rcx_7 = &arg1[7]
*arg1 = &data_143306e88
arg1[1] = &data_143306ec8
__builtin_memset(&arg1[3], 0, 0x20)
*(rcx_7 + 0x10) = 0
*(rcx_7 + 0x18) = 0
*(rcx_7 + 0x1c) = 0x80
void* rax_12 = *(rcx_7 + 0x10)

if (rax_12 != 0)
    rcx_7 = rax_12

*rcx_7 = 0
*(rcx_7 + 8) = 0
void* rcx_8 = &arg1[0x17]
arg1[0xb].d = 0xffffffff
*(arg1 + 0x5c) = 0
arg1[0xd] = 0
arg1[0xe].d = 0
__builtin_memset(&arg1[0xf], 0, 0x40)
*(rcx_8 + 0x1c) = 0x80
void* rax_13 = *(rcx_8 + 0x10)

if (rax_13 != 0)
    rcx_8 = rax_13

__builtin_memset(rcx_8, 0, 0x1c)
void* rcx_9 = &arg1[0x21]
arg1[0x1b].d = 0xffffffff
*(arg1 + 0xdc) = 0
arg1[0x1d] = 0
arg1[0x1e].d = 0
arg1[0x1f] = 0
arg1[0x20] = 0
*(rcx_9 + 0x1c) = 0x80
void* rax_14 = *(rcx_9 + 0x10)

if (rax_14 != 0)
    rcx_9 = rax_14

__builtin_memset(rcx_9, 0, 0x1c)
arg1[0x25].d = 0xffffffff
*(arg1 + 0x12c) = 0
arg1[0x27] = 0
arg1[0x28].d = 0
sub_140d3a3a0(&arg1[0x29], arg2)
arg1[0x2a].b = 0
InitializeSRWLock(&arg1[0x2c])
arg1[0x2b].d = TlsAlloc()
*(arg1 + 0x15c)
*(arg1 + 0x15c) = 0
j_sub_140b3db50()
void arg_20
arg1[0x13] = sub_140b3dbe0(*sub_140b58170(&arg_20, "ChaosSolvers", 1))
int64_t rax_21

if (sub_140d3c6e0(&arg1[0x29]) == 0)
    rax_21 = 0
else
    int64_t* rax_20 = sub_140d3c6e0(&arg1[0x29])
    int64_t rdx_6 = *rax_20
    rax_21 = (*(rdx_6 + 0x150))(rax_20, rdx_6)

int64_t rax_22 = sub_141d367a0(arg1[0x13], rax_21)
void* rcx_18 = arg1[0x13]
arg1[0x14] = rax_22
int64_t (* var_60)(void* arg1)

if (sub_140963350(rcx_18) != 0)
    int64_t* rax_24 = sub_140963350(arg1[0x13])
    int64_t rdx_8 = *rax_24
    
    if ((*(rdx_8 + 0x20))(rax_24, rdx_8) == 0)
        void*** rdi_1 = data_143f514c8
        int64_t* (* var_70)(void* arg1)
        
        if (rdi_1 == 0)
            void*** rax_26 = j_sub_140a82f30(zx.q((&rdi_1[6]).d))
            rdi_1 = rax_26
            
            if (rax_26 == 0)
                rdi_1 = nullptr
                data_143f514c8 = 0
            else
                sub_1423ba590(rax_26)
                *rdi_1 = &data_143307160
                rdi_1[1] = 0
                rdi_1[2] = 0
                rdi_1[3] = 2
                rdi_1[5] = 0
                j_sub_140b3db50()
                void var_78
                rdi_1[4] = sub_140b3dbe0(*sub_140b58170(&var_78, "ChaosSolvers", 1))
                void*** rax_29 = sub_140a84c80(0, 0x30, 0)
                
                if (rax_29 != 0)
                    rax_29[1] = rdi_1
                    *rax_29 = &data_142d3fe58
                    rax_29[2] = sub_142234060
                    rax_29[4] = sub_140a387b0()
                    *rax_29 = &data_142d3feb0
                
                int64_t rbx_2 = 0
                
                if (rax_29 != 0)
                    sub_140599630(&data_143a306e0, 1)
                    int64_t* rax_32 = (*rax_29)[6](rax_29, &var_70)
                    int64_t rbp_1 = sx.q(data_143a306e8)
                    rbx_2 = *rax_32
                    int32_t rax_33 = (rbp_1 + 1).d
                    bool cond:1_1 = rax_33 s<= data_143a306ec
                    data_143a306e8 = rax_33
                    
                    if (not(cond:1_1))
                        sub_1405a4f90(&data_143a306e0)
                    
                    void** rax_36 = (rbp_1 << 4) + data_143a306e0
                    *rax_36 = rax_29
                    rax_36[1].d = 3
                
                rdi_1[5] = rbx_2
                data_143f514c8 = rdi_1
        
        int32_t var_68_1 = 0
        var_70 = sub_142233fc0
        void*** rax_37 = sub_140a84c80(0, 0x30, 0)
        
        if (rax_37 != 0)
            int128_t zmm0_1 = var_70.o
            *rax_37 = &data_142e22de8
            rax_37[1] = arg1
            *(rax_37 + 0x10) = zmm0_1
            rax_37[5] = sub_140a387b0()
            *rax_37 = &data_142e22e40
        
        if (rax_37 != 0)
            sub_140599630(&rdi_1[1], 1)
            (*rax_37)[6](rax_37, &var_60)
            int64_t rbp_2 = sx.q(rdi_1[2].d)
            int32_t rax_40 = (rbp_2 + 1).d
            rdi_1[2].d = rax_40
            
            if (rax_40 s> *(rdi_1 + 0x14))
                sub_1405a4f90(&rdi_1[1])
            
            void**** rax_43 = &rdi_1[1][rbp_2 * 2]
            *rax_43 = rax_37
            rax_43[1].d = 3

int32_t var_58 = 0
var_60 = sub_142235250
void*** rax_44 = sub_140a84c80(0, 0x30, 0)

if (rax_44 != 0)
    int128_t zmm0_2 = var_60.o
    *rax_44 = &data_142e22de8
    rax_44[1] = arg1
    *(rax_44 + 0x10) = zmm0_2
    rax_44[5] = sub_140a387b0()
    *rax_44 = &data_142e22e40

int64_t (* var_50)(void* arg1, void* arg2)

if (rax_44 != 0)
    sub_140599630(&data_14399fce8, 1)
    (*rax_44)[6](rax_44, &var_50)
    int64_t rdi_2 = sx.q(data_14399fcf0)
    int32_t rax_47 = (rdi_2 + 1).d
    bool cond:0_1 = rax_47 s<= data_14399fcf4
    data_14399fcf0 = rax_47
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_14399fce8)
    
    void**** rax_50 = (rdi_2 << 4) + data_14399fce8
    *rax_50 = rax_44
    rax_50[1].d = 3

sub_1408d84f0(&arg1[0x15])
sub_1408d84f0(&arg1[0x1f])
int32_t var_48 = 0
void* rbx_5 = arg1[0x14][0x6a]
var_50 = sub_142233530
AcquireSRWLockExclusive(rbx_5 + 0x20)
void*** rax_52 = j_sub_140a82f30(0x20)

if (rax_52 == 0)
    rax_52 = nullptr
else
    int128_t zmm0_3 = var_50.o
    rax_52[1] = arg1
    *rax_52 = &data_1433071a0
    *(rax_52 + 0x10) = zmm0_3

void*** arg_18 = rax_52
int64_t* rcx_33 = **(rbx_5 + 8)
(*(*rcx_33 + 8))(rcx_33, &arg_18)
ReleaseSRWLockExclusive(rbx_5 + 0x20)
return arg1
