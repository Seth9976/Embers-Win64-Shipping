// 函数: sub_1423762a0
// 地址: 0x1423762a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143de5480
int64_t r14 = data_143f59628
int64_t rcx

if (rax == 0)
    rcx = 0
else
    bool cond:0_1 = GetCurrentThreadId() != data_143de5470
    rax = data_143de5480
    rcx.b = cond:0_1

int32_t r13 = *(r14 + (rcx << 2))
int64_t r14_1 = data_143f59640
int64_t rcx_1

if (rax == 0)
    rcx_1 = 0
else
    rcx_1.b = GetCurrentThreadId() != data_143de5470

int32_t r12 = *(r14_1 + (rcx_1 << 2))
int64_t rbp

if (arg3 == 0 || *(arg3 + 0x94) s>= 0)
    rbp.b = 0
else
    rbp.b = 1

*(arg1 + 0x44) &= 0xffffff80
*(arg1 + 0x48) = 0
char var_148
sub_141ff4780(&var_148, arg2, arg4, 0xd6)
sub_1422ab580(arg1 + 0xf8, arg2, rbp.b, arg5)
int512_t zmm1 = sub_1422d0e90(arg1 + 0x70, arg2, rbp.b, arg5)
sub_1422ab240(arg1 + 0x138, arg2, rbp.b, zmm1)
*arg6 = 0
arg6[1].d = 0
int512_t zmm1_1 = sub_1422ab6b0(arg1 + 0x178, arg2, rbp.b, zmm1)
uint8_t var_147
char rax_4 = not.b(var_147) & 1
arg6.b = not.b(var_148) & 1
uint8_t r14_2 = not.b(var_147 u>> 2) & 1
void** var_138
sub_1422891d0(&var_138, 0)
void** var_f8
sub_1422891d0(&var_f8, 0)
void** var_b8
sub_1422891d0(&var_b8, 0)
void** var_78
sub_1422891d0(&var_78, 0)
void*** rbx_1 = &var_138

if (r13 != 1 && r12 != 1)
label_1423764cf:
    
    if (r14_2 != 0)
        zmm1_1 = sub_1422ab6b0(rbx_1, arg2, rbp.b, zmm1_1)
        
        if (r12 != 1)
            sub_142297830(rbx_1)
else if (r14_2 != 0 || rax_4 != r14_2 || arg6.b != r14_2 || r13 == 1)
    rbx_1 = *(arg1 + 0x1f8)
    
    if (rbx_1 == 0)
        void*** rax_6 = j_sub_140a82f30(0x100)
        rbx_1 = rax_6
        
        if (rax_6 == 0)
            rbx_1 = nullptr
        else
            memset(rax_6, 0, 0x100)
            sub_1422891d0(rbx_1, 0)
            sub_1422891d0(&rbx_1[8], 0)
            sub_1422891d0(&rbx_1[0x10], 0)
            sub_1422891d0(&rbx_1[0x18], 0)
        
        *(arg1 + 0x1f8) = rbx_1
    
    goto label_1423764cf

int32_t rcx_20
int512_t zmm1_2
rcx_20, zmm1_2 = sub_1422ab6b0(arg1 + 0x1b8, arg2, rbp.b, zmm1_1)

if (r13 != 1)
    rcx_20 = sub_142297830(arg1 + 0x1b8)

if (r14_2 != 0)
    rcx_20, zmm1_2 = sub_1422ab6b0(&rbx_1[8], arg2, rbp.b, zmm1_2)
    
    if (r12 != 1)
        rcx_20 = sub_142297830(&rbx_1[8])

if (arg6.b != 0)
    rcx_20, zmm1_2 = sub_1422ab6b0(&rbx_1[0x10], arg2, rbp.b, zmm1_2)
    int32_t rax_13
    bool cond:2_1
    
    if (*(arg1 + 0x1f8) != 0)
        int32_t rax_7 = rbx_1[0x17].d
        cond:2_1 = rax_7 != 0
        
        if (rax_7 s< 0)
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rbx_1[0x15].d)
            int32_t rax_11
            
            if (*(rbx_1 + 0xbc) == 0)
                rax_11 = (temp3_1 - temp2_1) s>> 1
            else
                rax_11 = (temp3_1 + (temp2_1 & 3)) s>> 2
            
            cond:2_1 = rax_11 != 0
        
        rax_13 = 0x20
    
    if (*(arg1 + 0x1f8) == 0 || not(cond:2_1))
        rax_13 = 0
    
    *(arg1 + 0x44) &= 0xffffffdf
    *(arg1 + 0x44) |= rax_13

int32_t r8_12

if (rax_4 == 0)
    r8_12 = *(arg1 + 0x44)
else
    rcx_20, zmm1_2 = sub_1422ab6b0(&rbx_1[0x18], arg2, rbp.b, zmm1_2)
    int32_t rax_20
    bool cond:5_1
    
    if (*(arg1 + 0x1f8) != 0)
        int32_t rax_14 = rbx_1[0x1f].d
        cond:5_1 = rax_14 != 0
        
        if (rax_14 s< 0)
            int32_t temp5_1
            int32_t temp6_1
            temp5_1:temp6_1 = sx.q(rbx_1[0x1d].d)
            int32_t rax_18
            
            if (*(rbx_1 + 0xfc) == 0)
                rax_18 = (temp6_1 - temp5_1) s>> 1
            else
                rax_18 = (temp6_1 + (temp5_1 & 3)) s>> 2
            
            cond:5_1 = rax_18 != 0
        
        rax_20 = 1
    
    if (*(arg1 + 0x1f8) == 0 || not(cond:5_1))
        rax_20 = 0
    
    r8_12 = (*(arg1 + 0x44) & 0xfffffffe) | rax_20
    *(arg1 + 0x44) = r8_12

if ((not.b(var_147 u>> 3) & 1) != 0)
    int32_t r8_13
    rcx_20, r8_13 = sub_142292820(arg1 + 0x218, arg2, 0, zmm1_2)
    r8_12 = (sbb.d(r8_13, r8_13, *(arg1 + 0x220) != 0) & 0x40) | (*(arg1 + 0x44) & 0xffffffbf)
    *(arg1 + 0x44) = r8_12

int32_t rax_27 = *(arg1 + 0x1f0)

if (rax_27 s< 0)
    int32_t temp8_1
    int32_t temp9_1
    temp8_1:temp9_1 = sx.q(*(arg1 + 0x1e0))
    
    if (*(arg1 + 0x1f4) == 0)
        rax_27 = (temp9_1 - temp8_1) s>> 1
    else
        rax_27 = (temp9_1 + (temp8_1 & 3)) s>> 2

int32_t rcx_29 = (sbb.d(rcx_20, rcx_20, rax_27 != 0) & 2) | (r8_12 & 0xfffffffd)
int64_t r8_17 = *(arg1 + 0x1f8)
*(arg1 + 0x44) = rcx_29
int32_t rax_36
bool cond:8_1

if (r8_17 != 0 && r14_2 != 0)
    int32_t rax_30 = rbx_1[7].d
    cond:8_1 = rax_30 != 0
    
    if (rax_30 s< 0)
        int32_t temp11_1
        int32_t temp12_1
        temp11_1:temp12_1 = sx.q(rbx_1[5].d)
        int32_t rax_34
        
        if (*(rbx_1 + 0x3c) == 0)
            rax_34 = (temp12_1 - temp11_1) s>> 1
        else
            rax_34 = (temp12_1 + (temp11_1 & 3)) s>> 2
        
        cond:8_1 = rax_34 != 0
    
    rax_36 = 4

if (r8_17 == 0 || r14_2 == 0 || not(cond:8_1))
    rax_36 = 0

int32_t rcx_31 = (rcx_29 & 0xfffffffb) | rax_36
*(arg1 + 0x44) = rcx_31
int32_t rax_43
bool cond:11_1

if (r8_17 != 0 && r14_2 != 0)
    int32_t rax_37 = rbx_1[0xf].d
    cond:11_1 = rax_37 != 0
    
    if (rax_37 s< 0)
        int32_t temp14_1
        int32_t temp15_1
        temp14_1:temp15_1 = sx.q(rbx_1[0xd].d)
        int32_t rax_41
        
        if (*(rbx_1 + 0x7c) == 0)
            rax_41 = (temp15_1 - temp14_1) s>> 1
        else
            rax_41 = (temp15_1 + (temp14_1 & 3)) s>> 2
        
        cond:11_1 = rax_41 != 0
    
    rax_43 = 8

if (r8_17 == 0 || r14_2 == 0 || not(cond:11_1))
    rax_43 = 0

int32_t rax_44 = 0

if (*(arg1 + 0x16c) u> 0)
    rax_44 = 0x10

*(arg1 + 0x44) = (((rcx_31 & 0xfffffff7) | rax_43) & 0xffffffef) | rax_44
int32_t rcx_36 = *(arg1 + 0x1f0)

if (rcx_36 s< 0)
    int32_t temp18_1
    int32_t temp19_1
    temp18_1:temp19_1 = sx.q(*(arg1 + 0x1e0))
    
    if (*(arg1 + 0x1f4) == 0)
        rcx_36 = (temp19_1 - temp18_1) s>> 1
    else
        rcx_36 = ((temp18_1 & 3) + temp19_1) s>> 2

*(arg1 + 0x48) = rcx_36 s/ 3
int64_t rbx_2 = sx.q(*(arg1 + 0x2b0))
int32_t rdx_25 = *(arg1 + 0x30)

if (rdx_25 s> rbx_2.d)
    *(arg1 + 0x2b0) = rdx_25
    int32_t i_2 = rdx_25 - rbx_2.d
    
    if (rdx_25 s> *(arg1 + 0x2b4))
        sub_1422cf880(arg1 + 0x2a8, rbx_2.d)
    
    void* rax_52 = *(arg1 + 0x2a8)
    
    if ((rax_52.b & 1) != 0)
        rax_52 = (rax_52 s>> 1) + arg1 + 0x2a8
    
    void* rbx_4 = (rbx_2 << 6) + rax_52
    
    if (i_2 != 0)
        int32_t i
        
        do
            sub_1424288a0(rbx_4)
            *rbx_4 = &data_14332bbb0
            *(rbx_4 + 0x30) = 0
            *(rbx_4 + 0x38) = 0xffffffff
            rbx_4 += 0x40
            i = i_2
            i_2 -= 1
        while (i != 1)
else if (rdx_25 s< rbx_2.d)
    sub_142372df0(arg1 + 0x2a8, rdx_25, rbx_2.d - rdx_25, 1)

void* i_1 = *(arg1 + 0x2a8)

if ((i_1.b & 1) != 0)
    i_1 = (i_1 s>> 1) + arg1 + 0x2a8

for (void* rsi_2 = (sx.q(*(arg1 + 0x2b0)) << 6) + i_1; i_1 != rsi_2; i_1 += 0x40)
    (*(*i_1 + 0x18))(i_1, arg2)

(*(*(arg1 + 0x270) + 0x18))(arg1 + 0x270, arg2)
return sub_142351cf0(&var_138)
