// 函数: sub_140f6f1c0
// 地址: 0x140f6f1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_300 = arg1
void* r14 = arg1
sub_14065da90(arg1 + 0x2a8, arg2 + 0x1a0)
*(r14 + 0x2c0) = *(arg2 + 0x1b8)
sub_140692f90(r14 + 0x2c8, arg2 + 0x1c0)
sub_14065da90(r14 + 0x548, arg2 + 0x1d0)
*(r14 + 0x560) = *(arg2 + 0x1e8)
sub_140692f90(r14 + 0x568, arg2 + 0x1f0)
sub_140de1940(r14 + 0x2e0, *(arg2 + 0x270))
*(r14 + 0x578) = *(arg2 + 0x200)
*(r14 + 0x57c) = *(arg2 + 0x204)
sub_140692f90(r14 + 0x580, arg2 + 0x208)
*(r14 + 0x590) = *(arg2 + 0x218)
*(r14 + 0x591) = *(arg2 + 0x219)
sub_140692f90(r14 + 0x598, arg2 + 0x220)
*(r14 + 0x5a8) = *(arg2 + 0x230)
*(r14 + 0x5a9) = *(arg2 + 0x231)
sub_1407473e0(r14 + 0x5b0, arg2 + 0x238)
*(r14 + 0x5c0) = *(arg2 + 0x278)
*(r14 + 0x5d0) = *(arg2 + 0x288)
sub_140692f90(r14 + 0x5d8, arg2 + 0x290)
*(r14 + 0x600) = *(arg2 + 0x2a0)
*(r14 + 0x604) = *(arg2 + 0x2a4)
sub_140692f90(r14 + 0x608, arg2 + 0x2a8)
*(r14 + 0x5e8) = *(arg2 + 0x2b8)
*(r14 + 0x5ec) = *(arg2 + 0x2bc)
sub_140692f90(r14 + 0x5f0, arg2 + 0x2c0)
*(r14 + 0x618) = *(arg2 + 0x2f8)
*(r14 + 0x61c) = *(arg2 + 0x2fc)
sub_140692f90(r14 + 0x620, arg2 + 0x300)
int64_t* rsi = *(arg2 + 0x2f0)
int64_t r12 = *(arg2 + 0x2e8)

if (rsi != 0)
    rsi[1].d += 1

int64_t var_310

if (r12 == 0)
    int64_t* rax_15 = sub_140f03280(&var_310)
    int64_t* rbx_1 = rax_15[1]
    r12 = *rax_15
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t* rdi_1 = rsi
    
    if (rbx_1 != rsi)
        rsi = rbx_1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp6_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    else if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* var_308
    
    if (var_308 != 0)
        var_308[1].d -= 1
        
        if (var_308[1].d == 1)
            (**var_308)(var_308)
            int32_t temp7_1 = *(var_308 + 0xc)
            *(var_308 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_308 + 8))(var_308, 1)

int64_t* rbx_3 = *(arg2 + 0x250)
void* r15 = r14 + 0x638
int64_t* var_320 = *(arg2 + 0x248)

if (rbx_3 != 0)
    rbx_3[1].d += 1

if (&var_320 != r15)
    var_320.o = *r15
    *r15 = var_320.o

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int128_t var_2f8

if (*r15 == 0)
    int32_t i_1 = *(arg2 + 0x2e0)
    int64_t* rbx_4 = *(arg2 + 0x2d8)
    var_320 = nullptr
    int64_t* var_318
    var_318.d = i_1
    
    if (i_1 != 0)
        sub_1405a4be0(&var_320, i_1, 0)
        int64_t* rcx_21 = var_320
        int32_t i
        
        do
            *rcx_21 = *rbx_4
            void* rax_25 = rbx_4[1]
            rcx_21[1] = rax_25
            
            if (rax_25 != 0)
                *(rax_25 + 8) += 1
            
            rcx_21 = &rcx_21[2]
            rbx_4 = &rbx_4[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    else
        var_318:4.d = 0
    
    var_310 = r12
    int64_t* var_308_1 = rsi
    int128_t var_2c0 = zx.o(0)
    
    if (rsi != 0)
        rsi[1].d += 1
    
    void**** rax_27 = sub_140ef7200(&var_2f8, &var_310, &var_2c0, &var_320, *(arg2 + 0x268))
    int64_t* rbx_5 = rax_27[1]
    
    if (rbx_5 != 0)
        rbx_5[1].d += 1
    
    void var_2b0
    
    if (r15 == &var_2b0)
    label_140f6f5cb:
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp12_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
    else
        *r15 = *rax_27
        int64_t* rdi_2 = *(r15 + 8)
        
        if (rbx_5 == rdi_2)
            goto label_140f6f5cb
        
        *(r15 + 8) = rbx_5
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp16_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
    
    int64_t* rbx_6 = var_2f8:8.q
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp15_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)

int64_t* rdi_3 = *(arg2 + 0x310)
void* r12_3 = &rdi_3[sx.q(*(arg2 + 0x318)) * 2]

if (rdi_3 != r12_3)
    do
        void* rbx_7 = *r15
        int64_t r14_1 = sx.q(*(rbx_7 + 0x48))
        int32_t rax_33 = (r14_1 + 1).d
        *(rbx_7 + 0x48) = rax_33
        
        if (rax_33 s> *(rbx_7 + 0x4c))
            sub_1405a4f90(rbx_7 + 0x40)
        
        int64_t* rcx_32 = (r14_1 << 4) + *(rbx_7 + 0x40)
        *rcx_32 = *rdi_3
        void* rax_35 = rdi_3[1]
        rcx_32[1] = rax_35
        
        if (rax_35 != 0)
            *(rax_35 + 8) += 1
        
        rdi_3 = &rdi_3[2]
    while (rdi_3 != r12_3)
    
    r14 = var_300

int64_t* rdi_4 = *(r15 + 8)
int64_t rbx_8 = *r15

if (rdi_4 != 0)
    rdi_4[1].d += 1

int64_t* rax_36 = j_sub_140a82f30(0x70)
int64_t* rbx_10

if (rax_36 == 0)
    rbx_10 = nullptr
else
    var_310 = rbx_8
    int64_t* var_308_2 = rdi_4
    var_2f8 = zx.o(0)
    
    if (rdi_4 != 0)
        rdi_4[1].d += 1
    
    char var_327_1 = 0
    char var_328
    
    if (*(arg2 + 0x2d3) != 0)
        var_328 = *(arg2 + 0x2d2)
        char var_327_2 = 1
    
    char var_325_1 = 0
    char var_326
    
    if (*(arg2 + 0x2d1) != 0)
        var_326 = *(arg2 + 0x2d0)
        char var_325_2 = 1
    
    void** var_2a0
    rbx_10 = sub_140f66170(rax_36, r14, sub_140ddd070(&var_2a0, r14 + 0x2e0), &var_326, &var_328, 
        arg2 + 0x258, &var_310, &var_2f8)

if (r14 + 0x2d8 != &var_300)
    int64_t* r12_4 = *(r14 + 0x2d8)
    *(r14 + 0x2d8) = rbx_10
    
    if (r12_4 != 0)
        sub_140f67a30(r12_4)
        j_sub_140a74f90(r12_4)
else if (rbx_10 != 0)
    sub_140f67a30(rbx_10)
    j_sub_140a74f90(rbx_10)

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t temp14_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*rdi_4 + 8))(rdi_4, 1)

void*** rax_43 = sub_140a84c80(0, 0x20, 0)

if (rax_43 != 0)
    rax_43[1] = r14
    *rax_43 = &data_142ee2080
    rax_43[3] = sub_140a387b0()

int64_t var_2e8 = 0
int64_t var_2e0 = 0
char var_2d8 = 1
int64_t var_2d0 = 0
int32_t var_2c8 = 0

if (rax_43 != 0)
    (*rax_43)[8](rax_43, &var_2d0)

sub_140f15630(**(r14 + 0x2d8), &var_2e8)
sub_140745b20(&var_2d0)
int64_t rcx_44 = var_2e8

if (rcx_44 != 0)
    sub_140a74f90(rcx_44)

if (rax_43 != 0)
    (*rax_43)[7](rax_43, 0)
    int64_t rax_47 = sub_140a84c80(rax_43, 0, 0)
    
    if (rax_47 != 0)
        sub_140a74f90(rax_47)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp18_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*rsi + 8))(rsi, 1)

*(r14 + 0x2e) &= 0xfb
char result = sub_140db3510(r14 + 0x18)

if (result == 0)
    return result

return sub_140dc03a0(r14 + 0x18, *(r14 + 0x2e))
