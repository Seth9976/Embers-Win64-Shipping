// 函数: sub_141033f80
// 地址: 0x141033f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
int32_t r8 = 0
int32_t var_d4 = 1
int32_t var_d8 = 0
int32_t rbx = arg1->__offset(0x50).d
void* __offset(_RTL_CRITICAL_SECTION, 0x38) var_d0 = arg1 + 0x38
int32_t rcx = 0
int32_t var_c8 = 0xffffffff
int32_t var_c4 = 0
int32_t var_c0 = 0

if (rbx != 0)
    void* rax_1 = arg1->__offset(0x48).q
    void* __offset(_RTL_CRITICAL_SECTION, 0x38) r9_1 = arg1 + 0x38
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rbx - 1)
    int32_t rdx_3 = (r9_1 - 0x38)->__offset(0x38).d
    int32_t var_c4_2
    
    if (rdx_3 != 0)
    label_141034028:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_d4_1 = rax_8
        int32_t arg_8 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        int32_t var_c4_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> rbx)
            var_c4_2 = rbx
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_c0_1 = rcx
            var_d8 = r8
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_c8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141034028
        
        var_c4_2 = rbx

int32_t rdx_6 = arg1->__offset(0x50).d
int32_t r8_2 = rdx_6 s>> 5
int32_t rsi = 0xffffffff << (rdx_6.b & 0x1f)
int32_t r9_3 = rdx_6 & 0xffffffe0
void* __offset(_RTL_CRITICAL_SECTION, 0x28) var_b8
var_b8.d = r8_2
int128_t var_a0 = 0xffffffff
int64_t var_70 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
uint128_t var_b0
var_b0:8.d = rsi
var_b0:0xc.d = rdx_6
var_a0.d = r9_3
uint128_t var_90 = (&arg1[1]).o
uint128_t var_80 = var_d8.o

if (rdx_6 != rbx)
    void* rax_11 = arg1->__offset(0x48).q
    void* __offset(_RTL_CRITICAL_SECTION, 0x38) r10_1 = arg1 + 0x38
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(rbx - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_2) << 2)) & rsi
    
    if (rdx_10 != 0)
    label_1410340fc:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t arg_10 = temp0_3
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_3
        
        var_b0:0xc.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_b0:0xc.d = rbx
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            var_a0.d = r9_3
            var_b8.d = r8_2
            
            if (rcx_5.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_5 << 2) + 4)
            var_b0:8.d = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_1410340fc
        
        var_b0:0xc.d = rbx

while (true)
    int64_t rax_20 = sx.q(var_80:0xc.d)
    int64_t* rdx_11 = var_90.q
    
    if (rax_20.d == (var_b0:8.q u>> 0x20).d && var_80.q == arg1 + 0x38 && rdx_11 == &arg1[1])
        uint64_t result = sub_141033d60(&arg1[1])
        
        if (arg1 == 0)
            return result
        
        return LeaveCriticalSection(arg1)
    
    uint64_t var_48_1 = *(*rdx_11 + rax_20 * 0x30 + 0x20)
    
    if (var_48_1 != 0)
        int32_t i_1 = *(var_48_1 + 0x58)
        int64_t* rbx_1 = var_48_1 + 0x18
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t rcx_9 = *rbx_1
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                rbx_1 = &rbx_1[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        int64_t* rcx_10 = *(var_48_1 + 0x10)
        
        if (rcx_10 != 0)
            rcx_10[9].d -= 1
            
            if (rcx_10[9].d == 1)
                sub_140a2f6e0(rcx_10)
        
        int64_t* rcx_11 = *(var_48_1 + 8)
        
        if (rcx_11 != 0)
            (*(*rcx_11 + 0x10))(rcx_11)
        
        sub_1405d1550(var_48_1)
        j_sub_140a74f90(var_48_1)
    
    var_80:8.d &= not.d(var_90:0xc.d)
    sub_14059bdd0(&var_90:8)
