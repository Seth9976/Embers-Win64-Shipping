// 函数: sub_142660780
// 地址: 0x142660780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14
uint64_t var_20 = r14
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
*(arg1 + 0x1bc) = arg2
(*(*arg1 + 0x378))()
void* rax_4 = (*(*arg1 + 0x150))(arg1)
void*** rax_5 = sub_140a84c80(0, 0x30, 0)
void* var_98

if (rax_5 != 0)
    *rax_5 = &data_142d57800
    sub_140d3a3a0(&rax_5[1], arg1)
    rax_5[2] = sub_14264665c
    rax_5[4] = sub_140a387b0()
    *rax_5 = &data_142d57858
    sub_140599630(rax_4 + 0x3e8, 1)
    (*rax_5)[6](rax_5, &var_98)
    int64_t rsi_1 = sx.q(*(rax_4 + 0x3f0))
    int32_t rax_8 = (rsi_1 + 1).d
    *(rax_4 + 0x3f0) = rax_8
    
    if (rax_8 s> *(rax_4 + 0x3f4))
        sub_1405a4f90(rax_4 + 0x3e8)
    
    int64_t rcx_5 = *(rax_4 + 0x3e8)
    int64_t rax_10 = rsi_1 * 2
    *(rcx_5 + (rax_10 << 3)) = rax_5
    *(rcx_5 + (rax_10 << 3) + 8) = 3

sub_1426628c0(arg1)
char var_90
void* var_88
int64_t** var_80
char i
int64_t* var_60
int64_t var_58
int64_t var_40
char var_38

if ((*(*arg1 + 0x2d8))(arg1) != 0 || *(arg1 + 0x1bc) == 3)
    arg1[0x17].d = 0
    
    if (*(arg1 + 0xbc) != 0)
        sub_1405a5220(&arg1[0x16], 0)
    
    (*(*arg1 + 0x338))(arg1)
    sub_142664860(arg1)
    
    if ((arg1[0xd].b & 1) == 0)
        char rax_54
        
        if (arg1[0x73].b == 0)
            rax_54 = (*(*arg1 + 0x3a0))(arg1)
        
        int64_t* rdi
        
        if (arg1[0x73].b != 0 || rax_54 == 0)
            rdi.b = 0
        else
            rdi.b = 1
        
        if (sub_142657070(arg1, 0) != 0)
            char rax_56 = sub_14243ade0(rax_4)
            sub_142640410(&var_90, rax_4, sub_14269c200(), 5)
            
            while (i == 0)
                if (var_60 != 0)
                    int32_t rax_59 = (*(*arg1 + 0x3a8))(arg1, var_60)
                    
                    if (rax_59 != 5)
                        if (((rax_59 - 1) & 0xfffffffd) != 0)
                            (*(*var_60 + 0x630))(var_60)
                    else if (rdi.b != 0)
                        char rax_61
                        
                        if (rax_56 != 0)
                            rax_61 = (*(*var_60 + 0x648))(var_60)
                        
                        if (rax_56 == 0 || rax_61 != 0)
                            (*(*var_60 + 0x698))(var_60)
                
                sub_1405b0c60(&var_90)
            
            if (var_38 != 0)
                char var_38_2 = 0
                sub_142441560(var_88, var_40)
                
                if (var_58 != 0)
                    sub_140a74f90(var_58)
                
                if (var_80 != 0)
                    sub_140a74f90(var_80)
    else
        (*(*arg1 + 0x3b0))(arg1)
        (*(*arg1 + 0x330))(arg1)
    
    if (*(arg1 + 0x1bc) == 2)
        arg1[0x73].b &= not.b(*(arg1 + 0x399))
    
    (*(*arg1 + 0x320))(arg1)
    uint64_t** rax_67 = sub_141baa510(rax_4)
    uint64_t* r15_2 = *rax_67
    void* rax_69 = &r15_2[sx.q(rax_67[1].d)]
    var_98 = rax_69
    
    if (r15_2 != rax_69)
        do
            r14 = *r15_2
            
            if (sub_1420e6590(r14) == 0 && (*(r14 + 0x1f4) & 0x20) != 0)
                int64_t* rbx_3 = arg1[0x12]
                int64_t rdi_2 = 0
                uint64_t rsi_5 = sx.q(arg1[0x13].d) << 3 u>> 3
                
                if (rbx_3 u> &rbx_3[arg1[0x13]])
                    rsi_5 = 0
                
                if (rsi_5 != 0)
                    do
                        int64_t* rcx_50 = *rbx_3
                        
                        if (rcx_50 != 0)
                            (*(*rcx_50 + 0x660))(rcx_50, r14, rax_4)
                        
                        rbx_3 = &rbx_3[1]
                        rdi_2 += 1
                    while (rdi_2 != rsi_5)
            
            r15_2 = &r15_2[1]
        while (r15_2 != var_98)
else
    sub_142640410(&var_90, rax_4, sub_14269c200(), 5)
    
    if (i == 0)
        int64_t* rdi_1 = var_60
        
        do
            if (rdi_1 != 0)
                int32_t rax_14 = *(rdi_1 + 0xc)
                void* const rax_20
                
                if (rax_14 s>= data_143e1d9b4)
                    rax_20 = nullptr
                else
                    int16_t temp1_1
                    int32_t temp2_1
                    temp1_1:temp2_1 = sx.q(rax_14)
                    uint32_t rdx_6 = zx.d(temp1_1)
                    int32_t rax_16 = temp2_1 + rdx_6
                    rax_20 = *(data_143e1d9a0 + (sx.q(rax_16 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_16.w) - rdx_6) * 0x18
                
                if (((*(rax_20 + 8) u>> 0x1d).b & 1) == 0 && rdi_1 != arg1[6])
                    (*(*arg1 + 0x300))(arg1, rdi_1)
                    (*(*rdi_1 + 0x630))(rdi_1)
                    arg1[0x20].d |= 1
            
            int32_t var_50
            int32_t r8_3 = var_50
            int32_t var_78
            int32_t rdx_9 = var_78
            var_98 = var_88
            int32_t var_70
            r14 = zx.q(var_70 + 1)
            
            if (r14.d s>= r8_3 + rdx_9)
            label_142660aee:
                int64_t var_60_1 = 0
                char var_6c = 1
                break
            
            int64_t r13_1 = sx.q(r14.d) << 3
            
            while (true)
                if (r14.d s>= rdx_9)
                    rdi_1 = *(var_58 + (sx.q(r14.d - rdx_9) << 3))
                else
                    rdi_1 = *(var_80 + r13_1)
                
                int32_t var_68 = var_68 + 1
                
                if (rdi_1 != 0)
                    void* rax_32 = sub_141dc9840(rdi_1)
                    
                    if (rax_32 != 0)
                        void* const rax_39
                        
                        if ((var_90 & 1) != 0)
                            int32_t rax_33 = *(rdi_1 + 0xc)
                            
                            if (rax_33 s>= data_143e1d9b4)
                                rax_39 = nullptr
                            else
                                int16_t temp4_1
                                int32_t temp5_1
                                temp4_1:temp5_1 = sx.q(rax_33)
                                uint32_t rdx_11 = zx.d(temp4_1)
                                int32_t rax_35 = temp5_1 + rdx_11
                                rax_39 = *(data_143e1d9a0 + (sx.q(rax_35 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_35.w) - rdx_11) * 0x18
                        
                        if ((var_90 & 1) == 0 || ((*(rax_39 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_22 = var_90.d
                            
                            if (((rcx_22 u>> 1).b & 1) == 0)
                                goto label_142660a0e
                            
                            uint64_t rax_43 = sub_1405949a0()
                            
                            if (rax_43.b != 0)
                                rcx_22 = var_90.d
                            label_142660a0e:
                                
                                if (((rcx_22 u>> 2).b & 1) == 0)
                                label_142660a8d:
                                    int64_t rax_44 = Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                        rax_32)
                                    void* r9_1 = var_98
                                    
                                    if (rax_44 == r9_1)
                                        if (rax_32 == *(r9_1 + 0x30))
                                            break
                                        
                                        void* rax_45 = sub_1425bd0d0()
                                        void* rdx_13 = rdi_1[2]
                                        int64_t rax_46 = sx.q(*(rax_45 + 0x38))
                                        
                                        if (rax_46.d s> *(rdx_13 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_13 + 0x30) + (rax_46 << 3)) != rax_45 + 0x30)
                                            break
                                else
                                    if ((*(rax_32 + 0x1f4) & 0x20) == 0
                                            || (*(rax_32 + 0x1f6) & 8) != 0)
                                        rax_43 = zx.q(*(rax_32 + 0x1f5))
                                    
                                    char r15_1
                                    
                                    if (((*(rax_32 + 0x1f4) & 0x20) != 0
                                            && (*(rax_32 + 0x1f6) & 8) == 0) || (rax_43.b & 0x40) != 0
                                            || rax_43.b s< 0)
                                        r15_1 = 1
                                    else
                                        r15_1 = 0
                                    
                                    void* rcx_24 = *(rax_32 + 0xb8)
                                    char* rsi_2 = *(rax_32 + 0x248)
                                    
                                    if (rcx_24 != 0)
                                        rax_43 = sub_1424359b0(rcx_24)
                                    
                                    if (rcx_24 == 0 || rax_43 == 0 || rsi_2 == rax_43)
                                        rcx_24.b = 1
                                    else
                                        rcx_24.b = 0
                                    
                                    if (rsi_2 == 0 || *rsi_2 == 2)
                                        rax_43.b = 1
                                    else
                                        rax_43.b = 0
                                    
                                    if (rcx_24.b != 0 || rax_43.b != 0)
                                        rax_43.b = 1
                                    
                                    if (r15_1 != 0 && rax_43.b != 0)
                                        goto label_142660a8d
                    
                    r8_3 = var_50
                    rdx_9 = var_78
                
                r14 = zx.q(r14.d + 1)
                r13_1 += 8
                
                if (r14.d s>= r8_3 + rdx_9)
                    goto label_142660aee
            
            int64_t* var_60_2 = rdi_1
            var_70 = r14.d
        while (i == 0)
    
    if (var_38 != 0)
        char var_38_1 = 0
        sub_142441560(var_88, var_40)
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        if (var_80 != 0)
            sub_140a74f90(var_80)
    
    if (*(arg1 + 0x1bc) == 2)
        arg1[0x73].b &= not.b(*(arg1 + 0x399))

if ((arg1[0x6d].b & 1) == 0)
    arg1[0x6c].d = 0
    
    if (*(arg1 + 0x364) != 0)
        sub_1405a51b0(&arg1[0x6b], 0)

*(arg1 + 0x39a) |= 4
*(arg1 + 0xf4) += 1
r14.b = 0
int32_t rax_74 = arg1[0x1d].d
int32_t rcx_52 = *(arg1 + 0xf4)
int64_t rdi_3 = sx.q(rax_74 - 1)

if (rax_74 - 1 s>= 0)
    int64_t rbx_5 = rdi_3 << 4
    int64_t temp3_1
    
    do
        int64_t rax_76 = arg1[0x1c]
        
        if (*(rbx_5 + rax_76 + 8) == 0)
            r14.b = 1
        else
            int64_t* rcx_53 = *(rbx_5 + rax_76)
            
            if (rcx_53 == 0)
                r14.b = 1
            else if ((*(*rcx_53 + 0x50))(rcx_53) == 0)
                r14.b = 1
        
        rbx_5 -= 0x10
        temp3_1 = rdi_3
        rdi_3 -= 1
    while (temp3_1 - 1 s>= 0)
    rcx_52 = *(arg1 + 0xf4)

int32_t result = rcx_52 - 1
*(arg1 + 0xf4) = result

if (r14.b != 0)
    result = sub_140599630(&arg1[0x1c], 0)

__security_check_cookie(rax_1 ^ &var_b8)
return result
