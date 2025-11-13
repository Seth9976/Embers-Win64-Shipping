// 函数: sub_141bd2680
// 地址: 0x141bd2680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
uint32_t rbx = zx.d(*(arg1 + 0x138))
int32_t var_278 = 0
uint32_t var_270 = rbx
char var_26c = 1
int64_t var_268 = 0
int32_t var_260 = 0
void*** rax_2 = sub_140a84c80(0, 0x30, 0)

if (rax_2 != 0)
    *rax_2 = &data_142e33668
    sub_140d3a3a0(&rax_2[1], arg1)
    rax_2[2] = sub_141bb4510
    rax_2[4] = sub_140a387b0()
    *rax_2 = &data_142e336c0

void*** rax_4 = sub_140a84c80(0, 0x30, 0)

if (rax_4 != 0)
    *rax_4 = &data_143083d40
    sub_140d3a3a0(&rax_4[1], arg1)
    rax_4[2] = sub_141bb3860
    rax_4[4] = sub_140a387b0()

void var_258
int64_t* rax_6 = sub_140e94a50(&var_258)
rax_6[0x3e].d = rbx
*(rax_6 + 0x1f4) = 1
sub_1407473e0(&rax_6[0x3f], &var_268)
rax_6[0x41].b = *(arg1 + 0x139)
void* var_298

if (&var_298 != &rax_6[0x3a])
    if (rax_4 != 0)
        (*rax_4)[8](rax_4, &rax_6[0x3a])
    else if (rax_6[0x3b].d != 0)
        int64_t* rcx_5 = rax_6[0x3a]
        
        if (rcx_5 != 0)
            (*(*rcx_5 + 0x38))(rcx_5, 0)
            int64_t rcx_6 = rax_6[0x3a]
            
            if (rcx_6 != 0)
                rax_6[0x3a] = sub_140a84c80(rcx_6, 0, 0)
            
            rax_6[0x3b].d = 0

if (&var_298 != &rax_6[0x3c])
    if (rax_2 != 0)
        (*rax_2)[8](rax_2, &rax_6[0x3c])
    else if (rax_6[0x3d].d != 0)
        int64_t* rcx_8 = rax_6[0x3c]
        
        if (rcx_8 != 0)
            (*(*rcx_8 + 0x38))(rcx_8, 0)
            int64_t rcx_9 = rax_6[0x3c]
            
            if (rcx_9 != 0)
                rax_6[0x3c] = sub_140a84c80(rcx_9, 0, 0)
            
            rax_6[0x3d].d = 0

*(rax_6 + 0x20b) = *(arg1 + 0x13a)
*(rax_6 + 0x20c) = *(arg1 + 0x13b)
void*** rax_16 = j_sub_140a82f30(0x3b0)
void*** rdi = rax_16

if (rax_16 == 0)
    rdi = nullptr
else
    rax_16[1].d = 1
    *(rax_16 + 0xc) = 1
    *rdi = &data_142edf1e0
    
    if (rdi != -0x10)
        sub_140f20ae0(&rdi[2])

void*** var_2a8 = rdi
void* var_2b0 = &rdi[2]
sub_140918950(&var_2b0, &rdi[2])
int64_t var_2c8 = 0x3a0
char var_2b8
char* var_2a0 = &var_2b8
void var_288
void** rax_17 = sub_140e9d6e0(&var_2b0, &var_288, rax_6, sub_140e23ed0(&rdi[2], "SMenuAnchor"))
int64_t* rcx_14 = rax_17[1]

if (rcx_14 != 0)
    rcx_14[1].d += 1

if (arg1 + 0x150 == &var_298)
label_141bd2940:
    
    if (rcx_14 != 0)
        rcx_14[1].d -= 1
        
        if (rcx_14[1].d == 1)
            (**rcx_14)(rcx_14)
            int32_t temp2_1 = *(rcx_14 + 0xc)
            *(rcx_14 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_14 + 8))(rcx_14, 1)
else
    *(arg1 + 0x150) = *rax_17
    int64_t* rbx_4 = *(arg1 + 0x158)
    
    if (rcx_14 == rbx_4)
        goto label_141bd2940
    
    *(arg1 + 0x158) = rcx_14
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp6_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* var_280

if (var_280 != 0)
    var_280[1].d -= 1
    
    if (var_280[1].d == 1)
        (**var_280)(var_280)
        int32_t temp5_1 = *(var_280 + 0xc)
        *(var_280 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_280 + 8))(var_280, 1)

if (var_2a8 != 0)
    var_2a8[1].d -= 1
    
    if (var_2a8[1].d == 1)
        (**var_2a8)(var_2a8)
        int32_t temp8_1 = *(var_2a8 + 0xc)
        *(var_2a8 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*var_2a8)[1](var_2a8, 1)

char var_4e = 0
void var_60
sub_140745b20(&var_60)
void var_78
sub_140745b20(&var_78)
void var_88
sub_140745b20(&var_88)
int64_t* var_90

if (var_90 != 0)
    var_90[1].d -= 1
    
    if (var_90[1].d == 1)
        (**var_90)(var_90)
        int32_t temp10_1 = *(var_90 + 0xc)
        *(var_90 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*var_90 + 8))(var_90, 1)

int64_t* var_b0

if (var_b0 != 0)
    var_b0[1].d -= 1
    
    if (var_b0[1].d == 1)
        (**var_b0)(var_b0)
        int32_t temp11_1 = *(var_b0 + 0xc)
        *(var_b0 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*var_b0 + 8))(var_b0, 1)

sub_140ddea30(&var_258)

if (rax_4 != 0)
    (*rax_4)[7](rax_4, 0)
    int64_t rax_30 = sub_140a84c80(rax_4, 0, 0)
    
    if (rax_30 != 0)
        sub_140a74f90(rax_30)

if (rax_2 != 0)
    (*rax_2)[7](rax_2, 0)
    int64_t rax_32 = sub_140a84c80(rax_2, 0, 0)
    
    if (rax_32 != 0)
        sub_140a74f90(rax_32)

sub_140745b20(&var_268)

if (*(arg1 + 0x110) s> 0)
    int64_t* rcx_38 = *(**(arg1 + 0x108) + 0x30)
    void** rcx_39
    int32_t rdi_2
    
    if (rcx_38 == 0)
        uint128_t zmm0_1 = data_143e244b0.o
        var_2b0.o = zmm0_1
        void* rax_34 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_34 != 0)
            *(rax_34 + 8) += 1
        
        rcx_39 = &var_2b0
        rdi_2 = 2
    else
        var_2b8 = 0
        var_2a8 = &var_2b8
        var_2b0 = sub_141b970e0
        sub_141befea0(rcx_38, &var_288, &var_2b0)
        rcx_39 = &var_288
        rdi_2 = 1
    
    var_298 = *rcx_39
    void* rax_36 = rcx_39[1]
    void* var_290_1 = rax_36
    
    if (rax_36 != 0)
        *(rax_36 + 8) += 1
    
    sub_140f5d9d0(*(arg1 + 0x150), &var_298)
    
    if ((rdi_2.b & 2) != 0)
        rdi_2 &= 0xfffffffd
        
        if (var_2a8 != 0)
            var_2a8[1].d -= 1
            
            if (var_2a8[1].d == 1)
                (**var_2a8)(var_2a8)
                int32_t temp16_1 = *(var_2a8 + 0xc)
                *(var_2a8 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*var_2a8)[1](var_2a8, 1)
    
    if ((rdi_2.b & 1) != 0 && var_280 != 0)
        var_280[1].d -= 1
        
        if (var_280[1].d == 1)
            (**var_280)(var_280)
            int32_t temp17_1 = *(var_280 + 0xc)
            *(var_280 + 0xc) -= 1
            
            if (temp17_1 == 1)
                (*(*var_280 + 8))(var_280, 1)

int64_t* rbx_11 = *(arg1 + 0x158)

if (rbx_11 != 0)
    rbx_11[1].d += 1

*arg2 = *(arg1 + 0x150)
arg2[1] = rbx_11

if (rbx_11 != 0)
    rbx_11[1].d += 1
    
    if (rbx_11 != 0)
        rbx_11[1].d -= 1
        
        if (rbx_11[1].d == 1)
            (**rbx_11)(rbx_11)
            int32_t temp13_1 = *(rbx_11 + 0xc)
            *(rbx_11 + 0xc) -= 1
            
            if (temp13_1 == 1)
                int64_t r8_4 = *rbx_11
                (*(r8_4 + 8))(rbx_11, 1, r8_4)

__security_check_cookie(rax_1 ^ &var_2e8)
return arg2
