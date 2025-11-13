// 函数: sub_140aaf810
// 地址: 0x140aaf810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
void var_1a0
int64_t* rax_2 = sub_140ab1ed0(arg1 + 0x10, &var_1a0)
int64_t* rcx_1 = *rax_2
int64_t* rax_3 = (*(*rcx_1 + 0x28))(rcx_1)
int64_t r9_1 = *rax_3
(*(r9_1 + 0x58))(rax_3, rax_2, arg3, r9_1)
int64_t* var_198

if (var_198 != 0)
    var_198[1].d -= 1
    
    if (var_198[1].d == 1)
        (**var_198)(var_198)
        int32_t rax_6 = *(var_198 + 0xc)
        *(var_198 + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*var_198 + 8))(var_198, 1)

void* i = *(arg1 + 0x20)

for (void* r14_2 = (sx.q(*(arg1 + 0x28)) << 6) + i; i != r14_2; i += 0x40)
    if (*(i + 0x10) == 4)
        int64_t* rcx_5 = *(i + 0x18)
        int64_t* rax_9 = (*(*rcx_5 + 0x28))(rcx_5)
        int64_t r9_2 = *rax_9
        (*(r9_2 + 0x58))(rax_9, i + 0x18, arg3, r9_2)

int32_t rbx_2 = *(arg1 + 0x28)
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x2c)
int32_t var_9c = 0x80
int32_t var_98 = 0xffffffff
int32_t var_94 = 0
int64_t var_88 = 0
int32_t var_80 = 0

if (rbx_2 s> 0)
    sub_1409d9210(&var_c8, rbx_2)
    int32_t rax_12
    
    if (rbx_2 u< 4)
        rax_12 = 1
    else
        uint32_t rbx_3 = rbx_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_3
        temp0_3, rflags_1 = _bit_scan_reverse(rbx_3 + 8)
        int32_t var_1f8_1 = temp0_3
        int32_t rcx_8
        
        if (rbx_3 == 0xfffffff8)
            rcx_8 = 0x20
        else
            rcx_8 = 0x1f - temp0_3
        
        int32_t rcx_10 = rcx_8 << 0x1a s>> 0x1f
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rbx_3 + 7)
        int32_t var_1f4_1 = temp0_4
        
        if (rcx_10 == 0)
            rax_12 = 1
        else
            rax_12 = 1 << ((not.d(rcx_10)).b & (0x20 - (0x1f - temp0_4.b)))
    
    if (var_80 == 0 || var_80 s< rax_12)
        int32_t var_80_1 = rax_12
        sub_140abec40(&var_c8)

void* r15_1 = *(arg1 + 0x20)
void* i_1 = (sx.q(*(arg1 + 0x28)) << 6) + r15_1

if (r15_1 != i_1)
    void* r15_2 = r15_1 + 0x28
    
    do
        sub_1405d9400()
        int64_t* rdi = data_143cd6fe0
        int64_t* rbx_5 = rdi
        int64_t* var_e0_1 = rbx_5
        int64_t var_e8_1 = data_143cd6fd8
        
        if (rdi != 0)
            rdi[1].d += 1
            rbx_5 = var_e0_1
        
        int32_t var_d8_1 = data_143cd6fe8
        uint32_t rax_14 = zx.d(*(r15_2 - 0x18))
        int32_t var_f8_1
        uint64_t var_f0_1
        char var_d0_1
        char r14_3
        
        if (rax_14 == 0)
            var_f8_1 = 0
            r14_3 = 0
            var_f0_1 = sx.q(*(r15_2 + 8))
            var_d0_1 = 0
            
            if (rdi != 0)
                rdi[1].d -= 1
                
                if (rdi[1].d != 1)
                    rbx_5 = var_e0_1
                else
                    (**var_e0_1)(var_e0_1)
                    int32_t rax_42 = *(rdi + 0xc)
                    *(rdi + 0xc) -= 1
                    
                    if (rax_42 != 1)
                        rbx_5 = var_e0_1
                    else
                        rbx_5 = var_e0_1
                        (*(*rbx_5 + 8))(rbx_5, 1)
        else if (rax_14 == 2)
            var_f8_1 = 2
            uint64_t zmm1_1
            zmm1_1.d = (*(r15_2 + 0xc)).d
            uint64_t var_150 = zmm1_1
            var_f0_1 = zmm1_1
            var_d0_1 = 0
            
            if (rdi == 0)
                r14_3 = 0
            else
                rdi[1].d -= 1
                
                if (rdi[1].d != 1)
                    rbx_5 = var_e0_1
                    r14_3 = 0
                else
                    (**var_e0_1)(var_e0_1)
                    int32_t rax_37 = *(var_e0_1 + 0xc)
                    *(var_e0_1 + 0xc) -= 1
                    
                    if (rax_37 != 1)
                        rbx_5 = var_e0_1
                        r14_3 = 0
                    else
                        rbx_5 = var_e0_1
                        (*(*rbx_5 + 8))(rbx_5, 1)
                        r14_3 = 0
        else if (rax_14.b == 5)
            var_f0_1 = zx.q(*(r15_2 + 0x10))
            var_f8_1 = 5
            var_d0_1 = 0
            
            if (rdi == 0)
                r14_3 = 0
            else
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d != 1)
                    rbx_5 = var_e0_1
                    r14_3 = 0
                else
                    (**var_e0_1)(var_e0_1)
                    int32_t rax_33 = *(var_e0_1 + 0xc)
                    *(var_e0_1 + 0xc) -= 1
                    
                    if (rax_33 != 1)
                        rbx_5 = var_e0_1
                        r14_3 = 0
                    else
                        rbx_5 = var_e0_1
                        (*(*rbx_5 + 8))(rbx_5, 1)
                        r14_3 = 0
        else
            int64_t* rcx_16 = *(r15_2 - 8)
            int64_t rax_15 = *(r15_2 - 0x10)
            int64_t* var_60_1 = rcx_16
            
            if (rcx_16 != 0)
                rcx_16[1].d += 1
                rbx_5 = var_e0_1
                rcx_16 = var_60_1
            
            int32_t rax_16 = *r15_2
            uint64_t var_70
            var_f0_1 = var_70
            var_f8_1 = 4
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**var_e0_1)(var_e0_1)
                    int32_t rax_19 = *(var_e0_1 + 0xc)
                    *(var_e0_1 + 0xc) -= 1
                    
                    if (rax_19 == 1)
                        (*(*var_e0_1 + 8))(var_e0_1, 1)
                
                rcx_16 = var_60_1
            
            rbx_5 = rcx_16
            var_e8_1 = rax_15
            var_e0_1 = rcx_16
            
            if (rcx_16 != 0)
                rcx_16[1].d += 1
                rbx_5 = var_e0_1
                rcx_16 = var_60_1
            
            r14_3 = 1
            var_d8_1 = rax_16
            var_d0_1 = 1
            
            if (rcx_16 != 0)
                rcx_16[1].d -= 1
                
                if (rcx_16[1].d == 1)
                    (**var_60_1)(var_60_1)
                    int32_t rax_25 = *(var_60_1 + 0xc)
                    *(var_60_1 + 0xc) -= 1
                    
                    if (rax_25 == 1)
                        (*(*var_60_1 + 8))(var_60_1, 1)
                
                rbx_5 = var_e0_1
        
        int32_t var_1d8
        sub_140749df0(&var_c8, &var_1d8)
        int64_t* var_1d0
        int64_t* rdi_1 = var_1d0
        sub_140596d10(rdi_1, r15_2 - 0x28)
        int64_t* rcx_23 = &rdi_1[4]
        rdi_1[3] = var_f0_1
        rdi_1[2].d = var_f8_1
        rcx_23[3].b = 0
        
        if (r14_3 != 0)
            *rcx_23 = var_e8_1
            rcx_23[1] = rbx_5
            
            if (rbx_5 != 0)
                rbx_5[1].d += 1
                rbx_5 = var_e0_1
                rdi_1 = var_1d0
            
            rcx_23[2].d = var_d8_1
            rcx_23[3].b = 1
        
        rdi_1[8].d = 0xffffffff
        int16_t* rcx_24
        
        if (rdi_1[1].d == 0)
            rcx_24 = &data_142d40450
        else
            rcx_24 = *rdi_1
        
        void var_1f0
        sub_140aa7840(&var_c8, &var_1f0, sub_140a5ff80(rcx_24, 0), rdi_1, var_1d8, nullptr)
        
        if (var_d0_1 != 0 && rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**var_e0_1)(var_e0_1)
                int32_t rax_47 = *(var_e0_1 + 0xc)
                *(var_e0_1 + 0xc) -= 1
                
                if (rax_47 == 1)
                    (*(*var_e0_1 + 8))(var_e0_1, 1)
        
        r15_2 += 0x40
    while (r15_2 - 0x28 != i_1)

int64_t* rbx_11 = *(arg1 + 0x18)
int64_t rax_50 = *(arg1 + 0x10)

if (rbx_11 != 0)
    rbx_11[1].d += 1

int64_t rdi_2 = sx.q(arg3[1].d)
int32_t rax_51 = (rdi_2 + 1).d
arg3[1].d = rax_51

if (rax_51 s> *(arg3 + 0xc))
    sub_1407c3920(arg3)

int64_t* rdi_3 = arg2[1]
int64_t* rcx_37 = rdi_2 * 0x78 + *arg3

if (rdi_3 != 0)
    rdi_3[1].d += 1

int32_t rax_53 = arg2[2].d
*rcx_37 = *arg2
rcx_37[1] = rdi_3

if (rdi_3 != 0)
    rdi_3[1].d += 1

rcx_37[2].d = rax_53
rcx_37[3] = rax_50
rcx_37[4] = rbx_11

if (rbx_11 != 0)
    rbx_11[1].d += 1

sub_140a954b0(&rcx_37[5], &var_c8)

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t rax_57 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rax_57 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

if (rbx_11 != 0)
    rbx_11[1].d -= 1
    
    if (rbx_11[1].d == 1)
        (**rbx_11)(rbx_11)
        int32_t rsi_1 = *(rbx_11 + 0xc)
        *(rbx_11 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_11 + 8))(rbx_11, zx.q(rsi_1))

int32_t var_80_2 = 0

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t result = sub_140aa9190(&var_c8, 0)
int64_t var_a8

if (var_a8 != 0)
    result = sub_140a74f90(var_a8)

int64_t rcx_46 = var_c8

if (rcx_46 != 0)
    result = sub_140a74f90(rcx_46)

__security_check_cookie(rax_1 ^ &var_228)
return result
