// 函数: sub_141c91b40
// 地址: 0x141c91b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
*arg1 = &data_14320fe68
InitializeCriticalSection(&arg1[1])
SetCriticalSectionSpinCount(&arg1[1], 0xfa0)
void* rcx_2 = &arg1[0x20]
__builtin_memset(&arg1[6], 0, 0x24)
void* rbx = &arg1[8]
void* r12 = &arg1[0x17]
void* r15 = arg1 + 0xb4
*(arg1 + 0x54) = arg4
void* rdi_1 = &arg1[0x14]
*(arg1 + 0x55) = 0
__builtin_memset(&arg1[0xb], 0, 0x58)
*r15 = arg2[1].d
__builtin_memset(r12, 0, 0x12)
__builtin_memset(&arg1[0x1a], 0, 0x30)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_3 = *(rcx_2 + 0x10)

if (rax_3 != 0)
    rcx_2 = rax_3

*rcx_2 = 0
*(rcx_2 + 8) = 0
void* rcx_3 = &arg1[0x2a]
arg1[0x24].d = 0xffffffff
*(arg1 + 0x124) = 0
arg1[0x26] = 0
arg1[0x27].d = 0
arg1[0x28] = 0
arg1[0x29] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_4 = *(rcx_3 + 0x10)

if (rax_4 != 0)
    rcx_3 = rax_4

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x2e].d = 0xffffffff
*(arg1 + 0x174) = 0
arg1[0x30] = 0
arg1[0x31].d = 0
arg1[0x32] = 0
sub_140af2b60()
arg1[0x16].b = sub_140b21a10(&data_143dbb3f0, u"ForceDependsGathering") != 0
sub_140af2b60()
char rax_6 = sub_140b21a10(&data_143dbb3f0, u"NoAssetRegistryCache")
char rax_7

if (rax_6 == 0)
    sub_140af2b60()
    rax_7 = sub_140b21a10(&data_143dbb3f0, u"multiprocess")

if (rax_6 != 0 || rax_7 != 0)
    arg1[0x19].b = 0
else if (arg5 != 0)
    if (arg5 != 1)
        int64_t r15_1 = sx.q(arg2[1].d)
        
        if (r15_1.d s> 0)
            int64_t* rdi_3 = *arg2
            int32_t rax_17 = rdi_3[1].d
            int16_t* rdx_4
            
            if (rax_17 == 0)
                rdx_4 = &data_142d40450
            else
                rdx_4 = *rdi_3
            
            int32_t rcx_11 = rax_17 - 1
            
            if (rax_17 == 0)
                rcx_11 = 0
            
            int32_t rbx_2 = sub_1405969c0(rcx_11, rdx_4)
            
            if (r15_1 s> 1)
                void* rdi_4 = &rdi_3[2]
                int64_t i_1 = r15_1 - 1
                int64_t i
                
                do
                    int32_t rcx_12 = *(rdi_4 + 8)
                    int32_t rcx_13
                    int16_t* rdx_5
                    
                    if (rcx_12 == 0)
                        rdx_5 = &data_142d40450
                        rcx_13 = 0
                    else
                        rdx_5 = *rdi_4
                        rcx_13 = rcx_12 - 1
                    
                    int32_t rax_19 = sub_1405969c0(rcx_13, rdx_5)
                    int32_t rbx_4 = (rbx_2 - rax_19) ^ rax_19 u>> 0xd
                    rdi_4 += 0x10
                    int32_t r8_4 = (0x9e3779b9 - rbx_4 - rax_19) ^ rbx_4 << 8
                    int32_t rbx_8 = (rax_19 - r8_4 - rbx_4) ^ r8_4 u>> 0xd
                    int32_t rdx_9 = (rbx_4 - r8_4 - rbx_8) ^ rbx_8 u>> 0xc
                    int32_t r8_7 = (r8_4 - rdx_9 - rbx_8) ^ rdx_9 << 0x10
                    int32_t rbx_11 = (rbx_8 - r8_7 - rdx_9) ^ r8_7 u>> 5
                    int32_t rdx_12 = (rdx_9 - r8_7 - rbx_11) ^ rbx_11 u>> 3
                    int32_t r8_10 = (r8_7 - rdx_12 - rbx_11) ^ rdx_12 << 0xa
                    rbx_2 = (rbx_11 - r8_10 - rdx_12) ^ r8_10 u>> 0xf
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                r12 = &arg1[0x17]
            
            arg1[0x16].b
            arg1[0x19].b = 1
            int16_t* var_120
            sub_140a2e390(&var_120, u"%08x%s.bin", zx.q(rbx_2))
            int64_t var_100
            int64_t* rax_32 = sub_140b25230(&var_100)
            int32_t rdx_13 = rax_32[1].d
            int32_t rdx_14 = neg.d(rdx_13)
            int64_t var_158 = *rax_32
            *rax_32 = 0
            int32_t rcx_21 = rax_32[1].d
            int32_t rcx_22 = *(rax_32 + 0xc)
            rax_32[1] = 0
            int32_t rdx_17 = sbb.d(rdx_14, rdx_14, rdx_13 != 0) + 0x14 + rcx_21
            
            if (rdx_17 s> rcx_22)
                sub_1405947f0(&var_158, rdx_17)
            
            sub_140a2cf70(&var_158, u"AssetRegistryCache", 0x12)
            int32_t var_118
            int32_t rbx_15
            
            if (var_118 == 0)
                rbx_15 = 0
            else
                rbx_15 = var_118 - 1
            
            int32_t r8_13
            
            if (rcx_21 == 0)
                r8_13 = rcx_21 + 2
            
            if (rcx_21 != 0 || rbx_15 == 0xffffffff)
                r8_13 = 1
            
            int64_t var_148 = var_158
            int32_t rdx_19 = rcx_21 + rbx_15 + r8_13
            var_158 = 0
            int32_t var_150_1
            var_150_1.q = 0
            
            if (rdx_19 s> rcx_22)
                sub_1405947f0(&var_148, rdx_19)
            
            sub_140a2cf70(&var_148, var_120, rbx_15)
            
            if (&arg1[0x1a] == &var_148)
                int64_t rcx_29 = var_148
                
                if (rcx_29 != 0)
                    sub_140a74f90(rcx_29)
            else
                int64_t rcx_28 = arg1[0x1a]
                
                if (rcx_28 != 0)
                    sub_140a74f90(rcx_28)
                
                arg1[0x1a] = var_148
                arg1[0x1b].d = rcx_21
                *(arg1 + 0xdc) = rcx_22
                int32_t var_140_1
                var_140_1.q = 0
                var_148 = 0
            
            int64_t rcx_30 = var_158
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
            
            int64_t rcx_31 = var_100
            
            if (rcx_31 != 0)
                sub_140a74f90(rcx_31)
            
            int16_t* rcx_32 = var_120
            
            if (rcx_32 != 0)
                sub_140a74f90(rcx_32)
            
            rdi_1 = &arg1[0x14]
            rbx = &arg1[8]
        
        r15 = arg1 + 0xb4
    else
        wchar16 const* const rdi_2 = u"CachedAssetRegistryNoDeps.bin"
        arg1[0x19].b = arg5
        
        if (arg1[0x16].b != 0)
            rdi_2 = u"CachedAssetRegistry.bin"
        
        int64_t var_110
        int64_t* rax_9 = sub_140b25230(&var_110)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rdi_2[rbx_1] != 0)
        
        int32_t r8
        
        if (rax_9[1].d == 0)
            r8 = 2
        
        if (rax_9[1].d != 0 || (rbx_1 + 1).d == 0)
            r8 = 1
        
        int64_t var_168 = *rax_9
        *rax_9 = 0
        int32_t rax_12 = rax_9[1].d
        int32_t rax_13 = *(rax_9 + 0xc)
        rax_9[1] = 0
        int32_t rdx_2 = rax_12 + rbx_1.d + r8
        
        if (rdx_2 s> rax_13)
            sub_1405947f0(&var_168, rdx_2)
        
        sub_140a2cf70(&var_168, rdi_2, rbx_1.d)
        
        if (&arg1[0x1a] == &var_168)
            int64_t rcx_9 = var_168
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
        else
            int64_t rcx_8 = arg1[0x1a]
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            arg1[0x1a] = var_168
            arg1[0x1b].d = rax_12
            *(arg1 + 0xdc) = rax_13
            int32_t var_160_1
            var_160_1.q = 0
            var_168 = 0
        
        int64_t rcx_10 = var_110
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        rbx = &arg1[8]
        rdi_1 = &arg1[0x14]

sub_141c98520(arg1, arg3)

if (*(arg1 + 0x54) == 0 && sub_140a54810() == 0)
    *(arg1 + 0x54) = 1

char r8_15 = *(arg1 + 0x54)

if (r8_15 == 0)
    void*** rax_40 = j_sub_140a82f30(0x98)
    void*** rdi_5
    
    if (rax_40 == 0)
        rdi_5 = nullptr
    else
        rdi_5 = sub_141c91920(rax_40, arg2, *(arg1 + 0x54))
    
    int64_t* rax_42 = j_sub_140a82f30(0x18)
    int64_t* rbx_16 = rax_42
    
    if (rax_42 == 0)
        rbx_16 = nullptr
    else
        rax_42[1].d = 1
        *(rax_42 + 0xc) = 1
        *rbx_16 = &data_142e1c960
        rbx_16[2] = rdi_5
    
    void*** var_138 = rdi_5
    int64_t* var_130_1 = rbx_16
    
    if (r12 == &var_138)
    label_141c92216:
        
        if (rbx_16 != 0)
            rbx_16[1].d -= 1
            
            if (rbx_16[1].d == 1)
                (**rbx_16)(rbx_16)
                int32_t temp2_1 = *(rbx_16 + 0xc)
                *(rbx_16 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_16 + 8))(rbx_16, 1)
    else
        *r12 = rdi_5
        int64_t* rdi_6 = *(r12 + 8)
        var_138 = nullptr
        
        if (rbx_16 == rdi_6)
            goto label_141c92216
        
        int64_t* var_130_2 = nullptr
        *(r12 + 8) = rbx_16
        
        if (rdi_6 != 0)
            rdi_6[1].d -= 1
            
            if (rdi_6[1].d == 1)
                (**rdi_6)(rdi_6)
                int32_t temp4_1 = *(rdi_6 + 0xc)
                *(rdi_6 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rdi_6 + 8))(rdi_6, 1)
            
            rbx_16 = var_130_2
            goto label_141c92216
    
    arg1[0x32] = sub_140a6e140(arg1, u"FAssetDataGatherer", 0, 2, -1, 0)
else
    void** var_e8
    sub_141c91920(&var_e8, arg2, r8_15)
    sub_141cad480(arg1, sub_141ca15c0(&var_e8, rdi_1, rbx, r15))
    sub_141c942c0(&var_e8)

__security_check_cookie(rax_1 ^ &var_198)
return arg1
