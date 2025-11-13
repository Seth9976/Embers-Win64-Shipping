// 函数: sub_140fa0fa0
// 地址: 0x140fa0fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
*(arg1 + 0x390) = *(arg2 + 0x1a0)
*(arg1 + 0x3a0) = *(arg2 + 0x1b0)
sub_140692f90(arg1 + 0x3a8, arg2 + 0x1b8)
int128_t var_58

if (*(arg1 + 0x3b0) != 0)
    int64_t* rcx_1 = *(arg1 + 0x3a8)
    
    if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
        int64_t* rcx_2
        
        if (*(arg1 + 0x3b0) == 0)
            rcx_2 = nullptr
        else
            rcx_2 = *(arg1 + 0x3a8)
        
        (*(*rcx_2 + 0x48))(rcx_2, &var_58)
        *(arg1 + 0x390) = var_58

int128_t var_48
float* rax_4 = sub_140ad9b20(arg1 + 0x390, &var_48)
*(arg1 + 0x3d8) = *rax_4
*(arg1 + 0x3b8) = *rax_4

if (*(arg1 + 0x3b0) != 0)
    int64_t* rcx_4 = *(arg1 + 0x3a8)
    
    if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
        int64_t* rcx_5
        
        if (*(arg1 + 0x3b0) == 0)
            rcx_5 = nullptr
        else
            rcx_5 = *(arg1 + 0x3a8)
        
        (*(*rcx_5 + 0x48))(rcx_5, &var_58)
        *(arg1 + 0x390) = var_58

int128_t zmm0_2 = *(arg1 + 0x390)
*(arg1 + 0x408) = 1
*(arg1 + 0x3c8) = zmm0_2

if (*(arg2 + 0x1e8) != 0)
    int64_t* rcx_6 = *(arg2 + 0x1e0)
    
    if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
        int64_t* rcx_7
        
        if (*(arg2 + 0x1e8) == 0)
            rcx_7 = nullptr
        else
            rcx_7 = *(arg2 + 0x1e0)
        
        (*(*rcx_7 + 0x48))(rcx_7, &var_58)
        
        if (arg2 + 0x1c8 == &var_58)
            int64_t rcx_9 = var_58.q
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
        else
            int64_t rcx_8 = *(arg2 + 0x1c8)
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            *(arg2 + 0x1c8) = var_58.q
            *(arg2 + 0x1d0) = var_58:8.d
            *(arg2 + 0x1d4) = var_58:0xc.d
            var_58:8.q = 0
            var_58.q = 0

sub_140f9bcd0(arg1 + 0x418, arg2 + 0x1c8)

if (*(arg2 + 0x210) != 0)
    int64_t* rcx_11 = *(arg2 + 0x208)
    
    if (rcx_11 != 0 && (*(*rcx_11 + 0x28))(rcx_11) != 0)
        int64_t* rcx_12
        
        if (*(arg2 + 0x210) == 0)
            rcx_12 = nullptr
        else
            rcx_12 = *(arg2 + 0x208)
        
        (*(*rcx_12 + 0x48))(rcx_12, &var_58)
        
        if (arg2 + 0x1f0 == &var_58)
            int64_t rcx_14 = var_58.q
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
        else
            int64_t rcx_13 = *(arg2 + 0x1f0)
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            *(arg2 + 0x1f0) = var_58.q
            *(arg2 + 0x1f8) = var_58:8.d
            *(arg2 + 0x1fc) = var_58:0xc.d
            var_58:8.q = 0
            var_58.q = 0

sub_140f9bcd0(arg1 + 0x428, arg2 + 0x1f0)

if (*(arg2 + 0x238) != 0)
    int64_t* rcx_16 = *(arg2 + 0x230)
    
    if (rcx_16 != 0 && (*(*rcx_16 + 0x28))(rcx_16) != 0)
        int64_t* rcx_17
        
        if (*(arg2 + 0x238) == 0)
            rcx_17 = nullptr
        else
            rcx_17 = *(arg2 + 0x230)
        
        (*(*rcx_17 + 0x48))(rcx_17, &var_58)
        
        if (arg2 + 0x218 == &var_58)
            int64_t rcx_19 = var_58.q
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
        else
            int64_t rcx_18 = *(arg2 + 0x218)
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            *(arg2 + 0x218) = var_58.q
            *(arg2 + 0x220) = var_58:8.d
            *(arg2 + 0x224) = var_58:0xc.d
            var_58:8.q = 0
            var_58.q = 0

sub_140f9bd50(arg1 + 0x438, arg2 + 0x218)
*(arg1 + 0x478) = *(arg2 + 0x240)
*(arg1 + 0x479) = *(arg2 + 0x241)
sub_140692f90(arg1 + 0x480, arg2 + 0x248)

if (*(arg2 + 0x268) != 0)
    int64_t* rcx_22 = *(arg2 + 0x260)
    
    if (rcx_22 != 0 && (*(*rcx_22 + 0x28))(rcx_22) != 0)
        int64_t* rcx_23
        
        if (*(arg2 + 0x268) == 0)
            rcx_23 = nullptr
        else
            rcx_23 = *(arg2 + 0x260)
        
        *(arg2 + 0x258) = (*(*rcx_23 + 0x48))(rcx_23)

*(arg1 + 0x490) = *(arg2 + 0x258)

if (*(arg2 + 0x280) != 0)
    int64_t* rcx_24 = *(arg2 + 0x278)
    
    if (rcx_24 != 0 && (*(*rcx_24 + 0x28))(rcx_24) != 0)
        int64_t* rcx_25
        
        if (*(arg2 + 0x280) == 0)
            rcx_25 = nullptr
        else
            rcx_25 = *(arg2 + 0x278)
        
        *(arg2 + 0x270) = (*(*rcx_25 + 0x48))(rcx_25)

*(arg1 + 0x491) = *(arg2 + 0x270)
sub_1407473e0(arg1 + 0x508, arg2 + 0x288)
sub_1407473e0(arg1 + 0x518, arg2 + 0x298)
sub_1407473e0(arg1 + 0x528, arg2 + 0x2a8)
sub_1407473e0(arg1 + 0x538, arg2 + 0x2c8)
sub_1407473e0(arg1 + 0x548, arg2 + 0x2d8)
sub_1407473e0(arg1 + 0x558, arg2 + 0x2b8)

if (*(arg2 + 0x308) != 0)
    int64_t* rcx_32 = *(arg2 + 0x300)
    
    if (rcx_32 != 0 && (*(*rcx_32 + 0x28))(rcx_32) != 0)
        int64_t* rcx_33
        
        if (*(arg2 + 0x308) == 0)
            rcx_33 = nullptr
        else
            rcx_33 = *(arg2 + 0x300)
        
        (*(*rcx_33 + 0x48))(rcx_33, &var_58)
        int64_t* r14_4
        
        if (arg2 + 0x2e8 == &var_58)
        label_140fa140e:
            r14_4 = var_58:8.q
        label_140fa1412:
            
            if (r14_4 != 0)
                r14_4[1].d -= 1
                
                if (r14_4[1].d == 1)
                    (**r14_4)(r14_4)
                    int32_t temp7_1 = *(r14_4 + 0xc)
                    *(r14_4 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*r14_4 + 8))(r14_4, 1)
        else
            r14_4 = var_58:8.q
            *(arg2 + 0x2e8) = var_58.q
            int64_t* r15_1 = *(arg2 + 0x2f0)
            var_58.q = 0
            
            if (r14_4 == r15_1)
                goto label_140fa1412
            
            var_58:8.q = 0
            *(arg2 + 0x2f0) = r14_4
            
            if (r15_1 != 0)
                r15_1[1].d -= 1
                
                if (r15_1[1].d == 1)
                    (**r15_1)(r15_1)
                    int32_t temp8_1 = *(r15_1 + 0xc)
                    *(r15_1 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*r15_1 + 8))(r15_1, 1)
                
                goto label_140fa140e

*(arg1 + 0x498) = *(arg2 + 0x2e8)
void* r14_5 = *(arg2 + 0x2f0)
int64_t* rcx_38 = *(arg1 + 0x4a0)

if (r14_5 != rcx_38)
    if (r14_5 != 0)
        *(r14_5 + 0xc) += 1
        rcx_38 = *(arg1 + 0x4a0)
    
    if (rcx_38 != 0)
        int32_t temp0_1 = *(rcx_38 + 0xc)
        *(rcx_38 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx_38 + 8))(rcx_38, 1)
    
    *(arg1 + 0x4a0) = r14_5

*(arg1 + 0x4e8) = *(arg2 + 0x310)
*(arg1 + 0x4ec) = *(arg2 + 0x314)
sub_140692f90(arg1 + 0x4f0, arg2 + 0x318)
*(arg1 + 0x492) = 0
*(arg1 + 0x505) = *(arg2 + 0x32b)
int64_t rcx_42
int32_t r12_1
int64_t* r14_6
int64_t* r15_2

if (*sub_140fb2490(arg2 + 0x330) == 0)
    r14_6 = arg_8.q
    r12_1 = 2
    rcx_42 = 0
    r15_2 = nullptr
else
    int64_t* rax_52 = sub_140fb2490(arg2 + 0x330)
    r14_6 = rax_52[1]
    rcx_42 = *rax_52
    
    if (r14_6 != 0)
        r14_6[1].d += 1
    
    r12_1 = 1
    r15_2 = r14_6

*(arg1 + 0x568) = rcx_42
int64_t* rcx_43 = *(arg1 + 0x570)

if (r15_2 != rcx_43)
    if (r15_2 != 0)
        *(r15_2 + 0xc) += 1
        rcx_43 = *(arg1 + 0x570)
    
    if (rcx_43 != 0)
        int32_t temp1_1 = *(rcx_43 + 0xc)
        *(rcx_43 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_43 + 8))(rcx_43, 1)
    
    *(arg1 + 0x570) = r15_2

if ((r12_1.b & 2) != 0)
    r12_1 &= 0xfffffffd

if ((r12_1.b & 1) != 0 && r14_6 != 0)
    r14_6[1].d -= 1
    
    if (r14_6[1].d == 1)
        (**r14_6)(r14_6)
        int32_t temp6_1 = *(r14_6 + 0xc)
        *(r14_6 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*r14_6 + 8))(r14_6, 1)

if (*(arg2 + 0x329) != 0)
    if (&data_1439b44a8 != arg1)
        if (*(arg1 + 0x501) != 0)
            *(arg1 + 0x501) = 0
        
        *(arg1 + 0x500) = data_1439b49a8
        *(arg1 + 0x501) = 1
    
    data_1439b49a8 = *(arg2 + 0x328)

var_58:8.d = 0
var_58.q = sub_140f9f910
var_58 = var_58
void var_38
sub_140e20c50(arg1, &var_48, zx.o(0), sub_140f95080(&var_38, arg1, &var_58))
int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp9_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

if (*(arg1 + 0x498) != 0)
    int64_t* r14_8 = *(arg1 + 0x4a0)
    
    if (r14_8 != 0)
        int32_t rax_61 = r14_8[1].d
        
        if (rax_61 s> 0)
            var_58:8.d = 0
            var_58.q = sub_140fb5af0
            void* const r15_3 = nullptr
            var_48 = var_58
            
            if (r14_8 != 0)
                if (rax_61 != 0)
                    r14_8[1].d = rax_61 + 1
                    rax_61.b = 1
                
                if (rax_61.b == 0)
                    r14_8 = nullptr
                
                if (r14_8 != 0)
                    r15_3 = *(arg1 + 0x498)
            
            sub_140e24c60(r15_3, sub_140f94680(&var_58, arg1, &var_48))
            
            if (r14_8 != 0)
                r14_8[1].d -= 1
                
                if (r14_8[1].d == 1)
                    (**r14_8)(r14_8)
                    int32_t temp11_1 = *(r14_8 + 0xc)
                    *(r14_8 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*r14_8 + 8))(r14_8, 1)
            
            int64_t rax_66
            
            if (var_58:8.d == 0)
                rax_66 = var_58.q
            label_140fa170e:
                
                if (rax_66 != 0)
                    sub_140a74f90(rax_66)
            else
                int64_t* rcx_55 = var_58.q
                
                if (rcx_55 != 0)
                    (*(*rcx_55 + 0x38))(rcx_55, 0)
                    rax_66 = var_58.q
                    
                    if (rax_66 != 0)
                        rax_66 = sub_140a84c80(rax_66, 0, 0)
                        var_58.q = rax_66
                    
                    var_58:8.d = 0
                    goto label_140fa170e

*(arg1 + 0x502) = *(arg2 + 0x32a)
*(arg1 + 0x504) = 0
*(arg1 + 0x410) = 0
sub_140f9fc40(arg1)
int128_t zmm4 = *(arg1 + 0x3b8)
*(arg1 + 0x40c) = 0
uint32_t zmm3[0x4] = zx.o(0)
zmm3[0] = 0f + 360f
uint32_t zmm2_1[0x4] = zx.o(0)
uint32_t zmm1[0x4] = zx.o(0)
zmm2_1[0] = 0f f- zmm4.d
*(arg1 + 0x3f8) = zx.o(0)
zmm3[0] = zmm3[0] f- zmm4.d
zmm2_1 = _mm_and_ps(zmm2_1, 0x7fffffff)
*(arg1 + 0x3e8) = zmm4

if (_mm_and_ps(zmm3, 0x7fffffff)[0] f>= zmm2_1[0])
    zmm1[0] = 0f - 360f
    zmm1[0] = zmm1[0] f- zmm4.d
    
    if (not(_mm_and_ps(zmm1, 0x7fffffff)[0] f>= zmm2_1[0]))
        *(arg1 + 0x3f8) = zmm1[0]
else
    *(arg1 + 0x3f8) = zmm3[0]

arg_8.b = 0

if (sub_140b16090(&data_143de57d0, zmm1) == 0)
    void* rcx_59 = data_143ddb400
    char arg_10 = 1
    sub_140af2fd0(rcx_59, u"ColorPickerUI", u"bWheelMode", &arg_10, &data_143de57d0)
    sub_140af2fd0(data_143ddb400, ColorPickerUI", bAdvancedSectionExpanded", &arg_8, 
        &data_143de57d0)
    sub_140af2fd0(data_143ddb400, ColorPickerUI", bSRGBEnabled", &data_1439b49a8, &data_143de57d0)
    int32_t rdi
    rdi.b = arg_10 != 0
    *(arg1 + 0x408) = rdi

char rdx_23 = arg_8.b | *(arg2 + 0x32c)
arg_8.b = rdx_23

if (*(arg1 + 0x502) == 0)
    return sub_140fabb20(arg1, rdx_23)

return sub_140fb1390(arg1)
