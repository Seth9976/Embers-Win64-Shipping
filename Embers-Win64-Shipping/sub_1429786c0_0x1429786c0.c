// 函数: sub_1429786c0
// 地址: 0x1429786c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1c8 = -2
void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t r13 = sx.q(arg2)

if (*(arg1 + 0x198) == 0)
    void* var_1b8
    sub_1429779b0(&var_1b8, 3, 1)
    char* rax_34 = sub_1429887e0(*(arg1 + 0x50))
    void var_1a8
    sub_14058b120(
        sub_14058b120(
            sub_14058b120(&var_1a8, 
                "No frame buffer was specified as the pixel data destination for image file ""), 
            rax_34), 
        "".")
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_142977aa0(&exceptionObject, &var_1b8)
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

int32_t rdi_1 = r13.d - *(arg1 + 0x70)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi_1)
int32_t rbp_2 = (temp1 ^ temp0) - temp0

if (rbp_2 s< 0x1d)
    sub_142979480(arg1, rdi_1)

int32_t i = 2

if (rbp_2 s< 3)
    int32_t rdx_2
    
    if (rdi_1 s< 0)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = muls.dp.d(0x55555555, 2 - rdi_1)
        rdx_2 = (temp2_1 - (2 - rdi_1)) s>> 1
    else
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = muls.dp.d(0x55555556, rdi_1)
        rdx_2 = temp4_1
    
    int32_t r9_2 = rdi_1 - (rdx_2 + (rdx_2 u>> 0x1f)) * 3
    int64_t var_58 = *(arg1 + 0x178)
    int64_t var_50_1 = *(arg1 + 0x180)
    int64_t var_48_1 = *(arg1 + 0x188)
    *(arg1 + 0x178) = (&var_58)[sx.q(r9_2 s% 3)]
    *(arg1 + 0x180) = (&var_58)[sx.q((r9_2 + 1) s% 3)]
    *(arg1 + 0x188) = (&var_58)[sx.q((r9_2 + 2) s% 3)]

int32_t i_2 = 0

if (rdi_1 s>= 0)
    int32_t rax_24 = rdi_1
    
    if (rdi_1 s> 0x1d)
        rax_24 = 0x1d
    
    int64_t r14_3 = sx.q(rax_24 - 1)
    
    if (rax_24 - 1 s>= 0)
        int32_t rbp_6 = (r13 + 0xe).d - (rax_24 - 1)
        void* r12_1 = arg1 + ((0x2e - r14_3) << 3)
        int64_t temp14_1
        
        do
            sub_142978b80(arg1, rbp_6, *r12_1)
            rbp_6 += 1
            r12_1 += 8
            temp14_1 = r14_3
            r14_3 -= 1
        while (temp14_1 - 1 s>= 0)
    
    if (rdi_1 s> 3)
        rdi_1 = 3
    
    if (2 - rdi_1 s< 2)
        int64_t rbp_7 = 0x10
        void** rdi_3 = arg1 + 0x188
        
        do
            void* r8_7
            void* r9_4
            
            if (((i.b + r13.b) & 1) == 0)
                sub_14298a5f0(*(arg1 + 0x68), arg1 + 0x90 + rbp_7, *rdi_3)
                r8_7 = *rdi_3
                r9_4 = r8_7
            else
                r9_4 = *rdi_3
                r8_7 = rdi_3[-0x10]
            
            sub_142989850(arg1 + 0x78, *(arg1 + 0x68), r8_7, r9_4)
            i -= 1
            rbp_7 -= 8
            rdi_3 -= 8
        while (i s> 2 - rdi_1)
else
    int32_t i_4 = neg.d(rdi_1)
    int32_t i_5 = i_4
    
    if (i_4 s> 0x1d)
        i_5 = 0x1d
    
    int64_t rsi = sx.q(i_5 - 1)
    
    if (i_5 - 1 s>= 0)
        int32_t rbp_4 = (r13 - 0xe).d + i_5 - 1
        void* r14_2 = arg1 + 0x90 + (rsi << 3)
        int64_t temp15_1
        
        do
            sub_142978b80(arg1, rbp_4, *r14_2)
            rbp_4 -= 1
            r14_2 -= 8
            temp15_1 = rsi
            rsi -= 1
        while (temp15_1 - 1 s>= 0)
    
    if (i_4 s> 3)
        i_4 = 3
    
    int32_t rsi_1 = 0
    int64_t i_3 = sx.q(i_4)
    
    if (i_4 s> 0)
        void** rdi_2 = arg1 + 0x178
        int64_t i_1
        
        do
            void* r8_4
            void* r9_3
            
            if (((rsi_1.b + r13.b) & 1) == 0)
                sub_14298a5f0(*(arg1 + 0x68), arg1 + ((sx.q(rsi_1) + 0x12) << 3), *rdi_2)
                r8_4 = *rdi_2
                r9_3 = r8_4
            else
                r9_3 = *rdi_2
                r8_4 = rdi_2[-0x10]
            
            sub_142989850(arg1 + 0x78, *(arg1 + 0x68), r8_4, r9_3)
            rsi_1 += 1
            rdi_2 = &rdi_2[1]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

int16_t result = sub_142989d80(arg1 + 0x78, *(arg1 + 0x68), arg1 + 0x178, *(arg1 + 0x190))

if (*(arg1 + 0x68) s> 0)
    int64_t r9_6 = 0
    
    do
        int16_t* r8_11 = *(arg1 + 0x190) + r9_6
        int16_t* rcx_20 = *(arg1 + 0x198)
            + ((sx.q(*(arg1 + 0x5c) + i_2) * *(arg1 + 0x1a0) + r13 * *(arg1 + 0x1a8)) << 3)
        *rcx_20 = *r8_11
        rcx_20[1] = r8_11[1]
        rcx_20[2] = r8_11[2]
        result = r8_11[3]
        rcx_20[3] = result
        i_2 += 1
        r9_6 += 8
    while (i_2 s< *(arg1 + 0x68))

*(arg1 + 0x70) = r13.d
__security_check_cookie(rax_1 ^ &var_1e8)
return result
