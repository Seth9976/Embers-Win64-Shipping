// 函数: sub_1405c2a20
// 地址: 0x1405c2a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int64_t rsi = 0
int32_t rdx_1 = *(arg1 + 0x70) - *(arg1 + 0x9c)
int32_t result_1 = 0
int64_t* var_c8 = nullptr
int32_t result_2 = 0
void* r12 = arg1
int32_t var_bc = 0
int64_t* r15 = nullptr

if (rdx_1 s> 0)
    sub_1405c5570(&var_c8, rdx_1)
    result_1 = result_2
    r15 = var_c8

int32_t var_b4 = 1
int32_t r11 = *(r12 + 0x90)
void* r9 = r12 + 0x78
void* var_b0 = r9
int32_t rcx_1 = 0
int32_t var_b8 = 0
int32_t r8 = 0
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9
    
    if (rdx_4 != 0)
    label_1405c2af8:
        int32_t rax_8 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        r8 -= rax_9
        var_a4.d = r8 + 0x1f
        
        if (r8 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_a4:4.d = r8
            var_b8 = rcx_1
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9 + (rdx_5 << 2) + 4)
            var_a8 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1405c2af8
        
        var_a4.d = r11

double zmm4[0x2] = var_a8.o
void* var_40 = r12 + 0x68
double var_60[0x2] = var_b8.o
int16_t var_80 = 0
int128_t var_58
var_a8.o = var_58
var_b8.o = (r12 + 0x68).o
double rcx_3 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_98[0x2] = zmm4

if ((rcx_3 u>> 0x20).d s< *(var_58.q + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* r14_1 = var_b8.q
        char rax_14
        
        if (arg3 != 0)
            rax_14 = sub_1405a6730(arg3, *r14_1 + 8 + (sx.q(i) << 5), r8)
        
        if (arg3 == 0 || rax_14 != 0)
            int64_t r12_1 = *r14_1
            int64_t rdi_2 = sx.q(i) << 5
            
            if ((*(rdi_2 + r12_1 + 0x10) & arg2) != 0)
                int64_t result_3 = sx.q(result_1)
                result_1 = (result_3 + 1).d
                
                if (result_1 s> var_bc)
                    sub_1405a4d70(&var_c8)
                    r15 = var_c8
                
                r15[result_3] = *(rdi_2 + r12_1)
        
        var_a4:4.d &= not.d(var_b0:4.d)
        r8 = sub_14059bdd0(&var_b0)
        i = i_1
    while (i s< *(var_a8.q + 0x18))
    
    rsi = 0
    
    if (var_80.b != 0 && var_80:1.b != 0)
        r8.b = 1
        sub_1405b6520(r12 + 0x68, *(r12 + 0x70) - *(r12 + 0x9c), r8.b)
    
    r12 = arg_8

int32_t* result = sx.q(result_1)
int64_t* rdi_3 = r15
void* rcx_9 = &r15[result]
uint64_t r14_5 = (rcx_9 - r15 + 7) u>> 3

if (r15 u> rcx_9)
    r14_5 = 0

if (r14_5 != 0)
    do
        void* rbx = *rdi_3
        result = sub_1405c3040(r12 + 0x68, rbx)
        
        if (result.d s> 0)
            int32_t var_78 = *(rbx + 0xc0)
            int32_t var_74_1 = *(rbx + 0xc4)
            uint32_t var_70_1 = zx.d(*(rbx + 0xdb))
            var_b8.q = &var_78
            void* arg_20
            var_b0 = &arg_20
            arg_20 = rbx
            result = sub_1405a8090(r12 + 0x18, &arg_8, &var_b8, nullptr)
        
        rdi_3 = &rdi_3[1]
        rsi += 1
    while (rsi != r14_5)
    
    r15 = var_c8

if (r15 == 0)
    return result

return sub_140a74f90(r15)
