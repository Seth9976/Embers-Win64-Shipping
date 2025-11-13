// 函数: sub_140afd390
// 地址: 0x140afd390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = 0
void* rsi_1 = data_143ddb400 + 8
int32_t var_88 = 0
int32_t r10 = *(rsi_1 + 0x28)
void* r9 = rsi_1 + 0x10
int32_t var_84 = 1
int32_t r8 = 0
void* var_80 = r9
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_140afd438:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_74.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_74:4.d = r8
            var_88 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140afd438
        
        var_74.d = r10

int32_t rdx_5 = *(rsi_1 + 0x28)
double zmm2[0x2] = var_78.o
double var_28[0x2] = zmm2
int128_t var_38 = var_88.o
int32_t r15 = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r9_2 = rdx_5 & 0xffffffe0
int32_t r8_3 = rdx_5 s>> 5
int64_t var_48 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_78_1 = r15
var_74.d = rdx_5
int128_t var_68 = rsi_1.o
int128_t var_58 = var_38

if (rdx_5 != r10)
    void* rax_11 = *(rsi_1 + 0x20)
    void* r11_1 = rsi_1 + 0x10
    
    if (rax_11 != 0)
        r11_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_9 = *(r11_1 + (sx.q(r8_3) << 2)) & r15
    
    if (rdx_9 != 0)
    label_140afd503:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_74.d = r9_2 - rbx_1 + 0x1f
        
        if (r9_2 - rbx_1 + 0x1f s> r10)
            var_74.d = r10
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r11_1 + (rcx_5 << 2) + 4)
            var_78_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140afd503
        
        var_74.d = r10

while (true)
    int64_t rax_20 = sx.q(var_58:0xc.d)
    int64_t rdx_10 = var_68.q
    
    if (rax_20.d == (var_78_1.q u>> 0x20).d && var_58.q == rsi_1 + 0x10 && rdx_10 == rsi_1)
        return sub_140afcdf0(data_143de5640) __tailcall
    
    void* rbx_3 = rax_20 * 0x158 + *rdx_10
    
    if (*(rbx_3 + 0x18) - *(rbx_3 + 0x44) s> 0)
        int64_t arg_8 = *(rbx_3 + 0x64)
        int64_t* rax_24
        int512_t zmm2_1
        rax_24, zmm2_1 = sub_140b63b70(&arg_8, &var_88)
        int16_t* rdx_12
        
        if (rax_24[1].d == 0)
            rdx_12 = &data_142d40450
        else
            rdx_12 = *rax_24
        
        sub_140af9680(rbx_3 + 0x10, rdx_12, 1, nullptr, zmm2_1, 1)
        int64_t rcx_9 = var_88.q
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
