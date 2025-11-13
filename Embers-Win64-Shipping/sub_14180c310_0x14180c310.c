// 函数: sub_14180c310
// 地址: 0x14180c310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe2a10
arg1[1] = &data_142fe2b40
arg1[0x1d].b = 1

if (arg1[6].b != 0)
    void* var_28 = nullptr
    int32_t i_2 = 0
    int64_t var_38 = 0
    int32_t var_30_1 = 0
    sub_1405947f0(&var_38, 0xb)
    int32_t rax_1 = var_30_1 + 0xb
    var_30_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, u"SessionEnd", 0x16)
    (*arg1)[0x19](arg1, &var_38, &var_28)
    int32_t i_1 = i_2
    void* rbx_1 = var_28
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_4 = *(rbx_1 + 0x10)
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = *rbx_1
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx_1 += 0x30
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_1 = var_28
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)

(*arg1)[4](arg1)
arg1[0x18].d = 0

if (*(arg1 + 0xc4) != 0)
    sub_1405947f0(&arg1[0x17], 0)

arg1[6].b = 0
int64_t* rbx_2 = arg1[0x2a]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rsi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rsi_1))

int64_t* rbx_3 = arg1[0x28]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

sub_1405d5770(&arg1[0x25])
DeleteCriticalSection(&arg1[0x20])
sub_14180c1a0(&arg1[0x1e])
int64_t rcx_16 = arg1[0x17]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = arg1[0x15]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

sub_14180c270(&arg1[7])
int64_t* rcx_19 = arg1[5]

if (rcx_19 != 0)
    int32_t temp4_1 = *(rcx_19 + 0xc)
    *(rcx_19 + 0xc) -= 1
    
    if (temp4_1 == 1)
        (*(*rcx_19 + 8))(rcx_19, 1)

sub_140a1d7d0(&arg1[1])
*arg1 = &data_142fe25f0
return &data_142fe25f0
