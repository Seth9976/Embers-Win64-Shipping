// 函数: sub_1419f3950
// 地址: 0x1419f3950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = (data_1439cc058).d
int32_t var_13c = 1
void* var_138 = &data_1439cc040
int32_t rcx = 0
int32_t var_140 = 0
int32_t var_130 = 0xffffffff
int64_t var_12c = 0
int32_t r8 = 0

if (r11 != 0)
    void* rax_1 = data_1439cc050
    void* r10_1 = &data_1439cc040
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r10_1
    
    if (rdx_2 != 0)
    label_1419f39f9:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_13c_1 = rax_8
        int32_t arg_18 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_12c.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_12c.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_12c:4.d = r8
            var_140 = rcx
            
            if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r10_1 + (rdx_3 << 2) + 4)
            int32_t var_130_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1419f39f9
        
        var_12c.d = r11

int128_t var_b8 = 0xffffffff
int128_t var_c8
var_c8:8.d = 0xffffffff << (r11.b & 0x1f)
var_c8:0xc.d = r11
int64_t temp0_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_f8 = (&data_1439cc030).o
int128_t var_e8 = var_140.o
int64_t var_d8 = temp0_2

while (true)
    int64_t result = sx.q(var_e8:0xc.d)
    int64_t* rdx_4 = var_f8.q
    
    if (result.d == (var_c8:8.q u>> 0x20).d && var_e8.q == &data_1439cc040
            && rdx_4 == &data_1439cc030)
        return result
    
    int64_t* var_148 = arg2
    void* rdi_1 = *(*rdx_4 + result * 0x28 + 0x18)
    char rax_12
    
    if (sub_140b011d0() == 0 || data_143db7aa8 == 0)
        rax_12 = 0
    else
        rax_12 = 1
    
    if (rax_12 == 0)
        int64_t* rbx_2 = var_148
        int32_t r8_6 = -1
        int64_t rax_16 = *rbx_2
        int128_t zmm1_1 = *(rbx_2 + 0x290)
        int128_t zmm3 = *(rbx_2 + 0xd5c)
        uint128_t var_98 = *(rbx_2 + 0x280)
        
        if ((*(rax_16 + 0x2c) & 0x10) == 0)
            r8_6 = 0
        
        int32_t var_100_1 = *(rbx_2 + 0x614)
        uint128_t* var_150_1 = &var_98
        uint64_t var_108
        uint64_t* var_158_1 = &var_108
        int128_t var_88_1 = zmm1_1
        uint128_t var_78_1 = *(rbx_2 + 0x2a0)
        int128_t var_68_1 = *(rbx_2 + 0x2b0)
        var_108 = *(rbx_2 + 0x60c)
        sub_141a05da0(rdi_1, rbx_2, r8_6, zmm3, nullptr, nullptr)
    else
        void var_58
        int64_t* rax_13 = sub_141a07630(&var_58, nullptr, data_14399e5dc)
        sub_1419faae0(*rax_13 + 0x10, rdi_1, var_148)
        void* rcx_8 = *rax_13
        int32_t r8_4 = rax_13[2].d
        int64_t* rdx_6 = rax_13[1]
        int64_t* rax_14 = *(rcx_8 + 0x88)
        int64_t* var_120 = rax_14
        
        if (rax_14 != 0)
            rax_14[9].d += 1
        
        sub_141a16020(rcx_8, rdx_6, r8_4, 1)
        int64_t** var_a8 = &var_148
        void** var_a0_1 = &var_120
        void arg_20
        sub_1419f6880(rdi_1 + 0x240, &arg_20, &var_a8, nullptr)
        int64_t* rcx_10 = var_120
        
        if (rcx_10 != 0)
            rcx_10[9].d -= 1
            
            if (rcx_10[9].d == 1)
                sub_140a2f6e0(rcx_10)
    
    var_e8:8.d &= not.d(var_f8:0xc.d)
    sub_14059bdd0(&var_f8:8)
