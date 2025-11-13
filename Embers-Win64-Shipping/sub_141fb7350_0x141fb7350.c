// 函数: sub_141fb7350
// 地址: 0x141fb7350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141fc5140(arg1)
char rax = sub_141fc18a0(arg1, arg2)

if (rax == 0)
    return rax

sub_142164160(arg1)
uint64_t r15
r15.b = *data_143f3d420 s> 0
void* rax_2 = sub_142411ce0(&arg1[0x16d], u"AsyncLoadWorldOverride=", nullptr)

if (rax_2 != 0)
    r15 = zx.q(sub_140b16cc0(rax_2))

void (* var_a8)(void* arg1, int64_t arg2) = sub_141fbef50
int32_t var_a0 = 0
void*** rax_4 = sub_140a84c80(0, 0x30, 0)

if (rax_4 != 0)
    *rax_4 = &data_142fd1390
    sub_140d3a3a0(&rax_4[1], arg1)
    *(rax_4 + 0x10) = var_a8.o
    rax_4[5] = sub_140a387b0()
    *rax_4 = &data_142fd13e8

int64_t arg_18

if (rax_4 != 0)
    sub_140599630(&data_1439aa970, 1)
    (*rax_4)[6](rax_4, &arg_18)
    int64_t r14_1 = sx.q(data_1439aa978)
    int32_t rax_7 = (r14_1 + 1).d
    bool cond:0_1 = rax_7 s<= data_1439aa97c
    data_1439aa978 = rax_7
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_1439aa970)
    
    void**** rax_10 = (r14_1 << 4) + data_1439aa970
    *rax_10 = rax_4
    rax_10[1].d = 3

int64_t* rax_12

if (*(arg1 + 0x704) != 0xffffffff)
    sub_141fc5230(arg1)
    rax_12.b = 1
else if (r15.b == 0 || *(arg1[0x28] + 0x11a) == 3)
    void var_98
    sub_1423fd810(&var_98, nullptr)
    int64_t* rax_13 = arg1[0x186]
    uint64_t var_70
    
    if (&var_70 != rax_13)
        int32_t rbx_1 = rax_13[1].d
        int64_t r14_2 = *rax_13
        int32_t var_68_1 = rbx_1
        int32_t var_64
        
        if (rbx_1 != 0 || var_64 != 0)
            sub_1405a4c70(&var_70, rbx_1, var_64)
            memcpy(var_70, r14_2, rbx_1 * 2)
        else
            int32_t var_64_1 = 0
    
    void* rax_14
    int64_t r8_4
    rax_14, r8_4 = sub_1423de4b0(data_143f5b298, arg1[0x28])
    void* rcx_12 = arg1[0x28]
    
    if (rax_14 != 0)
        sub_14242f050(rcx_12)
        sub_14217ba70(arg1, nullptr)
        void* rax_20 = sub_140cde0b0()
        sub_140d19010(rax_20, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        arg_18 = 0
        void* rax_22 = sub_140d2dfc0(sub_14249bd90(), rax_20, 0, 0, 0, 0, 0, 0, 0)
        *(rax_22 + 0x38) = arg1
        sub_141fa75e0(rax_22 + 0x40, &var_98)
        *(rax_22 + 0xa8) = 1
        *(rax_14 + 0x1a0) = rax_22
        sub_14094c030(&var_98)
        rax_12.b = 1
    else
        int64_t* rbx_2 = *(rcx_12 + 0x188)
        sub_140a2e390(&var_a8, u"No world context", r8_4)
        int32_t var_9c
        
        if (arg2 == &var_a8)
            void (* rcx_15)(void* arg1, int64_t arg2) = var_a8
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
        else
            int64_t rcx_14 = *arg2
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            *arg2 = var_a8
            arg2[1].d = var_a0
            *(arg2 + 0xc) = var_9c
        
        var_a8 = nullptr
        var_a0.q = 0
        sub_1405947f0(&var_a8, 0x11)
        int32_t var_a0_1 = var_a0 + 0x11
        
        if (var_a0 + 0x11 s> var_9c)
            sub_140594770(&var_a8)
        
        UnDecorator::getReferenceType(var_a8, u"No world context", 0x22)
        (*(*rbx_2 + 0x2e0))(rbx_2, 0, &var_a8)
        void (* rcx_20)(void* arg1, int64_t arg2) = var_a8
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        sub_14094c030(&var_98)
        rax_12.b = 0
else
    sub_141fa70e0(&arg1[0x18f], &arg1[0x186])
    sub_141fc00f0(arg1, 0)
    rax_12.b = 1

return rax_12
