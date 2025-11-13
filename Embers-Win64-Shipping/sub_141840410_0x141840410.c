// 函数: sub_141840410
// 地址: 0x141840410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg2 + 0x28)
void* r13 = arg2 + 0x10
int32_t var_a4 = 1
int32_t var_a8 = 0
void* var_a0 = r13
int32_t var_98 = 0xffffffff
void* rbx = arg1
int64_t var_94 = 0
int32_t r9 = 0
int32_t r10 = 0

if (r11 != 0)
    void* rax_1 = *(r13 + 0x10)
    void* r8 = r13
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r8
    
    if (rcx != 0)
    label_1418404bb:
        int32_t rax_8 = ((rcx - 1) & rcx) ^ rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_94.d = r10 - rax_9 + 0x1f
        
        if (r10 - rax_9 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r9)
            r10 += 0x20
            r9 += 1
            var_94:4.d = r10
            var_a8 = r9
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r8 + (rcx_1 << 2) + 4)
            var_98 = 0xffffffff
            
            if (rcx != 0)
                goto label_1418404bb
        
        var_94.d = r11

int32_t rdx_2 = *(arg2 + 0x28)
double zmm2[0x2] = var_98.o
var_94.d = rdx_2
double var_48[0x2] = zmm2
int128_t var_58 = var_a8.o
int32_t rsi = 0xffffffff << (rdx_2 & 0x1f).b
int32_t r8_2 = rdx_2 s>> 5
int32_t r9_2 = rdx_2 & 0xffffffe0
int64_t var_68 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_98_1 = rsi
int128_t var_88 = arg2.o
int128_t var_78 = var_58

if (rdx_2 != r11)
    void* rax_12 = *(r13 + 0x10)
    void* r10_2 = r13
    
    if (rax_12 != 0)
        r10_2 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_6 = *(r10_2 + (sx.q(r8_2) << 2)) & rsi
    
    if (rdx_6 != 0)
    label_141840596:
        int32_t rax_18 = ((rdx_6 - 1) & rdx_6) ^ rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rdi_1
        
        if (rax_18 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_94.d = r9_2 - rdi_1 + 0x1f
        
        if (r9_2 - rdi_1 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_2 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r10_2 + (rcx_5 << 2) + 4)
            var_98_1 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_141840596
        
        var_94.d = r11
    
    rbx = arg1

int32_t result

while (true)
    int64_t rcx_7 = sx.q(var_78:0xc.d)
    
    if (rcx_7.d != (var_98_1.q u>> 0x20).d || var_78.q != r13)
        result.b = 0
    else
        result.b = 1
    
    int64_t* rdx_7 = var_88.q
    
    if (result.b == 0 || rdx_7 != arg2)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    int32_t arg_10
    sub_140926e00(rbx + 0x200, &arg_10, *rdx_7 + rcx_7 * 0x18)
    int64_t rax_19 = sx.q(arg_10)
    
    if (rax_19.d != 0xffffffff)
        void* rax_21 = *(rbx + 0x200) + rax_19 * 0x28
        
        if (rax_21 != 0 && rax_21 != -0x10)
            int64_t** rdi_2 = *(rax_21 + 0x10)
            void* rsi_1 = &rdi_2[sx.q(*(rax_21 + 0x18))]
            
            if (rdi_2 != rsi_1)
                do
                    int64_t* rbx_2 = *rdi_2
                    sub_140598750(arg3, &var_a8)
                    sub_140596d10(var_a0, rbx_2)
                    *(var_a0 + 0x10) = 0xffffffff
                    int32_t rax_24 = *(var_a0 + 8)
                    int16_t* rdx_13
                    
                    if (rax_24 == 0)
                        rdx_13 = &data_142d40450
                    else
                        rdx_13 = *var_a0
                    
                    int32_t rcx_12 = rax_24 - 1
                    
                    if (rax_24 == 0)
                        rcx_12 = 0
                    
                    void arg_20
                    sub_14059a6d0(arg3, &arg_20, sub_1405969c0(rcx_12, rdx_13), var_a0, var_a8, 
                        nullptr)
                    rdi_2 = &rdi_2[1]
                while (rdi_2 != rsi_1)
                
                r13 = arg2 + 0x10
    
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
    rbx = arg1

return result
