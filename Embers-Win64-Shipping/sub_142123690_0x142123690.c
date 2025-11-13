// 函数: sub_142123690
// 地址: 0x142123690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int64_t* arg_10 = arg2
int64_t* rdi = arg3
int64_t* r15 = arg2
void* r10 = *(arg3[1] + 0x10)
void* r13 = *(r10 + 0x28)
arg2[0xa] = r10
sub_1421305d0(arg2)
int32_t rdx = *(r13 + 0x128)
r15[4].d = 0

if (*(r15 + 0x24) != rdx)
    sub_1405c5570(&r15[3], rdx)

int32_t rdx_1 = *(r13 + 0x128)
r15[6].d = 0

if (*(r15 + 0x34) != rdx_1)
    sub_1405c5570(&r15[5], rdx_1)

if ((*(arg1 + 0x18c) & 8) != 0)
    int64_t* rax_1 = sub_142006940()
    int64_t r8 = *rax_1
    (*(r8 + 0x158))(rax_1, arg1, r8)
    *(arg1 + 0x18c) &= 0xf7

int32_t i_1 = 0

if (*(r13 + 0x128) s> 0)
    void* rcx_4 = r13 + 0x120
    void* var_c8_1 = nullptr
    void* r15_1 = nullptr
    int32_t i
    
    do
        void* rax_3 = *rcx_4
        
        if ((rax_3.b & 1) != 0)
            rax_3 = (rax_3 s>> 1) + rcx_4
        
        int64_t rbx_1 = sx.q(*(r15_1 + rax_3 + 0x24))
        int64_t rbx_3
        
        if (rbx_1.d == 0xffffffff)
            int64_t rax_13 = sub_14211e3f0(arg1, rdi, r13 + 0x70, r15_1 + rax_3)
            rbx_3 = rax_13
            
            if (rax_13 != 0)
                int64_t rdi_2 = sx.q(r15[6].d)
                int32_t rcx_11 = (rdi_2 + 1).d
                r15[6].d = rcx_11
                
                if (rcx_11 s> *(r15 + 0x34))
                    sub_1405a4d70(&r15[5])
                
                *(r15[5] + (rdi_2 << 3)) = rbx_3
        else
            int64_t* rcx_5 = rdi[1]
            int64_t var_80
            (*(*rcx_5 + 0x358))(rcx_5, &var_80)
            int32_t var_78
            char rax_5
            
            if (rbx_1.d s< 0 || rbx_1.d s>= var_78)
                rax_5 = 0
            else
                rax_5 = 1
            
            void* r15_2
            
            if (rax_5 != 0)
                r15_2 = *(var_80 + (rbx_1 << 3))
            
            if (rax_5 != 0 && r15_2 != 0)
                void* rax_7 = sub_142582280()
                void* rdx_4 = *(r15_2 + 0x10)
                int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                
                if (rax_8.d s> *(rdx_4 + 0x38) || *(*(rdx_4 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                    r15_1 = var_c8_1
                    rbx_3 = 0
                else
                    int64_t* rax_10 = sub_142006940()
                    void var_88
                    (*(*rax_10 + 0x150))(rax_10, sub_1424376d0(r15_2, &var_88), sub_14212f170, arg1)
                    *(arg1 + 0x18c) |= 8
                    r15_1 = var_c8_1
                    rbx_3 = sub_1418e8df0(r15_2)
            else if (data_143f4c66c != 0)
                r15_1 = var_c8_1
                rbx_3 = 0
            else
                data_143f4c66c = 1
                r15_1 = var_c8_1
                rbx_3 = 0
        
        int64_t rdi_3 = sx.q(r15[4].d)
        int32_t rax_15 = (rdi_3 + 1).d
        r15[4].d = rax_15
        
        if (rax_15 s> *(r15 + 0x24))
            sub_1405a4d70(&r15[3])
        
        rcx_4 = r13 + 0x120
        uint64_t rax_16 = r15[3]
        i = i_1 + 1
        r15_1 += 0x28
        i_1 = i
        var_c8_1 = r15_1
        *(rax_16 + (rdi_3 << 3)) = rbx_3
        rdi = arg_18
    while (i s< *(r13 + 0x128))
    r15 = arg_10

arg_10.b = 0
int64_t* var_68 = &arg_10
void*** (* var_70)() = j_sub_140597fc0
int64_t* rax_18 = sub_140a756e0(&var_70, &data_143958018) + 0x10
i_1.b = 0
int64_t* var_c0 = rax_18
void*** (* var_60)() = j_sub_140597fc0
int64_t rcx_15 = *rax_18
int64_t rcx_16 = rax_18[2]
char var_a8 = 0
int64_t result_1 = rax_18[3]
rax_18[3] = &var_c0
int64_t* rax_19 = var_c0
rax_19[4].d += 1
int32_t* var_58 = &i_1
void* rax_20 = sub_140a756e0(&var_60, &data_143958018)
int64_t rdx_11 = sx.q(*(r13 + 0x140))
uint64_t rcx_18 = 0x10
int32_t rax_21 = 8

if (rdx_11.d s>= 0x10)
    rax_21 = 0x10

if (rdx_11.d s>= 0x10)
    rcx_18 = zx.q(rax_21)

uint64_t rsi_1 = zx.q(rcx_18.d)
int64_t rcx_20 = not.q(rcx_18 - 1)
int128_t* rdi_7 = (*(rax_20 + 0x10) - 1 + rsi_1) & rcx_20
void* rax_23 = rdx_11 + rdi_7

if (rax_23 u> *(rax_20 + 0x18))
    sub_140b0e3d0(rax_20 + 0x10, rdx_11.d + rsi_1.d)
    rdi_7 = (*(rax_20 + 0x10) - 1 + rsi_1) & rcx_20
    rax_23 = rdx_11 + rdi_7

*(rax_20 + 0x10) = rax_23
int32_t var_d8 = *(r13 + 0x140)
int32_t rax_26
int64_t r9_3
rax_26, r9_3 = sub_142145390(r13 + 0x70, arg_18, r15, rdi_7)
void* rcx_23 = arg4

if (rcx_23 == 0)
    void* rcx_28 = *r15
    int64_t rdx_15
    
    if (rcx_28 != 0)
        if (*(rcx_28 + 0xc) == 0)
            rax_26 = 0
            
            if (0 == *(rcx_28 + 8))
                *(rcx_28 + 8) = 0
            else
                rax_26 = *(rcx_28 + 8)
        
        if (*(rcx_28 + 0xc) != 0 || rax_26 s<= 0)
            rax_26.b = 0
        else
            rax_26.b = 1
        
        if (rax_26.b == 0)
            sub_140af98a0("Unknown", 0x94a, 
                The Uniformbuffer needs to be valid if it has been set", r9_3)
            sub_140afbb40()
        
        rdx_15 = *r15
    
    if (rcx_28 == 0 || rdx_15 == 0)
        int64_t* rcx_30 = data_143f0f180
        (*(*rcx_30 + 0xf8))(rcx_30, &arg_18, rdi_7, r13 + 0x140, 2, 1, rcx_20)
        sub_1405d1600(r15, &arg_18)
        sub_1405d1550(&arg_18)
    else
        int64_t* rcx_29 = data_143f0f180
        (*(*rcx_29 + 0x100))(rcx_29, rdx_15, rdi_7)
else
    int64_t* rsi_2 = rcx_23 + 0x30
    arg_18.d = *(r13 + 0x140)
    void*** rbx_7 = (*rsi_2 + 7) & 0xfffffffffffffff8
    void* const var_90 = nullptr
    void* rax_28 = &rbx_7[5]
    
    if (rax_28 u> rsi_2[1])
        sub_140b0e3d0(rsi_2, 0x30)
        rcx_23 = arg4
        rbx_7 = (*rsi_2 + 7) & 0xfffffffffffffff8
        rax_28 = &rbx_7[5]
    
    *rsi_2 = rax_28
    int64_t* rax_29 = *(rcx_23 + 8)
    *(rcx_23 + 0x14) += 1
    uint32_t r9_4 = arg_18.d
    var_d8.q = r13 + 0x140
    *rax_29 = rbx_7
    *(rcx_23 + 8) = &rbx_7[1]
    rbx_7[1] = 0
    *rbx_7 = &data_143009c10
    sub_141992630(&rbx_7[2], rcx_23, rdi_7, r9_4, var_d8)
    int64_t* var_98_1 = &rbx_7[2]
    r15[1] = &rbx_7[2]
    sub_1405d16e0(&r15[2], nullptr)
    sub_1405d1550(&var_90)

void* rbx_11 = *(r13 + 0x130)
int64_t rsi_3 = sx.q(*(r13 + 0x138))

if ((rbx_11.b & 1) != 0)
    rbx_11 = (rbx_11 s>> 1) + r13 + 0x130

int32_t r8_7 = *(r15 + 0x44)
r15[8].d = rsi_3.d
int64_t result

if (rsi_3.d != 0 || r8_7 != 0)
    sub_1405a4be0(&r15[7], rsi_3.d, r8_7)
    result = memcpy(r15[7], rbx_11, (rsi_3 << 4).d)
else
    result = 0
    *(r15 + 0x44) = 0

r15[9].b = 1
*(arg1 + 0x188) += 1

if (var_a8 == 0)
    int64_t* rax_33 = var_c0
    char var_a8_1 = 1
    rax_33[4].d -= 1
    int64_t* rcx_34 = var_c0
    
    if (rcx_16 != rcx_34[2])
        sub_140b16b40(rcx_34, rcx_16)
        rcx_34 = var_c0
    
    *rcx_34 = rcx_15
    result = result_1
    var_c0[3] = result

return result
