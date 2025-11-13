// 函数: sub_140f75280
// 地址: 0x140f75280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ddd070(arg2, arg1 + 0x2e0)
int64_t* rcx_2

if (*(arg1 + 0x598) == 0)
    rcx_2 = arg1 + 0x2e8
else
    rcx_2 = sub_140eff6e0(arg1 + 0x548)

int128_t zmm0 = *(rcx_2 + 0x10)
int64_t var_68 = *rcx_2
int64_t var_60 = rcx_2[1]
int64_t var_38 = rcx_2[6]
int64_t* rax_5 = rcx_2[7]
int128_t var_58 = zmm0
int128_t var_48 = *(rcx_2 + 0x20)

if (rax_5 != 0)
    rax_5[1].d += 1

int64_t var_28 = rcx_2[8]
int32_t var_20 = rcx_2[9].d
char var_1c = *(rcx_2 + 0x4c)
int128_t zmm1_1 = sub_140d962e0(&arg2[1], &var_68)

if (rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d == 1)
        (**rax_5)(rax_5)
        int32_t temp1_1 = *(rax_5 + 0xc)
        *(rax_5 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rax_5 + 8))(rax_5, 1)

int64_t* r14 = nullptr

if (*(arg1 + 0x5b8) != 0)
    if (*(arg1 + 0x5c8) != 0)
        int64_t* rcx_6 = *(arg1 + 0x5c0)
        
        if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
            int64_t* rcx_7
            
            if (*(arg1 + 0x5c8) == 0)
                rcx_7 = nullptr
            else
                rcx_7 = *(arg1 + 0x5c0)
            
            *(arg1 + 0x5b0) = (*(*rcx_7 + 0x48))(rcx_7)
    
    void* rdx_2 = *(arg1 + 0x5b0)
    
    if (rdx_2 != 0)
        zmm1_1 = sub_140693270(&arg2[0x2b], rdx_2)

int128_t* rdi_1

if (*(arg1 + 0x5f8) == 0)
    rdi_1 = arg1 + 0x338
else
    rdi_1 = sub_140e11270(arg1 + 0x5d0, zmm1_1)

uint128_t zmm0_1 = *rdi_1
int64_t* rdi_2 = rdi_1[2].q

if (rdi_2 != 0)
    rdi_2[1].d += 1

arg2[0xd].b = rdi_1[1].b
int64_t var_78 = *(rdi_1 + 0x18)
int64_t* rsi = rdi_2
*(arg2 + 0x58) = zmm0_1

if (rdi_2 != 0)
    rdi_2[1].d += 1

if (&var_78 != &arg2[0xe])
    var_78.o = *(arg2 + 0x70)
    rsi = rdi_2
    *(arg2 + 0x70) = var_78.o

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp4_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rsi + 8))(rsi, 1)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp5_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

void* rdi_3

if (*(arg1 + 0x618) == 0)
    rdi_3 = arg1 + 0x360
else
    rdi_3 = arg1 + 0x610
    
    if (*(rdi_3 + 0x18) != 0)
        int64_t* rcx_15 = *(rdi_3 + 0x10)
        
        if (rcx_15 != 0 && (*(*rcx_15 + 0x28))(rcx_15) != 0)
            int64_t* rcx_16
            
            if (*(rdi_3 + 0x18) == 0)
                rcx_16 = nullptr
            else
                rcx_16 = *(rdi_3 + 0x10)
            
            (*(*rcx_16 + 0x48))(rcx_16, &var_78)
            *rdi_3 = var_78

arg2[0x10].d = (*rdi_3).d
*(arg2 + 0x84) = (*(rdi_3 + 4)).d
uint128_t* rdi_4

if (*(arg1 + 0x640) == 0)
    rdi_4 = arg1 + 0x368
else
    rdi_4 = arg1 + 0x630
    
    if (rdi_4[2].d != 0)
        int64_t* rcx_17 = *(rdi_4 + 0x18)
        
        if (rcx_17 != 0 && (*(*rcx_17 + 0x28))(rcx_17) != 0)
            int64_t* rcx_18
            
            if (rdi_4[2].d == 0)
                rcx_18 = nullptr
            else
                rcx_18 = *(rdi_4 + 0x18)
            
            (*(*rcx_18 + 0x48))(rcx_18, &var_78)
            *rdi_4 = var_78.o

*(arg2 + 0x88) = *rdi_4
void* rdi_5

if (*(arg1 + 0x668) == 0)
    rdi_5 = arg1 + 0x3a0
else
    rdi_5 = arg1 + 0x658
    
    if (*(rdi_5 + 0x20) != 0)
        int64_t* rcx_19 = *(rdi_5 + 0x18)
        
        if (rcx_19 != 0 && (*(*rcx_19 + 0x28))(rcx_19) != 0)
            int64_t* rcx_20
            
            if (*(rdi_5 + 0x20) == 0)
                rcx_20 = nullptr
            else
                rcx_20 = *(rdi_5 + 0x18)
            
            (*(*rcx_20 + 0x48))(rcx_20, &var_78)
            *rdi_5 = var_78.o

*(arg2 + 0xc0) = *rdi_5
void* rdx_6

if (*(arg1 + 0x688) == 0)
    rdx_6 = arg1 + 0x3b0
else
    if (*(arg1 + 0x698) != 0)
        int64_t* rcx_21 = *(arg1 + 0x690)
        
        if (rcx_21 != 0 && (*(*rcx_21 + 0x28))(rcx_21) != 0)
            if (*(arg1 + 0x698) != 0)
                r14 = *(arg1 + 0x690)
            
            *(arg1 + 0x680) = (*(*r14 + 0x48))(r14)
    
    rdx_6 = *(arg1 + 0x680)

sub_140693270(&arg2[0x1a], rdx_6)
return arg2
