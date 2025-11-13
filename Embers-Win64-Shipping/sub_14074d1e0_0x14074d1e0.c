// 函数: sub_14074d1e0
// 地址: 0x14074d1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x408)
int32_t r14 = 0
void* r12 = arg1
void* var_90 = nullptr
void* r15 = nullptr
int32_t i_4 = 0
int32_t i_2 = 0
int32_t i_3 = 0
int32_t rdx = *(rdi + 0x318)
int32_t var_84 = 0

if (rdx s> 0)
    sub_1405c5660(&var_90, rdx)
    i_2 = i_3
    r15 = var_90
    i_4 = i_2

int64_t* rbx = *(rdi + 0x310)
void* rsi_2 = &rbx[sx.q(*(rdi + 0x318)) * 4]
int64_t var_70
uint64_t var_68

if (rbx != rsi_2)
    do
        var_70 = *rbx
        int64_t i_5 = sx.q(i_2)
        var_68 = rbx[1]
        int16_t var_60_1 = rbx[2].w
        i_2 = (i_5 + 1).d
        int32_t var_5e_1 = 0xffffffff
        int64_t var_58_1 = 0
        int64_t var_50_1 = 0
        
        if (i_2 s> var_84)
            sub_1405c4ec0(&var_90)
            r15 = var_90
        
        sub_140745220(r15 + i_5 * 0x28, &var_70)
        
        if (var_58_1 != 0)
            sub_140a74f90(var_58_1)
        
        rbx = &rbx[4]
    while (rbx != rsi_2)
    
    r12 = arg1
    i_4 = i_2

void* rbx_1 = r15
void* rsi_3 = r15 + sx.q(i_2) * 0x28

if (r15 != rsi_3)
    do
        int64_t r9
        r9.b = 1
        (*(*(r12 + 0x418) + 8))(r12 + 0x418, rbx_1, 1, r9, 0)
        rbx_1 += 0x28
    while (rbx_1 != rsi_3)

void* r12_1 = r12 + 0x418
void* var_80 = nullptr
int32_t arg_18 = 0
int64_t var_78 = 0
int32_t rdx_4 = *(arg1 + 0x430)

if (rdx_4 s> 0)
    sub_1405c5660(&var_80, rdx_4)
    r14 = var_78.d
    arg_18 = r14

int64_t* rbx_2 = *(arg1 + 0x428)
void* rsi_6 = &rbx_2[sx.q(*(arg1 + 0x430)) * 4]

if (rbx_2 != rsi_6)
    void* r13 = var_80
    
    do
        var_70 = *rbx_2
        int64_t rdi_2 = sx.q(r14)
        var_68 = rbx_2[1]
        int16_t var_60_2 = rbx_2[2].w
        r14 = (rdi_2 + 1).d
        int32_t var_5e_2 = 0xffffffff
        int64_t var_58_2 = 0
        int64_t var_50_2 = 0
        var_78.d = r14
        
        if (r14 s> var_78:4.d)
            sub_1405c4ec0(&var_80)
            r14 = var_78.d
            r13 = var_80
        
        sub_140745220(rdi_2 * 0x28 + r13, &var_70)
        
        if (var_58_2 != 0)
            sub_140a74f90(var_58_2)
        
        rbx_2 = &rbx_2[4]
    while (rbx_2 != rsi_6)
    
    i_2 = i_4
    r15 = var_90
    arg_18 = r14

void* rdi_5 = var_80
int64_t result = sx.q(r14)
void* rsi_7 = rdi_5 + result * 0x28
void* arg_20 = rsi_7

if (rdi_5 != rsi_7)
    void* r13_1 = var_90
    int16_t* r15_1 = rdi_5 + 0x12
    
    do
        int32_t rdi_3 = -1
        uint64_t rbx_3 = *(r15_1 - 0xa)
        var_70 = *(r15_1 - 0x12)
        uint32_t rax_10 = zx.d(r15_1[-1])
        int16_t var_60_3 = rax_10.w
        var_68 = rbx_3
        int16_t var_5e_3 = -1
        int64_t var_58_3 = 0
        uint32_t count = 0
        
        if (rbx_3 != 0)
            int32_t rdi_4 = *(r15_1 + 0xe)
            int16_t rcx_14
            
            if (rdi_4 s> 0)
                rcx_14 = *r15_1
                
                if (rcx_14 == 0xffff)
                    if (rax_10.w == 1)
                        *r15_1 = 0
                        rcx_14 = 0
                    else
                        if (rax_10.w != 3)
                            void* rax_11 = sub_140be01c0()
                            void* rdx_7 = *(rbx_3 + 0x10)
                            int64_t rax_12 = sx.q(*(rax_11 + 0x38))
                            
                            if (rax_12.d s> *(rdx_7 + 0x38)
                                    || *(*(rdx_7 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
                                rbx_3 = 0
                        else
                            rbx_3 = data_143ce3880
                        
                        int16_t rax_14 = *(rbx_3 + 0x5c)
                        rcx_14 = (*(rbx_3 + 0x58) - 1 + rax_14) & not.w(rax_14 - 1)
                        *r15_1 = rcx_14
            
            if (rdi_4 s<= 0 || rdi_4 != sx.d(rcx_14))
                rax_10.b = 0
            else
                rax_10.b = 1
            
            if (rax_10.b != 0)
                int64_t rbx_4 = *(r15_1 + 6)
                sub_14074a0e0(&var_70)
                memcpy(var_58_3, rbx_4, count)
            
            rdi_3 = -1
        
        void* rcx_18 = r13_1
        
        if (r13_1 == rsi_3)
        label_14074d575:
            (*(*r12_1 + 0x10))(r12_1, &var_70)
        else
            while (true)
                uint64_t rax_15
                
                if (*rcx_18 == var_70)
                    if (*(rcx_18 + 8) != var_68 || *(rcx_18 + 0x10) != var_60_3)
                        rax_15.b = 0
                    else
                        rax_15.b = 1
                
                if (*rcx_18 != var_70 || rax_15.b == 0)
                    rax_15.b = 0
                else
                    rax_15.b = 1
                
                if (rax_15.b != 0)
                    int64_t* rsi_9 = *(arg1 + 0x408) + 0x300
                    int32_t* rax_19 = (*(*r12_1 + 0x30))(r12_1, &var_70)
                    int32_t r14_1
                    
                    if (rax_19 == 0)
                        r14_1 = -1
                    else
                        r14_1 = *rax_19
                    
                    int32_t* rax_21 = (*(*rsi_9 + 0x30))(rsi_9, &var_70)
                    
                    if (rax_21 != 0)
                        rdi_3 = *rax_21
                    
                    if (r14_1 != 0xffffffff && rdi_3 != 0xffffffff)
                        if (sub_140834780(&var_68) == 0)
                            uint64_t rbx_7
                            
                            if (var_60_3 != 3)
                                rbx_7 = var_68
                                void* rax_25
                                int64_t rax_26
                                void* rdx_15
                                
                                if (rbx_7 != 0)
                                    rax_25 = sub_140be01c0()
                                    rdx_15 = *(rbx_7 + 0x10)
                                    rax_26 = sx.q(*(rax_25 + 0x38))
                                
                                if (rbx_7 == 0 || rax_26.d s> *(rdx_15 + 0x38)
                                        || *(*(rdx_15 + 0x30) + (rax_26 << 3)) != rax_25 + 0x30)
                                    rbx_7 = nullptr
                            else
                                rbx_7 = data_143ce3880
                            
                            void* rax_28 = sub_140d41340()
                            int64_t rax_29
                            
                            if (rax_28 != 0)
                                rax_29 = sx.q(*(rax_28 + 0x38))
                            
                            if (rax_28 == 0 || rax_29.d s> *(rbx_7 + 0x38)
                                    || *(*(rbx_7 + 0x30) + (rax_29 << 3)) != rax_28 + 0x30)
                                int16_t rax_34 = var_5e_3
                                
                                if (rax_34 == 0xffff)
                                    if (var_68 == 0 || var_60_3 == 1)
                                        rax_34 = 0
                                    else
                                        void* rax_33 = sub_140761a70(&var_68)
                                        int16_t rcx_35 = *(rax_33 + 0x5c)
                                        rax_34 = (*(rax_33 + 0x58) - 1 + rcx_35) & not.w(rcx_35 - 1)
                                    
                                    var_5e_3 = rax_34
                                
                                int64_t rdx_19 = sx.q(rdi_3) + rsi_9[4]
                                int64_t rcx_37 = sx.q(r14_1) + *(r12_1 + 0x20)
                                
                                if (rcx_37 != rdx_19)
                                    memcpy(rcx_37, rdx_19, sx.d(rax_34))
                                
                                *(r12_1 + 0xb0) |= 1
                            else
                                int64_t rax_30
                                
                                if (rdi_3 s< 0 || rdi_3 s>= rsi_9[9].d)
                                    rax_30.b = 0
                                else
                                    rax_30.b = 1
                                
                                int64_t rdx_17
                                
                                if (rax_30.b == 0)
                                    rdx_17 = 0
                                else
                                    rdx_17 = *(rsi_9[8] + (sx.q(rdi_3) << 3))
                                
                                *(*(r12_1 + 0x40) + (sx.q(r14_1) << 3)) = rdx_17
                                *(r12_1 + 0xb0) |= 4
                        else
                            int64_t* rcx_24 = *(rsi_9[6] + (sx.q(rdi_3) << 3))
                            int64_t r8_3 = *rcx_24
                            (*(r8_3 + 0x338))(rcx_24, *(*(r12_1 + 0x30) + (sx.q(r14_1) << 3)), r8_3)
                            *(r12_1 + 0xb0) |= 2
                    
                    rsi_7 = arg_20
                    break
                
                rcx_18 += 0x28
                
                if (rcx_18 == rsi_3)
                    goto label_14074d575
        
        if (var_58_3 != 0)
            sub_140a74f90(var_58_3)
        
        r15_1 = &r15_1[0x14]
        result = &r15_1[-9]
    while (result != rsi_7)
    
    i_2 = i_4
    r14 = arg_18
    r15 = var_90
    rdi_5 = var_80

if (r14 != 0)
    int64_t* rbx_5 = rdi_5 + 0x18
    int32_t i
    
    do
        int64_t rcx_26 = *rbx_5
        
        if (rcx_26 != 0)
            result = sub_140a74f90(rcx_26)
        
        rbx_5 = &rbx_5[5]
        i = r14
        r14 -= 1
    while (i != 1)

if (rdi_5 != 0)
    result = sub_140a74f90(rdi_5)

if (i_2 != 0)
    void* rbx_6 = r15 + 0x18
    int32_t i_1
    
    do
        int64_t rcx_28 = *rbx_6
        
        if (rcx_28 != 0)
            result = sub_140a74f90(rcx_28)
        
        rbx_6 += 0x28
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (r15 == 0)
    return result

return sub_140a74f90(r15)
