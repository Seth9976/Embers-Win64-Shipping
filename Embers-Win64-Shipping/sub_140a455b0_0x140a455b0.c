// 函数: sub_140a455b0
// 地址: 0x140a455b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int16_t* rsi = arg3
int64_t* r12 = arg2
int32_t rdx = 0
int64_t* var_70 = nullptr
int32_t var_68 = 0
int64_t* var_98 = nullptr
void* var_90 = nullptr
uint64_t r15 = -1

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_98, rbx_1.d + 1)
        r9 = var_90:4.d
        rdx = var_90.d
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    var_90.d = rax_1
    
    if (rax_1 s> r9)
        sub_140594770(&var_98)
    
    memcpy(var_98, rsi, (rbx_1.d + 1) * 2)

r9.b = 1
sub_140a2ccb0(&var_98, &var_70, &data_142d404d4, r9.b)
int64_t* rcx_4 = var_98

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

do
    r15 += 1
while (rsi[r15] != 0)

uint64_t arg_8 = r15
EnterCriticalSection(arg1 + 0xd0)
int32_t rcx_6 = 0
var_98:4.d = 1
var_98.d = 0
int32_t r10 = *(arg1 + 0x30)
void* r9_1 = arg1 + 0x18
int32_t r8_2 = 0
var_90 = r9_1
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r10 != 0)
    void* rax_2 = *(r9_1 + 0x10)
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_6 = *r9_1
    
    if (rdx_6 != 0)
    label_140a45718:
        int32_t rax_9 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        var_98:4.d = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_84.d = r8_2 - rax_10 + 0x1f
        
        if (r8_2 - rax_10 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_6)
            r8_2 += 0x20
            rcx_6 += 1
            var_84:4.d = r8_2
            var_98.d = rcx_6
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_140a45718
        
        var_84.d = r10

double zmm2[0x2] = var_88.o
double var_48[0x2] = zmm2
double var_58[0x2] = var_98.o
var_98.o = (arg1 + 8).o
uint64_t result = zmm2[0] u>> 0x20
int64_t var_78 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_88.o = var_58

if (result.d s< r10)
    int32_t i_2
    int32_t i = i_2
    
    do
        int64_t rdx_9 = sx.q(i) << 5
        int64_t* r14_2 = *var_98 + rdx_9
        
        if (r15.d != 1)
            r15.b = 1
            
            if (var_68 s> 0)
                int32_t r13_1 = r14_2[1].d
                uint64_t j_2 = zx.q(var_68)
                int64_t* rsi_1 = var_70
                char rcx_13
                uint64_t j
                
                do
                    int16_t* rdi_2
                    
                    if (rsi_1[1].d == 0)
                        rdi_2 = &data_142d40450
                    else
                        rdi_2 = *rsi_1
                    
                    if (r13_1 != 0)
                        int16_t* r11_2 = *r14_2
                        
                        if (*r11_2 != 0)
                            void* r10_4 = r11_2 - rdi_2
                            
                            do
                                int16_t* rax_20 = rdi_2
                                
                                while (true)
                                    int16_t r9_2 = *rax_20
                                    
                                    if (r9_2 == 0)
                                        rdx_9.b = 1
                                        goto label_140a45912
                                    
                                    uint32_t r8_7 = zx.d(*(r10_4 + rax_20))
                                    rdx_9.w = sbb.w(rdx_9.w, rdx_9.w, zx.d(r9_2) - 0x41 u< 0x1a)
                                    rdx_9.w &= 0x20
                                    rdx_9.w += r9_2
                                    int32_t rcx_12
                                    rcx_12.w =
                                        sbb.w((r8_7 - 0x41).w, (r8_7 - 0x41).w, r8_7 - 0x41 u< 0x1a)
                                    rcx_12.w &= 0x20
                                    rcx_12.w += r8_7.w
                                    
                                    if (rcx_12.w != rdx_9.w)
                                        break
                                    
                                    rax_20 = &rax_20[1]
                                    
                                    if (*(r10_4 + rax_20) == 0)
                                        if (*rax_20 != 0)
                                            break
                                
                                r11_2 = &r11_2[1]
                                r10_4 += 2
                            while (*r11_2 != 0)
                    
                    rdx_9.b = 0
                label_140a45912:
                    rcx_13 = 0
                    
                    if (rdx_9.b != 0)
                        rcx_13 = r15.b
                    
                    rsi_1 = &rsi_1[2]
                    r15 = zx.q(rcx_13)
                    j = j_2
                    j_2 -= 1
                while (j != 1)
                
                if (rcx_13 == 0 || var_68 s<= j_2.d)
                    r12 = arg2
                else
                    int16_t* const rdx_11
                    
                    if (r13_1 == 0)
                        rdx_11 = &data_142d40450
                    else
                        rdx_11 = *r14_2
                    
                    r12 = arg2
                    
                    if (r12[1].d == 0)
                        (*(*nullptr + 0x48))(0, rdx_11, r14_2[2])
                    else
                        int64_t* rcx_14 = *r12
                        (*(*rcx_14 + 0x48))(rcx_14, rdx_11, r14_2[2])
                
                rsi = arg3
            
            r15 = arg_8
        else
            int32_t r11_1 = r14_2[1].d
            int16_t* const r10_1
            
            if (r11_1 == 0)
                r10_1 = &data_142d40450
            else
                r10_1 = *r14_2
            
            int16_t j_1 = *rsi
            int16_t* r8_4 = rsi
            
            while (j_1 != 0)
                uint32_t rcx_8 = zx.d(*(r10_1 - rsi + r8_4))
                rdx_9.w = sbb.w(rdx_9.w, rdx_9.w, rcx_8 - 0x41 u< 0x1a)
                rdx_9.w &= 0x20
                rdx_9.w += rcx_8.w
                int32_t rax_16
                rax_16.w = sbb.w(j_1 - 0x41, j_1 - 0x41, zx.d(j_1) - 0x41 u< 0x1a)
                rax_16.w &= 0x20
                rax_16.w += j_1
                
                if (rdx_9.w != rax_16.w)
                    goto label_140a4598d
                
                j_1 = r8_4[1]
                r8_4 = &r8_4[1]
            
            int16_t* const rdx_10
            
            if (r11_1 == 0)
                rdx_10 = &data_142d40450
            else
                rdx_10 = *r14_2
            
            if (r12[1].d == 0)
                (*(*nullptr + 0x48))(0, rdx_10, r14_2[2])
            else
                int64_t* rcx_9 = *r12
                (*(*rcx_9 + 0x48))(rcx_9, rdx_10, r14_2[2])
        
    label_140a4598d:
        var_84:4.d &= not.d(var_90:4.d)
        sub_14059bdd0(&var_90)
        result = var_88.q
        i = i_2
    while (i s< *(result + 0x18))

if (arg1 != -0xd0)
    result = LeaveCriticalSection(arg1 + 0xd0)

int32_t i_3 = var_68
int64_t* rbx_4 = var_70

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_17 = *rbx_4
        
        if (rcx_17 != 0)
            result = sub_140a74f90(rcx_17)
        
        rbx_4 = &rbx_4[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_4 = var_70

if (rbx_4 == 0)
    return result

return sub_140a74f90(rbx_4)
