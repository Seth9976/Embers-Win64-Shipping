// 函数: sub_141febb50
// 地址: 0x141febb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_88 = 0
int32_t r11 = *(arg1 + 0x80)
void* r10 = arg1 + 0x68
int32_t r9 = 0
int32_t var_84 = 1
void* var_80 = r10
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r11 != 0)
    void* rax_1 = *(r10 + 0x10)
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10
    
    if (rcx != 0)
    label_141febbea:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r11)
            var_74.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_74:4.d = r9
            var_88 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10 + (rcx_1 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rcx != 0)
                goto label_141febbea
        
        var_74.d = r11

double zmm3[0x2] = var_78.o
int64_t* var_20 = arg1 + 0x58
int16_t* const rdi = &data_142d40450
int16_t var_50 = 0
double zmm4[0x2] = var_88.o
uint64_t result = zmm4[0]
var_78.o = zmm4
var_88.o = (arg1 + 0x58).o
double rcx_3 = zmm3[0]
zmm3[0] = (_mm_unpackhi_pd(zmm3, zmm3[0])).q
double var_68[0x2] = zmm3

if ((rcx_3 u>> 0x20).d s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* r9_2 = data_143db18d0
        
        if (r9_2 == 0)
            sub_140a53c40()
            r9_2 = data_143db18d0
        
        int64_t* rsi_1 = var_88.q
        int64_t rax_12 = *rsi_1
        int64_t rbx_1 = sx.q(i) * 0x28
        int16_t* const rdx_3
        
        if (*(rbx_1 + rax_12 + 8) == 0)
            rdx_3 = &data_142d40450
        else
            rdx_3 = *(rbx_1 + rax_12)
        
        r8.b = 1
        int64_t* rax_14 = (*(*r9_2 + 0xb0))(r9_2, rdx_3, r8)
        
        if (rax_14 != 0)
            int64_t rcx_7 = *rsi_1
            int16_t* const rdx_4
            
            if (*(rbx_1 + rcx_7 + 0x18) == 0)
                rdx_4 = &data_142d40450
            else
                rdx_4 = *(rbx_1 + rcx_7 + 0x10)
            
            (*(*rax_14 + 0x80))(rax_14, rdx_4, 0x5000000)
        
        var_74:4.d &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        result = var_78.q
        i = i_1
    while (i s< *(result + 0x18))
    
    if (var_50.b != 0 && var_50:1.b != 0)
        r8.b = 1
        result = sub_1405e1160(arg1 + 0x58, *(arg1 + 0x60) - *(arg1 + 0x8c), r8.b)

void* rcx_11 = *(arg1 + 0xa8)

if (rcx_11 != 0)
    *(data_143f3d6b0 + 0x50) = rcx_11
    int64_t arg_8 = *(rcx_11 + 0x18)
    sub_140b63b70(&arg_8, &var_88)
    
    if (var_80.d != 0)
        rdi = var_88.q
    
    result = sub_140b47090(u"DeviceProfile", rdi)
    int64_t rcx_13 = var_88.q
    
    if (rcx_13 != 0)
        result = sub_140a74f90(rcx_13)
    
    *(arg1 + 0xa8) = 0

return result
