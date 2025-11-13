// 函数: sub_1409f70b0
// 地址: 0x1409f70b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t var_48
int64_t* rax = sub_140b254c0(&var_48)
int32_t r8 = arg2[1].d
int32_t r15 = 2
int32_t rbx = r8 - 1

if (r8 == 0)
    rbx = 0

int32_t rcx_1

if (rax[1].d == 0)
    rcx_1 = 2

if (rax[1].d != 0 || rbx == 0xffffffff)
    rcx_1 = 1

int64_t var_88 = *rax
*rax = 0
int32_t rax_3 = rax[1].d
int32_t rax_4 = *(rax + 0xc)
rax[1] = 0
int32_t rdx_2 = rax_3 + rbx + rcx_1

if (rdx_2 s> rax_4)
    sub_1405947f0(&var_88, rdx_2)

sub_140a2cf70(&var_88, *arg2, rbx)
int64_t rcx_4 = var_48

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t* var_78 = nullptr
int32_t i_2 = 0
int32_t r8_2 = sub_140a464c0()
int64_t rbx_1 = var_88
int16_t* var_68 = nullptr
sub_1405a4c70(&var_68, sbb.d(r8_2, r8_2, rax_3 != 0) + 0xc + rax_3, 0)
memcpy(var_68, rbx_1, rax_3 * 2)
sub_140a2cf70(&var_68, u"*.manifest", 0xa)
int16_t* const r8_6 = &data_142d40450

if (rax_3 != 0)
    r8_6 = var_68

int64_t r9_1
r9_1.b = 1
(*(data_14399ea08 + 0x78))(&data_14399ea08, &var_78, r8_6, r9_1, 0)
int16_t* rcx_9 = var_68

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

if (i_2 != 0)
    int64_t* rbx_2 = data_143cefa40
    int64_t* r12_1 = var_78
    
    if (rbx_2 == 0)
        void arg_8
        int64_t rbx_3 = *sub_140b58260(&arg_8, u"BuildPatchServices", (rbx_2 + 1).d)
        j_sub_140b3db50()
        int64_t* rax_7 = j_sub_140b407e0(&data_143de7d78, rbx_3)
        rbx_2 = rax_7
        data_143cefa40 = rax_7
    
    int32_t rax_8 = r12_1[1].d
    int32_t rdi_2 = rax_8 - 1
    
    if (rax_8 == 0)
        rdi_2 = 0
    
    if (rax_3 != 0 || rdi_2 == 0xffffffff)
        r15 = 1
    
    int64_t var_58 = 0
    int32_t rax_10 = r15 + rdi_2
    int64_t r15_1 = var_88
    int32_t var_50_1 = rax_3
    
    if (rax_3 != 0 || rax_10 != 0)
        sub_1405a4c70(&var_58, rax_10 + rax_3, 0)
        memcpy(var_58, r15_1, rax_3 * 2)
    else
        int32_t var_4c_1 = 0
    
    sub_140a2cf70(&var_58, *r12_1, rdi_2)
    void var_38
    int64_t* rax_12 = (*(*rbx_2 + 0x58))(rbx_2, &var_38, &var_58)
    
    if (arg1 != rax_12)
        *arg1 = *rax_12
        *rax_12 = 0
        sub_1405aeff0(&arg1[1], &rax_12[1])
    
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t rdi_3 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (rdi_3 == 1)
                (*(*var_30 + 8))(var_30, zx.q(rdi_3))
    
    int64_t rcx_18 = var_58
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)

int32_t i_1 = i_2
int64_t* rbx_5 = var_78

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_19 = *rbx_5
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        rbx_5 = &rbx_5[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_5 = var_78

if (rbx_5 != 0)
    sub_140a74f90(rbx_5)

int64_t rcx_21 = var_88

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

return arg1
