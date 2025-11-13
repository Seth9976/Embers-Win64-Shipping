// 函数: sub_1428024c0
// 地址: 0x1428024c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* entry_r9
int64_t* arg_20 = entry_r9
int64_t* entry_rdx
int64_t* arg_10 = entry_rdx
int64_t* arg_28
int64_t* rsi = arg_28
int64_t* rbx = rsi[2]
(*(*entry_rdx + 0x28))(entry_rdx)
int64_t r8 = *entry_rdx
int512_t entry_zmm1
int32_t rax_2 = (*(r8 + 0x30))(entry_rdx, entry_zmm1, r8)
int64_t r8_1 = *entry_rdx
int32_t rax_3 = (*(r8_1 + 0x38))(entry_rdx, entry_zmm1, r8_1)
int64_t rdx = *entry_rdx
int32_t rax_4 = (*(rdx + 0x40))(entry_rdx, rdx)
int64_t rdx_1 = *entry_rdx
int32_t rax_5 = (*(rdx_1 + 0x48))(entry_rdx, rdx_1)
int64_t rdx_2 = *entry_rdx
int32_t rax_6 = (*(rdx_2 + 0x50))(entry_rdx, rdx_2)
uint64_t rcx_6 = zx.q(rax_5)
uint64_t r12 = zx.q(rax_6)
int64_t* var_d0 = rbx
int32_t i = 0
int32_t* var_c8 = nullptr
int64_t var_c0 = 0

if (rcx_6.d u< rax_3)
    rcx_6 = zx.q(rax_3)

arg_28.b = 0

if (rcx_6.d u< rax_6)
    rcx_6 = zx.q(rax_6)

uint64_t r9_1 = zx.q(rax_2) << 3
uint64_t rdx_3 = zx.q(rcx_6.d)

if (rcx_6 << 2 u< r12 << 2)
    rdx_3 = zx.q(r12.d)

uint64_t rdx_4 = rdx_3 << 2

if (rdx_4 u< r9_1)
    rdx_4 = zx.q(r9_1.d)

sub_142809ec0(&var_d0, rdx_4.d, &arg_28)
sub_1427e3ab0(rsi)
arg_28.b = 0
(**rsi)(rsi, &arg_28, 1)
int64_t* rcx_11 = arg_20
(*(*rcx_11 + 0x10))(rcx_11, "NbParticles", rsi[4])
int64_t* rdi_1 = arg_10
rsi[3] = 0
(*(*entry_rdx + 0x58))(rdi_1, var_c8, zx.q(rax_2))

if (rax_2 != 0 && var_c8 != 0)
    if (rax_2 != 0)
        int32_t* rdi_2 = var_c8
        
        do
            uint32_t rcx_13
            
            if (i != 0)
                rcx_13 = i u/ 0x12 * 9
            
            char const* const rdx_10
            int64_t r8_5
            
            if (i == 0 || i != rcx_13 * 2)
                r8_5 = 1
                rdx_10 = &data_1434cf410
            else
                r8_5 = 4
                rdx_10 = "\n\t\t\t"
            
            (**rsi)(rsi, rdx_10, r8_5)
            sub_142804180(rsi, rdi_2)
            i += 1
            rdi_2 = &rdi_2[2]
        while (i u< rax_2)
        
        rdi_1 = arg_10
    
    arg_28.b = 0
    (**rsi)(rsi, &arg_28, 1)
    int64_t* rcx_18 = arg_20
    (*(*rcx_18 + 0x10))(rcx_18, "Phases", rsi[4])
    i = 0
    rsi[3] = 0

(*(*rdi_1 + 0x70))(rdi_1, var_c8, zx.q(rax_3))
char var_b8[0x69]
int64_t* r13_1
float entry_zmm3[0x2]

if (rax_3 == 0 || var_c8 == 0)
    r13_1 = arg_20
else
    if (rax_3 != 0)
        int32_t* rdi_3 = var_c8
        
        do
            uint32_t rcx_20
            
            if (i != 0)
                rcx_20 = i u/ 0x12 * 9
            
            char const* const rdx_16
            int64_t r8_8
            
            if (i == 0 || i != rcx_20 * 2)
                r8_8 = 1
                rdx_16 = &data_1434cf410
            else
                r8_8 = 4
                rdx_16 = "\n\t\t\t"
            
            (**rsi)(rsi, rdx_16, r8_8)
            memset(&var_b8, 0, 0x80)
            entry_zmm3 = _mm_cvtps_pd(*rdi_3).q
            physx::shdfnd::snprintf(&var_b8, 0x80, "%g")
            
            if (var_b8[0] != 0)
                int64_t r8_9 = -1
                
                do
                    r8_9 += 1
                while (var_b8[r8_9] != 0)
                
                (**rsi)(rsi, &var_b8, r8_9)
            
            i += 1
            rdi_3 = &rdi_3[1]
        while (i u< rax_3)
        
        rdi_1 = arg_10
    
    arg_28.b = 0
    (**rsi)(rsi, &arg_28, 1, entry_zmm3, rax_5)
    r13_1 = arg_20
    (*(*r13_1 + 0x10))(r13_1, "Restvalues", rsi[4])
    i = 0
    rsi[3] = 0

(*(*rdi_1 + 0x60))(rdi_1, var_c8, zx.q(rax_4), entry_zmm3, rax_5)

if (rax_4 != 0 && var_c8 != 0)
    if (rax_4 != 0)
        int32_t* rdi_4 = var_c8
        
        do
            uint32_t rcx_29
            
            if (i != 0)
                rcx_29 = i u/ 0x12 * 9
            
            char const* const rdx_22
            int64_t r8_12
            
            if (i == 0 || i != rcx_29 * 2)
                r8_12 = 1
                rdx_22 = &data_1434cf410
            else
                r8_12 = 4
                rdx_22 = "\n\t\t\t"
            
            (**rsi)(rsi, rdx_22, r8_12)
            *rdi_4
            sub_1427e3ab0(rsi)
            i += 1
            rdi_4 = &rdi_4[1]
        while (i u< rax_4)
        
        rdi_1 = arg_10
    
    arg_20.b = 0
    (**rsi)(rsi, &arg_20, 1)
    (*(*r13_1 + 0x10))(r13_1, "Sets", rsi[4])
    i = 0
    rsi[3] = 0

(*(*rdi_1 + 0x68))(rdi_1, var_c8, zx.q(rax_5))

if (rax_5 != 0 && var_c8 != 0)
    if (rax_5 != 0)
        int32_t* rdi_5 = var_c8
        
        do
            uint32_t rcx_36
            
            if (i != 0)
                rcx_36 = i u/ 0x12 * 9
            
            char const* const rdx_28
            int64_t r8_15
            
            if (i == 0 || i != rcx_36 * 2)
                r8_15 = 1
                rdx_28 = &data_1434cf410
            else
                r8_15 = 4
                rdx_28 = "\n\t\t\t"
            
            (**rsi)(rsi, rdx_28, r8_15)
            *rdi_5
            sub_1427e3ab0(rsi)
            i += 1
            rdi_5 = &rdi_5[1]
        while (i u< rax_5)
        
        rdi_1 = arg_10
    
    arg_20.b = 0
    (**rsi)(rsi, &arg_20, 1)
    (*(*r13_1 + 0x10))(r13_1, "ParticleIndices", rsi[4])
    i = 0
    rsi[3] = 0

(*(*rdi_1 + 0x78))(rdi_1, var_c8, zx.q(r12.d))

if (r12.d != 0 && var_c8 != 0)
    if (r12.d != 0)
        int32_t* rdi_6 = var_c8
        
        do
            uint32_t rcx_43
            
            if (i != 0)
                rcx_43 = i u/ 0x12 * 9
            
            char const* const rdx_34
            int64_t r8_18
            
            if (i == 0 || i != rcx_43 * 2)
                r8_18 = 1
                rdx_34 = &data_1434cf410
            else
                r8_18 = 4
                rdx_34 = "\n\t\t\t"
            
            (**rsi)(rsi, rdx_34, r8_18)
            *rdi_6
            sub_1427e3ab0(rsi)
            i += 1
            rdi_6 = &rdi_6[1]
        while (i u< r12.d)
        
        rdi_1 = arg_10
    
    arg_10.b = 0
    (**rsi)(rsi, &arg_10, 1)
    (*(*r13_1 + 0x10))(r13_1, "TetherAnchors", rsi[4])
    i = 0
    rsi[3] = 0

(*(*rdi_1 + 0x80))(rdi_1, var_c8, zx.q(r12.d))

if (r12.d != 0 && var_c8 != 0)
    if (r12.d != 0)
        int32_t* rdi_7 = var_c8
        
        do
            uint32_t rcx_50
            
            if (i != 0)
                rcx_50 = i u/ 0x12 * 9
            
            char const* const rdx_40
            int64_t r8_21
            
            if (i == 0 || i != rcx_50 * 2)
                r8_21 = 1
                rdx_40 = &data_1434cf410
            else
                r8_21 = 4
                rdx_40 = "\n\t\t\t"
            
            (**rsi)(rsi, rdx_40, r8_21)
            memset(&var_b8, 0, 0x80)
            entry_zmm3 = _mm_cvtps_pd(*rdi_7).q
            physx::shdfnd::snprintf(&var_b8, 0x80, "%g")
            
            if (var_b8[0] != 0)
                int64_t r8_22 = -1
                
                do
                    r8_22 += 1
                while (var_b8[r8_22] != 0)
                
                (**rsi)(rsi, &var_b8, r8_22)
            
            i += 1
            rdi_7 = &rdi_7[1]
        while (i u< r12.d)
    
    arg_10.b = 0
    (**rsi)(rsi, &arg_10, 1, entry_zmm3)
    (*(*r13_1 + 0x10))(r13_1, "TetherLengths", rsi[4])
    rsi[3] = 0

int32_t result = var_c0:4.d

if ((result & 0x7fffffff) == 0 || result s< 0 || var_c8 == 0)
    return result

int64_t* rcx_58 = *var_d0
return (*(*rcx_58 + 0x10))(rcx_58, var_c8)
