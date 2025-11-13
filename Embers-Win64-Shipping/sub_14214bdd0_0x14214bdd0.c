// 函数: sub_14214bdd0
// 地址: 0x14214bdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xb] = arg2
void* rdx = *(arg2 + 0x728)
int32_t rbx = *(arg2 + 0x730)
void* r8 = arg2 + 0x718

if (rdx != 0)
    r8 = rdx

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg2 + 0x738))
int64_t rdx_3 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
uint64_t r9_1 = zx.q((rbx + 0x1f) u>> 5)
int64_t rcx = rdx_3

if (rdx_3 s< r9_1)
    while (*(r8 + (rcx << 2)) == 0xffffffff)
        rdx_3 = zx.q(rdx_3.d + 1)
        rcx += 1
        
        if (rcx s>= r9_1)
            break

int32_t rax_5
int32_t rdx_5
int64_t r9_2
int32_t r10_1

if (rdx_3.d s< r9_1.d)
    r9_2 = sx.q(rdx_3.d)
    r10_1 = *(r8 + (r9_2 << 2))
    rax_5 = not.d(r10_1)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rax_5)
    rdx_5 = (rdx_3.d << 5) + temp0_1

if (rdx_3.d s>= r9_1.d || rdx_5 s>= rbx)
    rdx_5 = -1
else
    *(r8 + (r9_2 << 2)) = (neg.d(rax_5) & rax_5) | r10_1

*(arg2 + 0x738) = rdx_5 + 1
void* r15 = arg1[0xb]
int32_t rax_8 = 0

if (rdx_5 != 0xffffffff)
    rax_8 = rdx_5

*(arg1 + 0x1a24) = rax_8
uint128_t zmm1 = zx.o(*(r15 + 0x218))
zmm1 = _mm_unpacklo_pd(zmm1, zmm1.q)
int32_t temp0_3 = _mm_cvtpd_ps(zmm1)
arg1[0x3b] = 0
arg1[0x3c] = 0
arg1[0x90] = 0
arg1[0x8a] = zmm1.q
*(arg1 + 0x204) = temp0_3
arg1[0x41].d = temp0_3
arg1[0x3a] = zmm1.q
*(arg1 + 0x1e8) = zmm1
*(arg1 + 0x210) = zmm1
void*** var_58
uint64_t arg_8

if (*(r15 + 0x130) != 0)
    sub_140b58260(&arg_8, u"Core.ServerNetConn", 1)
    void*** rax_9 = j_sub_140a82f30(0x30)
    void*** rsi_1 = rax_9
    
    if (rax_9 == 0)
        rsi_1 = nullptr
    else
        __builtin_memset(&rax_9[1], 0, 0x28)
        *rsi_1 = &data_1432dce08
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&rsi_1[4])
        *rsi_1 = &data_1432dce28
    
    int64_t var_68 = 0
    int32_t var_60_1 = 0
    sub_1405947f0(&var_68, 0x16)
    int32_t rax_10 = var_60_1 + 0x16
    var_60_1 = rax_10
    
    if (rax_10 s> 0)
        sub_140594770(&var_68)
    
    UnDecorator::getReferenceType(var_68, u"FNetConnAnalyticsData", 0x2c)
    void*** rax_11 = j_sub_140a82f30(0x18)
    void*** rbx_1 = rax_11
    
    if (rax_11 == 0)
        rbx_1 = nullptr
    else
        rax_11[1].d = 1
        *(rax_11 + 0xc) = 1
        *rbx_1 = &data_1432de440
        rbx_1[2] = rsi_1
    
    var_58 = rsi_1
    void*** var_50_1 = rbx_1
    
    if (rsi_1 != 0 && rsi_1 != -8)
        void* rax_12
        
        if (rsi_1[1] != 0)
            rax_12 = rsi_1[2]
        
        if (rsi_1[1] == 0 || rax_12 == 0 || *(rax_12 + 8) s<= 0)
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            rsi_1[1] = rsi_1
            int64_t* rcx_10 = rsi_1[2]
            
            if (rbx_1 != rcx_10)
                if (rbx_1 != 0)
                    *(rbx_1 + 0xc) += 1
                    rcx_10 = rsi_1[2]
                
                if (rcx_10 != 0)
                    int32_t temp11_1 = *(rcx_10 + 0xc)
                    *(rcx_10 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rcx_10 + 8))(rcx_10, 1)
                
                rsi_1[2] = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp10_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*rbx_1)[1](rbx_1, 1)
    
    int32_t var_98
    var_98.q = &var_68
    void var_48
    int64_t* rax_16 = sub_141c7e860(*(r15 + 0x130), &var_48, &var_58, &arg_8, var_98)
    int64_t* rbx_2 = rax_16[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    void var_38
    
    if (&arg1[0xa6] == &var_38)
    label_14214c0c5:
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp5_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    else
        arg1[0xa6] = *rax_16
        int64_t* rsi_2 = arg1[0xa7]
        
        if (rbx_2 == rsi_2)
            goto label_14214c0c5
        
        arg1[0xa7] = rbx_2
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d == 1)
                (**rsi_2)(rsi_2)
                int32_t temp8_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rsi_2 + 8))(rsi_2, 1)
    
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp7_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_40 + 8))(var_40, 1)

sub_140b3fb90(&arg1[0x2a4])
*(arg1 + 0x134) = arg5
sub_140597df0(&arg1[0x15], arg4)
sub_140597df0(&arg1[0x17], &arg4[2])
arg1[0x19].d = arg4[4].d
*(arg1 + 0xcc) = *(arg4 + 0x24)
sub_140597df0(&arg1[0x1a], &arg4[5])
sub_140597df0(&arg1[0x1c], &arg4[7])

if (&arg1[0x1e] != &arg4[9])
    int32_t i_1 = arg1[0x1f].d
    int64_t* rbx_4 = arg1[0x1e]
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_25 = *rbx_4
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            rbx_4 = &rbx_4[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_1405967a0(&arg1[0x1e], arg4[9], arg4[0xa].d, *(arg1 + 0xfc), 0)

sub_140597df0(&arg1[0x20], &arg4[0xb])
arg1[0x14].d = arg6
arg1[0x31].d = arg7
int64_t* rcx_28 = arg1[0x28]

if (rcx_28 != 0)
    arg1[0x28] = 0
    (**rcx_28)(rcx_28, 1)

(*(*arg1 + 0x300))(arg1)
char rax_30 = sub_1424130d0(&arg1[0x15], &data_1432ddb18)
int64_t* rax_31 = sub_14256a150()
void* rax_32 = rax_31[0x23]
int32_t rcx_33

if (rax_30 == 0)
    if (rax_32 == 0)
        (*(*rax_31 + 0x390))(rax_31)
        rax_32 = rax_31[0x23]
    
    rcx_33 = *(rax_32 + 0x3c)
else
    if (rax_32 == 0)
        (*(*rax_31 + 0x390))(rax_31)
        rax_32 = rax_31[0x23]
    
    rcx_33 = *(rax_32 + 0x40)

int32_t rax_35

if (rcx_33 != 0)
    rax_35 = 0x708
    
    if (rcx_33 s>= 0x708)
        rax_35 = rcx_33
else
    rax_35 = 0xa28

arg1[7].d = rax_35
arg_8 = 0
int64_t* rbx_6

if (arg1[0xc] == 0)
    rbx_6 = nullptr
else
    void* rax_36 = sub_140bdfc70()
    
    if (rax_36 == 0)
        rbx_6 = nullptr
    else
        rbx_6 = arg1[0xc]
        int64_t rax_37 = sx.q(*(rax_36 + 0x38))
        
        if (rax_37.d s> rbx_6[7].d || *(rbx_6[6] + (rax_37 << 3)) != rax_36 + 0x30)
            rbx_6 = nullptr

if ((sub_140b5b8a0(0, 0) & 1) != 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* result = sub_140d2dfc0(rbx_6, arg1, arg_8, 0, 0, 0, 0, 0, 0)
void* result_1 = result

if (result != 0)
    void* rdx_16 = arg1[0xb]
    var_58 = *(rdx_16 + 0x150)
    void* rcx_38 = *(rdx_16 + 0x158)
    void* var_50_2 = rcx_38
    
    if (rcx_38 != 0)
        *(rcx_38 + 8) += 1
    
    result = sub_14214d650(result_1, arg1, &var_58)
    arg1[0xd] = result_1

return result
