// 函数: sub_141fde6a0
// 地址: 0x141fde6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
int32_t i = 0
void* r13 = arg1
int64_t var_350 = arg2

if (arg4[1].d s> 0)
    do
        int64_t* rcx = data_143f0f180
        int64_t r9 = *rcx
        (*(r9 + 0x538))(rcx, &data_143f02b98, sx.q(i) * 0x88 + *arg5, r9)
        i += 1
    while (i s< arg4[1].d)

void var_2b8
sub_1419928d0(&var_2b8, r13)
int32_t i_1 = 0

if (arg4[1].d s> 0)
    int64_t r15_1 = 0
    
    do
        int64_t* rdi_2 = *arg4 + r15_1
        int64_t* var_2b0
        int64_t* rax_3 = sub_14081d830(0x50, var_2b0, 1, 0)
        int64_t* rbx = rax_3
        
        if (rax_3 == 0)
            rbx = nullptr
        else
            __builtin_memset(&rbx[6], 0, 0x18)
        
        memset(rbx, 0, 0x50)
        *rbx = rdi_2[1]
        rbx[1].d = rdi_2[2].d
        int32_t rax_5 = *(rdi_2 + 0x1c)
        rbx[2].d = *(rdi_2 + 0x14)
        *(rbx + 0x14) = rdi_2[3].d
        rbx[3].d = rax_5
        *(rbx + 0x1c) = 0
        int32_t rdx_3 = rdi_2[5].d
        rbx[4].d = rdi_2[4].d
        *(rbx + 0x24) = *(rdi_2 + 0x24)
        rbx[5].d = rdx_3
        *(rbx + 0x2c) = 0
        rbx[6] = *rdi_2
        rbx[7] = data_14395f4d0
        rbx[8] = var_350
        uint128_t var_2d8
        sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(arg3)]), &var_2d8, &data_143f3dee0, 
            0)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(*(rdi_2 + 0x14) + 7)
        int64_t* var_2f0_1 = rdi_2
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rdi_2[3].d + 7)
        int32_t var_33c_1 = (temp3_1 + (temp2_1 & 7)) s>> 3
        int32_t rax_21 = *(rdi_2 + 0x1c)
        uint128_t var_310_1 = var_2d8
        int64_t* var_2e8_1 = &var_350
        uint64_t var_300_1 = ((temp1_1 + (temp0_1 & 7)) s>> 3).q
        void*** rax_22
        char rcx_7
        rax_22, rcx_7 = sub_14081d830(0x70, var_2b0, 1, 0)
        void*** rdi_3 = rax_22
        
        if (rax_22 == 0)
            rdi_3 = nullptr
        else
            sub_141fe44f0(rcx_7)
            void* var_320_1 = &data_143f3ed30
            int128_t var_2c8 = rbx.o
            void var_358
            sub_141992bd0(rdi_3, &var_358, &var_2c8, 2)
            *rdi_3 = &data_143296a50
            *(rdi_3 + 0x38) = rbx.o
            *(rdi_3 + 0x48) = var_310_1
            *(rdi_3 + 0x58) = rax_21.o
            rdi_3[0xd] = var_2e8_1
        
        sub_1419968d0(&var_2b8, rdi_3)
        i_1 += 1
        r15_1 += 0x30
    while (i_1 s< arg4[1].d)
    
    r13 = arg1

sub_14199ef00(&var_2b8)
int64_t* rbx_3 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_23 = &rbx_3[1]

if (rax_23 u> *(r13 + 0x38))
    sub_140b0e3d0(r13 + 0x30, 0x10)
    rbx_3 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
    rax_23 = &rbx_3[1]

*(r13 + 0x30) = rax_23
*rbx_3 = var_350
void*** rcx_14 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_25 = &rcx_14[6]

if (rax_25 u> *(r13 + 0x38))
    sub_140b0e3d0(r13 + 0x30, 0x38)
    rcx_14 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
    rax_25 = &rcx_14[6]

*(r13 + 0x30) = rax_25
void**** rax_26 = *(r13 + 8)
*(r13 + 0x14) += 1
*rax_26 = rcx_14
*(r13 + 8) = &rcx_14[1]
rcx_14[1] = 0
*rcx_14 = &data_142da7798
rcx_14[2].d = 1
rcx_14[3] = rbx_3
rcx_14[4].d = 2
*(rcx_14 + 0x24) = 3
rcx_14[5] = 0
int64_t result = sub_1410eb9e0(&var_2b8)
__security_check_cookie(rax_1 ^ &var_378)
return result
