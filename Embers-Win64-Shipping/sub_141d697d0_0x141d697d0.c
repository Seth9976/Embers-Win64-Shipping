// 函数: sub_141d697d0
// 地址: 0x141d697d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg2[2]
void* rsi = *(arg1 + 0x348)
uint32_t rcx_2
rcx_2.b = (arg3 u>> 0x20).d == 0

if ((rcx_2.b & sub_140b5b8a0(arg3.d, 0)) != 0)
    sub_140d19010(rsi, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

int32_t rdi = 0
uint64_t result = sub_140d2dfc0(r15, rsi, arg3, 0, 0, 0, 0, 0, 0)
int32_t arg_8 = 0x10100
int16_t arg_d = 0
char arg_f = 1
char arg_c = 0
sub_1423d5560(arg2, result, arg_8.q)

if (sub_141dc5a00(result) != 0)
    arg_8 = 0
    sub_141dbed20(result, &arg_8)

int32_t var_98 = 0
int32_t r10 = *(result + 0x1c8)
int32_t var_94 = 1
int32_t rcx_8 = 0
void* var_90 = result + 0x1b0
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int32_t var_80 = 0

if (r10 != 0)
    void* rax_2 = *(result + 0x1c0)
    void* r8_2 = result + 0x1b0
    
    if (rax_2 != 0)
        r8_2 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_5 = *r8_2
    int32_t var_84_2
    
    if (rdx_5 != 0)
    label_141d69916:
        int32_t rax_9 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_94_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        int32_t var_84_1 = rcx_8 - rax_10 + 0x1f
        
        if (rcx_8 - rax_10 + 0x1f s> r10)
            var_84_2 = r10
    else
        while (true)
            int64_t rdx_6 = sx.q(rdi)
            rcx_8 += 0x20
            rdi += 1
            int32_t var_80_1 = rcx_8
            var_98 = rdi
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r8_2 + (rdx_6 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_141d69916
        
        var_84_2 = r10

int32_t rdx_8 = *(result + 0x1c8)
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_8.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_4 = rdx_8 s>> 5
int32_t r9_1 = rdx_8 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
int32_t var_84_3 = rdx_8
int128_t var_78 = (result + 0x1a0).o
int96_t var_68 = var_48:8.12

if (rdx_8 != r10)
    void* rax_12 = *(result + 0x1c0)
    void* r10_1 = result + 0x1b0
    
    if (rax_12 != 0)
        r10_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_12 = *(r10_1 + (sx.q(r8_4) << 2)) & r12
    int32_t var_84_5
    
    if (rdx_12 != 0)
    label_141d699e2:
        int32_t rax_19 = neg.d(rdx_12) & rdx_12
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t r11_1
        
        if (rax_19 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        int32_t var_84_4 = r9_1 - r11_1 + 0x1f
        
        if (r9_1 - r11_1 + 0x1f s> r10)
            var_84_5 = r10
    else
        while (true)
            int64_t rcx_13 = sx.q(r8_4)
            r9_1 += 0x20
            r8_4 += 1
            
            if (rcx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_12 = *(r10_1 + (rcx_13 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_12 != 0)
                goto label_141d699e2
        
        var_84_5 = r10

while (true)
    int32_t var_5c
    int64_t rcx_15 = sx.q(var_5c)
    int64_t* rax_21 = var_78.q
    
    if (rcx_15.d == (var_88_2.q u>> 0x20).d && var_68.q == result + 0x1b0
            && rax_21 == result + 0x1a0)
        return result
    
    void* rdx_13 = *(*rax_21 + rcx_15 * 0x10)
    
    if (rdx_13 != 0)
        *(rdx_13 + 8) &= 0xffffffbf
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
