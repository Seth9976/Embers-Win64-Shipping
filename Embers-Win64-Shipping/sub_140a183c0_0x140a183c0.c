// 函数: sub_140a183c0
// 地址: 0x140a183c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi_2 = (sx.q(*(arg1 + 0x34)) << 4) + *(arg1 + 0x20)
int64_t var_80
int64_t* rax = sub_140b25050(&var_80)
*rax = 0
bool c = rax[1].d != 0
int32_t rcx_1 = *(rax + 0xc)
int64_t var_f8 = *rax
int32_t rdx_1 = rax[1].d
rax[1] = 0
int32_t rax_3 = sbb.d(rax.d, rax.d, c) + 8 + rdx_1

if (rax_3 s> rcx_1)
    sub_1405947f0(&var_f8, rax_3)

sub_140a20ba0(&var_f8, u"Movies/", 7)
int64_t r15 = var_f8
int32_t rbx = rsi_2[1].d
var_f8 = 0
int32_t var_f0
var_f0.q = 0
int64_t var_d8

if (rdx_1 s> 1)
    int32_t rdi_1 = rbx - 1
    
    if (rbx == 0)
        rdi_1 = 0
    
    int32_t rcx_7
    
    if (rdx_1 == 0)
        rcx_7 = rdx_1 + 1
    
    if (rdx_1 != 0 || rdi_1 == 0)
        rcx_7 = 0
    
    int64_t var_e8 = r15
    int32_t rdx_6 = rcx_7 + rdx_1 + rdi_1
    
    if (rdx_6 s> rcx_1)
        sub_1405947f0(&var_e8, rdx_6)
    
    sub_140a20ba0(&var_e8, *rsi_2, rdi_1)
    var_d8 = var_e8
    int32_t var_d0_1 = rdx_1
    int32_t var_cc_2 = rcx_1
    int32_t var_e0_1
    var_e0_1.q = 0
    var_e8 = 0
else
    int64_t rdi = *rsi_2
    var_d8 = 0
    int32_t var_d0 = rbx
    
    if (rbx != 0)
        sub_1405a4c70(&var_d8, rbx, 0)
        memcpy(var_d8, rdi, rbx * 2)
    else
        int32_t var_cc_1 = 0
    
    if (r15 != 0)
        sub_140a74f90(r15)

int64_t rcx_10 = var_80

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

void*** rax_8 = j_sub_140a82f30(0x18)

if (rax_8 == 0)
    rax_8 = nullptr
else
    rax_8[1].d = 1
    *rax_8 = &data_142e4d7d8
    *(rax_8 + 0xc) = 0
    rax_8[2] = arg1 + 0x38

*(arg1 + 0x88) = rax_8
int64_t* rax_9 = j_sub_140a82f30(0x48)
int64_t* rcx_12 = rax_9

if (rax_9 == 0)
    rcx_12 = nullptr
else
    rcx_12[1].d = 1
    *rcx_12 = &data_142e4d7a8
    __builtin_memset(&rcx_12[2], 0, 0x31)

char rax_10 = *(arg1 + 0x90)
int64_t* r9 = *(arg1 + 0x88)
*(arg1 + 0x80) = rcx_12
int32_t* arg_8
sub_140a18190(rcx_12, &arg_8, &var_d8, r9, rax_10)
int32_t* rbx_1 = arg_8
int32_t rsi_3 = arg_8:4.d

if (rbx_1.d != data_143dbb180.d || rsi_3 != data_143dbb180:4.d)
    *(arg1 + 0x40) = 0
    
    if (*(arg1 + 0x44) != 0)
        sub_1405c5510(arg1 + 0x38, 0)
    
    int64_t* rsi_4
    
    if (*(arg1 + 0x70) s<= 0)
        void*** rax_23 = j_sub_140a82f30(0x58)
        void*** rdi_3
        
        if (rax_23 == 0)
            rdi_3 = nullptr
        else
            char var_118
            int128_t var_70
            var_118.q = &var_70
            var_70 = zx.o(0)
            rdi_3 = sub_14234f120(rax_23, rbx_1.d, rsi_3, 2, var_118, 1, 1)
        
        int64_t* rax_25 = j_sub_140a82f30(0x18)
        int64_t* rbx_3 = rax_25
        
        if (rax_25 == 0)
            rbx_3 = nullptr
        else
            rax_25[1].d = 1
            *(rax_25 + 0xc) = 1
            *rbx_3 = &data_142e4cf50
            rbx_3[2] = rdi_3
        
        void*** var_b8 = rdi_3
        int64_t* var_b0 = rbx_3
        
        if (arg1 + 0x58 != &var_b8)
            *(arg1 + 0x58) = rdi_3
            var_b8 = nullptr
            sub_1405aeff0(arg1 + 0x60, &var_b0)
            rbx_3 = var_b0
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t rax_28 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_28 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        rbx_1 = *(arg1 + 0x58)
        
        if (sub_140a80f40() == 0)
            uint32_t rax_32
            
            if (data_143f138f4 == 0 && data_143de5480 != 0)
                rax_32.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_32.b == 0))
                void var_48
                void** rax_34 = sub_140a177d0(&var_48, nullptr, 0xff)
                *(*rax_34 + 0x10) = rbx_1
                void* rcx_32 = *rax_34
                int32_t r8_10 = rax_34[2].d
                int64_t* rdx_18 = rax_34[1]
                rsi_4 = *(rcx_32 + 0x20)
                rbx_1 = &rsi_4[9]
                
                if (rsi_4 != 0)
                    *rbx_1 += 1
                
                sub_1405a5630(rcx_32, rdx_18, r8_10, 1)
            label_140a1890e:
                
                if (rsi_4 != 0)
                    int32_t rdi_4 = *rbx_1
                    *rbx_1 -= 1
                    
                    if (rdi_4 == 1)
                        sub_140a2f6e0(rsi_4)
            else
                (*(*(rbx_1 + 0x20) + 0x28))(&rbx_1[8])
        else
            (*(*(rbx_1 + 0x20) + 0x28))(&rbx_1[8])
    else
        int64_t rax_11 = *(arg1 + 0x68)
        int64_t rdx_10 = sx.q(*(arg1 + 0x70)) * 2
        int64_t rdi_2 = *(rax_11 + (rdx_10 << 3) - 0x10)
        int64_t* r12_1 = *(rax_11 + (rdx_10 << 3) - 8)
        *(rax_11 + (rdx_10 << 3) - 8) = 0
        *(rax_11 + (rdx_10 << 3) - 0x10) = 0
        int32_t rdx_12 = *(arg1 + 0x70) - 1
        int64_t var_c8 = rdi_2
        int64_t* var_c0 = r12_1
        sub_140a18a40(arg1 + 0x68, rdx_12, 1, 1)
        
        if (arg1 + 0x58 != &var_c8)
            *(arg1 + 0x58) = rdi_2
            var_c8 = 0
            sub_1405aeff0(arg1 + 0x60, &var_c0)
            r12_1 = var_c0
        
        if (r12_1 != 0)
            r12_1[1].d -= 1
            
            if (r12_1[1].d == 1)
                int64_t* rbx_2 = var_c0
                (**rbx_2)(rbx_2)
                int32_t rax_14 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_14 == 1)
                    int64_t* rcx_17 = var_c0
                    (*(*rcx_17 + 8))(rcx_17, 1)
            
            rsi_3 = arg_8:4.d
            rbx_1 = arg_8
        
        int64_t* rcx_18 = *(arg1 + 0x58)
        int32_t rax_17 = (**rcx_18)(rcx_18)
        int32_t rax_19
        
        if (rax_17 == rbx_1.d)
            int64_t* rcx_19 = *(arg1 + 0x58)
            rax_19 = (*(*rcx_19 + 8))(rcx_19)
        
        if (rax_17 != rbx_1.d || rax_19 != rsi_3)
            void* r15_2 = *(arg1 + 0x58)
            int32_t* var_88_1 = rbx_1
            
            if (sub_140a80f40() != 0)
                sub_142374090(r15_2, rbx_1.d, rsi_3)
            else
                if (data_143f138f4 != 0)
                label_140a18756:
                    void var_60
                    int64_t* rax_22 = sub_140a17920(&var_60, nullptr, 0xff)
                    *(*rax_22 + 0x10) = r15_2.o
                    void* rcx_23 = *rax_22
                    int32_t r8_8 = rax_22[2].d
                    int64_t* rdx_15 = rax_22[1]
                    rsi_4 = *(rcx_23 + 0x28)
                    rbx_1 = &rsi_4[9]
                    
                    if (rsi_4 != 0)
                        *rbx_1 += 1
                    
                    sub_1405e48c0(rcx_23, rdx_15, r8_8, 1)
                    goto label_140a1890e
                
                if (data_143de5480 == 0)
                    sub_142374090(r15_2, rbx_1.d, rsi_3)
                else
                    uint32_t rax_21
                    rax_21.b = GetCurrentThreadId() == data_143de5470
                    
                    if (rax_21.b == 0)
                        goto label_140a18756
                    
                    sub_142374090(r15_2, rbx_1.d, rsi_3)
    PROPVARIANT pvar
    __builtin_memset(&pvar, 0, 0x18)
    int64_t* rcx_34 = *(*(arg1 + 0x80) + 0x10)
    (*(*rcx_34 + 0x48))(rcx_34, &data_1434cb1d0, &pvar)
    PropVariantClear(&pvar)
    rbx_1.b = 1
else
    rbx_1.b = 0

int64_t rcx_36 = var_d8

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

return zx.q(rbx_1.b)
