// 函数: sub_141db3c50
// 地址: 0x141db3c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t r14 = 0
int32_t var_34 = 0x18
void* var_40 = nullptr
int32_t var_38 = 0
int32_t r11 = *(arg1 + 0x1c8)
int32_t rcx = 0
void* r10 = nullptr
int32_t var_188 = 0
int32_t r8 = 0
int32_t var_184 = 1
int32_t* var_180 = arg1 + 0x1b0
int32_t var_178 = 0xffffffff
int64_t var_174 = 0

if (r11 != 0)
    int32_t* rax_2 = *(arg1 + 0x1c0)
    int32_t* r9_1 = arg1 + 0x1b0
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141db3d2e:
        int32_t rax_9 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_184_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_174.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r11)
            var_174.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_174:4.d = r8
            var_188 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9_1[rdx_3 + 1]
            var_178 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141db3d2e
        
        var_174.d = r11

int32_t rdx_4 = *(arg1 + 0x1c8)
double zmm2[0x2] = var_178.o
var_174.d = rdx_4
double var_110[0x2] = zmm2
int32_t r9_2 = 0xffffffff << (rdx_4 & 0x1f).b
int32_t var_178_1 = r9_2
int128_t var_120 = var_188.o
int32_t r9_4 = rdx_4 & 0xffffffe0
int32_t r8_3 = rdx_4 s>> 5
int64_t var_130 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int128_t var_150 = (arg1 + 0x1a0).o
uint128_t var_140 = var_120

if (rdx_4 != r11)
    int32_t* rax_14 = *(arg1 + 0x1c0)
    int32_t* rdi_1 = arg1 + 0x1b0
    
    if (rax_14 != 0)
        rdi_1 = rax_14
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = rdi_1[sx.q(r8_3)] & r9_2
    
    if (rdx_8 != 0)
    label_141db3e16:
        int32_t rax_20 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t r12_1
        
        if (rax_20 == 0)
            r12_1 = 0x20
        else
            r12_1 = 0x1f - temp0_4
        
        var_174.d = r9_4 - r12_1 + 0x1f
        
        if (r9_4 - r12_1 + 0x1f s> r11)
            var_174.d = r11
    else
        while (true)
            int64_t rcx_4 = sx.q(r8_3)
            r9_4 += 0x20
            r8_3 += 1
            
            if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = rdi_1[rcx_4 + 1]
            var_178_1 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141db3e16
        
        var_174.d = r11

void var_100

while (true)
    int64_t rdx_9 = sx.q(var_140:0xc.d)
    int32_t rax_13
    
    if (rdx_9.d != (var_178_1.q u>> 0x20).d || var_140.q != arg1 + 0x1b0)
        rax_13.b = 0
    else
        rax_13.b = 1
    
    int64_t* rcx_6 = var_150.q
    
    if (rax_13.b == 0 || rcx_6 != arg1 + 0x1a0)
        rax_13.b = 1
    else
        rax_13.b = 0
    
    if (rax_13.b == 0)
        break
    
    int64_t* rdi_2 = *(*rcx_6 + rdx_9 * 0x10)
    
    if (rdi_2 != 0)
        sub_141db8770(arg3, rdi_2)
        void* rax_23 = sub_142493230()
        void* rdx_11 = rdi_2[2]
        int64_t rax_24 = sx.q(*(rax_23 + 0x38))
        
        if (rax_24.d s<= *(rdx_11 + 0x38) && *(*(rdx_11 + 0x30) + (rax_24 << 3)) == rax_23 + 0x30)
            int64_t rsi_2 = rdi_2[0x3f]
            
            if (rsi_2 != 0)
                int64_t rdi_3 = sx.q(var_38)
                int32_t rax_26 = (rdi_3 + 1).d
                var_38 = rax_26
                
                if (rax_26 s> var_34)
                    sub_140775380(&var_100, rdi_3.d)
                
                void* rcx_11 = &var_100
                
                if (var_40 != 0)
                    rcx_11 = var_40
                
                *(rcx_11 + (rdi_3 << 3)) = rsi_2
    
    var_140:8.d &= not.d(var_150:0xc.d)
    sub_14059bdd0(&var_150:8)
    r10 = var_40

void* rdi_4 = &var_100

if (r10 != 0)
    rdi_4 = r10

int64_t rsi_3 = sx.q(var_38) << 3
void* result = rdi_4 + rsi_3
uint64_t rsi_4 = rsi_3 u>> 3

if (rdi_4 u> result)
    rsi_4 = 0

if (rsi_4 != 0)
    do
        var_188.o = *arg3
        var_178_1.q = arg3[1].q
        result = sub_141db3c50(*rdi_4, arg2, &var_188)
        r14 += 1
        rdi_4 += 8
    while (r14 != rsi_4)
    
    r10 = var_40

if (r10 != 0)
    result = sub_140a74f90(r10)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
