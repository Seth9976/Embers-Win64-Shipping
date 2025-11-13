// 函数: sub_140866730
// 地址: 0x140866730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = (data_14396ff98).d
int32_t var_74 = 1
void* var_70 = &data_14396ff80
int32_t rcx = 0
int32_t var_78 = 0
int32_t var_68 = 0xffffffff
int32_t r8 = 0
int64_t var_64 = 0

if (r10 != 0)
    void* rax_1 = data_14396ff90
    void* r11_1 = &data_14396ff80
    
    if (rax_1 != 0)
        r11_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r11_1
    
    if (rdx_3 != 0)
    label_1408667d5:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_64.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_64:4.d = r8
            var_78 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r11_1 + (rdx_4 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1408667d5
        
        var_64.d = r10

double zmm2[0x2] = var_68.o
double var_18[0x2] = zmm2
int128_t var_28 = var_78.o
int128_t result = (&data_14396ff70).o
var_64.d = r10
double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
int128_t result_1 = result
int128_t var_48 = var_28
int64_t var_38 = temp0_3.q

while (true)
    if (var_48:0xc.d == ((0xffffffff << (r10.b & 0x1f)).q u>> 0x20).d && var_48.q == &data_14396ff80
            && result_1.q == &data_14396ff70)
        return result
    
    var_78.q = 0
    int32_t var_70_1 = 0
    int32_t var_68_2 = 0xffffffff
    result = sub_140d3cc80(sub_14086a680(), &var_78, 1, 0x10, 0)
    int32_t r8_3 = var_70_1
    int32_t i = var_68_2 + 1
    int64_t rdx_6 = var_78.q
    int32_t i_1 = i
    
    if (i s< r8_3)
        while (*(rdx_6 + (sx.q(i) << 3)) == 0)
            int32_t i_2 = i + 1
            i_1 = i_2
            i = i_2
            
            if (i_2 s>= r8_3)
                break
    
    while (i s>= 0)
        if (i s>= r8_3)
            break
        
        void* rcx_6 = *(rdx_6 + (sx.q(i) << 3))
        *(rcx_6 + 0x4c8) |= 4
        r8_3 = var_70_1
        i = i_1 + 1
        rdx_6 = var_78.q
        i_1 = i
        
        if (i s< r8_3)
            while (*(rdx_6 + (sx.q(i) << 3)) == 0)
                int32_t i_3 = i + 1
                i_1 = i_3
                i = i_3
                
                if (i_3 s>= r8_3)
                    break
    
    if (rdx_6 != 0)
        result = sub_140a74f90(rdx_6)
    
    var_48:8.d &= not.d(result_1:0xc.d)
    sub_14059bdd0(&result_1:8)
