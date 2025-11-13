// 函数: sub_140963d80
// 地址: 0x140963d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2
*arg2 = 0
arg2[1] = 0
int32_t arg_8 = 0
int128_t var_78 = zx.o(0)
sub_1405947f0(result, 0xd)
int32_t rax = result[1].d + 0xd
result[1].d = rax

if (rax s> *(result + 0xc))
    sub_140594770(result)

UnDecorator::getReferenceType(*result, u"Voice state\n", 0x1a)
int64_t* rcx_3 = arg1[7]
int64_t var_88
int32_t var_80
int64_t var_68
int64_t* rdx_2
int32_t rbx
int64_t rdi

if (rcx_3 == 0)
    var_88 = 0
    var_80 = 0
    sub_1405947f0(&var_88, 0x11)
    int32_t rax_3 = var_80 + 0x11
    var_80 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_88)
    
    rdi = var_88
    UnDecorator::getReferenceType(rdi, u"No Voice Engine!", 0x22)
    rdx_2 = &var_88
    rbx = 2
else
    int64_t* rax_2 = (*(*rcx_3 + 0xa8))(rcx_3, &var_68)
    rdi = var_88
    rbx = 1
    rdx_2 = rax_2

int32_t rax_4 = rdx_2[1].d
arg_8 = rbx
int32_t r8 = rax_4 - 1

if (rax_4 == 0)
    r8 = 0

sub_140a20ba0(result, *rdx_2, r8)

if ((rbx.b & 2) != 0)
    rbx &= 0xfffffffd
    arg_8 = rbx
    
    if (rdi != 0)
        sub_140a74f90(rdi)

if ((rbx.b & 1) != 0)
    int64_t rcx_9 = var_68
    rbx &= 0xfffffffe
    arg_8 = rbx
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

sub_140a20ba0(result, u"\nLocal Talkers:\n", 0x10)
int32_t i = 0
uint32_t var_a8
uint32_t var_a0
int64_t var_58
int64_t* arg_18

if (arg1[0xb].d s<= 0)
    arg_18 = var_78:8.q
else
    int64_t* rdi_1 = var_78:8.q
    void* rsi_1 = nullptr
    int64_t* r12_1 = var_78.q
    arg_18 = rdi_1
    
    do
        int64_t* rcx_11 = arg1[6]
        int64_t* rax_6 = (*(*rcx_11 + 0xf0))(rcx_11, &var_68, zx.q(i))
        
        if (&var_78 != rax_6)
            r12_1 = *rax_6
            *rax_6 = 0
            int64_t* rcx_12 = rax_6[1]
            
            if (rcx_12 != rdi_1)
                rax_6[1] = 0
                arg_18 = rcx_12
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp4_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t* var_60
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t temp1_1 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_60 + 8))(var_60, 1)
        
        int64_t rdi_3 = arg1[0xa]
        
        if (r12_1 != 0)
            rbx |= 4
            int64_t* rax_12 = (*(*r12_1 + 0x38))(r12_1, &var_58)
            
            if (rax_12[1].d != 0)
                *rax_12
        
        uint32_t rcx_18 = zx.d(*(rsi_1 + rdi_3 + 9))
        uint32_t rdx_7 = zx.d(*(rsi_1 + rdi_3 + 1))
        uint32_t r8_2 = zx.d(*(rsi_1 + rdi_3))
        uint32_t rax_13 = zx.d(*(rsi_1 + rdi_3 + 8))
        float var_98_1[0x2] = _mm_cvtps_pd(*(rsi_1 + rdi_3 + 4)).q
        var_a0 = rax_13
        var_a8 = rcx_18
        uint32_t var_b0_1 = rdx_7
        uint32_t var_b8_1 = r8_2
        sub_140a2e390(&var_88, 
            [%d]: %s\n Registered: %d\n Networked: %d\n Talking: %d\n WasTalking: %d\n Last:%0.2f\n", 
            zx.q(i))
        int32_t r8_5
        
        if (var_80 == 0)
            r8_5 = 0
        else
            r8_5 = var_80 - 1
        
        sub_140a20ba0(result, var_88, r8_5)
        int64_t rcx_21 = var_88
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        if ((rbx.b & 4) != 0)
            int64_t rcx_22 = var_58
            rbx &= 0xfffffffb
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
        
        rdi_1 = arg_18
        i += 1
        rsi_1 += 0xc
    while (i s< arg1[0xb].d)
    
    arg_8 = rbx

sub_140a20ba0(result, u"\nRemote Talkers:\n", 0x11)
int32_t i_1 = 0

if (arg1[0xd].d s> 0)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int64_t* rdi_4 = nullptr
    
    do
        int64_t r13 = arg1[0xc]
        int64_t* r12_2 = *(rdi_4 + r13)
        int64_t* rax_15 = (*(*r12_2 + 0x38))(r12_2, &var_58)
        
        if (rax_15[1].d != 0)
            *rax_15
        
        zmm6 = *(rdi_4 + r13 + 0x10)
        char rax_17 = (*(*arg1 + 0x128))(arg1, r12_2)
        uint32_t rcx_27 = zx.d(*(rdi_4 + r13 + 0x15))
        wchar32 const* const rdx_11 = &(*U"RGBXYZF10|")[8]
        
        if (rax_17 != 0)
            rdx_11 = &(*U"RGBXYZF10|")[7]
        
        uint32_t rax_18 = zx.d(*(rdi_4 + r13 + 0x14))
        var_a0.q = _mm_cvtps_pd(zmm6.q).q
        var_a8.q = rdx_11
        uint32_t var_b0_2 = rax_18
        uint32_t var_b8_2 = rcx_27
        sub_140a2e390(&var_78, [%d]: %s\n Talking: %d\n WasTalking: %d\n Muted: %s\n Last:%0.2f\n", 
            zx.q(i_1))
        int32_t r8_7 = var_78:8.d
        int32_t r8_8
        
        if (r8_7 == 0)
            r8_8 = 0
        else
            r8_8 = r8_7 - 1
        
        result = arg2
        sub_140a20ba0(result, var_78.q, r8_8)
        int64_t rcx_30 = var_78.q
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        int64_t rcx_31 = var_58
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        i_1 += 1
        rdi_4 = &rdi_4[3]
    while (i_1 s< arg1[0xd].d)
    
    rbx = arg_8

sub_140a20ba0(result, u"\nRaw SystemMutelist:\n", 0x15)
int32_t i_2 = 0

if (arg1[0xf].d s> 0)
    int64_t rsi_2 = 0
    
    do
        int64_t rdi_5 = arg1[0xe]
        int64_t* rcx_33 = *(rsi_2 + rdi_5 + 8)
        char rax_20
        
        if (rcx_33 != 0)
            rax_20 = (*(*rcx_33 + 0x28))(rcx_33)
        
        int64_t* rax_22
        int32_t rcx_35
        
        if (rcx_33 == 0 || rax_20 == 0)
            var_88 = 0
            int32_t var_80_1 = 0
            sub_1405947f0(&var_88, 8)
            int32_t rax_23 = var_80_1 + 8
            var_80_1 = rax_23
            
            if (rax_23 s> 0)
                sub_140594770(&var_88)
            
            UnDecorator::getReferenceType(var_88, u"INVALID", 0x10)
            rax_22 = &var_88
            rcx_35 = 0x10
        else
            int64_t* rcx_34 = *(rsi_2 + rdi_5 + 8)
            rax_22 = (*(*rcx_34 + 0x30))(rcx_34, &var_58)
            rcx_35 = 8
        
        int64_t rdi_6 = *rax_22
        rbx |= rcx_35
        *rax_22 = 0
        rax_22[1].d
        rax_22[1] = 0
        
        if ((rbx.b & 0x10) != 0)
            int64_t rcx_39 = var_88
            rbx &= 0xffffffef
            
            if (rcx_39 != 0)
                sub_140a74f90(rcx_39)
        
        if ((rbx.b & 8) != 0)
            int64_t rcx_40 = var_58
            rbx &= 0xfffffff7
            
            if (rcx_40 != 0)
                sub_140a74f90(rcx_40)
        
        sub_140a2e390(&var_78, u"[%d]=%s\n", zx.q(i_2))
        int32_t r8_10 = var_78:8.d
        int32_t r8_11
        
        if (r8_10 == 0)
            r8_11 = 0
        else
            r8_11 = r8_10 - 1
        
        sub_140a20ba0(result, var_78.q, r8_11)
        int64_t rcx_43 = var_78.q
        
        if (rcx_43 != 0)
            sub_140a74f90(rcx_43)
        
        if (rdi_6 != 0)
            sub_140a74f90(rdi_6)
        
        i_2 += 1
        rsi_2 += 0x18
    while (i_2 s< arg1[0xf].d)

sub_140a20ba0(result, u"\nRaw Mutelist:\n", 0xf)
int32_t i_3 = 0

if (arg1[0x11].d s> 0)
    int64_t rsi_3 = 0
    
    do
        int64_t rdi_7 = arg1[0x10]
        int64_t* rcx_46 = *(rsi_3 + rdi_7 + 8)
        char rax_25
        
        if (rcx_46 != 0)
            rax_25 = (*(*rcx_46 + 0x28))(rcx_46)
        
        int64_t* rax_27
        int32_t rcx_48
        
        if (rcx_46 == 0 || rax_25 == 0)
            var_88 = 0
            int32_t var_80_2 = 0
            sub_1405947f0(&var_88, 8)
            int32_t rax_28 = var_80_2 + 8
            var_80_2 = rax_28
            
            if (rax_28 s> 0)
                sub_140594770(&var_88)
            
            UnDecorator::getReferenceType(var_88, u"INVALID", 0x10)
            rax_27 = &var_88
            rcx_48 = 0x40
        else
            int64_t* rcx_47 = *(rsi_3 + rdi_7 + 8)
            rax_27 = (*(*rcx_47 + 0x30))(rcx_47, &var_58)
            rcx_48 = 0x20
        
        int64_t rdi_8 = *rax_27
        rbx |= rcx_48
        *rax_27 = 0
        rax_27[1].d
        rax_27[1] = 0
        
        if ((rbx.b & 0x40) != 0)
            int64_t rcx_52 = var_88
            rbx &= 0xffffffbf
            
            if (rcx_52 != 0)
                sub_140a74f90(rcx_52)
        
        if ((rbx.b & 0x20) != 0)
            int64_t rcx_53 = var_58
            rbx &= 0xffffffdf
            
            if (rcx_53 != 0)
                sub_140a74f90(rcx_53)
        
        sub_140a2e390(&var_78, u"[%d]=%s\n", zx.q(i_3))
        int32_t r8_13 = var_78:8.d
        int32_t r8_14
        
        if (r8_13 == 0)
            r8_14 = 0
        else
            r8_14 = r8_13 - 1
        
        sub_140a20ba0(result, var_78.q, r8_14)
        int64_t rcx_56 = var_78.q
        
        if (rcx_56 != 0)
            sub_140a74f90(rcx_56)
        
        if (rdi_8 != 0)
            sub_140a74f90(rdi_8)
        
        i_3 += 1
        rsi_3 += 0x18
    while (i_3 s< arg1[0x11].d)

if (arg_18 != 0)
    arg_18[1].d -= 1
    
    if (arg_18[1].d == 1)
        (**arg_18)(arg_18)
        int32_t temp5_1 = *(arg_18 + 0xc)
        *(arg_18 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*arg_18 + 8))(arg_18, 1)

return result
