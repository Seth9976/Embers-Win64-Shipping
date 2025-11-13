// 函数: sub_140edc280
// 地址: 0x140edc280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* rdi = arg3[1]
char r15 = 0
uint128_t zmm6 = zx.o(arg4)
void* r12 = *arg3
uint64_t var_188 = zmm6.q
void* var_170 = arg5
int32_t var_178 = 0
void* rcx = r12

if (rdi != 0)
    rdi[1].d += 1
    rcx = *arg3

int64_t var_198
void* rcx_2 = **(*sub_140f03670(rcx, &var_198) + 0xd8)
int64_t* rbx

if (*(rcx_2 + 0x128) == 0)
    rbx = var_188
    r12.b = 0
else
    rbx = *(rcx_2 + 0x110)
    
    if (rbx == 0)
        r12.b = 1
        r15 = 1
    else
        int32_t rax_5 = rbx[1].d
        
        if (rax_5 == 0)
            rbx = nullptr
        else
            rbx[1].d = rax_5 + 1
        
        if (rbx == 0)
            r12.b = 1
            r15 = 1
        else
            int64_t rax_7 = *(rcx_2 + 0x108)
            
            if (rax_7 == 0 || rax_7 != r12)
                r12.b = 1
                r15 = 1
            else
                r15 = 1
                r12.b = 0

if ((r15 & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* var_190

if (var_190 != 0)
    var_190[1].d -= 1
    
    if (var_190[1].d == 1)
        (**var_190)(var_190)
        int32_t temp3_1 = *(var_190 + 0xc)
        *(var_190 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_190 + 8))(var_190, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp5_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rbx_2 = *(arg1 + 0x10)
int64_t rdi_1 = 0

if (rbx_2 != 0)
    int32_t rax_14 = rbx_2[1].d
    
    if (rax_14 != 0)
        rbx_2[1].d = rax_14 + 1
        rax_14.b = 1
    
    if (rax_14.b == 0)
        rbx_2 = nullptr
    
    if (rbx_2 != 0)
        int32_t rax_15 = rbx_2[1].d
        rdi_1 = *(arg1 + 8)
        rbx_2[1].d = rax_15
        
        if (rax_15 == 0)
            (**rbx_2)(rbx_2)
            int32_t temp10_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

var_198 = rdi_1

if (rbx_2 != 0)
    rbx_2[1].d += 1

int128_t var_98
*(arg1 + 0x2f0) = sub_140eaf5c0(arg1, sub_140da0290(var_170, &var_98, &var_198), var_170, &var_188)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp8_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp9_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = arg3[1]

if (rbx_3 != 0)
    rbx_3[1].d += 1

if (arg1 + 0x2e0 == &var_198)
label_140edc515:
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp12_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
else
    *(arg1 + 0x2e0) = *arg3
    int64_t* rdi_3 = *(arg1 + 0x2e8)
    
    if (rbx_3 == rdi_3)
        goto label_140edc515
    
    *(arg1 + 0x2e8) = rbx_3
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp14_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)

*(arg1 + 0x2f4) = zmm6.q
sub_140ed4fe0(arg1 + 0x2a8, arg3)
void* rdi_4 = nullptr
char var_158
int32_t var_a4

if (r12.b == 0)
    int64_t* rbx_8 = *(arg1 + 0x10)
    
    if (rbx_8 != 0)
        int32_t rax_44 = rbx_8[1].d
        
        if (rax_44 != 0)
            rbx_8[1].d = rax_44 + 1
            rax_44.b = 1
        
        if (rax_44.b == 0)
            rbx_8 = nullptr
        
        if (rbx_8 != 0)
            int32_t rax_45 = rbx_8[1].d
            rdi_4 = *(arg1 + 8)
            rbx_8[1].d = rax_45
            
            if (rax_45 == 0)
                (**rbx_8)(rbx_8)
                int32_t temp23_1 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (temp23_1 == 1)
                    (*(*rbx_8 + 8))(rbx_8, 1)
            
            rbx_8[1].d += 1
    
    int32_t var_a4_2 = var_a4 & 0xffffff00
    var_158 = 1
    int64_t var_150_1 = 0
    int64_t var_148_1 = 0
    char var_138_1 = 0
    int64_t var_130_2 = 0
    int64_t var_128_1 = 0
    int128_t var_118
    __builtin_memset(&var_118, 0, 0x70)
    int32_t var_a8_1 = 0x20702
    void* var_120_1 = rdi_4
    
    if (rbx_8 != 0)
        *(rbx_8 + 0xc) += 1
        rbx_8[1].d -= 1
        var_118.q = rbx_8
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t temp18_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*(*rbx_8 + 8))(rbx_8, 1)
    
    sub_140596b00(arg2, &var_158)
    sub_140597700(&var_158)
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t temp21_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (temp21_1 == 1)
                (*(*rbx_8 + 8))(rbx_8, 1)
    
    int64_t* rbx_9 = arg3[1]
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            (**rbx_9)(rbx_9)
            int32_t temp22_1 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (temp22_1 == 1)
                (*(*rbx_9 + 8))(rbx_9, 1)
else
    *(arg1 + 0x2fc) = 0xffffffff
    int64_t* rbx_4 = *(arg1 + 0x2d8)
    
    if (rbx_4 != 0)
        int32_t rax_27 = rbx_4[1].d
        
        if (rax_27 != 0)
            rbx_4[1].d = rax_27 + 1
            rax_27.b = 1
        
        if (rax_27.b == 0)
            rbx_4 = nullptr
        
        if (rbx_4 != 0)
            rdi_4 = *(arg1 + 0x2d0)
    
    sub_140ed5490(rdi_4, TPI1::cbGpRec(*arg3))
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp19_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp19_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    int64_t* rbx_5 = *(arg1 + 0x2d8)
    void* rcx_26 = nullptr
    int64_t* rax_31 = rbx_5
    
    if (rbx_5 == 0)
        goto label_140edc5f5
    
    int32_t rax_32 = rbx_5[1].d
    
    if (rax_32 == 0)
        rbx_5 = nullptr
    else
        rbx_5[1].d = rax_32 + 1
        rax_31 = rbx_5
    label_140edc5f5:
        
        if (rax_31 != 0)
            rcx_26 = *(arg1 + 0x2d0)
    
    uint128_t zmm1_1 = *(rcx_26 + 0x3c8)
    var_98 = *(rcx_26 + 0x3b8)
    uint128_t var_88_1 = zmm1_1
    int128_t var_78_1 = *(rcx_26 + 0x3d8)
    uint64_t var_68_1 = *(rcx_26 + 0x3e8)
    int64_t* rax_34 = sub_140ebe530(arg1, &var_170)
    var_198 = *rax_34
    int64_t rcx_29 = rax_34[1]
    rax_34[1] = 0
    *rax_34 = 0
    int64_t var_190_2 = rcx_29
    sub_140ec5060(&var_188, arg3, zmm6.q, &var_198, &var_98)
    int64_t* var_168
    
    if (var_168 != 0)
        var_168[1].d -= 1
        
        if (var_168[1].d == 1)
            (**var_168)(var_168)
            int32_t temp26_1 = *(var_168 + 0xc)
            *(var_168 + 0xc) -= 1
            
            if (temp26_1 == 1)
                (*(*var_168 + 8))(var_168, 1)
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp27_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp27_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    int64_t* var_180
    
    if (var_180 != 0)
        var_180[1].d += 1
    
    int32_t var_a4_1 = var_a4 & 0xffffff00
    var_158 = 1
    int512_t zmm1_2
    zmm1_2.o = zx.o(0)
    int64_t var_150 = 0
    int64_t var_148 = 0
    char var_138 = 0
    int64_t var_130_1
    __builtin_memset(&var_130_1, 0, 0x78)
    int128_t var_b8
    var_b8:8.q = 0
    int32_t var_a8 = 0x20702
    
    if (var_180 != 0)
        var_180[1].d += 1
    
    var_b8.q = var_188
    
    if (var_180 != 0)
        var_180[1].d -= 1
        var_b8:8.q = var_180
        
        if (var_180[1].d == 1)
            (**var_180)(var_180)
            int32_t temp30_1 = *(var_180 + 0xc)
            *(var_180 + 0xc) -= 1
            
            if (temp30_1 == 1)
                (*(*var_180 + 8))(var_180, 1)
    
    sub_140596b00(arg2, &var_158)
    sub_140597700(&var_158)
    
    if (var_180 != 0)
        var_180[1].d -= 1
        
        if (var_180[1].d == 1)
            (**var_180)(var_180)
            int32_t temp32_1 = *(var_180 + 0xc)
            *(var_180 + 0xc) -= 1
            
            if (temp32_1 == 1)
                (*(*var_180 + 8))(var_180, 1)
    
    int64_t* rbx_7 = arg3[1]
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            int64_t r8_3 = *rbx_7
            (*r8_3)(rbx_7, zmm1_2, r8_3)
            int32_t temp33_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp33_1 == 1)
                int64_t r8_4 = *rbx_7
                (*(r8_4 + 8))(rbx_7, 1, r8_4)
__security_check_cookie(rax_1 ^ &var_1c8)
return arg2
