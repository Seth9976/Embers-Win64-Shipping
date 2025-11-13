// 函数: sub_140d72dd0
// 地址: 0x140d72dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x14]
int64_t* rbx = *(rax + 0x30)
void* rsi = *(rax + 0x28)

if (rbx != 0)
    rbx[1].d += 1

int32_t var_98

if (&var_98 != rsi + 0x10 && *(rsi + 0x18) != 0)
    int64_t* rcx = *(rsi + 0x10)
    
    if (rcx != 0)
        (*(*rcx + 0x38))(rcx, 0)
        int64_t rcx_1 = *(rsi + 0x10)
        
        if (rcx_1 != 0)
            *(rsi + 0x10) = sub_140a84c80(rcx_1, 0, 0)
        
        *(rsi + 0x18) = 0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t var_94 = 1
int32_t rsi_2 = arg1[0xf].d
void* var_90 = &arg1[0xc]
int32_t rcx_4 = 0
var_98 = 0
int32_t r8 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (rsi_2 != 0)
    void* rax_5 = arg1[0xe]
    void* r9_1 = &arg1[0xc]
    
    if (rax_5 != 0)
        r9_1 = rax_5
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rsi_2 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_140d72ef8:
        int32_t rax_12 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_94_1 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_13 + 0x1f
        
        if (r8 - rax_13 + 0x1f s> rsi_2)
            var_84.d = rsi_2
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_4)
            r8 += 0x20
            rcx_4 += 1
            var_84:4.d = r8
            var_98 = rcx_4
            
            if (rdx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140d72ef8
        
        var_84.d = rsi_2

int32_t rdx_5 = arg1[0xf].d
double zmm2[0x2] = var_88.o
double var_38[0x2] = zmm2
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_88_1 = r12
var_84.d = rdx_5
int128_t var_78 = (&arg1[0xa]).o
int96_t var_68 = var_48:8.12

if (rdx_5 != rsi_2)
    void* rax_15 = arg1[0xe]
    void* r10_1 = &arg1[0xc]
    
    if (rax_15 != 0)
        r10_1 = rax_15
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(rsi_2 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_9 != 0)
    label_140d72fc2:
        int32_t rax_22 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
        int32_t r11_1
        
        if (rax_22 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rsi_2)
            var_84.d = rsi_2
    else
        while (true)
            int64_t rcx_9 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_9.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_9 << 2) + 4)
            var_88_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140d72fc2
        
        var_84.d = rsi_2

while (true)
    int32_t var_5c
    int64_t rcx_11 = sx.q(var_5c)
    int64_t* rax_24 = var_78.q
    
    if (rcx_11.d == (var_88_1.q u>> 0x20).d && var_68.q == &arg1[0xc] && rax_24 == &arg1[0xa])
        if (arg1[0x15] != 0)
            sub_140a752e0()
            
            if (sub_140a80c80() != 0)
                sub_1405c2d80(&sub_140a752e0()[8], arg1[0x15])
                arg1[0x15] = 0
        
        arg1[0x13].d = 0
        int64_t rcx_16 = arg1[0x12]
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        arg1[0xb].d = 0
        
        if (*(arg1 + 0x5c) != 0)
            sub_1405a5410(&arg1[0xa], 0)
        
        arg1[0x10].d = 0xffffffff
        *(arg1 + 0x84) = 0
        sub_14059a8e0(&arg1[0xc], 0)
        int64_t rcx_19 = arg1[0xe]
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        int64_t rcx_20 = arg1[0xa]
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        arg1[9].d = 0
        int64_t rcx_21 = arg1[8]
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        int64_t result = sub_14095d2c0(arg1, 0)
        int64_t rcx_23 = arg1[4]
        
        if (rcx_23 != 0)
            result = sub_140a74f90(rcx_23)
        
        int64_t rcx_24 = *arg1
        
        if (rcx_24 == 0)
            return result
        
        return sub_140a74f90(rcx_24)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    *(*(*rax_24 + rcx_11 * 0x10) + 8) = 0
    sub_14059bdd0(&var_78:8)
